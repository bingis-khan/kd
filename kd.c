#include <stddef.h>
#include <dirent.h>
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
    ;
    ;
    size_t  growth_dash_factor2448;
    ;
    ;
    size_t  starting_dash_size2447;
    ;
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
    size_t  growth_dash_factor2448;
    ;
    ;
    size_t  starting_dash_size2447;
    ;
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
    size_t  growth_dash_factor2448;
    ;
    ;
    size_t  starting_dash_size2447;
    ;
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
    size_t  growth_dash_factor2448;
    ;
    ;
    size_t  starting_dash_size2447;
    ;
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
    size_t  growth_dash_factor2448;
    ;
    ;
    size_t  starting_dash_size2447;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env6 {
    ;
    ;
    ;
    size_t  growth_dash_factor2448;
    ;
    ;
    size_t  starting_dash_size2447;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env7 {
    ;
    ;
    ;
    size_t  growth_dash_factor2448;
    ;
    ;
    size_t  starting_dash_size2447;
    ;
    ;
    ;
    ;
    ;
    ;
};

enum Unit_10 {
    Unit_10_Unit,
};

enum CAllocator_12 {
    CAllocator_12_CAllocator,
};

struct Slice_13 {
    uint8_t *  f_ptr;
    size_t  f_count;
};

struct List_11 {
    enum CAllocator_12  f_al;
    struct Slice_13  f_elements;
    size_t  f_count;
};

struct envunion9 {
    enum Unit_10  (*fun) (  struct env1*  ,    struct List_11 *  );
    struct env1 env;
};

struct env8 {
    ;
    ;
    ;
    ;
    struct env1 envinst1;
    ;
};

struct StrView_18 {
    struct Slice_13  f_contents;
};

struct Slice_17 {
    struct StrView_18 *  f_ptr;
    size_t  f_count;
};

struct List_16 {
    enum CAllocator_12  f_al;
    struct Slice_17  f_elements;
    size_t  f_count;
};

struct envunion15 {
    enum Unit_10  (*fun) (  struct env2*  ,    struct List_16 *  );
    struct env2 env;
};

struct env14 {
    ;
    ;
    ;
    ;
    struct env2 envinst2;
    ;
};

enum DirType_25 {
    DirType_25_File,
    DirType_25_Directory,
};

struct Maybe_24 {
    enum {
        Maybe_24_None_t,
        Maybe_24_Just_t,
    } tag;
    union {
        struct {
            enum DirType_25  field0;
        } Maybe_24_Just_s;
    } stuff;
};

static struct Maybe_24 Maybe_24_Just (  enum DirType_25  field0 ) {
    return ( struct Maybe_24 ) { .tag = Maybe_24_Just_t, .stuff = { .Maybe_24_Just_s = { .field0 = field0 } } };
};

struct DirEntry_23 {
    struct StrView_18  f_name;
    struct Maybe_24  f_type;
};

struct Slice_22 {
    struct DirEntry_23 *  f_ptr;
    size_t  f_count;
};

struct List_21 {
    enum CAllocator_12  f_al;
    struct Slice_22  f_elements;
    size_t  f_count;
};

struct envunion20 {
    enum Unit_10  (*fun) (  struct env3*  ,    struct List_21 *  );
    struct env3 env;
};

struct env19 {
    ;
    ;
    ;
    ;
    struct env3 envinst3;
    ;
};

enum HighlightType_34 {
    HighlightType_34_Number,
    HighlightType_34_String,
    HighlightType_34_Comment,
    HighlightType_34_Ident1,
    HighlightType_34_Ident2,
    HighlightType_34_Ident3,
    HighlightType_34_Ident4,
    HighlightType_34_Keyword1,
    HighlightType_34_Keyword2,
    HighlightType_34_Special1,
    HighlightType_34_Special2,
    HighlightType_34_Special3,
    HighlightType_34_Invalid,
};

struct Highlight_33 {
    enum HighlightType_34  f_type;
    int32_t  f_from;
    int32_t  f_to;
};

struct Slice_32 {
    struct Highlight_33 *  f_ptr;
    size_t  f_count;
};

struct List_31 {
    enum CAllocator_12  f_al;
    struct Slice_32  f_elements;
    size_t  f_count;
};

struct Line_30 {
    struct List_11  f_line;
    bool  f_invalidated;
    struct List_31  f_highlights;
};

struct Slice_29 {
    struct Line_30 *  f_ptr;
    size_t  f_count;
};

struct List_28 {
    enum CAllocator_12  f_al;
    struct Slice_29  f_elements;
    size_t  f_count;
};

struct envunion27 {
    enum Unit_10  (*fun) (  struct env4*  ,    struct List_28 *  );
    struct env4 env;
};

struct env26 {
    ;
    ;
    ;
    ;
    struct env4 envinst4;
    ;
};

struct Pos_40 {
    int32_t  f_line;
    int32_t  f_bi;
};

struct Action_39 {
    struct Pos_40  f_from;
    struct StrView_18  f_fwd;
    struct Pos_40  f_to_dash_fwd;
    struct StrView_18  f_bwd;
    struct Pos_40  f_to_dash_bwd;
};

struct Slice_38 {
    struct Action_39 *  f_ptr;
    size_t  f_count;
};

struct List_37 {
    enum CAllocator_12  f_al;
    struct Slice_38  f_elements;
    size_t  f_count;
};

struct envunion36 {
    enum Unit_10  (*fun) (  struct env5*  ,    struct List_37 *  );
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

struct Maybe_47 {
    enum {
        Maybe_47_None_t,
        Maybe_47_Just_t,
    } tag;
    union {
        struct {
            struct Pos_40  field0;
        } Maybe_47_Just_s;
    } stuff;
};

static struct Maybe_47 Maybe_47_Just (  struct Pos_40  field0 ) {
    return ( struct Maybe_47 ) { .tag = Maybe_47_Just_t, .stuff = { .Maybe_47_Just_s = { .field0 = field0 } } };
};

struct Cursors_46 {
    struct Pos_40  f_cur;
    struct Maybe_47  f_sel;
};

struct Changeset_45 {
    struct List_37  f_parts;
    struct Cursors_46  f_before_dash_cursors;
};

struct Slice_44 {
    struct Changeset_45 *  f_ptr;
    size_t  f_count;
};

struct List_43 {
    enum CAllocator_12  f_al;
    struct Slice_44  f_elements;
    size_t  f_count;
};

struct envunion42 {
    enum Unit_10  (*fun) (  struct env6*  ,    struct List_43 *  );
    struct env6 env;
};

struct env41 {
    ;
    ;
    ;
    ;
    struct env6 envinst6;
    ;
};

struct envunion49 {
    enum Unit_10  (*fun) (  struct env7*  ,    struct List_31 *  );
    struct env7 env;
};

struct env48 {
    ;
    ;
    ;
    ;
    struct env7 envinst7;
    ;
};

struct envunion51 {
    enum Unit_10  (*fun) (  struct env26*  ,    struct List_28 *  ,    struct Line_30  );
    struct env26 env;
};

struct envunion52 {
    enum Unit_10  (*fun) (  struct env4*  ,    struct List_28 *  );
    struct env4 env;
};

struct env50 {
    ;
    ;
    ;
    ;
    ;
    struct env26 envinst26;
    ;
    struct env4 envinst4;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env53 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor2449;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct env54 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor2449;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct envunion56 {
    enum Unit_10  (*fun) (  struct env53*  ,    struct List_11 *  ,    size_t  ,    size_t  );
    struct env53 env;
};

struct env55 {
    ;
    ;
    struct env53 envinst53;
    ;
    ;
};

struct envunion58 {
    enum Unit_10  (*fun) (  struct env55*  ,    struct List_11 *  ,    size_t  );
    struct env55 env;
};

struct env57 {
    struct env55 envinst55;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion60 {
    enum Unit_10  (*fun) (  struct env8*  ,    struct List_11 *  ,    uint8_t  );
    struct env8 env;
};

struct env59 {
    ;
    ;
    ;
    ;
    ;
    struct env8 envinst8;
};

struct envunion62 {
    enum Unit_10  (*fun) (  struct env19*  ,    struct List_21 *  ,    struct DirEntry_23  );
    struct env19 env;
};

struct env61 {
    ;
    ;
    ;
    ;
    struct env19 envinst19;
    ;
};

struct envunion64 {
    enum Unit_10  (*fun) (  struct env26*  ,    struct List_28 *  ,    struct Line_30  );
    struct env26 env;
};

struct env63 {
    ;
    ;
    ;
    ;
    ;
    struct env26 envinst26;
};

struct DIRIter_68 {
    DIR *  f_og;
};

struct envunion72 {
    enum Unit_10  (*fun) (  struct env8*  ,    struct List_11 *  ,    uint8_t  );
    struct env8 env;
};

struct envunion73 {
    enum Unit_10  (*fun) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  );
    struct env59 env;
};

struct env71 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env8 envinst8;
    struct env59 envinst59;
    ;
    ;
    ;
    ;
};

struct envunion74 {
    struct StrView_18  (*fun) (  struct env71*  ,    const char*  ,    enum CAllocator_12  );
    struct env71 env;
};

struct env70 {
    ;
    ;
    ;
    ;
    ;
    struct env71 envinst71;
};

struct envunion75 {
    struct StrView_18  (*fun) (  struct env70*  ,    const char*  ,    enum CAllocator_12  );
    struct env70 env;
};

struct env69 {
    ;
    ;
    ;
    ;
    enum CAllocator_12  al3325;
    struct env70 envinst70;
    ;
};

struct Maybe_77 {
    enum {
        Maybe_77_None_t,
        Maybe_77_Just_t,
    } tag;
    union {
        struct {
            struct DirEntry_23  field0;
        } Maybe_77_Just_s;
    } stuff;
};

static struct Maybe_77 Maybe_77_Just (  struct DirEntry_23  field0 ) {
    return ( struct Maybe_77 ) { .tag = Maybe_77_Just_t, .stuff = { .Maybe_77_Just_s = { .field0 = field0 } } };
};

struct Array_79 {
    char _arr [256];
};

struct Dirent_78 {
    uint64_t  f_d_dash_ino;
    int64_t  f_d_dash_off;
    uint16_t  f_d_dash_reclen;
    uint8_t  f_d_dash_type;
    struct Array_79  f_d_dash_name;
};

struct envunion76 {
    struct Maybe_77  (*fun) (  struct env69*  ,    struct Dirent_78 *  );
    struct env69 env;
};

struct MapMaybe_67 {
    struct DIRIter_68  field0;
    struct envunion76  field1;
};

static struct MapMaybe_67 MapMaybe_67_MapMaybe (  struct DIRIter_68  field0 , struct envunion76  field1 ) {
    return ( struct MapMaybe_67 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion66 {
    enum Unit_10  (*fun) (  struct env61*  ,    struct List_21 *  ,    struct MapMaybe_67  );
    struct env61 env;
};

struct env65 {
    ;
    ;
    ;
    ;
    struct env61 envinst61;
    ;
};

struct Array_82 {
    struct Line_30 _arr [1];
};

struct envunion81 {
    enum Unit_10  (*fun) (  struct env63*  ,    struct List_28 *  ,    struct Array_82  );
    struct env63 env;
};

struct env80 {
    ;
    ;
    ;
    ;
    ;
    struct env63 envinst63;
};

struct envunion84 {
    enum Unit_10  (*fun) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  );
    struct env59 env;
};

struct env83 {
    ;
    ;
    ;
    ;
    ;
    struct env59 envinst59;
};

struct env85 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env59 envinst59;
    struct env8 envinst8;
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
    struct env8 envinst8;
    ;
    struct env59 envinst59;
    ;
    ;
    ;
};

struct envunion88 {
    struct StrView_18  (*fun) (  struct env86*  ,    struct StrView_18  ,    enum CAllocator_12  );
    struct env86 env;
};

struct env87 {
    ;
    ;
    ;
    ;
    ;
    struct env86 envinst86;
};

struct envunion90 {
    struct StrView_18  (*fun) (  struct env87*  ,    struct StrView_18  ,    enum CAllocator_12  );
    struct env87 env;
};

struct env89 {
    ;
    ;
    ;
    struct env87 envinst87;
    ;
    ;
    ;
};

static  int32_t   from_dash_integral92 (    size_t  x50 ) {
    return ( (int32_t ) (  x50 ) );
}

static  int32_t   lc_dash_ctype91 (  ) {
    return (  from_dash_integral92 ( 0 ) );
}

static  const char*   from_dash_string93 (    uint8_t *  ptr86 ,    size_t  dref87 ) {
    return ( ( (const char* ) (  ptr86 ) ) );
}

struct envunion95 {
    enum Unit_10  (*fun) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  );
    struct env59 env;
};

struct env94 {
    ;
    ;
    struct env59 envinst59;
};

struct StrBuilder_98 {
    struct List_11  f_chars;
};

struct envunion97 {
    enum Unit_10  (*fun) (  struct env94*  ,    struct StrBuilder_98 *  ,    struct Slice_13  );
    struct env94 env;
};

struct env96 {
    struct env94 envinst94;
    ;
    ;
    ;
};

struct Char_101 {
    uint8_t *  f_ptr;
    size_t  f_num_dash_bytes;
};

struct envunion100 {
    enum Unit_10  (*fun) (  struct env96*  ,    struct StrBuilder_98 *  ,    struct Char_101  );
    struct env96 env;
};

struct env99 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env96 envinst96;
};

struct env102 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env96 envinst96;
};

struct env103 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env96 envinst96;
};

struct env104 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env96 envinst96;
};

struct env105 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env96 envinst96;
};

struct StrConcat_108 {
    struct StrView_18  field0;
    struct Char_101  field1;
};

static struct StrConcat_108 StrConcat_108_StrConcat (  struct StrView_18  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_108 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion107 {
    enum Unit_10  (*fun) (  struct env105*  ,    struct StrBuilder_98 *  ,    struct StrConcat_108  );
    struct env105 env;
};

struct env106 {
    struct env105 envinst105;
    ;
    ;
    ;
    ;
    ;
};

struct Maybe_111 {
    enum {
        Maybe_111_None_t,
        Maybe_111_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_111_Just_s;
    } stuff;
};

static struct Maybe_111 Maybe_111_Just (  uint8_t  field0 ) {
    return ( struct Maybe_111 ) { .tag = Maybe_111_Just_t, .stuff = { .Maybe_111_Just_s = { .field0 = field0 } } };
};

struct envunion110 {
    struct Maybe_111  (*fun) (  struct env57*  ,    struct List_11 *  );
    struct env57 env;
};

struct env109 {
    struct env57 envinst57;
    ;
    ;
};

struct envunion113 {
    enum Unit_10  (*fun) (  struct env96*  ,    struct StrBuilder_98 *  ,    struct Char_101  );
    struct env96 env;
};

struct StrConcat_115 {
    struct StrView_18  field0;
    struct StrView_18  field1;
};

static struct StrConcat_115 StrConcat_115_StrConcat (  struct StrView_18  field0 ,  struct StrView_18  field1 ) {
    return ( struct StrConcat_115 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion114 {
    enum Unit_10  (*fun) (  struct env99*  ,    struct StrBuilder_98 *  ,    struct StrConcat_115  );
    struct env99 env;
};

struct env112 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env96 envinst96;
    ;
    ;
    ;
    struct env99 envinst99;
    ;
};

struct StrConcat_119 {
    struct StrView_18  field0;
    size_t  field1;
};

static struct StrConcat_119 StrConcat_119_StrConcat (  struct StrView_18  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_119 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_118 {
    struct StrConcat_119  field0;
    struct StrView_18  field1;
};

static struct StrConcat_118 StrConcat_118_StrConcat (  struct StrConcat_119  field0 ,  struct StrView_18  field1 ) {
    return ( struct StrConcat_118 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion117 {
    enum Unit_10  (*fun) (  struct env102*  ,    struct StrBuilder_98 *  ,    struct StrConcat_118  );
    struct env102 env;
};

struct env116 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env96 envinst96;
    ;
    ;
    ;
    struct env102 envinst102;
    ;
};

struct envunion121 {
    enum Unit_10  (*fun) (  struct env103*  ,    struct StrBuilder_98 *  ,    struct StrView_18  );
    struct env103 env;
};

struct env120 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env96 envinst96;
    ;
    ;
    struct env103 envinst103;
    ;
};

struct Maybe_125 {
    enum {
        Maybe_125_None_t,
        Maybe_125_Just_t,
    } tag;
    union {
        struct {
            struct StrView_18  field0;
        } Maybe_125_Just_s;
    } stuff;
};

static struct Maybe_125 Maybe_125_Just (  struct StrView_18  field0 ) {
    return ( struct Maybe_125 ) { .tag = Maybe_125_Just_t, .stuff = { .Maybe_125_Just_s = { .field0 = field0 } } };
};

struct StrConcat_124 {
    struct StrView_18  field0;
    struct Maybe_125  field1;
};

static struct StrConcat_124 StrConcat_124_StrConcat (  struct StrView_18  field0 ,  struct Maybe_125  field1 ) {
    return ( struct StrConcat_124 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion123 {
    enum Unit_10  (*fun) (  struct env104*  ,    struct StrBuilder_98 *  ,    struct StrConcat_124  );
    struct env104 env;
};

struct env122 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env96 envinst96;
    ;
    ;
    ;
    struct env104 envinst104;
    ;
};

struct envunion127 {
    const char*  (*fun) (  struct env89*  ,    struct StrView_18  ,    enum CAllocator_12  );
    struct env89 env;
};

struct env126 {
    ;
    ;
    ;
    ;
    struct env89 envinst89;
    ;
    ;
    ;
    ;
};

struct envunion129 {
    struct List_21  (*fun) (  struct env65*  ,    struct MapMaybe_67  ,    enum CAllocator_12  );
    struct env65 env;
};

struct env128 {
    ;
    ;
    ;
    ;
    struct env65 envinst65;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env70 envinst70;
    ;
};

struct Dir_132 {
    DIR *  f_handle;
};

struct envunion131 {
    struct Slice_22  (*fun) (  struct env128*  ,    struct Dir_132  ,    enum CAllocator_12  );
    struct env128 env;
};

struct Maybe_134 {
    enum {
        Maybe_134_None_t,
        Maybe_134_Just_t,
    } tag;
    union {
        struct {
            struct Dir_132  field0;
        } Maybe_134_Just_s;
    } stuff;
};

static struct Maybe_134 Maybe_134_Just (  struct Dir_132  field0 ) {
    return ( struct Maybe_134 ) { .tag = Maybe_134_Just_t, .stuff = { .Maybe_134_Just_s = { .field0 = field0 } } };
};

struct envunion133 {
    struct Maybe_134  (*fun) (  struct env126*  ,    struct StrView_18  ,    enum CAllocator_12  );
    struct env126 env;
};

struct env130 {
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
    struct env126 envinst126;
};

struct Array_137 {
    uint8_t _arr [32];
};

struct Termios_136 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_137  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

struct anon_135 {
    struct Termios_136  f_orig_dash_termios;
    bool  f_should_dash_resize;
};

static  struct Termios_136   undefined139 (  ) {
    struct Termios_136  temp140;
    return (  temp140 );
}

struct env141 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct anon_135 *  tui_dash_global_dash_state3703;
};

struct env142 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct anon_135 *  tui_dash_global_dash_state3703;
};

struct env143 {
    struct anon_135 *  tui_dash_global_dash_state3703;
    ;
    ;
    ;
};

enum ColorPalette_147 {
    ColorPalette_147_Palette8,
    ColorPalette_147_Palette16,
    ColorPalette_147_Palette256,
    ColorPalette_147_PaletteRGB,
};

struct Tui_146 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_147  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    bool  f_should_dash_redraw;
};

struct envunion145 {
    bool  (*fun) (  struct env143*  ,    struct Tui_146 *  );
    struct env143 env;
};

struct env144 {
    struct env143 envinst143;
    ;
};

struct envunion149 {
    bool  (*fun) (  struct env143*  ,    struct Tui_146 *  );
    struct env143 env;
};

struct env148 {
    ;
    struct env143 envinst143;
    ;
    ;
    ;
    ;
};

struct envunion151 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

struct env150 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct envunion153 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

struct env152 {
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
};

struct envunion155 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

struct env154 {
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
};

struct envunion157 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

struct env156 {
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
};

struct envunion159 {
    struct List_11  (*fun) (  struct env83*  ,    struct Slice_13  ,    enum CAllocator_12  );
    struct env83 env;
};

struct envunion160 {
    enum Unit_10  (*fun) (  struct env50*  ,    struct List_28 *  ,    size_t  ,    struct Line_30  );
    struct env50 env;
};

struct envunion161 {
    enum Unit_10  (*fun) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  );
    struct env59 env;
};

struct env158 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env83 envinst83;
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
    struct env59 envinst59;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

enum ChangesetInputType_166 {
    ChangesetInputType_166_NoChangeset,
    ChangesetInputType_166_InputChangeset,
    ChangesetInputType_166_CustomChangeset,
};

struct Actions_165 {
    struct List_43  f_list;
    size_t  f_cur;
    enum ChangesetInputType_166  f_input_dash_changeset;
};

enum Filetype_167 {
    Filetype_167_Text,
    Filetype_167_KC,
    Filetype_167_Markdown,
    Filetype_167_GCode,
    Filetype_167_Brainfuck,
};

struct TextBuf_164 {
    enum CAllocator_12  f_al;
    struct List_28  f_buf;
    struct Actions_165  f_actions;
    struct Maybe_125  f_filename;
    enum Filetype_167  f_filetype;
};

struct envunion163 {
    int32_t  (*fun) (  struct env158*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct StrView_18  );
    struct env158 env;
};

struct envunion168 {
    enum Unit_10  (*fun) (  struct env26*  ,    struct List_28 *  ,    struct Line_30  );
    struct env26 env;
};

struct envunion169 {
    enum Unit_10  (*fun) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  );
    struct env59 env;
};

struct envunion170 {
    enum Unit_10  (*fun) (  struct env53*  ,    struct List_11 *  ,    size_t  ,    size_t  );
    struct env53 env;
};

struct envunion171 {
    enum Unit_10  (*fun) (  struct env54*  ,    struct List_28 *  ,    size_t  ,    size_t  );
    struct env54 env;
};

struct env162 {
    ;
    struct env158 envinst158;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env26 envinst26;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env59 envinst59;
    ;
    struct env53 envinst53;
    struct env54 envinst54;
    ;
    ;
    ;
    ;
    ;
};

struct envunion173 {
    enum Unit_10  (*fun) (  struct env106*  ,    struct StrBuilder_98 *  ,    struct StrView_18  );
    struct env106 env;
};

struct env172 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env106 envinst106;
    ;
    ;
    ;
    ;
    ;
};

struct envunion175 {
    struct List_28  (*fun) (  struct env80*  ,    struct Array_82  ,    enum CAllocator_12  );
    struct env80 env;
};

struct env174 {
    ;
    struct env80 envinst80;
    ;
    ;
    ;
    ;
    ;
};

struct envunion177 {
    struct TextBuf_164  (*fun) (  struct env174*  ,    enum CAllocator_12  );
    struct env174 env;
};

struct envunion178 {
    enum Unit_10  (*fun) (  struct env162*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ,    struct StrView_18  );
    struct env162 env;
};

struct env176 {
    ;
    struct env174 envinst174;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env162 envinst162;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion180 {
    enum Unit_10  (*fun) (  struct env162*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ,    struct StrView_18  );
    struct env162 env;
};

struct env179 {
    ;
    ;
    ;
    ;
    struct env162 envinst162;
};

struct envunion182 {
    enum Unit_10  (*fun) (  struct env162*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ,    struct StrView_18  );
    struct env162 env;
};

struct env181 {
    ;
    ;
    ;
    ;
    struct env162 envinst162;
};

struct envunion184 {
    struct Pos_40  (*fun) (  struct env179*  ,    struct TextBuf_164 *  ,    struct Action_39  );
    struct env179 env;
};

struct env183 {
    ;
    ;
    ;
    struct env179 envinst179;
    ;
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

struct envunion186 {
    struct Pos_40  (*fun) (  struct env181*  ,    struct TextBuf_164 *  ,    struct Action_39  );
    struct env181 env;
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
    struct env181 envinst181;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion188 {
    enum Unit_10  (*fun) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  );
    struct env59 env;
};

struct env187 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env59 envinst59;
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

struct envunion190 {
    struct StrView_18  (*fun) (  struct env187*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  );
    struct env187 env;
};

struct envunion191 {
    enum Unit_10  (*fun) (  struct env35*  ,    struct List_37 *  ,    struct Action_39  );
    struct env35 env;
};

struct envunion192 {
    enum Unit_10  (*fun) (  struct env41*  ,    struct List_43 *  ,    struct Changeset_45  );
    struct env41 env;
};

struct envunion193 {
    struct Pos_40  (*fun) (  struct env181*  ,    struct TextBuf_164 *  ,    struct Action_39  );
    struct env181 env;
};

struct env189 {
    ;
    ;
    ;
    ;
    struct env187 envinst187;
    ;
    ;
    struct env35 envinst35;
    struct env41 envinst41;
    ;
    ;
    ;
    ;
    struct env181 envinst181;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct envunion195 {
    enum Unit_10  (*fun) (  struct env41*  ,    struct List_43 *  ,    struct Changeset_45  );
    struct env41 env;
};

struct env194 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env41 envinst41;
    ;
    ;
    ;
};

struct envunion197 {
    enum Unit_10  (*fun) (  struct env156*  ,    struct List_31 *  ,    struct StrView_18  );
    struct env156 env;
};

struct envunion198 {
    enum Unit_10  (*fun) (  struct env152*  ,    struct List_31 *  ,    struct StrView_18  );
    struct env152 env;
};

struct envunion199 {
    enum Unit_10  (*fun) (  struct env154*  ,    struct List_31 *  ,    struct StrView_18  );
    struct env154 env;
};

struct envunion200 {
    enum Unit_10  (*fun) (  struct env150*  ,    struct List_31 *  ,    struct StrView_18  );
    struct env150 env;
};

struct env196 {
    ;
    ;
    struct env156 envinst156;
    struct env152 envinst152;
    struct env154 envinst154;
    ;
    ;
    struct env150 envinst150;
    ;
    ;
};

struct envunion202 {
    enum Unit_10  (*fun) (  struct env196*  ,    struct TextBuf_164 *  ,    struct Line_30 *  );
    struct env196 env;
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
    struct env196 envinst196;
    ;
    ;
};

enum Color8_204 {
    Color8_204_Black8,
    Color8_204_Red8,
    Color8_204_Green8,
    Color8_204_Yellow8,
    Color8_204_Blue8,
    Color8_204_Magenta8,
    Color8_204_Cyan8,
    Color8_204_White8,
};

enum Color16_205 {
    Color16_205_Black16,
    Color16_205_Red16,
    Color16_205_Green16,
    Color16_205_Yellow16,
    Color16_205_Blue16,
    Color16_205_Magenta16,
    Color16_205_Cyan16,
    Color16_205_White16,
    Color16_205_BrightBlack16,
    Color16_205_BrightRed16,
    Color16_205_BrightGreen16,
    Color16_205_BrightYellow16,
    Color16_205_BrightBlue16,
    Color16_205_BrightMagenta16,
    Color16_205_BrightCyan16,
    Color16_205_BrightWhite16,
};

struct RGB_206 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_203 {
    enum {
        Color_203_ColorDefault_t,
        Color_203_Color8_t,
        Color_203_Color16_t,
        Color_203_Color256_t,
        Color_203_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_204  field0;
        } Color_203_Color8_s;
        struct {
            enum Color16_205  field0;
        } Color_203_Color16_s;
        struct {
            uint8_t  field0;
        } Color_203_Color256_s;
        struct {
            struct RGB_206  field0;
        } Color_203_ColorRGB_s;
    } stuff;
};

static struct Color_203 Color_203_Color8 (  enum Color8_204  field0 ) {
    return ( struct Color_203 ) { .tag = Color_203_Color8_t, .stuff = { .Color_203_Color8_s = { .field0 = field0 } } };
};

static struct Color_203 Color_203_Color16 (  enum Color16_205  field0 ) {
    return ( struct Color_203 ) { .tag = Color_203_Color16_t, .stuff = { .Color_203_Color16_s = { .field0 = field0 } } };
};

static struct Color_203 Color_203_Color256 (  uint8_t  field0 ) {
    return ( struct Color_203 ) { .tag = Color_203_Color256_t, .stuff = { .Color_203_Color256_s = { .field0 = field0 } } };
};

static struct Color_203 Color_203_ColorRGB (  struct RGB_206  field0 ) {
    return ( struct Color_203 ) { .tag = Color_203_ColorRGB_t, .stuff = { .Color_203_ColorRGB_s = { .field0 = field0 } } };
};

static  uint8_t   cast210 (    uint32_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  uint8_t   u32_dash_u8209 (    uint32_t  x735 ) {
    return ( (  cast210 ) ( (  x735 ) ) );
}

static  uint32_t   op_dash_div212 (    uint32_t  l264 ,    uint32_t  r266 ) {
    return ( (  l264 ) / (  r266 ) );
}

struct Range_215 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_215 Range_215_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_215 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env216 {
    uint32_t  base1386;
    ;
};

struct envunion217 {
    uint32_t  (*fun) (  struct env216*  ,    int32_t  ,    uint32_t  );
    struct env216 env;
};

struct RangeIter_218 {
    struct Range_215  field0;
    int32_t  field1;
};

static struct RangeIter_218 RangeIter_218_RangeIter (  struct Range_215  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_218 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_218   into_dash_iter219 (    struct Range_215  dref891 ) {
    return ( ( RangeIter_218_RangeIter ) ( ( ( Range_215_Range ) ( ( dref891 .field0 ) ,  ( dref891 .field1 ) ) ) ,  ( dref891 .field0 ) ) );
}

struct Maybe_220 {
    enum {
        Maybe_220_None_t,
        Maybe_220_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_220_Just_s;
    } stuff;
};

static struct Maybe_220 Maybe_220_Just (  int32_t  field0 ) {
    return ( struct Maybe_220 ) { .tag = Maybe_220_Just_t, .stuff = { .Maybe_220_Just_s = { .field0 = field0 } } };
};

enum Ordering_223 {
    Ordering_223_LT,
    Ordering_223_EQ,
    Ordering_223_GT,
};

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_223   cmp222 (    int32_t  l168 ,    int32_t  r170 ) {
    return ( builtin_int32_tcmp( (  l168 ) , (  r170 ) ) );
}

static  int32_t   op_dash_add224 (    int32_t  l226 ,    int32_t  r228 ) {
    return ( (  l226 ) + (  r228 ) );
}

static  struct Maybe_220   next221 (    struct RangeIter_218 *  self899 ) {
    struct RangeIter_218  dref900 = ( * (  self899 ) );
    if ( true ) {
        if ( (  cmp222 ( ( dref900 .field1 ) , ( dref900 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_220) { .tag = Maybe_220_None_t } );
        }
        struct Maybe_220  x904 = ( ( Maybe_220_Just ) ( ( dref900 .field1 ) ) );
        (*  self899 ) = ( ( RangeIter_218_RangeIter ) ( ( ( Range_215_Range ) ( ( dref900 .field0 .field0 ) ,  ( dref900 .field0 .field1 ) ) ) ,  (  op_dash_add224 ( ( dref900 .field1 ) , (  from_dash_integral92 ( 1 ) ) ) ) ) );
        return (  x904 );
    }
}

static  uint32_t   reduce214 (    struct Range_215  iterable1118 ,    uint32_t  base1120 ,   struct envunion217  fun1122 ) {
    uint32_t  x1123 = (  base1120 );
    struct RangeIter_218  it1124 = ( (  into_dash_iter219 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_220  dref1125 = ( (  next221 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_220_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_220_Just_t ) {
                struct envunion217  temp225 = (  fun1122 );
                x1123 = ( temp225.fun ( &temp225.env ,  ( dref1125 .stuff .Maybe_220_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp226 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp226);
    abort ( );
    ( Unit_10_Unit );
    uint32_t  temp227;
    return (  temp227 );
}

static  struct Range_215   to228 (    int32_t  from882 ,    int32_t  to884 ) {
    return ( ( Range_215_Range ) ( (  from882 ) ,  (  to884 ) ) );
}

static  int32_t   op_dash_sub229 (    int32_t  l231 ,    int32_t  r233 ) {
    return ( (  l231 ) - (  r233 ) );
}

static  uint32_t   from_dash_integral230 (    size_t  x53 ) {
    return ( (uint32_t ) (  x53 ) );
}

static  uint32_t   op_dash_mul232 (    uint32_t  l259 ,    uint32_t  r261 ) {
    return ( (  l259 ) * (  r261 ) );
}

static  uint32_t   lam231 (   struct env216* env ,    int32_t  item1390 ,    uint32_t  x1392 ) {
    return (  op_dash_mul232 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  uint32_t   pow213 (    uint32_t  base1386 ,    int32_t  p1388 ) {
    struct env216 envinst216 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce214 ) ( ( (  to228 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  op_dash_sub229 ( (  p1388 ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral230 ( 1 ) ) ,  ( (struct envunion217){ .fun = (  uint32_t  (*) (  struct env216*  ,    int32_t  ,    uint32_t  ) )lam231 , .env =  envinst216 } ) ) );
}

static  uint32_t   rshift211 (    uint32_t  x1539 ,    int32_t  am1541 ) {
    return (  op_dash_div212 ( (  x1539 ) , ( (  pow213 ) ( (  from_dash_integral230 ( 2 ) ) ,  (  am1541 ) ) ) ) );
}

static  uint32_t   op_dash_sub234 (    uint32_t  l254 ,    uint32_t  r256 ) {
    return ( (  l254 ) - (  r256 ) );
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_223   cmp235 (    uint32_t  l173 ,    uint32_t  r175 ) {
    return ( builtin_uint32_tcmp( (  l173 ) , (  r175 ) ) );
}

static  uint32_t   op_dash_add236 (    uint32_t  l249 ,    uint32_t  r251 ) {
    return ( (  l249 ) + (  r251 ) );
}

static  uint32_t   mod233 (    uint32_t  l1544 ,    uint32_t  d1546 ) {
    uint32_t  r1547 = (  op_dash_div212 ( (  l1544 ) , (  d1546 ) ) );
    uint32_t  m1548 = (  op_dash_sub234 ( (  l1544 ) , (  op_dash_mul232 ( (  r1547 ) , (  d1546 ) ) ) ) );
    if ( (  cmp235 ( (  m1548 ) , (  from_dash_integral230 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add236 ( (  d1546 ) , (  m1548 ) ) );
    } else {
        return (  m1548 );
    }
}

static  struct RGB_206   rgb_dash_from_dash_hex208 (    uint32_t  n2851 ) {
    return ( (struct RGB_206) { .f_r = ( (  u32_dash_u8209 ) ( ( (  rshift211 ) ( (  n2851 ) ,  (  from_dash_integral92 ( 16 ) ) ) ) ) ) , .f_g = ( (  u32_dash_u8209 ) ( ( (  mod233 ) ( ( (  rshift211 ) ( (  n2851 ) ,  (  from_dash_integral92 ( 8 ) ) ) ) ,  (  from_dash_integral230 ( 256 ) ) ) ) ) ) , .f_b = ( (  u32_dash_u8209 ) ( ( (  mod233 ) ( (  n2851 ) ,  (  from_dash_integral230 ( 256 ) ) ) ) ) ) } );
}

static  struct Color_203   rgb207 (    uint32_t  x4409 ) {
    return ( ( Color_203_ColorRGB ) ( ( (  rgb_dash_from_dash_hex208 ) ( (  x4409 ) ) ) ) );
}

struct Colors_238 {
    struct Color_203  f_fg;
    struct Color_203  f_bg;
};

struct Maybe_241 {
    enum {
        Maybe_241_None_t,
        Maybe_241_Just_t,
    } tag;
    union {
        struct {
            struct Color_203  field0;
        } Maybe_241_Just_s;
    } stuff;
};

static struct Maybe_241 Maybe_241_Just (  struct Color_203  field0 ) {
    return ( struct Maybe_241 ) { .tag = Maybe_241_Just_t, .stuff = { .Maybe_241_Just_s = { .field0 = field0 } } };
};

struct HighlightColors_240 {
    enum HighlightType_34  f_type;
    struct Color_203  f_fg;
    struct Maybe_241  f_bg;
};

struct Slice_239 {
    struct HighlightColors_240 *  f_ptr;
    size_t  f_count;
};

struct Theme_237 {
    struct Colors_238  f_default;
    struct Colors_238  f_cursor;
    struct Colors_238  f_selection;
    struct Colors_238  f_line_dash_num;
    struct Colors_238  f_line_dash_num_dash_hl;
    struct Colors_238  f_overlay;
    struct Slice_239  f_highlights;
};

struct Array_244 {
    struct HighlightColors_240 _arr [13];
};

static  struct HighlightColors_240 *   cast245 (    struct Array_244 *  x395 ) {
    return ( (struct HighlightColors_240 * ) (  x395 ) );
}

static  struct Slice_239   as_dash_slice243 (    struct Array_244 *  arr2052 ) {
    return ( (struct Slice_239) { .f_ptr = ( (  cast245 ) ( (  arr2052 ) ) ) , .f_count = ( (size_t ) ( 13 ) ) } );
}

static  struct Array_244   from_dash_listlike247 (    struct Array_244 *  self369 ) {
    return ( * (  self369 ) );
}

static  struct HighlightColors_240   hlt249 (    enum HighlightType_34  type4403 ,    struct Color_203  fg4405 ) {
    return ( (struct HighlightColors_240) { .f_type = (  type4403 ) , .f_fg = (  fg4405 ) , .f_bg = ( (struct Maybe_241) { .tag = Maybe_241_None_t } ) } );
}

static  void *   cast_dash_ptr258 (    struct HighlightColors_240 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of259 (    struct HighlightColors_240 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct HighlightColors_240 *   zeroed256 (  ) {
    struct HighlightColors_240 *  temp257;
    struct HighlightColors_240 *  x642 = (  temp257 );
    ( ( memset ) ( ( (  cast_dash_ptr258 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of259 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  struct HighlightColors_240 *   null_dash_ptr255 (  ) {
    return ( (  zeroed256 ) ( ) );
}

static  struct Slice_239   empty254 (  ) {
    return ( (struct Slice_239) { .f_ptr = ( (  null_dash_ptr255 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct Tuple2_262 {
    struct StrView_18  field0;
    struct Theme_237 *  field1;
};

static struct Tuple2_262 Tuple2_262_Tuple2 (  struct StrView_18  field0 ,  struct Theme_237 *  field1 ) {
    return ( struct Tuple2_262 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Slice_261 {
    struct Tuple2_262 *  f_ptr;
    size_t  f_count;
};

struct Array_264 {
    struct Tuple2_262 _arr [5];
};

static  struct Tuple2_262 *   cast265 (    struct Array_264 *  x395 ) {
    return ( (struct Tuple2_262 * ) (  x395 ) );
}

static  struct Slice_261   as_dash_slice263 (    struct Array_264 *  arr2052 ) {
    return ( (struct Slice_261) { .f_ptr = ( (  cast265 ) ( (  arr2052 ) ) ) , .f_count = ( (size_t ) ( 5 ) ) } );
}

static  struct Array_264   from_dash_listlike267 (    struct Array_264 *  self369 ) {
    return ( * (  self369 ) );
}

static  struct StrView_18   from_dash_string269 (    uint8_t *  ptr90 ,    size_t  count92 ) {
    return ( (struct StrView_18) { .f_contents = ( (struct Slice_13) { .f_ptr = (  ptr90 ) , .f_count = (  count92 ) } ) } );
}

struct env270 {
    ;
    ;
    struct Slice_261  all_dash_themes4443;
    ;
    ;
    ;
    ;
};

struct Maybe_273 {
    enum {
        Maybe_273_None_t,
        Maybe_273_Just_t,
    } tag;
    union {
        struct {
            enum HighlightType_34  field0;
        } Maybe_273_Just_s;
    } stuff;
};

static struct Maybe_273 Maybe_273_Just (  enum HighlightType_34  field0 ) {
    return ( struct Maybe_273 ) { .tag = Maybe_273_Just_t, .stuff = { .Maybe_273_Just_s = { .field0 = field0 } } };
};

struct envunion272 {
    struct Maybe_273  (*fun) (  struct env201*  ,    struct TextBuf_164 *  ,    struct Pos_40  );
    struct env201 env;
};

struct env271 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
};

struct Maybe_276 {
    enum {
        Maybe_276_None_t,
        Maybe_276_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_46  field0;
        } Maybe_276_Just_s;
    } stuff;
};

static struct Maybe_276 Maybe_276_Just (  struct Cursors_46  field0 ) {
    return ( struct Maybe_276 ) { .tag = Maybe_276_Just_t, .stuff = { .Maybe_276_Just_s = { .field0 = field0 } } };
};

struct envunion275 {
    struct Maybe_276  (*fun) (  struct env189*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ,    struct StrView_18  ,    struct Maybe_276  );
    struct env189 env;
};

struct env274 {
    ;
    ;
    struct env189 envinst189;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion278 {
    struct Maybe_276  (*fun) (  struct env189*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ,    struct StrView_18  ,    struct Maybe_276  );
    struct env189 env;
};

struct env277 {
    ;
    ;
    ;
    struct env189 envinst189;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion280 {
    struct Maybe_276  (*fun) (  struct env183*  ,    struct TextBuf_164 *  );
    struct env183 env;
};

struct env279 {
    ;
    struct env183 envinst183;
    ;
    ;
    ;
    ;
    ;
};

struct envunion282 {
    struct Maybe_276  (*fun) (  struct env185*  ,    struct TextBuf_164 *  );
    struct env185 env;
};

struct env281 {
    ;
    ;
    ;
    ;
    ;
    struct env185 envinst185;
    ;
};

struct envunion284 {
    struct Maybe_276  (*fun) (  struct env189*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ,    struct StrView_18  ,    struct Maybe_276  );
    struct env189 env;
};

struct env283 {
    ;
    ;
    ;
    ;
    struct env189 envinst189;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion286 {
    struct Maybe_276  (*fun) (  struct env189*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ,    struct StrView_18  ,    struct Maybe_276  );
    struct env189 env;
};

struct env285 {
    ;
    ;
    ;
    ;
    struct env189 envinst189;
    ;
    ;
    ;
    ;
    ;
    ;
};

enum Mode_290 {
    Mode_290_Normal,
    Mode_290_Insert,
    Mode_290_Select,
};

struct ScreenCursorOffset_291 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_289 {
    struct TextBuf_164 *  f_buf;
    struct Pos_40  f_cursor;
    int32_t  f_vi;
    struct Maybe_47  f_sel;
    enum Mode_290  f_mode;
    struct ScreenCursorOffset_291  f_sc_dash_off;
};

struct envunion288 {
    enum Unit_10  (*fun) (  struct env285*  ,    struct Pane_289 *  ,    int32_t  );
    struct env285 env;
};

struct envunion292 {
    enum Unit_10  (*fun) (  struct env194*  ,    struct TextBuf_164 *  ,    struct Cursors_46  );
    struct env194 env;
};

struct env287 {
    ;
    ;
    struct env285 envinst285;
    ;
    struct env194 envinst194;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct envunion294 {
    enum Unit_10  (*fun) (  struct env194*  ,    struct TextBuf_164 *  ,    struct Cursors_46  );
    struct env194 env;
};

struct envunion295 {
    struct Maybe_276  (*fun) (  struct env189*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ,    struct StrView_18  ,    struct Maybe_276  );
    struct env189 env;
};

struct env293 {
    ;
    ;
    ;
    ;
    struct env194 envinst194;
    struct env189 envinst189;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct envunion297 {
    enum Unit_10  (*fun) (  struct env285*  ,    struct Pane_289 *  ,    int32_t  );
    struct env285 env;
};

struct env296 {
    struct env285 envinst285;
    ;
    ;
    ;
    ;
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

struct envunion299 {
    enum Unit_10  (*fun) (  struct env274*  ,    struct Pane_289 *  ,    struct StrView_18  );
    struct env274 env;
};

struct Tuple2_301 {
    struct Pos_40  field0;
    struct Pos_40  field1;
};

static struct Tuple2_301 Tuple2_301_Tuple2 (  struct Pos_40  field0 ,  struct Pos_40  field1 ) {
    return ( struct Tuple2_301 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion300 {
    enum Unit_10  (*fun) (  struct env283*  ,    struct Pane_289 *  ,    struct Tuple2_301  ,    struct StrView_18  );
    struct env283 env;
};

struct envunion302 {
    enum Unit_10  (*fun) (  struct env194*  ,    struct TextBuf_164 *  ,    struct Cursors_46  );
    struct env194 env;
};

struct env298 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env274 envinst274;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env283 envinst283;
    struct env194 envinst194;
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

struct Maybe_305 {
    enum {
        Maybe_305_None_t,
        Maybe_305_Just_t,
    } tag;
    union {
        struct {
            struct Slice_22  field0;
        } Maybe_305_Just_s;
    } stuff;
};

static struct Maybe_305 Maybe_305_Just (  struct Slice_22  field0 ) {
    return ( struct Maybe_305 ) { .tag = Maybe_305_Just_t, .stuff = { .Maybe_305_Just_s = { .field0 = field0 } } };
};

struct envunion304 {
    struct Maybe_305  (*fun) (  struct env130*  ,    struct StrView_18  ,    enum CAllocator_12  );
    struct env130 env;
};

struct envunion306 {
    enum Unit_10  (*fun) (  struct env14*  ,    struct List_16 *  ,    struct StrView_18  );
    struct env14 env;
};

struct StrConcat_308 {
    struct StrConcat_108  field0;
    struct StrView_18  field1;
};

static struct StrConcat_308 StrConcat_308_StrConcat (  struct StrConcat_108  field0 ,  struct StrView_18  field1 ) {
    return ( struct StrConcat_308 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion307 {
    struct StrView_18  (*fun) (  struct env85*  ,    struct StrConcat_308  ,    enum CAllocator_12  );
    struct env85 env;
};

struct env303 {
    ;
    ;
    struct env130 envinst130;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env14 envinst14;
    ;
    ;
    ;
    ;
    ;
    struct env85 envinst85;
    ;
};

struct envunion310 {
    struct Slice_17  (*fun) (  struct env303*  ,    struct StrView_18  ,    enum CAllocator_12  );
    struct env303 env;
};

struct env309 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env303 envinst303;
    ;
};

struct envunion312 {
    enum Unit_10  (*fun) (  struct env96*  ,    struct StrBuilder_98 *  ,    struct Char_101  );
    struct env96 env;
};

struct envunion313 {
    struct Maybe_111  (*fun) (  struct env109*  ,    struct StrBuilder_98 *  );
    struct env109 env;
};

struct env311 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env96 envinst96;
    ;
    ;
    ;
    struct env109 envinst109;
    ;
    ;
    ;
    ;
};

struct envunion315 {
    struct StrView_18  (*fun) (  struct env187*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  );
    struct env187 env;
};

struct env314 {
    ;
    ;
    ;
    struct env187 envinst187;
    ;
    ;
    ;
};

struct envunion317 {
    struct StrView_18  (*fun) (  struct env112*  ,    struct StrConcat_115  ,    enum CAllocator_12  );
    struct env112 env;
};

struct env316 {
    ;
    ;
    ;
    ;
    ;
    struct env112 envinst112;
    ;
};

struct envunion319 {
    struct StrView_18  (*fun) (  struct env116*  ,    struct StrConcat_118  ,    enum CAllocator_12  );
    struct env116 env;
};

struct env318 {
    ;
    ;
    ;
    ;
    ;
    struct env116 envinst116;
    ;
};

struct envunion321 {
    struct StrView_18  (*fun) (  struct env120*  ,    struct StrView_18  ,    enum CAllocator_12  );
    struct env120 env;
};

struct env320 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env120 envinst120;
};

struct envunion323 {
    struct StrView_18  (*fun) (  struct env122*  ,    struct StrConcat_124  ,    enum CAllocator_12  );
    struct env122 env;
};

struct env322 {
    ;
    ;
    ;
    ;
    ;
    struct env122 envinst122;
    ;
};

struct Maybe_326 {
    enum {
        Maybe_326_None_t,
        Maybe_326_Just_t,
    } tag;
    union {
        struct {
            struct Theme_237 *  field0;
        } Maybe_326_Just_s;
    } stuff;
};

static struct Maybe_326 Maybe_326_Just (  struct Theme_237 *  field0 ) {
    return ( struct Maybe_326 ) { .tag = Maybe_326_Just_t, .stuff = { .Maybe_326_Just_s = { .field0 = field0 } } };
};

struct envunion325 {
    struct Maybe_326  (*fun) (  struct env270*  ,    struct StrView_18  );
    struct env270 env;
};

struct env324 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env270 envinst270;
    ;
    ;
    ;
    ;
};

struct Tuple2_338 {
    struct StrView_18  field0;
    size_t  field1;
};

static struct Tuple2_338 Tuple2_338_Tuple2 (  struct StrView_18  field0 ,  size_t  field1 ) {
    return ( struct Tuple2_338 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Slice_337 {
    struct Tuple2_338 *  f_ptr;
    size_t  f_count;
};

struct FilePicker_336 {
    struct Slice_17  f_total_dash_files;
    struct Slice_337  f_rendered_dash_files;
    size_t  f_sel;
    struct StrBuilder_98  f_query;
    size_t  f_sel_dash_size;
};

struct envunion335 {
    struct FilePicker_336  (*fun) (  struct env309*  ,    struct StrView_18  ,    enum CAllocator_12  );
    struct env309 env;
};

struct env334 {
    ;
    struct env309 envinst309;
};

struct Editor_329;

struct envunion339 {
    enum Unit_10  (*fun) (  struct env334*  ,    struct Editor_329 *  );
    struct env334 env;
};

struct MenuItem_333 {
    char  f_key;
    struct StrView_18  f_description;
    struct envunion339  f_action;
};

struct Slice_332 {
    struct MenuItem_333 *  f_ptr;
    size_t  f_count;
};

struct Menu_331 {
    struct StrView_18  f_name;
    struct Slice_332  f_items;
};

struct EditorMode_330 {
    enum {
        EditorMode_330_Normal_t,
        EditorMode_330_Cmd_t,
        EditorMode_330_Search_t,
        EditorMode_330_Menu_t,
        EditorMode_330_Picker_t,
    } tag;
    union {
        struct {
            struct Pos_40  field0;
            struct StrBuilder_98  field1;
        } EditorMode_330_Cmd_s;
        struct {
            struct Pos_40  field0;
            struct StrBuilder_98  field1;
        } EditorMode_330_Search_s;
        struct {
            struct Menu_331  field0;
        } EditorMode_330_Menu_s;
        struct {
            struct FilePicker_336  field0;
        } EditorMode_330_Picker_s;
    } stuff;
};

static struct EditorMode_330 EditorMode_330_Cmd (  struct Pos_40  field0 ,  struct StrBuilder_98  field1 ) {
    return ( struct EditorMode_330 ) { .tag = EditorMode_330_Cmd_t, .stuff = { .EditorMode_330_Cmd_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_330 EditorMode_330_Search (  struct Pos_40  field0 ,  struct StrBuilder_98  field1 ) {
    return ( struct EditorMode_330 ) { .tag = EditorMode_330_Search_t, .stuff = { .EditorMode_330_Search_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_330 EditorMode_330_Menu (  struct Menu_331  field0 ) {
    return ( struct EditorMode_330 ) { .tag = EditorMode_330_Menu_t, .stuff = { .EditorMode_330_Menu_s = { .field0 = field0 } } };
};

static struct EditorMode_330 EditorMode_330_Picker (  struct FilePicker_336  field0 ) {
    return ( struct EditorMode_330 ) { .tag = EditorMode_330_Picker_t, .stuff = { .EditorMode_330_Picker_s = { .field0 = field0 } } };
};

struct Maybe_340 {
    enum {
        Maybe_340_None_t,
        Maybe_340_Just_t,
    } tag;
    union {
        struct {
            struct EditorMode_330  field0;
        } Maybe_340_Just_s;
    } stuff;
};

static struct Maybe_340 Maybe_340_Just (  struct EditorMode_330  field0 ) {
    return ( struct Maybe_340 ) { .tag = Maybe_340_Just_t, .stuff = { .Maybe_340_Just_s = { .field0 = field0 } } };
};

struct Config_341 {
    struct Theme_237 *  f_theme;
    bool  f_display_dash_line_dash_numbers;
    bool  f_relative_dash_line_dash_numbers;
};

struct Editor_329 {
    enum CAllocator_12  f_al;
    bool  f_running;
    struct Pane_289  f_pane;
    struct Maybe_125  f_clipboard;
    struct Maybe_125  f_search_dash_term;
    struct EditorMode_330  f_mode;
    struct Maybe_340  f_next_dash_mode;
    struct Maybe_125  f_msg;
    struct Config_341 *  f_cfg;
    struct Theme_237 *  f_og_dash_theme;
};

struct envunion328 {
    enum Unit_10  (*fun) (  struct env320*  ,    struct Editor_329 *  ,    struct StrView_18  );
    struct env320 env;
};

struct envunion342 {
    enum Unit_10  (*fun) (  struct env322*  ,    struct Editor_329 *  ,    struct StrConcat_124  );
    struct env322 env;
};

struct envunion343 {
    enum Unit_10  (*fun) (  struct env318*  ,    struct Editor_329 *  ,    struct StrConcat_118  );
    struct env318 env;
};

struct Maybe_345 {
    enum {
        Maybe_345_None_t,
        Maybe_345_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_345_Just_s;
    } stuff;
};

static struct Maybe_345 Maybe_345_Just (  size_t  field0 ) {
    return ( struct Maybe_345 ) { .tag = Maybe_345_Just_t, .stuff = { .Maybe_345_Just_s = { .field0 = field0 } } };
};

struct envunion344 {
    struct Maybe_345  (*fun) (  struct env172*  ,    struct TextBuf_164 *  ,    struct Maybe_125  );
    struct env172 env;
};

struct env327 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env320 envinst320;
    struct env322 envinst322;
    struct env318 envinst318;
    ;
    ;
    ;
    struct env172 envinst172;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct Array_347 {
    struct MenuItem_333 _arr [4];
};

static  struct MenuItem_333 *   cast_dash_ptr348 (    struct Array_347 *  p398 ) {
    return ( (struct MenuItem_333 * ) (  p398 ) );
}

static  size_t   i32_dash_size349 (    int32_t  x684 ) {
    return ( (size_t ) ( (int64_t ) (  x684 ) ) );
}

static  struct Slice_332   from_dash_listlike346 (    struct Array_347 *  arr2200 ) {
    return ( (struct Slice_332) { .f_ptr = ( (  cast_dash_ptr348 ) ( (  arr2200 ) ) ) , .f_count = ( (  i32_dash_size349 ) ( ( 4 ) ) ) } );
}

static  bool   eq352 (    size_t  l135 ,    size_t  r137 ) {
    return ( (  l135 ) == (  r137 ) );
}

static  char   from_dash_charlike351 (    uint8_t *  ptr410 ,    size_t  num_dash_bytes412 ) {
    if ( ( !  eq352 ( (  num_dash_bytes412 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp353 = ( (  from_dash_string93 ) ( ( (uint8_t*)"(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp353);
        abort ( );
        ( Unit_10_Unit );
    }
    return ( ( (char ) ( * (  ptr410 ) ) ) );
}

enum CursorMovement_357 {
    CursorMovement_357_NoChanges,
    CursorMovement_357_UpdateVI,
    CursorMovement_357_OverrideSelect,
};

struct Tuple2_359 {
    enum CursorMovement_357  field0;
    enum CursorMovement_357  field1;
};

static struct Tuple2_359 Tuple2_359_Tuple2 (  enum CursorMovement_357  field0 ,  enum CursorMovement_357  field1 ) {
    return ( struct Tuple2_359 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq358 (    enum CursorMovement_357  l4604 ,    enum CursorMovement_357  r4606 ) {
    return ( {  struct Tuple2_359  dref4607 = ( ( Tuple2_359_Tuple2 ) ( (  l4604 ) ,  (  r4606 ) ) ) ;  dref4607 .field0 == CursorMovement_357_NoChanges &&  dref4607 .field1 == CursorMovement_357_NoChanges ? ( true ) :  dref4607 .field0 == CursorMovement_357_UpdateVI &&  dref4607 .field1 == CursorMovement_357_UpdateVI ? ( true ) :  dref4607 .field0 == CursorMovement_357_OverrideSelect &&  dref4607 .field1 == CursorMovement_357_OverrideSelect ? ( true ) : ( false ) ; } );
}

struct StrViewIter_362 {
    struct StrView_18  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_362   into_dash_iter363 (    struct StrViewIter_362  self1315 ) {
    return (  self1315 );
}

static  struct StrViewIter_362   into_dash_iter365 (    struct StrView_18  self1312 ) {
    return ( (struct StrViewIter_362) { .f_ds = (  self1312 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_362   chars364 (    struct StrView_18  self1326 ) {
    return ( (  into_dash_iter365 ) ( (  self1326 ) ) );
}

static  struct StrView_18   from_dash_bytes367 (    struct Slice_13  sl2579 ) {
    return ( (struct StrView_18) { .f_contents = (  sl2579 ) } );
}

static  struct Slice_13   to_dash_slice368 (    struct List_11  l2541 ) {
    uint8_t *  ptr2542 = ( ( (  l2541 ) .f_elements ) .f_ptr );
    return ( (struct Slice_13) { .f_ptr = (  ptr2542 ) , .f_count = ( (  l2541 ) .f_count ) } );
}

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_223   cmp371 (    size_t  l193 ,    size_t  r195 ) {
    return ( builtin_size_tcmp( (  l193 ) , (  r195 ) ) );
}

struct StrConcat_374 {
    struct StrConcat_118  field0;
    size_t  field1;
};

static struct StrConcat_374 StrConcat_374_StrConcat (  struct StrConcat_118  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_374 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_373 {
    struct StrConcat_374  field0;
    struct Char_101  field1;
};

static struct StrConcat_373 StrConcat_373_StrConcat (  struct StrConcat_374  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_373 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_377 {
    struct StrView_18  field0;
    struct StrConcat_373  field1;
};

static struct StrConcat_377 StrConcat_377_StrConcat (  struct StrView_18  field0 ,  struct StrConcat_373  field1 ) {
    return ( struct StrConcat_377 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_376 {
    struct StrConcat_377  field0;
    struct Char_101  field1;
};

static struct StrConcat_376 StrConcat_376_StrConcat (  struct StrConcat_377  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_376 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32380 (    size_t  x705 ) {
    return ( (int32_t ) (  x705 ) );
}

static  enum Unit_10   print_dash_str379 (    struct StrView_18  self1323 ) {
    ( ( printf ) ( ( (  from_dash_string93 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32380 ) ( ( ( (  self1323 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1323 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str385 (    size_t  self1423 ) {
    ( ( printf ) ( ( (  from_dash_string93 ) ( ( (uint8_t*)"%lu" ) ,  ( 3 ) ) ) ,  (  self1423 ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str384 (    struct StrConcat_119  self1302 ) {
    struct StrConcat_119  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str379 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str385 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str383 (    struct StrConcat_118  self1302 ) {
    struct StrConcat_118  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str384 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str379 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str382 (    struct StrConcat_374  self1302 ) {
    struct StrConcat_374  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str383 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str385 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

struct Array_389 {
    uint8_t _arr [4];
};

struct Scalar_391 {
    uint32_t  f_value;
};

struct CharDestructured_390 {
    enum {
        CharDestructured_390_Ref_t,
        CharDestructured_390_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_101  field0;
        } CharDestructured_390_Ref_s;
        struct {
            struct Scalar_391  field0;
        } CharDestructured_390_Scalar_s;
    } stuff;
};

static struct CharDestructured_390 CharDestructured_390_Ref (  struct Char_101  field0 ) {
    return ( struct CharDestructured_390 ) { .tag = CharDestructured_390_Ref_t, .stuff = { .CharDestructured_390_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_390 CharDestructured_390_Scalar (  struct Scalar_391  field0 ) {
    return ( struct CharDestructured_390 ) { .tag = CharDestructured_390_Scalar_t, .stuff = { .CharDestructured_390_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq393 (    uint8_t  l125 ,    uint8_t  r127 ) {
    return ( (  l125 ) == (  r127 ) );
}

static  uint8_t   size_dash_u8395 (    size_t  x714 ) {
    return ( (uint8_t ) (  x714 ) );
}

static  size_t   op_dash_div396 (    size_t  l304 ,    size_t  r306 ) {
    return ( (  l304 ) / (  r306 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer394 (    uint8_t *  ptr777 ) {
    return ( (  size_dash_u8395 ) ( (  op_dash_div396 ( ( ( (size_t ) (  ptr777 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral397 (    size_t  x62 ) {
    return ( (uint8_t ) (  x62 ) );
}

static  uint32_t   size_dash_u32398 (    size_t  x708 ) {
    return ( (uint32_t ) (  x708 ) );
}

static  size_t   cast399 (    uint8_t *  x395 ) {
    return ( (size_t ) (  x395 ) );
}

static  struct CharDestructured_390   destructure392 (    struct Char_101  c1244 ) {
    if ( (  eq393 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer394 ) ( ( (  c1244 ) .f_ptr ) ) ) , (  from_dash_integral397 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_390_Scalar ) ( ( (struct Scalar_391) { .f_value = ( (  size_dash_u32398 ) ( ( ( (  cast399 ) ( ( (  c1244 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_390_Ref ) ( (  c1244 ) ) );
    }
}

static  struct Array_389   from_dash_listlike402 (    struct Array_389 *  self369 ) {
    return ( * (  self369 ) );
}

static  struct Array_389   unscalarize400 (    struct Scalar_391  scalar1247 ) {
    if ( (  cmp235 ( ( (  scalar1247 ) .f_value ) , (  from_dash_integral230 ( 128 ) ) ) == 2 ) ) {
        const char*  temp401 = ( (  from_dash_string93 ) ( ( (uint8_t*)"(unscalarize) non-ascii characters not supported for now" ) ,  ( 56 ) ) );
        printf("%s\n", temp401);
        abort ( );
        ( Unit_10_Unit );
    }
    uint8_t  b1248 = ( (  u32_dash_u8209 ) ( ( (  scalar1247 ) .f_value ) ) );
    struct Array_389  temp403 = ( (struct Array_389) { ._arr = { (  b1248 ) , (  from_dash_integral397 ( 0 ) ) , (  from_dash_integral397 ( 0 ) ) , (  from_dash_integral397 ( 0 ) ) } } );
    return ( (  from_dash_listlike402 ) ( ( &temp403 ) ) );
}

static  uint8_t *   cast_dash_ptr404 (    struct Array_389 *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Char_101   regularize388 (    struct Char_101  c1251 ,    struct Array_389 *  possible_dash_scalar_dash_mem1253 ) {
    struct CharDestructured_390  dref1254 = ( (  destructure392 ) ( (  c1251 ) ) );
    if ( dref1254.tag == CharDestructured_390_Ref_t ) {
        return ( dref1254 .stuff .CharDestructured_390_Ref_s .field0 );
    }
    else {
        if ( dref1254.tag == CharDestructured_390_Scalar_t ) {
            (*  possible_dash_scalar_dash_mem1253 ) = ( (  unscalarize400 ) ( ( dref1254 .stuff .CharDestructured_390_Scalar_s .field0 ) ) );
            return ( (struct Char_101) { .f_ptr = ( (  cast_dash_ptr404 ) ( (  possible_dash_scalar_dash_mem1253 ) ) ) , .f_num_dash_bytes = ( (  c1251 ) .f_num_dash_bytes ) } );
        }
    }
}

static  enum Unit_10   printf_dash_char387 (    struct Char_101  c1259 ) {
    struct Array_389  temp406;
    struct Array_389  temp405 = (  temp406 );
    struct Char_101  c1260 = ( (  regularize388 ) ( (  c1259 ) ,  ( &temp405 ) ) );
    ( ( printf ) ( ( (  from_dash_string93 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32380 ) ( ( (  c1260 ) .f_num_dash_bytes ) ) ) ,  ( (  c1260 ) .f_ptr ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str386 (    struct Char_101  self1283 ) {
    ( (  printf_dash_char387 ) ( (  self1283 ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str381 (    struct StrConcat_373  self1302 ) {
    struct StrConcat_373  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str382 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str386 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str378 (    struct StrConcat_377  self1302 ) {
    struct StrConcat_377  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str379 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str381 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str375 (    struct StrConcat_376  self1302 ) {
    struct StrConcat_376  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str378 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str386 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_223   cmp410 (    uint8_t  l178 ,    uint8_t  r180 ) {
    return ( builtin_uint8_tcmp( (  l178 ) , (  r180 ) ) );
}

static  size_t   next_dash_char409 (    uint8_t *  p1263 ) {
    uint8_t  pb1264 = ( * (  p1263 ) );
    if ( (  cmp410 ( (  pb1264 ) , (  from_dash_integral397 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp410 ( (  pb1264 ) , (  from_dash_integral397 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp410 ( (  pb1264 ) , (  from_dash_integral397 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp410 ( (  pb1264 ) , (  from_dash_integral397 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp411 = ( (  from_dash_string93 ) ( ( (uint8_t*)"(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp411);
                    abort ( );
                    ( Unit_10_Unit );
                }
            }
        }
    }
}

static  struct Char_101   scan_dash_from_dash_mem408 (    uint8_t *  p1267 ) {
    size_t  clen1268 = ( (  next_dash_char409 ) ( (  p1267 ) ) );
    if ( (  cmp371 ( (  clen1268 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp412 = ( (  from_dash_string93 ) ( ( (uint8_t*)"UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp412);
        abort ( );
        ( Unit_10_Unit );
    }
    return ( (struct Char_101) { .f_ptr = (  p1267 ) , .f_num_dash_bytes = (  clen1268 ) } );
}

static  struct Char_101   from_dash_charlike407 (    uint8_t *  ptr1271 ,    size_t  num_dash_bytes1273 ) {
    struct Char_101  le_dash_char1274 = ( (  scan_dash_from_dash_mem408 ) ( (  ptr1271 ) ) );
    if ( ( !  eq352 ( ( (  le_dash_char1274 ) .f_num_dash_bytes ) , (  num_dash_bytes1273 ) ) ) ) {
        const char*  temp413 = ( (  from_dash_string93 ) ( ( (uint8_t*)"invalid char given. number of scanned bytes should match the given num-bytes." ) ,  ( 77 ) ) );
        printf("%s\n", temp413);
        abort ( );
        ( Unit_10_Unit );
    }
    return (  le_dash_char1274 );
}

static  enum Unit_10   panic372 (    struct StrConcat_373  errmsg1343 ) {
    ( (  print_dash_str375 ) ( ( ( StrConcat_376_StrConcat ) ( ( ( StrConcat_377_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_10_Unit );
}

static  int64_t   op_dash_mul416 (    int64_t  l213 ,    int64_t  r215 ) {
    return ( (  l213 ) * (  r215 ) );
}

static  struct Line_30 *   offset_dash_ptr415 (    struct Line_30 *  x377 ,    int64_t  count379 ) {
    struct Line_30  temp417;
    return ( (struct Line_30 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul416 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp417 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i64418 (    size_t  x666 ) {
    return ( (int64_t ) (  x666 ) );
}

static  struct Line_30 *   get_dash_ptr414 (    struct Slice_29  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp371 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_30 *  elem_dash_ptr2173 = ( (  offset_dash_ptr415 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  struct Line_30 *   get_dash_ptr370 (    struct List_28 *  list2406 ,    size_t  i2408 ) {
    if ( ( (  cmp371 ( (  i2408 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2408 ) , ( ( * (  list2406 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2408 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2406 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr414 ) ( ( ( * (  list2406 ) ) .f_elements ) ,  (  i2408 ) ) );
}

static  struct Line_30   get369 (    struct List_28 *  list2416 ,    size_t  i2418 ) {
    return ( * ( (  get_dash_ptr370 ) ( (  list2416 ) ,  (  i2418 ) ) ) );
}

static  struct StrView_18   line366 (    struct TextBuf_164 *  self4176 ,    int32_t  li4178 ) {
    return ( (  from_dash_bytes367 ) ( ( (  to_dash_slice368 ) ( ( ( (  get369 ) ( ( & ( ( * (  self4176 ) ) .f_buf ) ) ,  ( (  i32_dash_size349 ) ( (  li4178 ) ) ) ) ) .f_line ) ) ) ) );
}

struct Maybe_420 {
    enum {
        Maybe_420_None_t,
        Maybe_420_Just_t,
    } tag;
    union {
        struct {
            struct Char_101  field0;
        } Maybe_420_Just_s;
    } stuff;
};

static struct Maybe_420 Maybe_420_Just (  struct Char_101  field0 ) {
    return ( struct Maybe_420 ) { .tag = Maybe_420_Just_t, .stuff = { .Maybe_420_Just_s = { .field0 = field0 } } };
};

static  uint8_t *   offset_dash_ptr422 (    uint8_t *  x377 ,    int64_t  count379 ) {
    uint8_t  temp423;
    return ( (uint8_t * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul416 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp423 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   cast424 (    uint8_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  size_t   op_dash_add425 (    size_t  l289 ,    size_t  r291 ) {
    return ( (  l289 ) + (  r291 ) );
}

static  struct Maybe_420   next421 (    struct StrViewIter_362 *  self1318 ) {
    if ( (  cmp371 ( ( ( * (  self1318 ) ) .f_i ) , ( ( ( ( * (  self1318 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
    }
    uint8_t *  char_dash_ptr1319 = ( ( (  offset_dash_ptr422 ) ( ( (  cast424 ) ( ( ( ( ( * (  self1318 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64418 ) ( ( ( * (  self1318 ) ) .f_i ) ) ) ) ) );
    struct Char_101  char1320 = ( (  scan_dash_from_dash_mem408 ) ( (  char_dash_ptr1319 ) ) );
    (*  self1318 ) .f_i = (  op_dash_add425 ( ( ( * (  self1318 ) ) .f_i ) , ( (  char1320 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_420_Just ) ( (  char1320 ) ) );
}

static  int32_t   maybe427 (    struct Maybe_125  x1592 ,    int32_t (*  fun1594 )(    struct StrView_18  ) ,    int32_t  default1596 ) {
    return ( {  struct Maybe_125  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_125_Just_t ? ( (  fun1594 ) ( ( dref1597 .stuff .Maybe_125_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

static  struct Array_389   uninit_dash_buf431 (  ) {
    struct Array_389  temp432;
    return (  temp432 );
}

static  int64_t   from_dash_integral434 (    size_t  x47 ) {
    return ( (int64_t ) (  x47 ) );
}

static  int64_t   op_dash_add435 (    int64_t  l203 ,    int64_t  r205 ) {
    return ( (  l203 ) + (  r205 ) );
}

static  bool   eq429 (    struct Char_101  l1451 ,    struct Char_101  r1453 ) {
    if ( ( !  eq352 ( ( (  l1451 ) .f_num_dash_bytes ) , ( (  r1453 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Array_389  temp430 = ( (  uninit_dash_buf431 ) ( ) );
    struct Char_101  lc1454 = ( (  regularize388 ) ( (  l1451 ) ,  ( &temp430 ) ) );
    struct Array_389  temp433 = ( (  uninit_dash_buf431 ) ( ) );
    struct Char_101  rc1455 = ( (  regularize388 ) ( (  r1453 ) ,  ( &temp433 ) ) );
    int64_t  i1456 = (  from_dash_integral434 ( 0 ) );
    while ( (  cmp371 ( ( (size_t ) (  i1456 ) ) , ( (  lc1454 ) .f_num_dash_bytes ) ) == 0 ) ) {
        if ( ( !  eq393 ( ( * ( (uint8_t * ) ( ( (void*) ( (  lc1454 ) .f_ptr ) ) + (  i1456 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( (  rc1455 ) .f_ptr ) ) + (  i1456 ) ) ) ) ) ) ) {
            return ( false );
        }
        i1456 = (  op_dash_add435 ( (  i1456 ) , (  from_dash_integral434 ( 1 ) ) ) );
    }
    return ( true );
}

static  struct Maybe_125   char_dash_replacement428 (    struct Char_101  c4484 ) {
    if ( (  eq429 ( (  c4484 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_125_Just ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
}

static  size_t   reduce438 (    struct StrViewIter_362  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_101  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct StrViewIter_362  it1124 = ( (  into_dash_iter363 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_420  dref1125 = ( (  next421 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_420_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_420_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_420_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp439 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp439);
    abort ( );
    ( Unit_10_Unit );
    size_t  temp440;
    return (  temp440 );
}

static  size_t   lam441 (    struct Char_101  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add425 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count437 (    struct StrViewIter_362  it1129 ) {
    return ( (  reduce438 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam441 ) ) );
}

static  int32_t   lam436 (    struct StrView_18  s4489 ) {
    return ( (  size_dash_i32380 ) ( ( (  count437 ) ( ( (  chars364 ) ( (  s4489 ) ) ) ) ) ) );
}

static  int32_t   max443 (    int32_t  l1372 ,    int32_t  r1374 ) {
    if ( (  cmp222 ( (  l1372 ) , (  r1374 ) ) == 2 ) ) {
        return (  l1372 );
    } else {
        return (  r1374 );
    }
}

static  void *   cast_dash_ptr449 (    wchar_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of450 (    wchar_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  wchar_t   zeroed447 (  ) {
    wchar_t  temp448;
    wchar_t  x642 = (  temp448 );
    ( ( memset ) ( ( (  cast_dash_ptr449 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of450 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  char *   cast_dash_ptr451 (    uint8_t *  p398 ) {
    return ( (char * ) (  p398 ) );
}

static  size_t   cast452 (    int64_t  x395 ) {
    return ( (size_t ) (  x395 ) );
}

static  int64_t   op_dash_neg453 (    int64_t  l223 ) {
    return ( (  from_dash_integral434 ( 0 ) ) - (  l223 ) );
}

static  size_t   size_dash_of455 (    uint32_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

struct TypeSize_457 {
    size_t  f_size;
};

static  struct TypeSize_457   get_dash_typesize456 (  ) {
    wchar_t  temp458;
    return ( (struct TypeSize_457) { .f_size = ( sizeof( ( (  temp458 ) ) ) ) } );
}

static  wchar_t   cast460 (    uint32_t  x395 ) {
    return ( (wchar_t ) (  x395 ) );
}

static  wchar_t   to_dash_c_dash_wchar445 (    struct Char_101  c1471 ) {
    struct CharDestructured_390  dref1472 = ( (  destructure392 ) ( (  c1471 ) ) );
    if ( dref1472.tag == CharDestructured_390_Ref_t ) {
        wchar_t  temp446 = ( (  zeroed447 ) ( ) );
        wchar_t *  wcp1474 = ( &temp446 );
        size_t  num_dash_chars1475 = ( ( mbstowcs ) ( (  wcp1474 ) ,  ( (  cast_dash_ptr451 ) ( ( ( dref1472 .stuff .CharDestructured_390_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq352 ( (  num_dash_chars1475 ) , ( ( (  cast452 ) ( ( (  op_dash_neg453 ( (  from_dash_integral434 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp454 = ( (  from_dash_string93 ) ( ( (uint8_t*)"could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp454);
            abort ( );
            ( Unit_10_Unit );
        }
        return ( * (  wcp1474 ) );
    }
    else {
        if ( dref1472.tag == CharDestructured_390_Scalar_t ) {
            if ( ( ! (  eq352 ( ( (  size_dash_of455 ) ( ( ( dref1472 .stuff .CharDestructured_390_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize456 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp459 = ( (  from_dash_string93 ) ( ( (uint8_t*)"Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp459);
                abort ( );
                ( Unit_10_Unit );
            }
            return ( (  cast460 ) ( ( ( dref1472 .stuff .CharDestructured_390_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth444 (    struct Char_101  c2732 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar445 ) ( (  c2732 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth442 (    struct Char_101  c2735 ) {
    return ( (  max443 ) ( ( (  wcwidth444 ) ( (  c2735 ) ) ) ,  (  from_dash_integral92 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width426 (    struct Char_101  c4487 ) {
    return ( (  maybe427 ) ( ( (  char_dash_replacement428 ) ( (  c4487 ) ) ) ,  (  lam436 ) ,  ( (  rendered_dash_wcwidth442 ) ( (  c4487 ) ) ) ) );
}

static  int32_t   pos_dash_vi360 (    struct TextBuf_164 *  self4503 ,    struct Pos_40  pos4505 ) {
    int32_t  bi4506 = ( (  from_dash_integral92 ( 0 ) ) );
    int32_t  vi4507 = (  from_dash_integral92 ( 0 ) );
    struct StrViewIter_362  temp361 =  into_dash_iter363 ( ( (  chars364 ) ( ( (  line366 ) ( (  self4503 ) ,  ( (  pos4505 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_420  __cond419 =  next421 (&temp361);
        if (  __cond419 .tag == 0 ) {
            break;
        }
        struct Char_101  c4509 =  __cond419 .stuff .Maybe_420_Just_s .field0;
        bi4506 = (  op_dash_add224 ( (  bi4506 ) , ( (  size_dash_i32380 ) ( ( (  c4509 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp222 ( ( (  pos4505 ) .f_bi ) , (  bi4506 ) ) == 0 ) ) {
            break;
        }
        vi4507 = (  op_dash_add224 ( (  vi4507 ) , ( (  char_dash_screen_dash_width426 ) ( (  c4509 ) ) ) ) );
    }
    return (  vi4507 );
}

struct Tuple2_463 {
    enum Mode_290  field0;
    enum Mode_290  field1;
};

static struct Tuple2_463 Tuple2_463_Tuple2 (  enum Mode_290  field0 ,  enum Mode_290  field1 ) {
    return ( struct Tuple2_463 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq462 (    enum Mode_290  l4463 ,    enum Mode_290  r4465 ) {
    return ( {  struct Tuple2_463  dref4466 = ( ( Tuple2_463_Tuple2 ) ( (  l4463 ) ,  (  r4465 ) ) ) ;  dref4466 .field0 == Mode_290_Normal &&  dref4466 .field1 == Mode_290_Normal ? ( true ) :  dref4466 .field0 == Mode_290_Insert &&  dref4466 .field1 == Mode_290_Insert ? ( true ) :  dref4466 .field0 == Mode_290_Select &&  dref4466 .field1 == Mode_290_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_10   set_dash_sel461 (    struct Pane_289 *  self4593 ,    struct Maybe_47  sel4595 ) {
    if ( ( !  eq462 ( ( ( * (  self4593 ) ) .f_mode ) , ( Mode_290_Select ) ) ) ) {
        (*  self4593 ) .f_sel = (  sel4595 );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   set_dash_cursors356 (    struct Pane_289 *  self4610 ,    struct Pos_40  cur4612 ,    struct Maybe_47  sel4614 ,    enum CursorMovement_357  cursor_dash_movement_dash_type4616 ) {
    if ( ( !  eq358 ( (  cursor_dash_movement_dash_type4616 ) , ( CursorMovement_357_NoChanges ) ) ) ) {
        (*  self4610 ) .f_vi = ( (  pos_dash_vi360 ) ( ( ( * (  self4610 ) ) .f_buf ) ,  (  cur4612 ) ) );
    }
    (*  self4610 ) .f_cursor = (  cur4612 );
    if ( ( !  eq358 ( (  cursor_dash_movement_dash_type4616 ) , ( CursorMovement_357_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel461 ) ( (  self4610 ) ,  (  sel4614 ) ) );
    } else {
        (*  self4610 ) .f_sel = (  sel4614 );
    }
    return ( Unit_10_Unit );
}

static  size_t   num_dash_bytes465 (    struct StrView_18  self2625 ) {
    return ( ( (  self2625 ) .f_contents ) .f_count );
}

static  enum Unit_10   move_dash_to_dash_end355 (    struct Pane_289 *  self4708 ) {
    struct Pos_40  cur4709 = ( ( * (  self4708 ) ) .f_cursor );
    struct Pos_40  temp464 = (  cur4709 );
    temp464 .  f_bi = ( (  size_dash_i32380 ) ( ( (  num_dash_bytes465 ) ( ( (  line366 ) ( ( ( * (  self4708 ) ) .f_buf ) ,  ( (  cur4709 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors356 ) ( (  self4708 ) ,  ( temp464 ) ,  ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) ,  ( CursorMovement_357_UpdateVI ) ) );
    return ( Unit_10_Unit );
}

static  struct Pane_289 *   pane466 (    struct Editor_329 *  ed5010 ) {
    return ( & ( ( * (  ed5010 ) ) .f_pane ) );
}

static  enum Unit_10   lam354 (   void* __env ,    struct Editor_329 *  ed5096 ) {
    return ( (  move_dash_to_dash_end355 ) ( ( (  pane466 ) ( (  ed5096 ) ) ) ) );
}

struct TakeWhile_472 {
    struct StrViewIter_362  f_it;
    bool (*  f_pred )(    struct Char_101  );
};

struct Map_471 {
    struct TakeWhile_472  field0;
    size_t (*  field1 )(    struct Char_101  );
};

static struct Map_471 Map_471_Map (  struct TakeWhile_472  field0 ,  size_t (*  field1 )(    struct Char_101  ) ) {
    return ( struct Map_471 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_471   into_dash_iter474 (    struct Map_471  self804 ) {
    return (  self804 );
}

static  struct Maybe_420   next476 (    struct TakeWhile_472 *  self989 ) {
    struct Maybe_420  mx990 = ( (  next421 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_420  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_420_None_t ) {
        return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_420_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_420_Just ) ( ( dref991 .stuff .Maybe_420_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
            }
        }
    }
}

static  struct Maybe_345   next475 (    struct Map_471 *  dref806 ) {
    struct Maybe_420  dref809 = ( (  next476 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_420_None_t ) {
        return ( (struct Maybe_345) { .tag = Maybe_345_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_420_Just_t ) {
            return ( ( Maybe_345_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_420_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce473 (    struct Map_471  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_471  it1124 = ( (  into_dash_iter474 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_345  dref1125 = ( (  next475 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_345_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_345_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_345_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp477 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp477);
    abort ( );
    ( Unit_10_Unit );
    size_t  temp478;
    return (  temp478 );
}

static  size_t   lam479 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add425 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum470 (    struct Map_471  it1135 ) {
    return ( (  reduce473 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam479 ) ) );
}

static  struct TakeWhile_472   into_dash_iter481 (    struct TakeWhile_472  self986 ) {
    return (  self986 );
}

static  struct Map_471   map480 (    struct TakeWhile_472  iterable813 ,    size_t (*  fun815 )(    struct Char_101  ) ) {
    struct TakeWhile_472  it816 = ( (  into_dash_iter481 ) ( (  iterable813 ) ) );
    return ( ( Map_471_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_472   take_dash_while482 (    struct StrView_18  it995 ,    bool (*  pred997 )(    struct Char_101  ) ) {
    return ( (struct TakeWhile_472) { .f_it = ( (  into_dash_iter365 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  bool   is_dash_whitespace484 (    struct Char_101  c1500 ) {
    return ( ( (  eq429 ( (  c1500 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) || (  eq429 ( (  c1500 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq429 ( (  c1500 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   lam483 (    struct Char_101  c4688 ) {
    return ( (  is_dash_whitespace484 ) ( (  c4688 ) ) );
}

static  size_t   lam485 (    struct Char_101  c4690 ) {
    return ( (  c4690 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line469 (    struct Pane_289 *  pane4684 ,    int32_t  line4686 ) {
    return ( (  size_dash_i32380 ) ( ( (  sum470 ) ( ( (  map480 ) ( ( (  take_dash_while482 ) ( ( (  line366 ) ( ( ( * (  pane4684 ) ) .f_buf ) ,  (  line4686 ) ) ) ,  (  lam483 ) ) ) ,  (  lam485 ) ) ) ) ) ) );
}

static  enum Unit_10   move_dash_to_dash_beginning_dash_indented468 (    struct Pane_289 *  self4703 ) {
    struct Pos_40  cur4704 = ( ( * (  self4703 ) ) .f_cursor );
    int32_t  indent4705 = ( (  indent_dash_at_dash_line469 ) ( (  self4703 ) ,  ( (  cur4704 ) .f_line ) ) );
    struct Pos_40  temp486 = (  cur4704 );
    temp486 .  f_bi = (  indent4705 );
    ( (  set_dash_cursors356 ) ( (  self4703 ) ,  ( temp486 ) ,  ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) ,  ( CursorMovement_357_UpdateVI ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam467 (   void* __env ,    struct Editor_329 *  ed5098 ) {
    return ( (  move_dash_to_dash_beginning_dash_indented468 ) ( ( (  pane466 ) ( (  ed5098 ) ) ) ) );
}

static  enum Unit_10   lam487 (   void* __env ,    struct Editor_329 *  ed5100 ) {
    return ( (  set_dash_cursors356 ) ( ( (  pane466 ) ( (  ed5100 ) ) ) ,  ( (struct Pos_40) { .f_line = (  from_dash_integral92 ( 0 ) ) , .f_bi = (  from_dash_integral92 ( 0 ) ) } ) ,  ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) ,  ( CursorMovement_357_UpdateVI ) ) );
}

static  size_t   size490 (    struct List_28 *  l2443 ) {
    return ( ( * (  l2443 ) ) .f_count );
}

static  int32_t   num_dash_lines489 (    struct TextBuf_164 *  self4181 ) {
    return ( (  size_dash_i32380 ) ( ( (  size490 ) ( ( & ( ( * (  self4181 ) ) .f_buf ) ) ) ) ) );
}

static  enum Unit_10   lam488 (   void* __env ,    struct Editor_329 *  ed5102 ) {
    return ( (  set_dash_cursors356 ) ( ( (  pane466 ) ( (  ed5102 ) ) ) ,  ( (struct Pos_40) { .f_line = ( (  max443 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  op_dash_sub229 ( ( (  num_dash_lines489 ) ( ( ( * ( (  pane466 ) ( (  ed5102 ) ) ) ) .f_buf ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) , .f_bi = (  from_dash_integral92 ( 0 ) ) } ) ,  ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) ,  ( CursorMovement_357_UpdateVI ) ) );
}

struct Array_492 {
    struct MenuItem_333 _arr [3];
};

static  struct MenuItem_333 *   cast_dash_ptr493 (    struct Array_492 *  p398 ) {
    return ( (struct MenuItem_333 * ) (  p398 ) );
}

static  struct Slice_332   from_dash_listlike491 (    struct Array_492 *  arr2200 ) {
    return ( (struct Slice_332) { .f_ptr = ( (  cast_dash_ptr493 ) ( (  arr2200 ) ) ) , .f_count = ( (  i32_dash_size349 ) ( ( 3 ) ) ) } );
}

static  enum Unit_10   lam495 (   void* __env ,    struct Editor_329 *  ed5105 ) {
    return ( Unit_10_Unit );
}

static  void *   cast_dash_ptr507 (    struct StrView_18 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of508 (    struct StrView_18 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct StrView_18 *   zeroed505 (  ) {
    struct StrView_18 *  temp506;
    struct StrView_18 *  x642 = (  temp506 );
    ( ( memset ) ( ( (  cast_dash_ptr507 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of508 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  struct StrView_18 *   null_dash_ptr504 (  ) {
    return ( (  zeroed505 ) ( ) );
}

static  struct Slice_17   empty503 (  ) {
    return ( (struct Slice_17) { .f_ptr = ( (  null_dash_ptr504 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_16   mk502 (    enum CAllocator_12  al2436 ) {
    struct Slice_17  elements2437 = ( (  empty503 ) ( ) );
    return ( (struct List_16) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env509 {
    ;
    struct env130 envinst130;
    enum CAllocator_12  al4845;
    ;
    ;
    ;
    ;
    ;
    struct env14 envinst14;
    ;
    ;
    struct env85 envinst85;
    struct List_16 *  files4846;
    ;
};

struct envunion511 {
    enum Unit_10  (*fun) (  struct env509*  ,    struct StrView_18  );
    struct env509 env;
};

static  const char*   cast519 (    uint8_t *  x395 ) {
    return ( (const char* ) (  x395 ) );
}

static  void *   cast_dash_ptr530 (    uint8_t * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of531 (    uint8_t *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  uint8_t *   zeroed528 (  ) {
    uint8_t *  temp529;
    uint8_t *  x642 = (  temp529 );
    ( ( memset ) ( ( (  cast_dash_ptr530 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of531 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  uint8_t *   null_dash_ptr527 (  ) {
    return ( (  zeroed528 ) ( ) );
}

static  struct Slice_13   empty526 (  ) {
    return ( (struct Slice_13) { .f_ptr = ( (  null_dash_ptr527 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_11   mk525 (    enum CAllocator_12  al2436 ) {
    struct Slice_13  elements2437 = ( (  empty526 ) ( ) );
    return ( (struct List_11) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env538 {
    struct List_11 *  list2513;
    struct env8 envinst8;
};

struct envunion539 {
    enum Unit_10  (*fun) (  struct env538*  ,    uint8_t  );
    struct env538 env;
};

struct SliceIter_540 {
    struct Slice_13  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_540   into_dash_iter542 (    struct Slice_13  self2250 ) {
    return ( (struct SliceIter_540) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_111   next543 (    struct SliceIter_540 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp371 ( (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_111) { .tag = Maybe_111_None_t } );
    }
    uint8_t  elem2258 = ( * ( (  offset_dash_ptr422 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_111_Just ) ( (  elem2258 ) ) );
}

static  enum Unit_10   for_dash_each537 (    struct Slice_13  iterable1099 ,   struct envunion539  fun1101 ) {
    struct SliceIter_540  temp541 = ( (  into_dash_iter542 ) ( (  iterable1099 ) ) );
    struct SliceIter_540 *  it1102 = ( &temp541 );
    while ( ( true ) ) {
        struct Maybe_111  dref1103 = ( (  next543 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_111_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_111_Just_t ) {
                struct envunion539  temp544 = (  fun1101 );
                ( temp544.fun ( &temp544.env ,  ( dref1103 .stuff .Maybe_111_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

struct TypeSize_552 {
    size_t  f_size;
};

static  struct TypeSize_552   get_dash_typesize551 (  ) {
    uint8_t  temp553;
    return ( (struct TypeSize_552) { .f_size = ( sizeof( ( (  temp553 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr554 (    void *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  size_t   op_dash_mul555 (    size_t  l299 ,    size_t  r301 ) {
    return ( (  l299 ) * (  r301 ) );
}

static  struct Slice_13   allocate550 (    enum CAllocator_12  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize551 ) ( ) ) ) .f_size );
    uint8_t *  ptr2371 = ( (  cast_dash_ptr554 ) ( ( ( malloc ) ( (  op_dash_mul555 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_13) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env556 {
    ;
    struct Slice_13  new_dash_slice2453;
    ;
};

struct Tuple2_558 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_558 Tuple2_558_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_558 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion557 {
    enum Unit_10  (*fun) (  struct env556*  ,    struct Tuple2_558  );
    struct env556 env;
};

static  uint8_t *   get_dash_ptr561 (    struct Slice_13  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp371 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr2173 = ( (  offset_dash_ptr422 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_10   set560 (    struct Slice_13  slice2187 ,    size_t  i2189 ,    uint8_t  x2191 ) {
    uint8_t *  ep2192 = ( (  get_dash_ptr561 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam559 (   struct env556* env ,    struct Tuple2_558  dref2454 ) {
    return ( (  set560 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size349 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct FromIter_564 {
    int32_t  f_from;
};

struct Zip_563 {
    struct SliceIter_540  f_left_dash_it;
    struct FromIter_564  f_right_dash_it;
};

static  struct Zip_563   into_dash_iter566 (    struct Zip_563  self936 ) {
    return (  self936 );
}

struct Maybe_567 {
    enum {
        Maybe_567_None_t,
        Maybe_567_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_558  field0;
        } Maybe_567_Just_s;
    } stuff;
};

static struct Maybe_567 Maybe_567_Just (  struct Tuple2_558  field0 ) {
    return ( struct Maybe_567 ) { .tag = Maybe_567_Just_t, .stuff = { .Maybe_567_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_220   next569 (    struct FromIter_564 *  dref913 ) {
    int32_t  v915 = ( ( (* dref913 ) ) .f_from );
    (* dref913 ) .f_from = (  op_dash_add224 ( ( ( (* dref913 ) ) .f_from ) , (  from_dash_integral92 ( 1 ) ) ) );
    return ( ( Maybe_220_Just ) ( (  v915 ) ) );
}

static  struct Maybe_567   next568 (    struct Zip_563 *  self939 ) {
    struct Zip_563  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_111  dref941 = ( (  next543 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_111_None_t ) {
            return ( (struct Maybe_567) { .tag = Maybe_567_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_111_Just_t ) {
                struct Maybe_220  dref943 = ( (  next569 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_220_None_t ) {
                    return ( (struct Maybe_567) { .tag = Maybe_567_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_220_Just_t ) {
                        ( (  next543 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next569 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_567_Just ) ( ( ( Tuple2_558_Tuple2 ) ( ( dref941 .stuff .Maybe_111_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_220_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_10   for_dash_each562 (    struct Zip_563  iterable1099 ,   struct envunion557  fun1101 ) {
    struct Zip_563  temp565 = ( (  into_dash_iter566 ) ( (  iterable1099 ) ) );
    struct Zip_563 *  it1102 = ( &temp565 );
    while ( ( true ) ) {
        struct Maybe_567  dref1103 = ( (  next568 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_567_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_567_Just_t ) {
                struct envunion557  temp570 = (  fun1101 );
                ( temp570.fun ( &temp570.env ,  ( dref1103 .stuff .Maybe_567_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  struct FromIter_564   into_dash_iter572 (    struct FromIter_564  it911 ) {
    return (  it911 );
}

static  struct Zip_563   zip571 (    struct Slice_13  left947 ,    struct FromIter_564  right949 ) {
    struct SliceIter_540  left_dash_it950 = ( (  into_dash_iter542 ) ( (  left947 ) ) );
    struct FromIter_564  right_dash_it951 = ( (  into_dash_iter572 ) ( (  right949 ) ) );
    return ( (struct Zip_563) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  struct FromIter_564   from573 (    int32_t  f908 ) {
    return ( (struct FromIter_564) { .f_from = (  f908 ) } );
}

static  void *   cast_dash_ptr575 (    uint8_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_10   free574 (    enum CAllocator_12  dref2373 ,    struct Slice_13  slice2375 ) {
    if (!(  dref2373 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr575 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   grow_dash_if_dash_full549 (   struct env1* env ,    struct List_11 *  list2452 ) {
    if ( (  eq352 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate550 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq352 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_13  new_dash_slice2453 = ( (  allocate550 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul555 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env556 envinst556 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion557  fun2457 = ( (struct envunion557){ .fun = (  enum Unit_10  (*) (  struct env556*  ,    struct Tuple2_558  ) )lam559 , .env =  envinst556 } );
            ( (  for_dash_each562 ) ( ( (  zip571 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from573 ) ( (  from_dash_integral92 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free574 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   add547 (   struct env8* env ,    struct List_11 *  list2460 ,    uint8_t  elem2462 ) {
    struct envunion9  temp548 = ( (struct envunion9){ .fun = (  enum Unit_10  (*) (  struct env1*  ,    struct List_11 *  ) )grow_dash_if_dash_full549 , .env =  env->envinst1 } );
    ( temp548.fun ( &temp548.env ,  (  list2460 ) ) );
    ( (  set560 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add425 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam545 (   struct env538* env ,    uint8_t  x2517 ) {
    struct envunion60  temp546 = ( (struct envunion60){ .fun = (  enum Unit_10  (*) (  struct env8*  ,    struct List_11 *  ,    uint8_t  ) )add547 , .env =  env->envinst8 } );
    return ( temp546.fun ( &temp546.env ,  ( env->list2513 ) ,  (  x2517 ) ) );
}

static  enum Unit_10   add_dash_all536 (   struct env59* env ,    struct List_11 *  list2513 ,    struct Slice_13  it2515 ) {
    struct env538 envinst538 = {
        .list2513 =  list2513 ,
        .envinst8 = env->envinst8 ,
    };
    ( (  for_dash_each537 ) ( (  it2515 ) ,  ( (struct envunion539){ .fun = (  enum Unit_10  (*) (  struct env538*  ,    uint8_t  ) )lam545 , .env =  envinst538 } ) ) );
    return ( Unit_10_Unit );
}

static  struct Slice_13   as_dash_u8_dash_slice576 (    struct Char_101  c1465 ,    struct Array_389 *  buf1467 ) {
    struct Char_101  cc1468 = ( (  regularize388 ) ( (  c1465 ) ,  (  buf1467 ) ) );
    return ( (struct Slice_13) { .f_ptr = ( (  cc1468 ) .f_ptr ) , .f_count = ( (  cc1468 ) .f_num_dash_bytes ) } );
}

static  uint8_t   char_dash_u8578 (    struct Char_101  c1440 ) {
    struct CharDestructured_390  dref1441 = ( (  destructure392 ) ( (  c1440 ) ) );
    if ( dref1441.tag == CharDestructured_390_Ref_t ) {
        return ( * ( ( dref1441 .stuff .CharDestructured_390_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref1441.tag == CharDestructured_390_Scalar_t ) {
            return ( (  u32_dash_u8209 ) ( ( ( dref1441 .stuff .CharDestructured_390_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct Char_101   nullchar579 (  ) {
    return ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) );
}

static  size_t   op_dash_sub580 (    size_t  l294 ,    size_t  r296 ) {
    return ( (  l294 ) - (  r296 ) );
}

static  struct StrView_18   from_dash_str_dash_0523 (   struct env86* env ,    struct StrView_18  s2561 ,    enum CAllocator_12  al2563 ) {
    struct List_11  temp524 = ( (  mk525 ) ( (  al2563 ) ) );
    struct List_11 *  l2564 = ( &temp524 );
    struct Array_389  temp532 = ( (  uninit_dash_buf431 ) ( ) );
    struct Array_389 *  buf2565 = ( &temp532 );
    struct StrViewIter_362  temp533 =  into_dash_iter363 ( ( (  chars364 ) ( (  s2561 ) ) ) );
    while (true) {
        struct Maybe_420  __cond534 =  next421 (&temp533);
        if (  __cond534 .tag == 0 ) {
            break;
        }
        struct Char_101  c2567 =  __cond534 .stuff .Maybe_420_Just_s .field0;
        struct envunion73  temp535 = ( (struct envunion73){ .fun = (  enum Unit_10  (*) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  ) )add_dash_all536 , .env =  env->envinst59 } );
        ( temp535.fun ( &temp535.env ,  (  l2564 ) ,  ( (  as_dash_u8_dash_slice576 ) ( (  c2567 ) ,  (  buf2565 ) ) ) ) );
    }
    struct envunion72  temp577 = ( (struct envunion72){ .fun = (  enum Unit_10  (*) (  struct env8*  ,    struct List_11 *  ,    uint8_t  ) )add547 , .env =  env->envinst8 } );
    ( temp577.fun ( &temp577.env ,  (  l2564 ) ,  ( (  char_dash_u8578 ) ( ( (  nullchar579 ) ( ) ) ) ) ) );
    struct Slice_13  slice2568 = ( (  to_dash_slice368 ) ( ( * (  l2564 ) ) ) );
    return ( (struct StrView_18) { .f_contents = ( (struct Slice_13) { .f_ptr = ( (  slice2568 ) .f_ptr ) , .f_count = (  op_dash_sub580 ( ( (  slice2568 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  struct StrView_18   from_dash_str521 (   struct env87* env ,    struct StrView_18  s2571 ,    enum CAllocator_12  al2573 ) {
    struct envunion88  temp522 = ( (struct envunion88){ .fun = (  struct StrView_18  (*) (  struct env86*  ,    struct StrView_18  ,    enum CAllocator_12  ) )from_dash_str_dash_0523 , .env =  env->envinst86 } );
    return ( temp522.fun ( &temp522.env ,  (  s2571 ) ,  (  al2573 ) ) );
}

static  const char*   mk_dash_cstr518 (   struct env89* env ,    struct StrView_18  s2719 ,    enum CAllocator_12  al2721 ) {
    struct envunion90  temp520 = ( (struct envunion90){ .fun = (  struct StrView_18  (*) (  struct env87*  ,    struct StrView_18  ,    enum CAllocator_12  ) )from_dash_str521 , .env =  env->envinst87 } );
    return ( ( (  cast519 ) ( ( ( ( temp520.fun ( &temp520.env ,  (  s2719 ) ,  (  al2721 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

static  void *   cast_dash_ptr586 (    DIR * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of587 (    DIR *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  DIR *   zeroed584 (  ) {
    DIR *  temp585;
    DIR *  x642 = (  temp585 );
    ( ( memset ) ( ( (  cast_dash_ptr586 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of587 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  DIR *   null_dash_ptr583 (  ) {
    return ( (  zeroed584 ) ( ) );
}

static  bool   is_dash_ptr_dash_null582 (    DIR *  p652 ) {
    return ( (  p652 ) == ( (  null_dash_ptr583 ) ( ) ) );
}

static  struct Maybe_134   open_dash_dir_dash_os581 (    const char*  s3309 ) {
    DIR *  dir_dash_ptr3310 = ( ( opendir ) ( (  s3309 ) ) );
    if ( ( (  is_dash_ptr_dash_null582 ) ( (  dir_dash_ptr3310 ) ) ) ) {
        return ( (struct Maybe_134) { .tag = Maybe_134_None_t } );
    }
    return ( ( Maybe_134_Just ) ( ( (struct Dir_132) { .f_handle = (  dir_dash_ptr3310 ) } ) ) );
}

struct Slice_590 {
    enum Unit_10 *  f_ptr;
    size_t  f_count;
};

static  void *   cast_dash_ptr591 (    enum Unit_10 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_10   free589 (    enum CAllocator_12  dref2373 ,    struct Slice_590  slice2375 ) {
    if (!(  dref2373 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr591 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   free_dash_cstr588 (    const char*  s2724 ,    enum CAllocator_12  al2726 ) {
    ( (  free589 ) ( (  al2726 ) ,  ( (struct Slice_590) { .f_ptr = ( (enum Unit_10 * ) (  s2724 ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_10_Unit );
}

static  struct Maybe_134   open_dash_dir516 (   struct env126* env ,    struct StrView_18  s3313 ,    enum CAllocator_12  al3315 ) {
    struct envunion127  temp517 = ( (struct envunion127){ .fun = (  const char*  (*) (  struct env89*  ,    struct StrView_18  ,    enum CAllocator_12  ) )mk_dash_cstr518 , .env =  env->envinst89 } );
    const char*  cstr3316 = ( temp517.fun ( &temp517.env ,  (  s3313 ) ,  (  al3315 ) ) );
    struct Maybe_134  dir3317 = ( (  open_dash_dir_dash_os581 ) ( (  cstr3316 ) ) );
    ( (  free_dash_cstr588 ) ( (  cstr3316 ) ,  (  al3315 ) ) );
    return (  dir3317 );
}

static  struct Slice_22   to_dash_slice594 (    struct List_21  l2541 ) {
    struct DirEntry_23 *  ptr2542 = ( ( (  l2541 ) .f_elements ) .f_ptr );
    return ( (struct Slice_22) { .f_ptr = (  ptr2542 ) , .f_count = ( (  l2541 ) .f_count ) } );
}

static  void *   cast_dash_ptr603 (    struct DirEntry_23 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of604 (    struct DirEntry_23 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct DirEntry_23 *   zeroed601 (  ) {
    struct DirEntry_23 *  temp602;
    struct DirEntry_23 *  x642 = (  temp602 );
    ( ( memset ) ( ( (  cast_dash_ptr603 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of604 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  struct DirEntry_23 *   null_dash_ptr600 (  ) {
    return ( (  zeroed601 ) ( ) );
}

static  struct Slice_22   empty599 (  ) {
    return ( (struct Slice_22) { .f_ptr = ( (  null_dash_ptr600 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_21   mk598 (    enum CAllocator_12  al2436 ) {
    struct Slice_22  elements2437 = ( (  empty599 ) ( ) );
    return ( (struct List_21) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env608 {
    struct List_21 *  list2513;
    struct env19 envinst19;
};

struct envunion609 {
    enum Unit_10  (*fun) (  struct env608*  ,    struct DirEntry_23  );
    struct env608 env;
};

static  struct MapMaybe_67   into_dash_iter611 (    struct MapMaybe_67  self820 ) {
    return (  self820 );
}

struct Maybe_613 {
    enum {
        Maybe_613_None_t,
        Maybe_613_Just_t,
    } tag;
    union {
        struct {
            struct Dirent_78 *  field0;
        } Maybe_613_Just_s;
    } stuff;
};

static struct Maybe_613 Maybe_613_Just (  struct Dirent_78 *  field0 ) {
    return ( struct Maybe_613 ) { .tag = Maybe_613_Just_t, .stuff = { .Maybe_613_Just_s = { .field0 = field0 } } };
};

static  void *   cast_dash_ptr620 (    void * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of621 (    void *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  void *   zeroed618 (  ) {
    void *  temp619;
    void *  x642 = (  temp619 );
    ( ( memset ) ( ( (  cast_dash_ptr620 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of621 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  void *   null_dash_ptr617 (  ) {
    return ( (  zeroed618 ) ( ) );
}

static  bool   is_dash_ptr_dash_null616 (    void *  p652 ) {
    return ( (  p652 ) == ( (  null_dash_ptr617 ) ( ) ) );
}

static  struct Maybe_613   castptr_dash_ptr615 (    void*  cptr787 ) {
    if ( ( (  is_dash_ptr_dash_null616 ) ( ( ( (void * ) (  cptr787 ) ) ) ) ) ) {
        return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
    }
    return ( ( Maybe_613_Just ) ( ( (struct Dirent_78 * ) (  cptr787 ) ) ) );
}

static  struct Maybe_613   next614 (    struct DIRIter_68 *  self2936 ) {
    return ( (  castptr_dash_ptr615 ) ( ( ( readdir ) ( ( ( * (  self2936 ) ) .f_og ) ) ) ) );
}

static  struct Maybe_77   next612 (    struct MapMaybe_67 *  dref822 ) {
    while ( ( true ) ) {
        struct Maybe_613  dref825 = ( (  next614 ) ( ( & ( (* dref822 ) .field0 ) ) ) );
        if ( dref825.tag == Maybe_613_None_t ) {
            return ( (struct Maybe_77) { .tag = Maybe_77_None_t } );
        }
        else {
            if ( dref825.tag == Maybe_613_Just_t ) {
                struct envunion76  temp622 = ( (* dref822 ) .field1 );
                struct Maybe_77  dref827 = ( temp622.fun ( &temp622.env ,  ( dref825 .stuff .Maybe_613_Just_s .field0 ) ) );
                if ( dref827.tag == Maybe_77_None_t ) {
                }
                else {
                    if ( dref827.tag == Maybe_77_Just_t ) {
                        return ( ( Maybe_77_Just ) ( ( dref827 .stuff .Maybe_77_Just_s .field0 ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_10   for_dash_each607 (    struct MapMaybe_67  iterable1099 ,   struct envunion609  fun1101 ) {
    struct MapMaybe_67  temp610 = ( (  into_dash_iter611 ) ( (  iterable1099 ) ) );
    struct MapMaybe_67 *  it1102 = ( &temp610 );
    while ( ( true ) ) {
        struct Maybe_77  dref1103 = ( (  next612 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_77_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_77_Just_t ) {
                struct envunion609  temp623 = (  fun1101 );
                ( temp623.fun ( &temp623.env ,  ( dref1103 .stuff .Maybe_77_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

struct TypeSize_631 {
    size_t  f_size;
};

static  struct TypeSize_631   get_dash_typesize630 (  ) {
    struct DirEntry_23  temp632;
    return ( (struct TypeSize_631) { .f_size = ( sizeof( ( (  temp632 ) ) ) ) } );
}

static  struct DirEntry_23 *   cast_dash_ptr633 (    void *  p398 ) {
    return ( (struct DirEntry_23 * ) (  p398 ) );
}

static  struct Slice_22   allocate629 (    enum CAllocator_12  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize630 ) ( ) ) ) .f_size );
    struct DirEntry_23 *  ptr2371 = ( (  cast_dash_ptr633 ) ( ( ( malloc ) ( (  op_dash_mul555 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_22) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env634 {
    ;
    struct Slice_22  new_dash_slice2453;
    ;
};

struct Tuple2_636 {
    struct DirEntry_23  field0;
    int32_t  field1;
};

static struct Tuple2_636 Tuple2_636_Tuple2 (  struct DirEntry_23  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_636 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion635 {
    enum Unit_10  (*fun) (  struct env634*  ,    struct Tuple2_636  );
    struct env634 env;
};

static  struct DirEntry_23 *   offset_dash_ptr640 (    struct DirEntry_23 *  x377 ,    int64_t  count379 ) {
    struct DirEntry_23  temp641;
    return ( (struct DirEntry_23 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul416 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp641 ) ) ) ) ) ) ) ) );
}

static  struct DirEntry_23 *   get_dash_ptr639 (    struct Slice_22  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp371 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct DirEntry_23 *  elem_dash_ptr2173 = ( (  offset_dash_ptr640 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_10   set638 (    struct Slice_22  slice2187 ,    size_t  i2189 ,    struct DirEntry_23  x2191 ) {
    struct DirEntry_23 *  ep2192 = ( (  get_dash_ptr639 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam637 (   struct env634* env ,    struct Tuple2_636  dref2454 ) {
    return ( (  set638 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size349 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct SliceIter_644 {
    struct Slice_22  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_643 {
    struct SliceIter_644  f_left_dash_it;
    struct FromIter_564  f_right_dash_it;
};

static  struct Zip_643   into_dash_iter646 (    struct Zip_643  self936 ) {
    return (  self936 );
}

struct Maybe_647 {
    enum {
        Maybe_647_None_t,
        Maybe_647_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_636  field0;
        } Maybe_647_Just_s;
    } stuff;
};

static struct Maybe_647 Maybe_647_Just (  struct Tuple2_636  field0 ) {
    return ( struct Maybe_647 ) { .tag = Maybe_647_Just_t, .stuff = { .Maybe_647_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_77   next649 (    struct SliceIter_644 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp371 ( (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_77) { .tag = Maybe_77_None_t } );
    }
    struct DirEntry_23  elem2258 = ( * ( (  offset_dash_ptr640 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_77_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_647   next648 (    struct Zip_643 *  self939 ) {
    struct Zip_643  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_77  dref941 = ( (  next649 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_77_None_t ) {
            return ( (struct Maybe_647) { .tag = Maybe_647_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_77_Just_t ) {
                struct Maybe_220  dref943 = ( (  next569 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_220_None_t ) {
                    return ( (struct Maybe_647) { .tag = Maybe_647_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_220_Just_t ) {
                        ( (  next649 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next569 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_647_Just ) ( ( ( Tuple2_636_Tuple2 ) ( ( dref941 .stuff .Maybe_77_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_220_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_10   for_dash_each642 (    struct Zip_643  iterable1099 ,   struct envunion635  fun1101 ) {
    struct Zip_643  temp645 = ( (  into_dash_iter646 ) ( (  iterable1099 ) ) );
    struct Zip_643 *  it1102 = ( &temp645 );
    while ( ( true ) ) {
        struct Maybe_647  dref1103 = ( (  next648 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_647_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_647_Just_t ) {
                struct envunion635  temp650 = (  fun1101 );
                ( temp650.fun ( &temp650.env ,  ( dref1103 .stuff .Maybe_647_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  struct SliceIter_644   into_dash_iter652 (    struct Slice_22  self2250 ) {
    return ( (struct SliceIter_644) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_643   zip651 (    struct Slice_22  left947 ,    struct FromIter_564  right949 ) {
    struct SliceIter_644  left_dash_it950 = ( (  into_dash_iter652 ) ( (  left947 ) ) );
    struct FromIter_564  right_dash_it951 = ( (  into_dash_iter572 ) ( (  right949 ) ) );
    return ( (struct Zip_643) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  void *   cast_dash_ptr654 (    struct DirEntry_23 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_10   free653 (    enum CAllocator_12  dref2373 ,    struct Slice_22  slice2375 ) {
    if (!(  dref2373 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr654 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   grow_dash_if_dash_full628 (   struct env3* env ,    struct List_21 *  list2452 ) {
    if ( (  eq352 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate629 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq352 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_22  new_dash_slice2453 = ( (  allocate629 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul555 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env634 envinst634 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion635  fun2457 = ( (struct envunion635){ .fun = (  enum Unit_10  (*) (  struct env634*  ,    struct Tuple2_636  ) )lam637 , .env =  envinst634 } );
            ( (  for_dash_each642 ) ( ( (  zip651 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from573 ) ( (  from_dash_integral92 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free653 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   add626 (   struct env19* env ,    struct List_21 *  list2460 ,    struct DirEntry_23  elem2462 ) {
    struct envunion20  temp627 = ( (struct envunion20){ .fun = (  enum Unit_10  (*) (  struct env3*  ,    struct List_21 *  ) )grow_dash_if_dash_full628 , .env =  env->envinst3 } );
    ( temp627.fun ( &temp627.env ,  (  list2460 ) ) );
    ( (  set638 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add425 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam624 (   struct env608* env ,    struct DirEntry_23  x2517 ) {
    struct envunion62  temp625 = ( (struct envunion62){ .fun = (  enum Unit_10  (*) (  struct env19*  ,    struct List_21 *  ,    struct DirEntry_23  ) )add626 , .env =  env->envinst19 } );
    return ( temp625.fun ( &temp625.env ,  ( env->list2513 ) ,  (  x2517 ) ) );
}

static  enum Unit_10   add_dash_all606 (   struct env61* env ,    struct List_21 *  list2513 ,    struct MapMaybe_67  it2515 ) {
    struct env608 envinst608 = {
        .list2513 =  list2513 ,
        .envinst19 = env->envinst19 ,
    };
    ( (  for_dash_each607 ) ( (  it2515 ) ,  ( (struct envunion609){ .fun = (  enum Unit_10  (*) (  struct env608*  ,    struct DirEntry_23  ) )lam624 , .env =  envinst608 } ) ) );
    return ( Unit_10_Unit );
}

static  struct List_21   to_dash_list596 (   struct env65* env ,    struct MapMaybe_67  it2535 ,    enum CAllocator_12  al2537 ) {
    struct List_21  temp597 = ( (  mk598 ) ( (  al2537 ) ) );
    struct List_21 *  l2538 = ( &temp597 );
    struct envunion66  temp605 = ( (struct envunion66){ .fun = (  enum Unit_10  (*) (  struct env61*  ,    struct List_21 *  ,    struct MapMaybe_67  ) )add_dash_all606 , .env =  env->envinst61 } );
    ( temp605.fun ( &temp605.env ,  (  l2538 ) ,  (  it2535 ) ) );
    return ( * (  l2538 ) );
}

static  struct DIRIter_68   into_dash_iter656 (    struct DIRIter_68  self2939 ) {
    return (  self2939 );
}

static  struct MapMaybe_67   map_dash_maybe655 (    struct DIRIter_68  iterable831 ,   struct envunion76  fun833 ) {
    struct DIRIter_68  it834 = ( (  into_dash_iter656 ) ( (  iterable831 ) ) );
    return ( ( MapMaybe_67_MapMaybe ) ( (  it834 ) ,  (  fun833 ) ) );
}

static  struct DIRIter_68   consooming_dash_c_dash_dir_dash_iter657 (    DIR *  dir2942 ) {
    return ( (struct DIRIter_68) { .f_og = (  dir2942 ) } );
}

static  bool   eq660 (    int32_t  l115 ,    int32_t  r117 ) {
    return ( (  l115 ) == (  r117 ) );
}

static  bool   eq659 (    const char*  l2141 ,    const char*  r2143 ) {
    return (  eq660 ( ( ( strcmp ) ( (  l2141 ) ,  (  r2143 ) ) ) , (  from_dash_integral92 ( 0 ) ) ) );
}

static  const char*   from_dash_charlike661 (    uint8_t *  ptr77 ,    size_t  dref78 ) {
    return ( ( (const char* ) (  ptr77 ) ) );
}

struct ConstStrIter_669 {
    const char*  f_ogstr;
    size_t  f_i;
};

static  struct ConstStrIter_669   into_dash_iter670 (    struct ConstStrIter_669  self1665 ) {
    return (  self1665 );
}

static  struct ConstStrIter_669   into_dash_iter672 (    const char*  self1662 ) {
    return ( (struct ConstStrIter_669) { .f_ogstr = (  self1662 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_669   chars671 (    const char*  self1677 ) {
    return ( (  into_dash_iter672 ) ( (  self1677 ) ) );
}

static  uint8_t *   cast675 (    const char*  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  uint8_t   cast676 (    int32_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  struct Maybe_420   next674 (    struct ConstStrIter_669 *  self1668 ) {
    uint8_t *  char_dash_ptr1669 = ( ( (  cast675 ) ( ( ( * (  self1668 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1670 = ( (  offset_dash_ptr422 ) ( (  char_dash_ptr1669 ) ,  ( (  size_dash_i64418 ) ( ( ( * (  self1668 ) ) .f_i ) ) ) ) );
    if ( (  eq393 ( ( * (  optr1670 ) ) , ( (  cast676 ) ( (  from_dash_integral92 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
    }
    struct Char_101  char1671 = ( (  scan_dash_from_dash_mem408 ) ( (  optr1670 ) ) );
    (*  self1668 ) .f_i = (  op_dash_add425 ( ( ( * (  self1668 ) ) .f_i ) , ( (  char1671 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_420_Just ) ( (  char1671 ) ) );
}

static  struct StrView_18   from_dash_str_dash_0665 (   struct env71* env ,    const char*  s2561 ,    enum CAllocator_12  al2563 ) {
    struct List_11  temp666 = ( (  mk525 ) ( (  al2563 ) ) );
    struct List_11 *  l2564 = ( &temp666 );
    struct Array_389  temp667 = ( (  uninit_dash_buf431 ) ( ) );
    struct Array_389 *  buf2565 = ( &temp667 );
    struct ConstStrIter_669  temp668 =  into_dash_iter670 ( ( (  chars671 ) ( (  s2561 ) ) ) );
    while (true) {
        struct Maybe_420  __cond673 =  next674 (&temp668);
        if (  __cond673 .tag == 0 ) {
            break;
        }
        struct Char_101  c2567 =  __cond673 .stuff .Maybe_420_Just_s .field0;
        struct envunion73  temp677 = ( (struct envunion73){ .fun = (  enum Unit_10  (*) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  ) )add_dash_all536 , .env =  env->envinst59 } );
        ( temp677.fun ( &temp677.env ,  (  l2564 ) ,  ( (  as_dash_u8_dash_slice576 ) ( (  c2567 ) ,  (  buf2565 ) ) ) ) );
    }
    struct envunion72  temp678 = ( (struct envunion72){ .fun = (  enum Unit_10  (*) (  struct env8*  ,    struct List_11 *  ,    uint8_t  ) )add547 , .env =  env->envinst8 } );
    ( temp678.fun ( &temp678.env ,  (  l2564 ) ,  ( (  char_dash_u8578 ) ( ( (  nullchar579 ) ( ) ) ) ) ) );
    struct Slice_13  slice2568 = ( (  to_dash_slice368 ) ( ( * (  l2564 ) ) ) );
    return ( (struct StrView_18) { .f_contents = ( (struct Slice_13) { .f_ptr = ( (  slice2568 ) .f_ptr ) , .f_count = (  op_dash_sub580 ( ( (  slice2568 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  struct StrView_18   from_dash_str663 (   struct env70* env ,    const char*  s2571 ,    enum CAllocator_12  al2573 ) {
    struct envunion74  temp664 = ( (struct envunion74){ .fun = (  struct StrView_18  (*) (  struct env71*  ,    const char*  ,    enum CAllocator_12  ) )from_dash_str_dash_0665 , .env =  env->envinst71 } );
    return ( temp664.fun ( &temp664.env ,  (  s2571 ) ,  (  al2573 ) ) );
}

static  struct Maybe_77   lam658 (   struct env69* env ,    struct Dirent_78 *  dirent3327 ) {
    const char*  cstr_dash_name3328 = ( ( (const char* ) ( & ( ( * (  dirent3327 ) ) .f_d_dash_name ) ) ) );
    if ( ( (  eq659 ( (  cstr_dash_name3328 ) , ( (  from_dash_charlike661 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) || (  eq659 ( (  cstr_dash_name3328 ) , ( (  from_dash_string93 ) ( ( (uint8_t*)".." ) ,  ( 2 ) ) ) ) ) ) ) {
        return ( (struct Maybe_77) { .tag = Maybe_77_None_t } );
    }
    struct envunion75  temp662 = ( (struct envunion75){ .fun = (  struct StrView_18  (*) (  struct env70*  ,    const char*  ,    enum CAllocator_12  ) )from_dash_str663 , .env =  env->envinst70 } );
    struct StrView_18  name3329 = ( temp662.fun ( &temp662.env ,  (  cstr_dash_name3328 ) ,  ( env->al3325 ) ) );
    struct Maybe_24  type3331 = ( {  uint8_t  dref3330 = ( ( * (  dirent3327 ) ) .f_d_dash_type ) ;  eq393 (  dref3330 ,  from_dash_integral397 ( 4 ) ) ? ( ( Maybe_24_Just ) ( ( DirType_25_Directory ) ) ) :  eq393 (  dref3330 ,  from_dash_integral397 ( 8 ) ) ? ( ( Maybe_24_Just ) ( ( DirType_25_File ) ) ) : ( (struct Maybe_24) { .tag = Maybe_24_None_t } ) ; } );
    return ( ( Maybe_77_Just ) ( ( (struct DirEntry_23) { .f_name = (  name3329 ) , .f_type = (  type3331 ) } ) ) );
}

static  struct Slice_22   dir_dash_entries593 (   struct env128* env ,    struct Dir_132  dir3323 ,    enum CAllocator_12  al3325 ) {
    struct envunion129  temp595 = ( (struct envunion129){ .fun = (  struct List_21  (*) (  struct env65*  ,    struct MapMaybe_67  ,    enum CAllocator_12  ) )to_dash_list596 , .env =  env->envinst65 } );
    struct env69 envinst69 = {
        .al3325 =  al3325 ,
        .envinst70 = env->envinst70 ,
    };
    return ( (  to_dash_slice594 ) ( ( temp595.fun ( &temp595.env ,  ( (  map_dash_maybe655 ) ( ( (  consooming_dash_c_dash_dir_dash_iter657 ) ( ( (  dir3323 ) .f_handle ) ) ) ,  ( (struct envunion76){ .fun = (  struct Maybe_77  (*) (  struct env69*  ,    struct Dirent_78 *  ) )lam658 , .env =  envinst69 } ) ) ) ,  (  al3325 ) ) ) ) );
}

static  enum Unit_10   close_dash_dir679 (    struct Dir_132  dir3320 ) {
    ( ( closedir ) ( ( (  dir3320 ) .f_handle ) ) );
    return ( Unit_10_Unit );
}

static  struct Maybe_305   list_dash_dir514 (   struct env130* env ,    struct StrView_18  dirname3341 ,    enum CAllocator_12  al3343 ) {
    struct envunion133  temp515 = ( (struct envunion133){ .fun = (  struct Maybe_134  (*) (  struct env126*  ,    struct StrView_18  ,    enum CAllocator_12  ) )open_dash_dir516 , .env =  env->envinst126 } );
    struct Maybe_134  dref3344 = ( temp515.fun ( &temp515.env ,  (  dirname3341 ) ,  (  al3343 ) ) );
    if ( dref3344.tag == Maybe_134_None_t ) {
        return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
    }
    else {
        if ( dref3344.tag == Maybe_134_Just_t ) {
            struct envunion131  temp592 = ( (struct envunion131){ .fun = (  struct Slice_22  (*) (  struct env128*  ,    struct Dir_132  ,    enum CAllocator_12  ) )dir_dash_entries593 , .env =  env->envinst128 } );
            struct Slice_22  entries3346 = ( temp592.fun ( &temp592.env ,  ( dref3344 .stuff .Maybe_134_Just_s .field0 ) ,  (  al3343 ) ) );
            ( (  close_dash_dir679 ) ( ( dref3344 .stuff .Maybe_134_Just_s .field0 ) ) );
            return ( ( Maybe_305_Just ) ( (  entries3346 ) ) );
        }
    }
}

struct Zip_685 {
    struct SliceIter_540  f_left_dash_it;
    struct SliceIter_540  f_right_dash_it;
};

struct Tuple2_686 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_686 Tuple2_686_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_686 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env688 {
    bool (*  fun1151 )(    struct Tuple2_686  );
};

struct envunion689 {
    bool  (*fun) (  struct env688*  ,    struct Tuple2_686  ,    bool  );
    struct env688 env;
};

static  struct Zip_685   into_dash_iter690 (    struct Zip_685  self936 ) {
    return (  self936 );
}

struct Maybe_691 {
    enum {
        Maybe_691_None_t,
        Maybe_691_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_686  field0;
        } Maybe_691_Just_s;
    } stuff;
};

static struct Maybe_691 Maybe_691_Just (  struct Tuple2_686  field0 ) {
    return ( struct Maybe_691 ) { .tag = Maybe_691_Just_t, .stuff = { .Maybe_691_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_691   next692 (    struct Zip_685 *  self939 ) {
    struct Zip_685  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_111  dref941 = ( (  next543 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_111_None_t ) {
            return ( (struct Maybe_691) { .tag = Maybe_691_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_111_Just_t ) {
                struct Maybe_111  dref943 = ( (  next543 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_111_None_t ) {
                    return ( (struct Maybe_691) { .tag = Maybe_691_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_111_Just_t ) {
                        ( (  next543 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next543 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_691_Just ) ( ( ( Tuple2_686_Tuple2 ) ( ( dref941 .stuff .Maybe_111_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_111_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce687 (    struct Zip_685  iterable1118 ,    bool  base1120 ,   struct envunion689  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct Zip_685  it1124 = ( (  into_dash_iter690 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_691  dref1125 = ( (  next692 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_691_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_691_Just_t ) {
                struct envunion689  temp693 = (  fun1122 );
                x1123 = ( temp693.fun ( &temp693.env ,  ( dref1125 .stuff .Maybe_691_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp694 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp694);
    abort ( );
    ( Unit_10_Unit );
    bool  temp695;
    return (  temp695 );
}

static  bool   lam696 (   struct env688* env ,    struct Tuple2_686  e1153 ,    bool  x1155 ) {
    return ( ( ( env->fun1151 ) ( (  e1153 ) ) ) && (  x1155 ) );
}

static  bool   all684 (    struct Zip_685  it1149 ,    bool (*  fun1151 )(    struct Tuple2_686  ) ) {
    struct env688 envinst688 = {
        .fun1151 =  fun1151 ,
    };
    return ( (  reduce687 ) ( (  it1149 ) ,  ( true ) ,  ( (struct envunion689){ .fun = (  bool  (*) (  struct env688*  ,    struct Tuple2_686  ,    bool  ) )lam696 , .env =  envinst688 } ) ) );
}

static  struct Zip_685   zip697 (    struct Slice_13  left947 ,    struct Slice_13  right949 ) {
    struct SliceIter_540  left_dash_it950 = ( (  into_dash_iter542 ) ( (  left947 ) ) );
    struct SliceIter_540  right_dash_it951 = ( (  into_dash_iter542 ) ( (  right949 ) ) );
    return ( (struct Zip_685) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  bool   lam698 (    struct Tuple2_686  dref2290 ) {
    return (  eq393 ( ( dref2290 .field0 ) , ( dref2290 .field1 ) ) );
}

static  bool   eq683 (    struct Slice_13  l2287 ,    struct Slice_13  r2289 ) {
    if ( ( !  eq352 ( ( (  l2287 ) .f_count ) , ( (  r2289 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all684 ) ( ( (  zip697 ) ( (  l2287 ) ,  (  r2289 ) ) ) ,  (  lam698 ) ) );
}

static  bool   eq682 (    struct StrView_18  l2679 ,    struct StrView_18  r2681 ) {
    return (  eq683 ( ( (  l2679 ) .f_contents ) , ( (  r2681 ) .f_contents ) ) );
}

static  struct StrView_18   from_dash_charlike699 (    uint8_t *  ptr81 ,    size_t  count83 ) {
    return ( (struct StrView_18) { .f_contents = ( (struct Slice_13) { .f_ptr = (  ptr81 ) , .f_count = (  count83 ) } ) } );
}

struct TypeSize_706 {
    size_t  f_size;
};

static  struct TypeSize_706   get_dash_typesize705 (  ) {
    struct StrView_18  temp707;
    return ( (struct TypeSize_706) { .f_size = ( sizeof( ( (  temp707 ) ) ) ) } );
}

static  struct StrView_18 *   cast_dash_ptr708 (    void *  p398 ) {
    return ( (struct StrView_18 * ) (  p398 ) );
}

static  struct Slice_17   allocate704 (    enum CAllocator_12  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize705 ) ( ) ) ) .f_size );
    struct StrView_18 *  ptr2371 = ( (  cast_dash_ptr708 ) ( ( ( malloc ) ( (  op_dash_mul555 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_17) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env709 {
    ;
    struct Slice_17  new_dash_slice2453;
    ;
};

struct Tuple2_711 {
    struct StrView_18  field0;
    int32_t  field1;
};

static struct Tuple2_711 Tuple2_711_Tuple2 (  struct StrView_18  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_711 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion710 {
    enum Unit_10  (*fun) (  struct env709*  ,    struct Tuple2_711  );
    struct env709 env;
};

static  struct StrView_18 *   offset_dash_ptr715 (    struct StrView_18 *  x377 ,    int64_t  count379 ) {
    struct StrView_18  temp716;
    return ( (struct StrView_18 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul416 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp716 ) ) ) ) ) ) ) ) );
}

static  struct StrView_18 *   get_dash_ptr714 (    struct Slice_17  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp371 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_18 *  elem_dash_ptr2173 = ( (  offset_dash_ptr715 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_10   set713 (    struct Slice_17  slice2187 ,    size_t  i2189 ,    struct StrView_18  x2191 ) {
    struct StrView_18 *  ep2192 = ( (  get_dash_ptr714 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam712 (   struct env709* env ,    struct Tuple2_711  dref2454 ) {
    return ( (  set713 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size349 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct SliceIter_719 {
    struct Slice_17  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_718 {
    struct SliceIter_719  f_left_dash_it;
    struct FromIter_564  f_right_dash_it;
};

static  struct Zip_718   into_dash_iter721 (    struct Zip_718  self936 ) {
    return (  self936 );
}

struct Maybe_722 {
    enum {
        Maybe_722_None_t,
        Maybe_722_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_711  field0;
        } Maybe_722_Just_s;
    } stuff;
};

static struct Maybe_722 Maybe_722_Just (  struct Tuple2_711  field0 ) {
    return ( struct Maybe_722 ) { .tag = Maybe_722_Just_t, .stuff = { .Maybe_722_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_125   next724 (    struct SliceIter_719 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp371 ( (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    struct StrView_18  elem2258 = ( * ( (  offset_dash_ptr715 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_125_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_722   next723 (    struct Zip_718 *  self939 ) {
    struct Zip_718  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_125  dref941 = ( (  next724 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_125_None_t ) {
            return ( (struct Maybe_722) { .tag = Maybe_722_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_125_Just_t ) {
                struct Maybe_220  dref943 = ( (  next569 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_220_None_t ) {
                    return ( (struct Maybe_722) { .tag = Maybe_722_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_220_Just_t ) {
                        ( (  next724 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next569 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_722_Just ) ( ( ( Tuple2_711_Tuple2 ) ( ( dref941 .stuff .Maybe_125_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_220_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_10   for_dash_each717 (    struct Zip_718  iterable1099 ,   struct envunion710  fun1101 ) {
    struct Zip_718  temp720 = ( (  into_dash_iter721 ) ( (  iterable1099 ) ) );
    struct Zip_718 *  it1102 = ( &temp720 );
    while ( ( true ) ) {
        struct Maybe_722  dref1103 = ( (  next723 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_722_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_722_Just_t ) {
                struct envunion710  temp725 = (  fun1101 );
                ( temp725.fun ( &temp725.env ,  ( dref1103 .stuff .Maybe_722_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  struct SliceIter_719   into_dash_iter727 (    struct Slice_17  self2250 ) {
    return ( (struct SliceIter_719) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_718   zip726 (    struct Slice_17  left947 ,    struct FromIter_564  right949 ) {
    struct SliceIter_719  left_dash_it950 = ( (  into_dash_iter727 ) ( (  left947 ) ) );
    struct FromIter_564  right_dash_it951 = ( (  into_dash_iter572 ) ( (  right949 ) ) );
    return ( (struct Zip_718) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  void *   cast_dash_ptr729 (    struct StrView_18 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_10   free728 (    enum CAllocator_12  dref2373 ,    struct Slice_17  slice2375 ) {
    if (!(  dref2373 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr729 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   grow_dash_if_dash_full703 (   struct env2* env ,    struct List_16 *  list2452 ) {
    if ( (  eq352 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate704 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq352 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_17  new_dash_slice2453 = ( (  allocate704 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul555 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env709 envinst709 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion710  fun2457 = ( (struct envunion710){ .fun = (  enum Unit_10  (*) (  struct env709*  ,    struct Tuple2_711  ) )lam712 , .env =  envinst709 } );
            ( (  for_dash_each717 ) ( ( (  zip726 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from573 ) ( (  from_dash_integral92 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free728 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   add701 (   struct env14* env ,    struct List_16 *  list2460 ,    struct StrView_18  elem2462 ) {
    struct envunion15  temp702 = ( (struct envunion15){ .fun = (  enum Unit_10  (*) (  struct env2*  ,    struct List_16 *  ) )grow_dash_if_dash_full703 , .env =  env->envinst2 } );
    ( temp702.fun ( &temp702.env ,  (  list2460 ) ) );
    ( (  set713 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add425 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_10_Unit );
}

struct StrConcat_733 {
    struct StrConcat_374  field0;
    struct StrView_18  field1;
};

static struct StrConcat_733 StrConcat_733_StrConcat (  struct StrConcat_374  field0 ,  struct StrView_18  field1 ) {
    return ( struct StrConcat_733 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_736 {
    struct StrView_18  field0;
    struct StrConcat_733  field1;
};

static struct StrConcat_736 StrConcat_736_StrConcat (  struct StrView_18  field0 ,  struct StrConcat_733  field1 ) {
    return ( struct StrConcat_736 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_735 {
    struct StrConcat_736  field0;
    struct Char_101  field1;
};

static struct StrConcat_735 StrConcat_735_StrConcat (  struct StrConcat_736  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_735 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_10   print_dash_str738 (    struct StrConcat_733  self1302 ) {
    struct StrConcat_733  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str382 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str379 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str737 (    struct StrConcat_736  self1302 ) {
    struct StrConcat_736  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str379 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str738 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str734 (    struct StrConcat_735  self1302 ) {
    struct StrConcat_735  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str737 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str386 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   panic732 (    struct StrConcat_733  errmsg1343 ) {
    ( (  print_dash_str734 ) ( ( ( StrConcat_735_StrConcat ) ( ( ( StrConcat_736_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_10_Unit );
}

struct env740 {
    struct Slice_13  dest2281;
    ;
    ;
};

struct envunion741 {
    enum Unit_10  (*fun) (  struct env740*  ,    struct Tuple2_558  );
    struct env740 env;
};

static  enum Unit_10   for_dash_each739 (    struct Zip_563  iterable1099 ,   struct envunion741  fun1101 ) {
    struct Zip_563  temp742 = ( (  into_dash_iter566 ) ( (  iterable1099 ) ) );
    struct Zip_563 *  it1102 = ( &temp742 );
    while ( ( true ) ) {
        struct Maybe_567  dref1103 = ( (  next568 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_567_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_567_Just_t ) {
                struct envunion741  temp743 = (  fun1101 );
                ( temp743.fun ( &temp743.env ,  ( dref1103 .stuff .Maybe_567_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam744 (   struct env740* env ,    struct Tuple2_558  dref2282 ) {
    return ( (  set560 ) ( ( env->dest2281 ) ,  ( (  i32_dash_size349 ) ( ( dref2282 .field1 ) ) ) ,  ( dref2282 .field0 ) ) );
}

static  enum Unit_10   copy_dash_to731 (    struct Slice_13  src2279 ,    struct Slice_13  dest2281 ) {
    if ( (  cmp371 ( ( (  src2279 ) .f_count ) , ( (  dest2281 ) .f_count ) ) == 2 ) ) {
        ( (  panic732 ) ( ( ( StrConcat_733_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2279 ) .f_count ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2281 ) .f_count ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env740 envinst740 = {
        .dest2281 =  dest2281 ,
    };
    ( (  for_dash_each739 ) ( ( (  zip571 ) ( (  src2279 ) ,  ( (  from573 ) ( (  from_dash_integral92 ( 0 ) ) ) ) ) ) ,  ( (struct envunion741){ .fun = (  enum Unit_10  (*) (  struct env740*  ,    struct Tuple2_558  ) )lam744 , .env =  envinst740 } ) ) );
    return ( Unit_10_Unit );
}

static  struct StrView_18   clone_dash_0730 (    struct StrView_18  s2582 ,    enum CAllocator_12  al2584 ) {
    size_t  cnt2585 = ( ( (  s2582 ) .f_contents ) .f_count );
    struct Slice_13  nus2586 = ( (  allocate550 ) ( (  al2584 ) ,  (  op_dash_add425 ( (  cnt2585 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to731 ) ( ( (  s2582 ) .f_contents ) ,  (  nus2586 ) ) );
    ( (  set560 ) ( (  nus2586 ) ,  (  cnt2585 ) ,  ( (  char_dash_u8578 ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_18) { .f_contents = ( (struct Slice_13) { .f_ptr = ( (  nus2586 ) .f_ptr ) , .f_count = (  cnt2585 ) } ) } );
}

struct envunion746 {
    enum Unit_10  (*fun) (  struct env14*  ,    struct List_16 *  ,    struct StrView_18  );
    struct env14 env;
};

struct envunion748 {
    struct StrView_18  (*fun) (  struct env85*  ,    struct StrConcat_308  ,    enum CAllocator_12  );
    struct env85 env;
};

enum EmptyIter_756 {
    EmptyIter_756_EmptyIter,
};

struct AppendIter_755 {
    enum EmptyIter_756  f_it;
    struct Char_101  f_elem;
    bool  f_appended;
};

struct StrConcatIter_754 {
    struct StrViewIter_362  f_left;
    struct AppendIter_755  f_right;
};

struct StrConcatIter_753 {
    struct StrConcatIter_754  f_left;
    struct StrViewIter_362  f_right;
};

static  struct StrConcatIter_753   into_dash_iter757 (    struct StrConcatIter_753  self1290 ) {
    return (  self1290 );
}

static  enum EmptyIter_756   into_dash_iter766 (    enum EmptyIter_756  self798 ) {
    return (  self798 );
}

static  struct AppendIter_755   append765 (    enum EmptyIter_756  it1031 ,    struct Char_101  e1033 ) {
    return ( (struct AppendIter_755) { .f_it = ( (  into_dash_iter766 ) ( (  it1031 ) ) ) , .f_elem = (  e1033 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_755   cons764 (    enum EmptyIter_756  it1036 ,    struct Char_101  e1038 ) {
    return ( (  append765 ) ( (  it1036 ) ,  (  e1038 ) ) );
}

static  enum EmptyIter_756   nil767 (  ) {
    return ( EmptyIter_756_EmptyIter );
}

static  struct AppendIter_755   single763 (    struct Char_101  e1041 ) {
    return ( (  cons764 ) ( ( (  nil767 ) ( ) ) ,  (  e1041 ) ) );
}

static  struct AppendIter_755   chars762 (    struct Char_101  self1286 ) {
    return ( (  single763 ) ( (  self1286 ) ) );
}

static  struct StrConcatIter_754   into_dash_iter761 (    struct StrConcat_108  dref1297 ) {
    return ( (struct StrConcatIter_754) { .f_left = ( (  chars364 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars762 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_754   chars760 (    struct StrConcat_108  self1308 ) {
    return ( (  into_dash_iter761 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_753   into_dash_iter759 (    struct StrConcat_308  dref1297 ) {
    return ( (struct StrConcatIter_753) { .f_left = ( (  chars760 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars364 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_753   chars758 (    struct StrConcat_308  self1308 ) {
    return ( (  into_dash_iter759 ) ( (  self1308 ) ) );
}

static  struct Maybe_420   next772 (    enum EmptyIter_756 *  dref800 ) {
    return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
}

static  struct Maybe_420   next771 (    struct AppendIter_755 *  self1047 ) {
    struct Maybe_420  dref1048 = ( (  next772 ) ( ( & ( ( * (  self1047 ) ) .f_it ) ) ) );
    if ( dref1048.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1048 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1048.tag == Maybe_420_None_t ) {
            if ( ( ! ( ( * (  self1047 ) ) .f_appended ) ) ) {
                (*  self1047 ) .f_appended = ( true );
                return ( ( Maybe_420_Just ) ( ( ( * (  self1047 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

static  struct Maybe_420   next770 (    struct StrConcatIter_754 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next421 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next771 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_420   next769 (    struct StrConcatIter_753 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next770 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next421 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct StrView_18   from_dash_str_dash_0749 (   struct env85* env ,    struct StrConcat_308  s2561 ,    enum CAllocator_12  al2563 ) {
    struct List_11  temp750 = ( (  mk525 ) ( (  al2563 ) ) );
    struct List_11 *  l2564 = ( &temp750 );
    struct Array_389  temp751 = ( (  uninit_dash_buf431 ) ( ) );
    struct Array_389 *  buf2565 = ( &temp751 );
    struct StrConcatIter_753  temp752 =  into_dash_iter757 ( ( (  chars758 ) ( (  s2561 ) ) ) );
    while (true) {
        struct Maybe_420  __cond768 =  next769 (&temp752);
        if (  __cond768 .tag == 0 ) {
            break;
        }
        struct Char_101  c2567 =  __cond768 .stuff .Maybe_420_Just_s .field0;
        struct envunion73  temp773 = ( (struct envunion73){ .fun = (  enum Unit_10  (*) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  ) )add_dash_all536 , .env =  env->envinst59 } );
        ( temp773.fun ( &temp773.env ,  (  l2564 ) ,  ( (  as_dash_u8_dash_slice576 ) ( (  c2567 ) ,  (  buf2565 ) ) ) ) );
    }
    struct envunion72  temp774 = ( (struct envunion72){ .fun = (  enum Unit_10  (*) (  struct env8*  ,    struct List_11 *  ,    uint8_t  ) )add547 , .env =  env->envinst8 } );
    ( temp774.fun ( &temp774.env ,  (  l2564 ) ,  ( (  char_dash_u8578 ) ( ( (  nullchar579 ) ( ) ) ) ) ) );
    struct Slice_13  slice2568 = ( (  to_dash_slice368 ) ( ( * (  l2564 ) ) ) );
    return ( (struct StrView_18) { .f_contents = ( (struct Slice_13) { .f_ptr = ( (  slice2568 ) .f_ptr ) , .f_count = (  op_dash_sub580 ( ( (  slice2568 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

struct Tuple2_778 {
    struct Maybe_420  field0;
    struct Maybe_420  field1;
};

static struct Tuple2_778 Tuple2_778_Tuple2 (  struct Maybe_420  field0 ,  struct Maybe_420  field1 ) {
    return ( struct Tuple2_778 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   begins_dash_with775 (    struct StrView_18  s1947 ,    struct Char_101  beg1949 ) {
    struct StrViewIter_362  temp776 = ( (  chars364 ) ( (  s1947 ) ) );
    struct StrViewIter_362 *  scs1950 = ( &temp776 );
    struct AppendIter_755  temp777 = ( (  chars762 ) ( (  beg1949 ) ) );
    struct AppendIter_755 *  begcs1951 = ( &temp777 );
    while ( ( true ) ) {
        struct Tuple2_778  dref1952 = ( ( Tuple2_778_Tuple2 ) ( ( (  next421 ) ( (  scs1950 ) ) ) ,  ( (  next771 ) ( (  begcs1951 ) ) ) ) );
        if ( dref1952 .field0.tag == Maybe_420_Just_t && dref1952 .field1.tag == Maybe_420_Just_t ) {
            if ( ( !  eq429 ( ( dref1952 .field0 .stuff .Maybe_420_Just_s .field0 ) , ( dref1952 .field1 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else {
            if ( dref1952 .field0.tag == Maybe_420_None_t && dref1952 .field1.tag == Maybe_420_Just_t ) {
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

struct envunion781 {
    enum Unit_10  (*fun) (  struct env509*  ,    struct StrView_18  );
    struct env509 env;
};

static  enum Unit_10   free782 (    struct StrView_18  s2597 ,    enum CAllocator_12  al2599 ) {
    ( (  free574 ) ( (  al2599 ) ,  ( (struct Slice_13) { .f_ptr = ( ( (  s2597 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   free_dash_dir_dash_entries783 (    struct Slice_22  dir_dash_entries3334 ,    enum CAllocator_12  al3336 ) {
    struct SliceIter_644  temp784 =  into_dash_iter652 ( (  dir_dash_entries3334 ) );
    while (true) {
        struct Maybe_77  __cond785 =  next649 (&temp784);
        if (  __cond785 .tag == 0 ) {
            break;
        }
        struct DirEntry_23  entry3338 =  __cond785 .stuff .Maybe_77_Just_s .field0;
        ( (  free782 ) ( ( (  entry3338 ) .f_name ) ,  (  al3336 ) ) );
    }
    ( (  free653 ) ( (  al3336 ) ,  (  dir_dash_entries3334 ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   recurse_dash_into_dash_dir512 (   struct env509* env ,    struct StrView_18  dirname4849 ) {
    struct envunion304  temp513 = ( (struct envunion304){ .fun = (  struct Maybe_305  (*) (  struct env130*  ,    struct StrView_18  ,    enum CAllocator_12  ) )list_dash_dir514 , .env =  env->envinst130 } );
    struct Maybe_305  entries4850 = ( temp513.fun ( &temp513.env ,  (  dirname4849 ) ,  ( env->al4845 ) ) );
    struct Maybe_305  dref4851 = (  entries4850 );
    if ( dref4851.tag == Maybe_305_None_t ) {
        return ( Unit_10_Unit );
    }
    else {
        if ( dref4851.tag == Maybe_305_Just_t ) {
            struct SliceIter_644  temp680 =  into_dash_iter652 ( ( dref4851 .stuff .Maybe_305_Just_s .field0 ) );
            while (true) {
                struct Maybe_77  __cond681 =  next649 (&temp680);
                if (  __cond681 .tag == 0 ) {
                    break;
                }
                struct DirEntry_23  entry4854 =  __cond681 .stuff .Maybe_77_Just_s .field0;
                struct Maybe_24  dref4855 = ( (  entry4854 ) .f_type );
                if ( dref4855.tag == Maybe_24_Just_t &&  dref4855 .stuff .Maybe_24_Just_s .field0 == DirType_25_File ) {
                    if ( (  eq682 ( (  dirname4849 ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) {
                        struct envunion306  temp700 = ( (struct envunion306){ .fun = (  enum Unit_10  (*) (  struct env14*  ,    struct List_16 *  ,    struct StrView_18  ) )add701 , .env =  env->envinst14 } );
                        ( temp700.fun ( &temp700.env ,  ( env->files4846 ) ,  ( (  clone_dash_0730 ) ( ( (  entry4854 ) .f_name ) ,  ( env->al4845 ) ) ) ) );
                    } else {
                        struct envunion746  temp745 = ( (struct envunion746){ .fun = (  enum Unit_10  (*) (  struct env14*  ,    struct List_16 *  ,    struct StrView_18  ) )add701 , .env =  env->envinst14 } );
                        struct envunion748  temp747 = ( (struct envunion748){ .fun = (  struct StrView_18  (*) (  struct env85*  ,    struct StrConcat_308  ,    enum CAllocator_12  ) )from_dash_str_dash_0749 , .env =  env->envinst85 } );
                        ( temp745.fun ( &temp745.env ,  ( env->files4846 ) ,  ( temp747.fun ( &temp747.env ,  ( ( StrConcat_308_StrConcat ) ( ( ( StrConcat_108_StrConcat ) ( (  dirname4849 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"/" ) ,  ( 1 ) ) ) ) ) ,  ( (  entry4854 ) .f_name ) ) ) ,  ( env->al4845 ) ) ) ) );
                    }
                }
                else {
                    if ( dref4855.tag == Maybe_24_Just_t &&  dref4855 .stuff .Maybe_24_Just_s .field0 == DirType_25_Directory ) {
                        if ( ( ! ( (  begins_dash_with775 ) ( ( (  entry4854 ) .f_name ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) ) {
                            struct envunion307  temp779 = ( (struct envunion307){ .fun = (  struct StrView_18  (*) (  struct env85*  ,    struct StrConcat_308  ,    enum CAllocator_12  ) )from_dash_str_dash_0749 , .env =  env->envinst85 } );
                            struct StrView_18  full_dash_name4856 = ( (  eq682 ( (  dirname4849 ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ? ( (  clone_dash_0730 ) ( ( (  entry4854 ) .f_name ) ,  ( env->al4845 ) ) ) : ( temp779.fun ( &temp779.env ,  ( ( StrConcat_308_StrConcat ) ( ( ( StrConcat_108_StrConcat ) ( (  dirname4849 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"/" ) ,  ( 1 ) ) ) ) ) ,  ( (  entry4854 ) .f_name ) ) ) ,  ( env->al4845 ) ) ) );
                            struct envunion781  temp780 = ( (struct envunion781){ .fun = (  enum Unit_10  (*) (  struct env509*  ,    struct StrView_18  ) )recurse_dash_into_dash_dir512 , .env =  *env } );
                            ( temp780.fun ( &temp780.env ,  (  full_dash_name4856 ) ) );
                            ( (  free782 ) ( (  full_dash_name4856 ) ,  ( env->al4845 ) ) );
                        }
                    }
                }
            }
            ( (  free_dash_dir_dash_entries783 ) ( ( dref4851 .stuff .Maybe_305_Just_s .field0 ) ,  ( env->al4845 ) ) );
        }
    }
    return ( Unit_10_Unit );
}

static  struct Slice_17   to_dash_slice786 (    struct List_16  l2541 ) {
    struct StrView_18 *  ptr2542 = ( ( (  l2541 ) .f_elements ) .f_ptr );
    return ( (struct Slice_17) { .f_ptr = (  ptr2542 ) , .f_count = ( (  l2541 ) .f_count ) } );
}

static  struct Slice_17   get_dash_files_dash_in_dash_dir500 (   struct env303* env ,    struct StrView_18  dirname4843 ,    enum CAllocator_12  al4845 ) {
    struct List_16  temp501 = ( (  mk502 ) ( (  al4845 ) ) );
    struct List_16 *  files4846 = ( &temp501 );
    struct env509 envinst509 = {
        .envinst130 = env->envinst130 ,
        .al4845 =  al4845 ,
        .envinst14 = env->envinst14 ,
        .envinst85 = env->envinst85 ,
        .files4846 =  files4846 ,
    };
    struct envunion511  temp510 = ( (struct envunion511){ .fun = (  enum Unit_10  (*) (  struct env509*  ,    struct StrView_18  ) )recurse_dash_into_dash_dir512 , .env =  envinst509 } );
    ( temp510.fun ( &temp510.env ,  (  dirname4843 ) ) );
    return ( (  to_dash_slice786 ) ( ( * (  files4846 ) ) ) );
}

struct TypeSize_789 {
    size_t  f_size;
};

static  struct TypeSize_789   get_dash_typesize788 (  ) {
    struct Tuple2_338  temp790;
    return ( (struct TypeSize_789) { .f_size = ( sizeof( ( (  temp790 ) ) ) ) } );
}

static  struct Tuple2_338 *   cast_dash_ptr791 (    void *  p398 ) {
    return ( (struct Tuple2_338 * ) (  p398 ) );
}

static  struct Slice_337   allocate787 (    enum CAllocator_12  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize788 ) ( ) ) ) .f_size );
    struct Tuple2_338 *  ptr2371 = ( (  cast_dash_ptr791 ) ( ( ( malloc ) ( (  op_dash_mul555 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_337) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct SliceAddressIter_794 {
    struct Slice_337  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_793 {
    struct SliceAddressIter_794  f_left_dash_it;
    struct SliceIter_719  f_right_dash_it;
};

static  struct Zip_793   into_dash_iter795 (    struct Zip_793  self936 ) {
    return (  self936 );
}

static  struct SliceAddressIter_794   into_dash_iter797 (    struct SliceAddressIter_794  self2271 ) {
    return (  self2271 );
}

static  struct Zip_793   zip796 (    struct SliceAddressIter_794  left947 ,    struct Slice_17  right949 ) {
    struct SliceAddressIter_794  left_dash_it950 = ( (  into_dash_iter797 ) ( (  left947 ) ) );
    struct SliceIter_719  right_dash_it951 = ( (  into_dash_iter727 ) ( (  right949 ) ) );
    return ( (struct Zip_793) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  struct SliceAddressIter_794   addresses798 (    struct Slice_337  slice2268 ) {
    return ( (struct SliceAddressIter_794) { .f_slice = (  slice2268 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Tuple2_801 {
    struct Tuple2_338 *  field0;
    struct StrView_18  field1;
};

static struct Tuple2_801 Tuple2_801_Tuple2 (  struct Tuple2_338 *  field0 ,  struct StrView_18  field1 ) {
    return ( struct Tuple2_801 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_800 {
    enum {
        Maybe_800_None_t,
        Maybe_800_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_801  field0;
        } Maybe_800_Just_s;
    } stuff;
};

static struct Maybe_800 Maybe_800_Just (  struct Tuple2_801  field0 ) {
    return ( struct Maybe_800 ) { .tag = Maybe_800_Just_t, .stuff = { .Maybe_800_Just_s = { .field0 = field0 } } };
};

struct Maybe_803 {
    enum {
        Maybe_803_None_t,
        Maybe_803_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_338 *  field0;
        } Maybe_803_Just_s;
    } stuff;
};

static struct Maybe_803 Maybe_803_Just (  struct Tuple2_338 *  field0 ) {
    return ( struct Maybe_803 ) { .tag = Maybe_803_Just_t, .stuff = { .Maybe_803_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_338 *   offset_dash_ptr805 (    struct Tuple2_338 *  x377 ,    int64_t  count379 ) {
    struct Tuple2_338  temp806;
    return ( (struct Tuple2_338 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul416 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp806 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_803   next804 (    struct SliceAddressIter_794 *  self2274 ) {
    size_t  off2275 = ( ( * (  self2274 ) ) .f_current_dash_offset );
    if ( (  cmp371 ( (  op_dash_add425 ( (  off2275 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2274 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_803) { .tag = Maybe_803_None_t } );
    }
    struct Tuple2_338 *  elem2276 = ( (  offset_dash_ptr805 ) ( ( ( ( * (  self2274 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  off2275 ) ) ) ) );
    (*  self2274 ) .f_current_dash_offset = (  op_dash_add425 ( (  off2275 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_803_Just ) ( (  elem2276 ) ) );
}

static  struct Maybe_800   next802 (    struct Zip_793 *  self939 ) {
    struct Zip_793  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_803  dref941 = ( (  next804 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_803_None_t ) {
            return ( (struct Maybe_800) { .tag = Maybe_800_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_803_Just_t ) {
                struct Maybe_125  dref943 = ( (  next724 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_125_None_t ) {
                    return ( (struct Maybe_800) { .tag = Maybe_800_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_125_Just_t ) {
                        ( (  next804 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next724 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_800_Just ) ( ( ( Tuple2_801_Tuple2 ) ( ( dref941 .stuff .Maybe_803_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_125_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  struct StrBuilder_98   mk807 (    enum CAllocator_12  al2988 ) {
    return ( (struct StrBuilder_98) { .f_chars = ( (  mk525 ) ( (  al2988 ) ) ) } );
}

static  struct FilePicker_336   at_dash_dir498 (   struct env309* env ,    struct StrView_18  dir4860 ,    enum CAllocator_12  al4862 ) {
    struct envunion310  temp499 = ( (struct envunion310){ .fun = (  struct Slice_17  (*) (  struct env303*  ,    struct StrView_18  ,    enum CAllocator_12  ) )get_dash_files_dash_in_dash_dir500 , .env =  env->envinst303 } );
    struct Slice_17  files4863 = ( temp499.fun ( &temp499.env ,  (  dir4860 ) ,  (  al4862 ) ) );
    struct Slice_337  default_dash_filtered4864 = ( (  allocate787 ) ( (  al4862 ) ,  ( (  files4863 ) .f_count ) ) );
    struct Zip_793  temp792 =  into_dash_iter795 ( ( (  zip796 ) ( ( (  addresses798 ) ( (  default_dash_filtered4864 ) ) ) ,  (  files4863 ) ) ) );
    while (true) {
        struct Maybe_800  __cond799 =  next802 (&temp792);
        if (  __cond799 .tag == 0 ) {
            break;
        }
        struct Tuple2_801  dref4865 =  __cond799 .stuff .Maybe_800_Just_s .field0;
        (* dref4865 .field0 ) = ( ( Tuple2_338_Tuple2 ) ( ( dref4865 .field1 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    }
    return ( (struct FilePicker_336) { .f_total_dash_files = (  files4863 ) , .f_rendered_dash_files = (  default_dash_filtered4864 ) , .f_sel = (  from_dash_integral0 ( 0 ) ) , .f_query = ( (  mk807 ) ( (  al4862 ) ) ) , .f_sel_dash_size = (  from_dash_integral0 ( 0 ) ) } );
}

static  enum Unit_10   lam496 (   struct env334* env ,    struct Editor_329 *  ed5107 ) {
    struct envunion335  temp497 = ( (struct envunion335){ .fun = (  struct FilePicker_336  (*) (  struct env309*  ,    struct StrView_18  ,    enum CAllocator_12  ) )at_dash_dir498 , .env =  env->envinst309 } );
    (*  ed5107 ) .f_next_dash_mode = ( ( Maybe_340_Just ) ( ( ( EditorMode_330_Picker ) ( ( temp497.fun ( &temp497.env ,  ( (  from_dash_charlike699 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ,  ( ( * (  ed5107 ) ) .f_al ) ) ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam808 (   void* __env ,    struct Editor_329 *  ed5109 ) {
    return ( Unit_10_Unit );
}

struct envunion810 {
    enum Unit_10  (*fun) (  struct env274*  ,    struct Pane_289 *  ,    struct StrView_18  );
    struct env274 env;
};

struct envunion811 {
    enum Unit_10  (*fun) (  struct env287*  ,    struct Pane_289 *  );
    struct env287 env;
};

struct envunion812 {
    enum Unit_10  (*fun) (  struct env318*  ,    struct Editor_329 *  ,    struct StrConcat_118  );
    struct env318 env;
};

struct envunion813 {
    enum Unit_10  (*fun) (  struct env279*  ,    struct Pane_289 *  );
    struct env279 env;
};

struct envunion814 {
    enum Unit_10  (*fun) (  struct env281*  ,    struct Pane_289 *  );
    struct env281 env;
};

struct envunion815 {
    enum Unit_10  (*fun) (  struct env296*  ,    struct Pane_289 *  ,    int32_t  );
    struct env296 env;
};

struct envunion816 {
    enum Unit_10  (*fun) (  struct env298*  ,    struct Pane_289 *  );
    struct env298 env;
};

struct envunion817 {
    enum Unit_10  (*fun) (  struct env283*  ,    struct Pane_289 *  ,    struct Tuple2_301  ,    struct StrView_18  );
    struct env283 env;
};

struct envunion818 {
    enum Unit_10  (*fun) (  struct env293*  ,    struct Pane_289 *  );
    struct env293 env;
};

struct envunion819 {
    enum Unit_10  (*fun) (  struct env314*  ,    struct Editor_329 *  );
    struct env314 env;
};

struct env809 {
    ;
    ;
    ;
    ;
    struct env274 envinst274;
    ;
    ;
    ;
    struct env287 envinst287;
    ;
    ;
    ;
    ;
    struct env318 envinst318;
    ;
    ;
    ;
    struct env279 envinst279;
    ;
    ;
    ;
    struct Menu_331  goto_dash_menu5103;
    ;
    ;
    struct env281 envinst281;
    ;
    struct env296 envinst296;
    struct Menu_331  space_dash_menu5110;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env298 envinst298;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env283 envinst283;
    struct env293 envinst293;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env314 envinst314;
    ;
    ;
    ;
};

struct envunion821 {
    enum Unit_10  (*fun) (  struct env296*  ,    struct Pane_289 *  ,    int32_t  );
    struct env296 env;
};

struct envunion822 {
    enum Unit_10  (*fun) (  struct env324*  ,    struct Editor_329 *  ,    struct StrView_18  );
    struct env324 env;
};

struct envunion823 {
    enum Unit_10  (*fun) (  struct env274*  ,    struct Pane_289 *  ,    struct StrView_18  );
    struct env274 env;
};

struct envunion824 {
    enum Unit_10  (*fun) (  struct env96*  ,    struct StrBuilder_98 *  ,    struct Char_101  );
    struct env96 env;
};

struct envunion825 {
    struct Maybe_111  (*fun) (  struct env109*  ,    struct StrBuilder_98 *  );
    struct env109 env;
};

struct envunion826 {
    enum Unit_10  (*fun) (  struct env277*  ,    struct Pane_289 *  );
    struct env277 env;
};

struct envunion827 {
    enum Unit_10  (*fun) (  struct env316*  ,    struct Editor_329 *  ,    struct StrConcat_115  );
    struct env316 env;
};

struct Key_829 {
    enum {
        Key_829_Escape_t,
        Key_829_Enter_t,
        Key_829_Tab_t,
        Key_829_Backspace_t,
        Key_829_Char_t,
        Key_829_Ctrl_t,
        Key_829_Up_t,
        Key_829_Down_t,
        Key_829_Left_t,
        Key_829_Right_t,
        Key_829_Home_t,
        Key_829_End_t,
        Key_829_PageUp_t,
        Key_829_PageDown_t,
        Key_829_Delete_t,
        Key_829_Insert_t,
        Key_829_F1_t,
        Key_829_F2_t,
        Key_829_F3_t,
        Key_829_F4_t,
        Key_829_F5_t,
        Key_829_F6_t,
        Key_829_F7_t,
        Key_829_F8_t,
        Key_829_F9_t,
        Key_829_F10_t,
        Key_829_F11_t,
        Key_829_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_829_Char_s;
        struct {
            char  field0;
        } Key_829_Ctrl_s;
    } stuff;
};

static struct Key_829 Key_829_Char (  char  field0 ) {
    return ( struct Key_829 ) { .tag = Key_829_Char_t, .stuff = { .Key_829_Char_s = { .field0 = field0 } } };
};

static struct Key_829 Key_829_Ctrl (  char  field0 ) {
    return ( struct Key_829 ) { .tag = Key_829_Ctrl_t, .stuff = { .Key_829_Ctrl_s = { .field0 = field0 } } };
};

struct envunion828 {
    enum Unit_10  (*fun) (  struct env809*  ,    struct Editor_329 *  ,    struct Key_829  );
    struct env809 env;
};

struct envunion830 {
    enum Unit_10  (*fun) (  struct env327*  ,    struct Editor_329 *  ,    struct StrView_18  );
    struct env327 env;
};

struct Choice_833 {
    enum {
        Choice_833_PickerExit_t,
        Choice_833_PickerFile_t,
    } tag;
    union {
        struct {
            struct StrView_18  field0;
        } Choice_833_PickerFile_s;
    } stuff;
};

static struct Choice_833 Choice_833_PickerFile (  struct StrView_18  field0 ) {
    return ( struct Choice_833 ) { .tag = Choice_833_PickerFile_t, .stuff = { .Choice_833_PickerFile_s = { .field0 = field0 } } };
};

struct Maybe_832 {
    enum {
        Maybe_832_None_t,
        Maybe_832_Just_t,
    } tag;
    union {
        struct {
            struct Choice_833  field0;
        } Maybe_832_Just_s;
    } stuff;
};

static struct Maybe_832 Maybe_832_Just (  struct Choice_833  field0 ) {
    return ( struct Maybe_832 ) { .tag = Maybe_832_Just_t, .stuff = { .Maybe_832_Just_s = { .field0 = field0 } } };
};

struct envunion831 {
    struct Maybe_832  (*fun) (  struct env311*  ,    struct FilePicker_336 *  ,    struct Key_829  );
    struct env311 env;
};

struct env820 {
    ;
    struct env296 envinst296;
    struct env324 envinst324;
    ;
    ;
    ;
    ;
    struct env274 envinst274;
    ;
    struct env96 envinst96;
    ;
    struct env109 envinst109;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env277 envinst277;
    ;
    struct env316 envinst316;
    struct env809 envinst809;
    ;
    ;
    struct env327 envinst327;
    struct env311 envinst311;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct Cell_838 {
    struct Char_101  f_c;
    struct Color_203  f_fg;
    struct Color_203  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_837 {
    struct Cell_838 *  f_ptr;
    size_t  f_count;
};

struct Screen_836 {
    enum CAllocator_12  f_al;
    struct Tui_146 *  f_tui;
    struct Slice_837  f_current;
    struct Slice_837  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_203  f_default_dash_fg;
    struct Color_203  f_default_dash_bg;
};

struct ScreenDims_839 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

struct envunion835 {
    enum Unit_10  (*fun) (  struct env271*  ,    struct Screen_836 *  ,    struct Pane_289 *  ,    struct ScreenDims_839  ,    struct Config_341 *  );
    struct env271 env;
};

struct env834 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env271 envinst271;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  enum CAllocator_12   idc840 (  ) {
    return ( CAllocator_12_CAllocator );
}

struct Slice_843 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  const char* *   offset_dash_ptr845 (    const char* *  x377 ,    int64_t  count379 ) {
    const char*  temp846;
    return ( (const char* * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul416 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp846 ) ) ) ) ) ) ) ) );
}

static  struct Slice_843   get844 (  ) {
    return ( (struct Slice_843) { .f_ptr = ( (  offset_dash_ptr845 ) ( ( _global_argv ) ,  (  from_dash_integral434 ( 1 ) ) ) ) , .f_count = (  op_dash_sub580 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

static  size_t   reduce850 (    struct ConstStrIter_669  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_101  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct ConstStrIter_669  it1124 = ( (  into_dash_iter670 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_420  dref1125 = ( (  next674 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_420_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_420_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_420_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp851 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp851);
    abort ( );
    ( Unit_10_Unit );
    size_t  temp852;
    return (  temp852 );
}

static  size_t   lam853 (    struct Char_101  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add425 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count849 (    struct ConstStrIter_669  it1129 ) {
    return ( (  reduce850 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam853 ) ) );
}

static  size_t   const_dash_str_dash_len848 (    const char*  s1926 ) {
    return ( (  count849 ) ( ( (  chars671 ) ( (  s1926 ) ) ) ) );
}

static  struct StrView_18   from_dash_const_dash_str847 (    const char*  s2557 ) {
    size_t  len2558 = ( (  const_dash_str_dash_len848 ) ( (  s2557 ) ) );
    return ( (struct StrView_18) { .f_contents = ( (struct Slice_13) { .f_ptr = ( (  cast675 ) ( (  s2557 ) ) ) , .f_count = (  len2558 ) } ) } );
}

struct Maybe_857 {
    enum {
        Maybe_857_None_t,
        Maybe_857_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_857_Just_s;
    } stuff;
};

static struct Maybe_857 Maybe_857_Just (  const char*  field0 ) {
    return ( struct Maybe_857 ) { .tag = Maybe_857_Just_t, .stuff = { .Maybe_857_Just_s = { .field0 = field0 } } };
};

static  const char*   undefined858 (  ) {
    const char*  temp859;
    return (  temp859 );
}

static  const char*   or_dash_fail856 (    struct Maybe_857  x1353 ,    struct StrConcat_373  errmsg1355 ) {
    struct Maybe_857  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_857_None_t ) {
        ( (  panic372 ) ( (  errmsg1355 ) ) );
        return ( (  undefined858 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_857_Just_t ) {
            return ( dref1356 .stuff .Maybe_857_Just_s .field0 );
        }
    }
}

static  struct Maybe_857   try_dash_get860 (    struct Slice_843  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp371 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_857) { .tag = Maybe_857_None_t } );
    }
    const char* *  elem_dash_ptr2179 = ( (  offset_dash_ptr845 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_857_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  const char*   get855 (    struct Slice_843  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail856 ) ( ( (  try_dash_get860 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get854 (    struct Slice_843  self2195 ,    size_t  idx2197 ) {
    return ( (  get855 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

struct Maybe_861 {
    enum {
        Maybe_861_None_t,
        Maybe_861_Just_t,
    } tag;
    union {
        struct {
            struct TextBuf_164  field0;
        } Maybe_861_Just_s;
    } stuff;
};

static struct Maybe_861 Maybe_861_Just (  struct TextBuf_164  field0 ) {
    return ( struct Maybe_861 ) { .tag = Maybe_861_Just_t, .stuff = { .Maybe_861_Just_s = { .field0 = field0 } } };
};

struct envunion863 {
    struct Maybe_861  (*fun) (  struct env176*  ,    enum CAllocator_12  ,    struct StrView_18  );
    struct env176 env;
};

static  void *   cast_dash_ptr876 (    struct Line_30 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of877 (    struct Line_30 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Line_30 *   zeroed874 (  ) {
    struct Line_30 *  temp875;
    struct Line_30 *  x642 = (  temp875 );
    ( ( memset ) ( ( (  cast_dash_ptr876 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of877 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  struct Line_30 *   null_dash_ptr873 (  ) {
    return ( (  zeroed874 ) ( ) );
}

static  struct Slice_29   empty872 (  ) {
    return ( (struct Slice_29) { .f_ptr = ( (  null_dash_ptr873 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_28   mk871 (    enum CAllocator_12  al2436 ) {
    struct Slice_29  elements2437 = ( (  empty872 ) ( ) );
    return ( (struct List_28) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env881 {
    struct List_28 *  list2513;
    struct env26 envinst26;
};

struct envunion882 {
    enum Unit_10  (*fun) (  struct env881*  ,    struct Line_30  );
    struct env881 env;
};

struct ArrayIter_883 {
    struct Array_82  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_883   into_dash_iter885 (    struct Array_82  self2102 ) {
    return ( (struct ArrayIter_883) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_886 {
    enum {
        Maybe_886_None_t,
        Maybe_886_Just_t,
    } tag;
    union {
        struct {
            struct Line_30  field0;
        } Maybe_886_Just_s;
    } stuff;
};

static struct Maybe_886 Maybe_886_Just (  struct Line_30  field0 ) {
    return ( struct Maybe_886 ) { .tag = Maybe_886_Just_t, .stuff = { .Maybe_886_Just_s = { .field0 = field0 } } };
};

struct StrConcat_892 {
    struct StrConcat_118  field0;
    int32_t  field1;
};

static struct StrConcat_892 StrConcat_892_StrConcat (  struct StrConcat_118  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_892 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_891 {
    struct StrConcat_892  field0;
    struct Char_101  field1;
};

static struct StrConcat_891 StrConcat_891_StrConcat (  struct StrConcat_892  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_891 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_895 {
    struct StrView_18  field0;
    struct StrConcat_891  field1;
};

static struct StrConcat_895 StrConcat_895_StrConcat (  struct StrView_18  field0 ,  struct StrConcat_891  field1 ) {
    return ( struct StrConcat_895 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_894 {
    struct StrConcat_895  field0;
    struct Char_101  field1;
};

static struct StrConcat_894 StrConcat_894_StrConcat (  struct StrConcat_895  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_894 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_10   print_dash_str899 (    int32_t  self1417 ) {
    ( ( printf ) ( ( (  from_dash_string93 ) ( ( (uint8_t*)"%d" ) ,  ( 2 ) ) ) ,  (  self1417 ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str898 (    struct StrConcat_892  self1302 ) {
    struct StrConcat_892  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str383 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str899 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str897 (    struct StrConcat_891  self1302 ) {
    struct StrConcat_891  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str898 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str386 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str896 (    struct StrConcat_895  self1302 ) {
    struct StrConcat_895  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str379 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str897 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str893 (    struct StrConcat_894  self1302 ) {
    struct StrConcat_894  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str896 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str386 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   panic890 (    struct StrConcat_891  errmsg1343 ) {
    ( (  print_dash_str893 ) ( ( ( StrConcat_894_StrConcat ) ( ( ( StrConcat_895_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_10_Unit );
}

static  struct Line_30 *   cast_dash_ptr900 (    struct Array_82 *  p398 ) {
    return ( (struct Line_30 * ) (  p398 ) );
}

static  struct Line_30 *   get_dash_ptr889 (    struct Array_82 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp371 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2029 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic890 ) ( ( ( StrConcat_891_StrConcat ) ( ( ( StrConcat_892_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_30 *  p2030 = ( ( (  cast_dash_ptr900 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr415 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct Line_30   get888 (    struct Array_82 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr889 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_886   next887 (    struct ArrayIter_883 *  self2109 ) {
    if ( (  cmp371 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_886) { .tag = Maybe_886_None_t } );
    }
    struct Line_30  e2111 = ( (  get888 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add425 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_886_Just ) ( (  e2111 ) ) );
}

static  enum Unit_10   for_dash_each880 (    struct Array_82  iterable1099 ,   struct envunion882  fun1101 ) {
    struct ArrayIter_883  temp884 = ( (  into_dash_iter885 ) ( (  iterable1099 ) ) );
    struct ArrayIter_883 *  it1102 = ( &temp884 );
    while ( ( true ) ) {
        struct Maybe_886  dref1103 = ( (  next887 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_886_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_886_Just_t ) {
                struct envunion882  temp901 = (  fun1101 );
                ( temp901.fun ( &temp901.env ,  ( dref1103 .stuff .Maybe_886_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

struct TypeSize_909 {
    size_t  f_size;
};

static  struct TypeSize_909   get_dash_typesize908 (  ) {
    struct Line_30  temp910;
    return ( (struct TypeSize_909) { .f_size = ( sizeof( ( (  temp910 ) ) ) ) } );
}

static  struct Line_30 *   cast_dash_ptr911 (    void *  p398 ) {
    return ( (struct Line_30 * ) (  p398 ) );
}

static  struct Slice_29   allocate907 (    enum CAllocator_12  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize908 ) ( ) ) ) .f_size );
    struct Line_30 *  ptr2371 = ( (  cast_dash_ptr911 ) ( ( ( malloc ) ( (  op_dash_mul555 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_29) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env912 {
    ;
    struct Slice_29  new_dash_slice2453;
    ;
};

struct Tuple2_914 {
    struct Line_30  field0;
    int32_t  field1;
};

static struct Tuple2_914 Tuple2_914_Tuple2 (  struct Line_30  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_914 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion913 {
    enum Unit_10  (*fun) (  struct env912*  ,    struct Tuple2_914  );
    struct env912 env;
};

static  enum Unit_10   set916 (    struct Slice_29  slice2187 ,    size_t  i2189 ,    struct Line_30  x2191 ) {
    struct Line_30 *  ep2192 = ( (  get_dash_ptr414 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam915 (   struct env912* env ,    struct Tuple2_914  dref2454 ) {
    return ( (  set916 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size349 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct SliceIter_919 {
    struct Slice_29  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_918 {
    struct SliceIter_919  f_left_dash_it;
    struct FromIter_564  f_right_dash_it;
};

static  struct Zip_918   into_dash_iter921 (    struct Zip_918  self936 ) {
    return (  self936 );
}

struct Maybe_922 {
    enum {
        Maybe_922_None_t,
        Maybe_922_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_914  field0;
        } Maybe_922_Just_s;
    } stuff;
};

static struct Maybe_922 Maybe_922_Just (  struct Tuple2_914  field0 ) {
    return ( struct Maybe_922 ) { .tag = Maybe_922_Just_t, .stuff = { .Maybe_922_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_886   next924 (    struct SliceIter_919 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp371 ( (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_886) { .tag = Maybe_886_None_t } );
    }
    struct Line_30  elem2258 = ( * ( (  offset_dash_ptr415 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_886_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_922   next923 (    struct Zip_918 *  self939 ) {
    struct Zip_918  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_886  dref941 = ( (  next924 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_886_None_t ) {
            return ( (struct Maybe_922) { .tag = Maybe_922_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_886_Just_t ) {
                struct Maybe_220  dref943 = ( (  next569 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_220_None_t ) {
                    return ( (struct Maybe_922) { .tag = Maybe_922_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_220_Just_t ) {
                        ( (  next924 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next569 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_922_Just ) ( ( ( Tuple2_914_Tuple2 ) ( ( dref941 .stuff .Maybe_886_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_220_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_10   for_dash_each917 (    struct Zip_918  iterable1099 ,   struct envunion913  fun1101 ) {
    struct Zip_918  temp920 = ( (  into_dash_iter921 ) ( (  iterable1099 ) ) );
    struct Zip_918 *  it1102 = ( &temp920 );
    while ( ( true ) ) {
        struct Maybe_922  dref1103 = ( (  next923 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_922_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_922_Just_t ) {
                struct envunion913  temp925 = (  fun1101 );
                ( temp925.fun ( &temp925.env ,  ( dref1103 .stuff .Maybe_922_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  struct SliceIter_919   into_dash_iter927 (    struct Slice_29  self2250 ) {
    return ( (struct SliceIter_919) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_918   zip926 (    struct Slice_29  left947 ,    struct FromIter_564  right949 ) {
    struct SliceIter_919  left_dash_it950 = ( (  into_dash_iter927 ) ( (  left947 ) ) );
    struct FromIter_564  right_dash_it951 = ( (  into_dash_iter572 ) ( (  right949 ) ) );
    return ( (struct Zip_918) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  void *   cast_dash_ptr929 (    struct Line_30 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_10   free928 (    enum CAllocator_12  dref2373 ,    struct Slice_29  slice2375 ) {
    if (!(  dref2373 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr929 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   grow_dash_if_dash_full906 (   struct env4* env ,    struct List_28 *  list2452 ) {
    if ( (  eq352 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate907 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq352 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_29  new_dash_slice2453 = ( (  allocate907 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul555 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env912 envinst912 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion913  fun2457 = ( (struct envunion913){ .fun = (  enum Unit_10  (*) (  struct env912*  ,    struct Tuple2_914  ) )lam915 , .env =  envinst912 } );
            ( (  for_dash_each917 ) ( ( (  zip926 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from573 ) ( (  from_dash_integral92 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free928 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   add904 (   struct env26* env ,    struct List_28 *  list2460 ,    struct Line_30  elem2462 ) {
    struct envunion27  temp905 = ( (struct envunion27){ .fun = (  enum Unit_10  (*) (  struct env4*  ,    struct List_28 *  ) )grow_dash_if_dash_full906 , .env =  env->envinst4 } );
    ( temp905.fun ( &temp905.env ,  (  list2460 ) ) );
    ( (  set916 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add425 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam902 (   struct env881* env ,    struct Line_30  x2517 ) {
    struct envunion64  temp903 = ( (struct envunion64){ .fun = (  enum Unit_10  (*) (  struct env26*  ,    struct List_28 *  ,    struct Line_30  ) )add904 , .env =  env->envinst26 } );
    return ( temp903.fun ( &temp903.env ,  ( env->list2513 ) ,  (  x2517 ) ) );
}

static  enum Unit_10   add_dash_all879 (   struct env63* env ,    struct List_28 *  list2513 ,    struct Array_82  it2515 ) {
    struct env881 envinst881 = {
        .list2513 =  list2513 ,
        .envinst26 = env->envinst26 ,
    };
    ( (  for_dash_each880 ) ( (  it2515 ) ,  ( (struct envunion882){ .fun = (  enum Unit_10  (*) (  struct env881*  ,    struct Line_30  ) )lam902 , .env =  envinst881 } ) ) );
    return ( Unit_10_Unit );
}

static  struct List_28   from_dash_iter869 (   struct env80* env ,    struct Array_82  iter2548 ,    enum CAllocator_12  al2550 ) {
    struct List_28  temp870 = ( (  mk871 ) ( (  al2550 ) ) );
    struct List_28 *  list2551 = ( &temp870 );
    struct envunion81  temp878 = ( (struct envunion81){ .fun = (  enum Unit_10  (*) (  struct env63*  ,    struct List_28 *  ,    struct Array_82  ) )add_dash_all879 , .env =  env->envinst63 } );
    ( temp878.fun ( &temp878.env ,  (  list2551 ) ,  (  iter2548 ) ) );
    return ( * (  list2551 ) );
}

static  struct Array_82   from_dash_listlike930 (    struct Array_82 *  self369 ) {
    return ( * (  self369 ) );
}

static  void *   cast_dash_ptr938 (    struct Highlight_33 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of939 (    struct Highlight_33 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Highlight_33 *   zeroed936 (  ) {
    struct Highlight_33 *  temp937;
    struct Highlight_33 *  x642 = (  temp937 );
    ( ( memset ) ( ( (  cast_dash_ptr938 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of939 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  struct Highlight_33 *   null_dash_ptr935 (  ) {
    return ( (  zeroed936 ) ( ) );
}

static  struct Slice_32   empty934 (  ) {
    return ( (struct Slice_32) { .f_ptr = ( (  null_dash_ptr935 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_31   mk933 (    enum CAllocator_12  al2436 ) {
    struct Slice_32  elements2437 = ( (  empty934 ) ( ) );
    return ( (struct List_31) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Line_30   mk_dash_line932 (    struct List_11  initial4154 ) {
    return ( (struct Line_30) { .f_line = (  initial4154 ) , .f_invalidated = ( true ) , .f_highlights = ( (  mk933 ) ( ( (  initial4154 ) .f_al ) ) ) } );
}

static  void *   cast_dash_ptr946 (    struct Changeset_45 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of947 (    struct Changeset_45 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Changeset_45 *   zeroed944 (  ) {
    struct Changeset_45 *  temp945;
    struct Changeset_45 *  x642 = (  temp945 );
    ( ( memset ) ( ( (  cast_dash_ptr946 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of947 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  struct Changeset_45 *   null_dash_ptr943 (  ) {
    return ( (  zeroed944 ) ( ) );
}

static  struct Slice_44   empty942 (  ) {
    return ( (struct Slice_44) { .f_ptr = ( (  null_dash_ptr943 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_43   mk941 (    enum CAllocator_12  al2436 ) {
    struct Slice_44  elements2437 = ( (  empty942 ) ( ) );
    return ( (struct List_43) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_165   mk_dash_actions940 (    enum CAllocator_12  al4143 ) {
    return ( (struct Actions_165) { .f_list = ( (  mk941 ) ( (  al4143 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_166_NoChangeset ) } );
}

static  struct TextBuf_164   mk867 (   struct env174* env ,    enum CAllocator_12  al4259 ) {
    struct envunion175  temp868 = ( (struct envunion175){ .fun = (  struct List_28  (*) (  struct env80*  ,    struct Array_82  ,    enum CAllocator_12  ) )from_dash_iter869 , .env =  env->envinst80 } );
    struct Array_82  temp931 = ( (struct Array_82) { ._arr = { ( (  mk_dash_line932 ) ( ( (  mk525 ) ( (  al4259 ) ) ) ) ) } } );
    return ( (struct TextBuf_164) { .f_al = (  al4259 ) , .f_buf = ( temp868.fun ( &temp868.env ,  ( (  from_dash_listlike930 ) ( ( &temp931 ) ) ) ,  (  al4259 ) ) ) , .f_actions = ( (  mk_dash_actions940 ) ( (  al4259 ) ) ) , .f_filename = ( (struct Maybe_125) { .tag = Maybe_125_None_t } ) , .f_filetype = ( Filetype_167_Text ) } );
}

static  size_t   min956 (    size_t  l1367 ,    size_t  r1369 ) {
    if ( (  cmp371 ( (  l1367 ) , (  r1369 ) ) == 0 ) ) {
        return (  l1367 );
    } else {
        return (  r1369 );
    }
}

static  struct Slice_13   subslice955 (    struct Slice_13  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    uint8_t *  begin_dash_ptr2209 = ( (  offset_dash_ptr422 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp371 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp371 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_13) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub580 ( ( (  min956 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_13) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct Slice_13   from954 (    struct Slice_13  slice2213 ,    size_t  from2215 ) {
    return ( (  subslice955 ) ( (  slice2213 ) ,  (  from2215 ) ,  ( (  slice2213 ) .f_count ) ) );
}

static  struct StrView_18   byte_dash_substr_dash_from953 (    struct StrView_18  s2620 ,    size_t  from2622 ) {
    return ( (struct StrView_18) { .f_contents = ( (  from954 ) ( ( (  s2620 ) .f_contents ) ,  (  from2622 ) ) ) } );
}

static  struct StrView_18   drop_dash_while950 (    struct StrView_18  sv2649 ,    bool (*  fun2651 )(    struct Char_101  ) ) {
    size_t  from2652 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_362  temp951 =  into_dash_iter363 ( ( (  chars364 ) ( (  sv2649 ) ) ) );
    while (true) {
        struct Maybe_420  __cond952 =  next421 (&temp951);
        if (  __cond952 .tag == 0 ) {
            break;
        }
        struct Char_101  c2654 =  __cond952 .stuff .Maybe_420_Just_s .field0;
        if ( ( ! ( (  fun2651 ) ( (  c2654 ) ) ) ) ) {
            break;
        }
        from2652 = (  op_dash_add425 ( (  from2652 ) , ( (  c2654 ) .f_num_dash_bytes ) ) );
    }
    return ( (  byte_dash_substr_dash_from953 ) ( (  sv2649 ) ,  (  from2652 ) ) );
}

static  bool   lam957 (    struct Char_101  c4166 ) {
    return (  eq429 ( (  c4166 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) );
}

static  uint8_t   undefined961 (  ) {
    uint8_t  temp962;
    return (  temp962 );
}

static  uint8_t   or_dash_fail960 (    struct Maybe_111  x1353 ,    struct StrConcat_373  errmsg1355 ) {
    struct Maybe_111  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_111_None_t ) {
        ( (  panic372 ) ( (  errmsg1355 ) ) );
        return ( (  undefined961 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_111_Just_t ) {
            return ( dref1356 .stuff .Maybe_111_Just_s .field0 );
        }
    }
}

static  struct Maybe_111   try_dash_get963 (    struct Slice_13  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp371 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_111) { .tag = Maybe_111_None_t } );
    }
    uint8_t *  elem_dash_ptr2179 = ( (  offset_dash_ptr422 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_111_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  uint8_t   get959 (    struct Slice_13  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail960 ) ( ( (  try_dash_get963 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   elem_dash_get958 (    struct Slice_13  self2195 ,    size_t  idx2197 ) {
    return ( (  get959 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

static  uint8_t   ascii_dash_u8964 (    char  c1488 ) {
    return ( ( (uint8_t ) (  c1488 ) ) );
}

static  struct StrView_18   byte_dash_substr965 (    struct StrView_18  s2613 ,    size_t  from2615 ,    size_t  to2617 ) {
    return ( (struct StrView_18) { .f_contents = ( (  subslice955 ) ( ( (  s2613 ) .f_contents ) ,  (  from2615 ) ,  (  to2617 ) ) ) } );
}

static  struct Maybe_125   extension949 (    struct StrView_18  path4164 ) {
    struct StrView_18  path4167 = ( (  drop_dash_while950 ) ( (  path4164 ) ,  (  lam957 ) ) );
    size_t  i4168 = ( ( (  path4167 ) .f_contents ) .f_count );
    while ( (  cmp371 ( (  i4168 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        i4168 = (  op_dash_sub580 ( (  i4168 ) , (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq393 ( (  elem_dash_get958 ( ( (  path4167 ) .f_contents ) , (  i4168 ) ) ) , ( (  ascii_dash_u8964 ) ( ( (  from_dash_charlike351 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) ) ) {
            break;
        }
    }
    if ( (  eq352 ( (  i4168 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    struct StrView_18  ext4169 = ( (  byte_dash_substr965 ) ( (  path4167 ) ,  (  op_dash_add425 ( (  i4168 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( ( (  path4167 ) .f_contents ) .f_count ) ) );
    return ( ( Maybe_125_Just ) ( (  ext4169 ) ) );
}

struct Array_967 {
    struct StrView_18 _arr [2];
};

struct env969 {
    struct StrView_18  x1180;
    ;
};

struct envunion970 {
    bool  (*fun) (  struct env969*  ,    struct StrView_18  );
    struct env969 env;
};

struct env972 {
    struct envunion970  fun1160;
};

struct envunion973 {
    bool  (*fun) (  struct env972*  ,    struct StrView_18  ,    bool  );
    struct env972 env;
};

struct ArrayIter_974 {
    struct Array_967  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_974   into_dash_iter975 (    struct Array_967  self2102 ) {
    return ( (struct ArrayIter_974) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_18 *   cast_dash_ptr979 (    struct Array_967 *  p398 ) {
    return ( (struct StrView_18 * ) (  p398 ) );
}

static  struct StrView_18 *   get_dash_ptr978 (    struct Array_967 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp371 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2029 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic890 ) ( ( ( StrConcat_891_StrConcat ) ( ( ( StrConcat_892_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_18 *  p2030 = ( ( (  cast_dash_ptr979 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr715 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_18   get977 (    struct Array_967 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr978 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_125   next976 (    struct ArrayIter_974 *  self2109 ) {
    if ( (  cmp371 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    struct StrView_18  e2111 = ( (  get977 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add425 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_125_Just ) ( (  e2111 ) ) );
}

static  bool   reduce971 (    struct Array_967  iterable1118 ,    bool  base1120 ,   struct envunion973  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_974  it1124 = ( (  into_dash_iter975 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_125  dref1125 = ( (  next976 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_125_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_125_Just_t ) {
                struct envunion973  temp980 = (  fun1122 );
                x1123 = ( temp980.fun ( &temp980.env ,  ( dref1125 .stuff .Maybe_125_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp981 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp981);
    abort ( );
    ( Unit_10_Unit );
    bool  temp982;
    return (  temp982 );
}

static  bool   lam983 (   struct env972* env ,    struct StrView_18  e1162 ,    bool  x1164 ) {
    struct envunion970  temp984 = ( env->fun1160 );
    return ( ( temp984.fun ( &temp984.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any968 (    struct Array_967  it1158 ,   struct envunion970  fun1160 ) {
    struct env972 envinst972 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce971 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion973){ .fun = (  bool  (*) (  struct env972*  ,    struct StrView_18  ,    bool  ) )lam983 , .env =  envinst972 } ) ) );
}

static  bool   lam985 (   struct env969* env ,    struct StrView_18  e1184 ) {
    return (  eq682 ( (  e1184 ) , ( env->x1180 ) ) );
}

static  bool   one_dash_of966 (    struct StrView_18  x1180 ,    struct Array_967  it1182 ) {
    struct env969 envinst969 = {
        .x1180 =  x1180 ,
    };
    return ( (  any968 ) ( (  it1182 ) ,  ( (struct envunion970){ .fun = (  bool  (*) (  struct env969*  ,    struct StrView_18  ) )lam985 , .env =  envinst969 } ) ) );
}

static  struct Array_967   from_dash_listlike986 (    struct Array_967 *  self369 ) {
    return ( * (  self369 ) );
}

static  enum Filetype_167   detect_dash_filetype_dash_from_dash_filename948 (    struct StrView_18  filename4161 ) {
    struct Maybe_125  mext4170 = ( (  extension949 ) ( (  filename4161 ) ) );
    struct Maybe_125  dref4171 = (  mext4170 );
    if ( dref4171.tag == Maybe_125_None_t ) {
        return ( Filetype_167_Text );
    }
    else {
        if ( dref4171.tag == Maybe_125_Just_t ) {
            struct Array_967  temp987 = ( (struct Array_967) { ._arr = { ( (  from_dash_string269 ) ( ( (uint8_t*)"kc" ) ,  ( 2 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"kkc" ) ,  ( 3 ) ) ) } } );
            if ( ( (  one_dash_of966 ) ( ( dref4171 .stuff .Maybe_125_Just_s .field0 ) ,  ( (  from_dash_listlike986 ) ( ( &temp987 ) ) ) ) ) ) {
                return ( Filetype_167_KC );
            } else {
                if ( (  eq682 ( ( dref4171 .stuff .Maybe_125_Just_s .field0 ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"md" ) ,  ( 2 ) ) ) ) ) ) {
                    return ( Filetype_167_Markdown );
                } else {
                    if ( (  eq682 ( ( dref4171 .stuff .Maybe_125_Just_s .field0 ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"gcode" ) ,  ( 5 ) ) ) ) ) ) {
                        return ( Filetype_167_GCode );
                    } else {
                        struct Array_967  temp988 = ( (struct Array_967) { ._arr = { ( (  from_dash_string269 ) ( ( (uint8_t*)"bf" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) } } );
                        if ( ( (  one_dash_of966 ) ( ( dref4171 .stuff .Maybe_125_Just_s .field0 ) ,  ( (  from_dash_listlike986 ) ( ( &temp988 ) ) ) ) ) ) {
                            return ( Filetype_167_Brainfuck );
                        } else {
                            return ( Filetype_167_Text );
                        }
                    }
                }
            }
        }
    }
}

static  void *   cast_dash_ptr994 (    FILE * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of995 (    FILE *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  FILE *   zeroed992 (  ) {
    FILE *  temp993;
    FILE *  x642 = (  temp993 );
    ( ( memset ) ( ( (  cast_dash_ptr994 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of995 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  FILE *   null_dash_ptr991 (  ) {
    return ( (  zeroed992 ) ( ) );
}

static  bool   is_dash_ptr_dash_null990 (    FILE *  p652 ) {
    return ( (  p652 ) == ( (  null_dash_ptr991 ) ( ) ) );
}

static  int32_t   seek_dash_end996 (  ) {
    return (  from_dash_integral92 ( 2 ) );
}

static  int32_t   seek_dash_set997 (  ) {
    return (  from_dash_integral92 ( 0 ) );
}

static  struct Maybe_125   try_dash_read_dash_contents989 (    const char*  filename3243 ,    enum CAllocator_12  al3245 ) {
    FILE *  file3246 = ( ( fopen ) ( (  filename3243 ) ,  ( (  from_dash_charlike661 ) ( ( (uint8_t*)"r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null990 ) ( (  file3246 ) ) ) ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    ( ( fseek ) ( (  file3246 ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  seek_dash_end996 ) ( ) ) ) );
    int32_t  file_dash_size3247 = ( ( ftell ) ( (  file3246 ) ) );
    ( ( fseek ) ( (  file3246 ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  seek_dash_set997 ) ( ) ) ) );
    struct Slice_13  file_dash_buf3248 = ( ( (  allocate550 ) ( (  al3245 ) ,  (  op_dash_add425 ( ( (  i32_dash_size349 ) ( (  file_dash_size3247 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf3248 ) .f_ptr ) ,  (  file_dash_size3247 ) ,  (  from_dash_integral92 ( 1 ) ) ,  (  file3246 ) ) );
    ( (  set560 ) ( (  file_dash_buf3248 ) ,  ( (  i32_dash_size349 ) ( (  file_dash_size3247 ) ) ) ,  ( (  char_dash_u8578 ) ( ( (  nullchar579 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file3246 ) ) );
    struct StrView_18  str3249 = ( (struct StrView_18) { .f_contents = ( (  subslice955 ) ( (  file_dash_buf3248 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub580 ( ( (  file_dash_buf3248 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_125_Just ) ( (  str3249 ) ) );
}

static  const char*   as_dash_const_dash_str998 (    struct StrView_18  s2589 ) {
    return ( (  cast519 ) ( ( ( (  s2589 ) .f_contents ) .f_ptr ) ) );
}

struct Tuple2_1000 {
    struct Maybe_111  field0;
    struct Maybe_111  field1;
};

static struct Tuple2_1000 Tuple2_1000_Tuple2 (  struct Maybe_111  field0 ,  struct Maybe_111  field1 ) {
    return ( struct Tuple2_1000 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq999 (    struct Maybe_111  l150 ,    struct Maybe_111  r152 ) {
    struct Tuple2_1000  dref153 = ( ( Tuple2_1000_Tuple2 ) ( (  l150 ) ,  (  r152 ) ) );
    if ( dref153 .field0.tag == Maybe_111_None_t && dref153 .field1.tag == Maybe_111_None_t ) {
        return ( true );
    }
    else {
        if ( dref153 .field0.tag == Maybe_111_Just_t && dref153 .field1.tag == Maybe_111_Just_t ) {
            return (  eq393 ( ( dref153 .field0 .stuff .Maybe_111_Just_s .field0 ) , ( dref153 .field1 .stuff .Maybe_111_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  enum Ordering_223   cmp1004 (    struct Pos_40  l3966 ,    struct Pos_40  r3968 ) {
    enum Ordering_223  dref3969 = ( (  cmp222 ) ( ( (  l3966 ) .f_line ) ,  ( (  r3968 ) .f_line ) ) );
    switch (  dref3969 ) {
        case Ordering_223_EQ : {
            return ( (  cmp222 ) ( ( (  l3966 ) .f_bi ) ,  ( (  r3968 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_223  els3970 =  dref3969;
            return (  els3970 );
            break;
        }
    }
}

static  struct Pos_40   min1003 (    struct Pos_40  l1367 ,    struct Pos_40  r1369 ) {
    if ( (  cmp1004 ( (  l1367 ) , (  r1369 ) ) == 0 ) ) {
        return (  l1367 );
    } else {
        return (  r1369 );
    }
}

static  struct Pos_40   max1005 (    struct Pos_40  l1372 ,    struct Pos_40  r1374 ) {
    if ( (  cmp1004 ( (  l1372 ) , (  r1374 ) ) == 2 ) ) {
        return (  l1372 );
    } else {
        return (  r1374 );
    }
}

static  bool   eq1006 (    struct Pos_40  l3961 ,    struct Pos_40  r3963 ) {
    return ( (  eq660 ( ( (  l3961 ) .f_line ) , ( (  r3963 ) .f_line ) ) ) && (  eq660 ( ( (  l3961 ) .f_bi ) , ( (  r3963 ) .f_bi ) ) ) );
}

static  enum Unit_10   set1010 (    struct List_28 *  list2426 ,    size_t  i2428 ,    struct Line_30  elem2430 ) {
    if ( ( (  cmp371 ( (  i2428 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2428 ) , ( ( * (  list2426 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2428 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2426 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set916 ) ( ( ( * (  list2426 ) ) .f_elements ) ,  (  i2428 ) ,  (  elem2430 ) ) );
    return ( Unit_10_Unit );
}

static  struct List_11   from_dash_iter1012 (   struct env83* env ,    struct Slice_13  iter2548 ,    enum CAllocator_12  al2550 ) {
    struct List_11  temp1013 = ( (  mk525 ) ( (  al2550 ) ) );
    struct List_11 *  list2551 = ( &temp1013 );
    struct envunion84  temp1014 = ( (struct envunion84){ .fun = (  enum Unit_10  (*) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  ) )add_dash_all536 , .env =  env->envinst59 } );
    ( temp1014.fun ( &temp1014.env ,  (  list2551 ) ,  (  iter2548 ) ) );
    return ( * (  list2551 ) );
}

static  struct StrView_18   or_dash_else1016 (    struct Maybe_125  self1360 ,    struct StrView_18  alt1362 ) {
    struct Maybe_125  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_125_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_125_Just_t ) {
            return ( dref1363 .stuff .Maybe_125_Just_s .field0 );
        }
    }
}

struct LineIter_1018 {
    struct StrView_18  f_og;
    size_t  f_last;
};

static  struct Maybe_125   next1019 (    struct LineIter_1018 *  self2714 ) {
    if ( (  cmp371 ( ( ( * (  self2714 ) ) .f_last ) , ( ( ( ( * (  self2714 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    size_t  i2715 = ( ( * (  self2714 ) ) .f_last );
    while ( ( (  cmp371 ( (  i2715 ) , ( ( ( ( * (  self2714 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq393 ( ( (  get959 ) ( ( ( ( * (  self2714 ) ) .f_og ) .f_contents ) ,  (  i2715 ) ) ) , ( (  char_dash_u8578 ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2715 = (  op_dash_add425 ( (  i2715 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_18  line2716 = ( (  byte_dash_substr965 ) ( ( ( * (  self2714 ) ) .f_og ) ,  ( ( * (  self2714 ) ) .f_last ) ,  (  i2715 ) ) );
    if ( (  cmp371 ( (  i2715 ) , ( ( ( ( * (  self2714 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2715 = (  op_dash_add425 ( (  i2715 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2714 ) .f_last = (  i2715 );
    return ( ( Maybe_125_Just ) ( (  line2716 ) ) );
}

static  struct LineIter_1018   into_dash_iter1021 (    struct LineIter_1018  self2711 ) {
    return (  self2711 );
}

static  struct Maybe_125   head1017 (    struct LineIter_1018  it1167 ) {
    struct LineIter_1018  temp1020 = ( (  into_dash_iter1021 ) ( (  it1167 ) ) );
    return ( (  next1019 ) ( ( &temp1020 ) ) );
}

static  struct LineIter_1018   lines1022 (    struct StrView_18  s2708 ) {
    return ( (struct LineIter_1018) { .f_og = (  s2708 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env1027 {
    ;
    struct Char_101  c2692;
};

struct envunion1028 {
    bool  (*fun) (  struct env1027*  ,    struct Char_101  );
    struct env1027 env;
};

struct SplitIter_1026 {
    struct StrView_18  f_og;
    size_t  f_last;
    struct envunion1028  f_fun;
};

struct Drop_1025 {
    struct SplitIter_1026  field0;
    size_t  field1;
};

static struct Drop_1025 Drop_1025_Drop (  struct SplitIter_1026  field0 ,  size_t  field1 ) {
    return ( struct Drop_1025 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_1024 {
    struct Drop_1025  f_left_dash_it;
    struct FromIter_564  f_right_dash_it;
};

static  struct Zip_1024   into_dash_iter1029 (    struct Zip_1024  self936 ) {
    return (  self936 );
}

static  struct Drop_1025   into_dash_iter1031 (    struct Drop_1025  self853 ) {
    return (  self853 );
}

static  struct Zip_1024   zip1030 (    struct Drop_1025  left947 ,    struct FromIter_564  right949 ) {
    struct Drop_1025  left_dash_it950 = ( (  into_dash_iter1031 ) ( (  left947 ) ) );
    struct FromIter_564  right_dash_it951 = ( (  into_dash_iter572 ) ( (  right949 ) ) );
    return ( (struct Zip_1024) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  struct SplitIter_1026   into_dash_iter1033 (    struct SplitIter_1026  self2697 ) {
    return (  self2697 );
}

static  struct Drop_1025   drop1032 (    struct SplitIter_1026  iterable860 ,    size_t  i862 ) {
    struct SplitIter_1026  it863 = ( (  into_dash_iter1033 ) ( (  iterable860 ) ) );
    return ( ( Drop_1025_Drop ) ( (  it863 ) ,  (  i862 ) ) );
}

static  struct SplitIter_1026   split_dash_by_dash_filter1035 (    struct StrView_18  s2685 ,   struct envunion1028  fun2687 ) {
    return ( (struct SplitIter_1026) { .f_og = (  s2685 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2687 ) } );
}

static  bool   lam1036 (   struct env1027* env ,    struct Char_101  cc2694 ) {
    return (  eq429 ( (  cc2694 ) , ( env->c2692 ) ) );
}

static  struct SplitIter_1026   split_dash_by_dash_each1034 (    struct StrView_18  s2690 ,    struct Char_101  c2692 ) {
    struct env1027 envinst1027 = {
        .c2692 =  c2692 ,
    };
    return ( (  split_dash_by_dash_filter1035 ) ( (  s2690 ) ,  ( (struct envunion1028){ .fun = (  bool  (*) (  struct env1027*  ,    struct Char_101  ) )lam1036 , .env =  envinst1027 } ) ) );
}

static  struct Maybe_125   next1040 (    struct SplitIter_1026 *  self2700 ) {
    if ( (  cmp371 ( ( ( * (  self2700 ) ) .f_last ) , ( ( ( ( * (  self2700 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    size_t  i2701 = ( ( * (  self2700 ) ) .f_last );
    while ( (  cmp371 ( (  i2701 ) , ( ( ( ( * (  self2700 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2702 = ( (  get_dash_ptr561 ) ( ( ( ( * (  self2700 ) ) .f_og ) .f_contents ) ,  (  i2701 ) ) );
        struct Char_101  c2703 = ( (  scan_dash_from_dash_mem408 ) ( (  ptr2702 ) ) );
        struct envunion1028  temp1041 = ( ( * (  self2700 ) ) .f_fun );
        if ( ( temp1041.fun ( &temp1041.env ,  (  c2703 ) ) ) ) {
            break;
        }
        i2701 = (  op_dash_add425 ( (  i2701 ) , ( (  next_dash_char409 ) ( (  ptr2702 ) ) ) ) );
    }
    struct StrView_18  line2704 = ( (  byte_dash_substr965 ) ( ( ( * (  self2700 ) ) .f_og ) ,  ( ( * (  self2700 ) ) .f_last ) ,  (  i2701 ) ) );
    i2701 = (  op_dash_add425 ( (  i2701 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2700 ) .f_last = (  i2701 );
    return ( ( Maybe_125_Just ) ( (  line2704 ) ) );
}

static  struct Maybe_125   next1039 (    struct Drop_1025 *  dref855 ) {
    while ( (  cmp371 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1040 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
        (* dref855 ) .field1 = (  op_dash_sub580 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1040 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
}

static  struct Maybe_722   next1038 (    struct Zip_1024 *  self939 ) {
    struct Zip_1024  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_125  dref941 = ( (  next1039 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_125_None_t ) {
            return ( (struct Maybe_722) { .tag = Maybe_722_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_125_Just_t ) {
                struct Maybe_220  dref943 = ( (  next569 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_220_None_t ) {
                    return ( (struct Maybe_722) { .tag = Maybe_722_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_220_Just_t ) {
                        ( (  next1039 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next569 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_722_Just ) ( ( ( Tuple2_711_Tuple2 ) ( ( dref941 .stuff .Maybe_125_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_220_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion1044 {
    struct List_11  (*fun) (  struct env83*  ,    struct Slice_13  ,    enum CAllocator_12  );
    struct env83 env;
};

static  enum Unit_10   insert1046 (   struct env50* env ,    struct List_28 *  list2465 ,    size_t  i2467 ,    struct Line_30  elem2469 ) {
    if ( ( (  cmp371 ( (  i2467 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2467 ) , ( ( * (  list2465 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2467 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2465 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq352 ( ( ( * (  list2465 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion51  temp1047 = ( (struct envunion51){ .fun = (  enum Unit_10  (*) (  struct env26*  ,    struct List_28 *  ,    struct Line_30  ) )add904 , .env =  env->envinst26 } );
        ( temp1047.fun ( &temp1047.env ,  (  list2465 ) ,  (  elem2469 ) ) );
        return ( Unit_10_Unit );
    }
    struct envunion52  temp1048 = ( (struct envunion52){ .fun = (  enum Unit_10  (*) (  struct env4*  ,    struct List_28 *  ) )grow_dash_if_dash_full906 , .env =  env->envinst4 } );
    ( temp1048.fun ( &temp1048.env ,  (  list2465 ) ) );
    size_t  ii2470 = (  op_dash_sub580 ( ( ( * (  list2465 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp371 ( (  ii2470 ) , (  i2467 ) ) != 0 ) ) {
        ( (  set916 ) ( ( ( * (  list2465 ) ) .f_elements ) ,  (  op_dash_add425 ( (  ii2470 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get369 ) ( (  list2465 ) ,  (  ii2470 ) ) ) ) );
        if ( (  eq352 ( (  ii2470 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2470 = (  op_dash_sub580 ( (  ii2470 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set916 ) ( ( ( * (  list2465 ) ) .f_elements ) ,  (  i2467 ) ,  (  elem2469 ) ) );
    (*  list2465 ) .f_count = (  op_dash_add425 ( ( ( * (  list2465 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_10_Unit );
}

struct envunion1050 {
    enum Unit_10  (*fun) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  );
    struct env59 env;
};

static  enum Unit_10   free1052 (    struct List_11 *  list2440 ) {
    ( (  free574 ) ( ( ( * (  list2440 ) ) .f_al ) ,  ( ( * (  list2440 ) ) .f_elements ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   free_dash_line1051 (    struct Line_30 *  line4157 ) {
    ( (  free1052 ) ( ( & ( ( * (  line4157 ) ) .f_line ) ) ) );
    return ( Unit_10_Unit );
}

static  int32_t   add_dash_to_dash_spot1009 (   struct env158* env ,    struct TextBuf_164 *  self4205 ,    struct Pos_40  p4207 ,    struct StrView_18  bytes4209 ) {
    enum CAllocator_12  al4210 = ( ( ( * (  self4205 ) ) .f_buf ) .f_al );
    struct List_28 *  buf4211 = ( & ( ( * (  self4205 ) ) .f_buf ) );
    struct Line_30  extracted_dash_line_dash_buf4212 = ( (  get369 ) ( (  buf4211 ) ,  ( (  i32_dash_size349 ) ( ( (  p4207 ) .f_line ) ) ) ) );
    struct Slice_13  remaining4213 = ( (  from954 ) ( ( (  to_dash_slice368 ) ( ( (  extracted_dash_line_dash_buf4212 ) .f_line ) ) ) ,  ( (  i32_dash_size349 ) ( ( (  p4207 ) .f_bi ) ) ) ) );
    struct envunion159  temp1011 = ( (struct envunion159){ .fun = (  struct List_11  (*) (  struct env83*  ,    struct Slice_13  ,    enum CAllocator_12  ) )from_dash_iter1012 , .env =  env->envinst83 } );
    ( (  set1010 ) ( (  buf4211 ) ,  ( (  i32_dash_size349 ) ( ( (  p4207 ) .f_line ) ) ) ,  ( (  mk_dash_line932 ) ( ( temp1011.fun ( &temp1011.env ,  ( (  subslice955 ) ( ( (  to_dash_slice368 ) ( ( (  extracted_dash_line_dash_buf4212 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size349 ) ( ( (  p4207 ) .f_bi ) ) ) ) ) ,  (  al4210 ) ) ) ) ) ) );
    struct Line_30 *  last_dash_line4214 = ( (  get_dash_ptr370 ) ( (  buf4211 ) ,  ( (  i32_dash_size349 ) ( ( (  p4207 ) .f_line ) ) ) ) );
    struct envunion161  temp1015 = ( (struct envunion161){ .fun = (  enum Unit_10  (*) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  ) )add_dash_all536 , .env =  env->envinst59 } );
    ( temp1015.fun ( &temp1015.env ,  ( & ( ( * (  last_dash_line4214 ) ) .f_line ) ) ,  ( ( (  or_dash_else1016 ) ( ( (  head1017 ) ( ( (  lines1022 ) ( (  bytes4209 ) ) ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added4215 = (  from_dash_integral92 ( 0 ) );
    struct Zip_1024  temp1023 =  into_dash_iter1029 ( ( (  zip1030 ) ( ( (  drop1032 ) ( ( (  split_dash_by_dash_each1034 ) ( (  bytes4209 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from573 ) ( (  from_dash_integral92 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_722  __cond1037 =  next1038 (&temp1023);
        if (  __cond1037 .tag == 0 ) {
            break;
        }
        struct Tuple2_711  dref4216 =  __cond1037 .stuff .Maybe_722_Just_s .field0;
        struct envunion1044  temp1043 = ( (struct envunion1044){ .fun = (  struct List_11  (*) (  struct env83*  ,    struct Slice_13  ,    enum CAllocator_12  ) )from_dash_iter1012 , .env =  env->envinst83 } );
        struct Line_30  temp1042 = ( (  mk_dash_line932 ) ( ( temp1043.fun ( &temp1043.env ,  ( ( dref4216 .field0 ) .f_contents ) ,  (  al4210 ) ) ) ) );
        struct Line_30 *  nuline4219 = ( &temp1042 );
        size_t  next_dash_line4220 = ( (  i32_dash_size349 ) ( (  op_dash_add224 ( ( (  p4207 ) .f_line ) , ( dref4216 .field1 ) ) ) ) );
        struct envunion160  temp1045 = ( (struct envunion160){ .fun = (  enum Unit_10  (*) (  struct env50*  ,    struct List_28 *  ,    size_t  ,    struct Line_30  ) )insert1046 , .env =  env->envinst50 } );
        ( temp1045.fun ( &temp1045.env ,  (  buf4211 ) ,  (  next_dash_line4220 ) ,  ( * (  nuline4219 ) ) ) );
        last_dash_line4214 = ( (  get_dash_ptr370 ) ( (  buf4211 ) ,  (  next_dash_line4220 ) ) );
        lines_dash_added4215 = (  op_dash_add224 ( (  lines_dash_added4215 ) , (  from_dash_integral92 ( 1 ) ) ) );
    }
    struct envunion1050  temp1049 = ( (struct envunion1050){ .fun = (  enum Unit_10  (*) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  ) )add_dash_all536 , .env =  env->envinst59 } );
    ( temp1049.fun ( &temp1049.env ,  ( & ( ( * (  last_dash_line4214 ) ) .f_line ) ) ,  (  remaining4213 ) ) );
    ( (  free_dash_line1051 ) ( ( & (  extracted_dash_line_dash_buf4212 ) ) ) );
    return (  lines_dash_added4215 );
}

static  size_t   size1053 (    struct List_11 *  l2443 ) {
    return ( ( * (  l2443 ) ) .f_count );
}

struct StrConcat_1059 {
    struct StrConcat_119  field0;
    struct Char_101  field1;
};

static struct StrConcat_1059 StrConcat_1059_StrConcat (  struct StrConcat_119  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_1059 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1058 {
    struct StrConcat_1059  field0;
    size_t  field1;
};

static struct StrConcat_1058 StrConcat_1058_StrConcat (  struct StrConcat_1059  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_1058 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1057 {
    struct StrConcat_1058  field0;
    struct Char_101  field1;
};

static struct StrConcat_1057 StrConcat_1057_StrConcat (  struct StrConcat_1058  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_1057 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1062 {
    struct StrView_18  field0;
    struct StrConcat_1057  field1;
};

static struct StrConcat_1062 StrConcat_1062_StrConcat (  struct StrView_18  field0 ,  struct StrConcat_1057  field1 ) {
    return ( struct StrConcat_1062 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1061 {
    struct StrConcat_1062  field0;
    struct Char_101  field1;
};

static struct StrConcat_1061 StrConcat_1061_StrConcat (  struct StrConcat_1062  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_1061 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_10   print_dash_str1066 (    struct StrConcat_1059  self1302 ) {
    struct StrConcat_1059  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str384 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str386 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str1065 (    struct StrConcat_1058  self1302 ) {
    struct StrConcat_1058  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str1066 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str385 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str1064 (    struct StrConcat_1057  self1302 ) {
    struct StrConcat_1057  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str1065 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str386 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str1063 (    struct StrConcat_1062  self1302 ) {
    struct StrConcat_1062  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str379 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str1064 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str1060 (    struct StrConcat_1061  self1302 ) {
    struct StrConcat_1061  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str1063 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str386 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   panic1056 (    struct StrConcat_1057  errmsg1343 ) {
    ( (  print_dash_str1060 ) ( ( ( StrConcat_1061_StrConcat ) ( ( ( StrConcat_1062_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_10_Unit );
}

struct Drop_1068 {
    struct Zip_563  field0;
    size_t  field1;
};

static struct Drop_1068 Drop_1068_Drop (  struct Zip_563  field0 ,  size_t  field1 ) {
    return ( struct Drop_1068 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1069 {
    ;
    struct List_11 *  list2473;
    ;
    ;
    size_t  num_dash_elems2478;
};

struct envunion1070 {
    enum Unit_10  (*fun) (  struct env1069*  ,    struct Tuple2_558  );
    struct env1069 env;
};

static  struct Drop_1068   into_dash_iter1072 (    struct Drop_1068  self853 ) {
    return (  self853 );
}

static  struct Maybe_567   next1073 (    struct Drop_1068 *  dref855 ) {
    while ( (  cmp371 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next568 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
        (* dref855 ) .field1 = (  op_dash_sub580 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next568 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
}

static  enum Unit_10   for_dash_each1067 (    struct Drop_1068  iterable1099 ,   struct envunion1070  fun1101 ) {
    struct Drop_1068  temp1071 = ( (  into_dash_iter1072 ) ( (  iterable1099 ) ) );
    struct Drop_1068 *  it1102 = ( &temp1071 );
    while ( ( true ) ) {
        struct Maybe_567  dref1103 = ( (  next1073 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_567_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_567_Just_t ) {
                struct envunion1070  temp1074 = (  fun1101 );
                ( temp1074.fun ( &temp1074.env ,  ( dref1103 .stuff .Maybe_567_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  struct Drop_1068   drop1075 (    struct Zip_563  iterable860 ,    size_t  i862 ) {
    struct Zip_563  it863 = ( (  into_dash_iter566 ) ( (  iterable860 ) ) );
    return ( ( Drop_1068_Drop ) ( (  it863 ) ,  (  i862 ) ) );
}

static  struct SliceIter_540   into_dash_iter1077 (    struct List_11  self2433 ) {
    return ( (  into_dash_iter542 ) ( ( (  subslice955 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

static  struct Zip_563   zip1076 (    struct List_11  left947 ,    struct FromIter_564  right949 ) {
    struct SliceIter_540  left_dash_it950 = ( (  into_dash_iter1077 ) ( (  left947 ) ) );
    struct FromIter_564  right_dash_it951 = ( (  into_dash_iter572 ) ( (  right949 ) ) );
    return ( (struct Zip_563) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  enum Unit_10   set1079 (    struct List_11 *  list2426 ,    size_t  i2428 ,    uint8_t  elem2430 ) {
    if ( ( (  cmp371 ( (  i2428 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2428 ) , ( ( * (  list2426 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2428 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2426 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set560 ) ( ( ( * (  list2426 ) ) .f_elements ) ,  (  i2428 ) ,  (  elem2430 ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam1078 (   struct env1069* env ,    struct Tuple2_558  dref2479 ) {
    return ( (  set1079 ) ( ( env->list2473 ) ,  (  op_dash_sub580 ( ( (  i32_dash_size349 ) ( ( dref2479 .field1 ) ) ) , ( env->num_dash_elems2478 ) ) ) ,  ( dref2479 .field0 ) ) );
}

static  enum Unit_10   remove_dash_range1055 (   struct env53* env ,    struct List_11 *  list2473 ,    size_t  from2475 ,    size_t  to_dash_excl2477 ) {
    if ( (  cmp371 ( (  to_dash_excl2477 ) , (  from2475 ) ) == 0 ) ) {
        ( (  panic1056 ) ( ( ( StrConcat_1057_StrConcat ) ( ( ( StrConcat_1058_StrConcat ) ( ( ( StrConcat_1059_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2475 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2477 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp371 ( (  from2475 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2475 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp371 ( (  to_dash_excl2477 ) , ( ( * (  list2473 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2477 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2478 = (  op_dash_sub580 ( (  to_dash_excl2477 ) , (  from2475 ) ) );
    struct env1069 envinst1069 = {
        .list2473 =  list2473 ,
        .num_dash_elems2478 =  num_dash_elems2478 ,
    };
    ( (  for_dash_each1067 ) ( ( (  drop1075 ) ( ( (  zip1076 ) ( ( * (  list2473 ) ) ,  ( (  from573 ) ( (  from_dash_integral92 ( 0 ) ) ) ) ) ) ,  (  op_dash_add425 ( (  from2475 ) , (  num_dash_elems2478 ) ) ) ) ) ,  ( (struct envunion1070){ .fun = (  enum Unit_10  (*) (  struct env1069*  ,    struct Tuple2_558  ) )lam1078 , .env =  envinst1069 } ) ) );
    (*  list2473 ) .f_count = (  op_dash_sub580 ( ( ( * (  list2473 ) ) .f_count ) , (  num_dash_elems2478 ) ) );
    size_t  capacity2482 = ( ( ( * (  list2473 ) ) .f_elements ) .f_count );
    if ( (  cmp371 ( (  op_dash_mul555 ( ( ( * (  list2473 ) ) .f_count ) , ( env->shrink_dash_factor2449 ) ) ) , (  capacity2482 ) ) == 0 ) ) {
        if ( (  eq352 ( ( ( * (  list2473 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free574 ) ( ( ( * (  list2473 ) ) .f_al ) ,  ( ( * (  list2473 ) ) .f_elements ) ) );
            (*  list2473 ) .f_elements = ( (  empty526 ) ( ) );
            return ( Unit_10_Unit );
        }
        size_t  new_dash_size2483 = (  op_dash_mul555 ( (  op_dash_add425 ( (  op_dash_div396 ( ( ( * (  list2473 ) ) .f_count ) , ( env->shrink_dash_factor2449 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2449 ) ) );
        struct Slice_13  new_dash_slice2484 = ( (  allocate550 ) ( ( ( * (  list2473 ) ) .f_al ) ,  (  new_dash_size2483 ) ) );
        ( (  copy_dash_to731 ) ( ( (  subslice955 ) ( ( ( * (  list2473 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  (  new_dash_slice2484 ) ) );
        ( (  free574 ) ( ( ( * (  list2473 ) ) .f_al ) ,  ( ( * (  list2473 ) ) .f_elements ) ) );
        (*  list2473 ) .f_elements = (  new_dash_slice2484 );
    }
    return ( Unit_10_Unit );
}

struct envunion1081 {
    int32_t  (*fun) (  struct env158*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct StrView_18  );
    struct env158 env;
};

static  enum Unit_10   trim1082 (    struct List_11 *  l2530 ,    size_t  new_dash_count2532 ) {
    (*  l2530 ) .f_count = ( (  min956 ) ( (  new_dash_count2532 ) ,  ( ( * (  l2530 ) ) .f_count ) ) );
    return ( Unit_10_Unit );
}

static  int32_t   min1083 (    int32_t  l1367 ,    int32_t  r1369 ) {
    if ( (  cmp222 ( (  l1367 ) , (  r1369 ) ) == 0 ) ) {
        return (  l1367 );
    } else {
        return (  r1369 );
    }
}

struct envunion1085 {
    int32_t  (*fun) (  struct env158*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct StrView_18  );
    struct env158 env;
};

struct Maybe_1087 {
    enum {
        Maybe_1087_None_t,
        Maybe_1087_Just_t,
    } tag;
    union {
        struct {
            struct Slice_13  field0;
        } Maybe_1087_Just_s;
    } stuff;
};

static struct Maybe_1087 Maybe_1087_Just (  struct Slice_13  field0 ) {
    return ( struct Maybe_1087 ) { .tag = Maybe_1087_Just_t, .stuff = { .Maybe_1087_Just_s = { .field0 = field0 } } };
};

static  struct Slice_13   or_dash_else1086 (    struct Maybe_1087  self1360 ,    struct Slice_13  alt1362 ) {
    struct Maybe_1087  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_1087_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_1087_Just_t ) {
            return ( dref1363 .stuff .Maybe_1087_Just_s .field0 );
        }
    }
}

static  struct Maybe_1087   fmap_dash_maybe1088 (    struct Maybe_886  x1585 ,    struct Slice_13 (*  fun1587 )(    struct Line_30  ) ) {
    struct Maybe_886  dref1588 = (  x1585 );
    if ( dref1588.tag == Maybe_886_None_t ) {
        return ( (struct Maybe_1087) { .tag = Maybe_1087_None_t } );
    }
    else {
        if ( dref1588.tag == Maybe_886_Just_t ) {
            return ( ( Maybe_1087_Just ) ( ( (  fun1587 ) ( ( dref1588 .stuff .Maybe_886_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_886   try_dash_get1089 (    struct List_28 *  list2421 ,    size_t  i2423 ) {
    if ( (  cmp371 ( (  i2423 ) , ( ( * (  list2421 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_886) { .tag = Maybe_886_None_t } );
    }
    return ( ( Maybe_886_Just ) ( ( (  get369 ) ( (  list2421 ) ,  (  i2423 ) ) ) ) );
}

static  struct Slice_13   lam1090 (    struct Line_30  line4238 ) {
    return ( (  to_dash_slice368 ) ( ( (  line4238 ) .f_line ) ) );
}

struct StrConcat_1094 {
    struct StrConcat_115  field0;
    struct Char_101  field1;
};

static struct StrConcat_1094 StrConcat_1094_StrConcat (  struct StrConcat_115  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_1094 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_10   print_dash_str1095 (    struct StrConcat_115  self1302 ) {
    struct StrConcat_115  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str379 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str379 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str1093 (    struct StrConcat_1094  self1302 ) {
    struct StrConcat_1094  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str1095 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str386 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   assert1092 (    bool  cond1346 ,    struct StrView_18  msg1348 ) {
    if ( ( ! (  cond1346 ) ) ) {
        ( (  print_dash_str1093 ) ( ( ( StrConcat_1094_StrConcat ) ( ( ( StrConcat_115_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1348 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_10_Unit );
}

struct Drop_1099 {
    struct Zip_918  field0;
    size_t  field1;
};

static struct Drop_1099 Drop_1099_Drop (  struct Zip_918  field0 ,  size_t  field1 ) {
    return ( struct Drop_1099 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1100 {
    ;
    struct List_28 *  list2473;
    ;
    ;
    size_t  num_dash_elems2478;
};

struct envunion1101 {
    enum Unit_10  (*fun) (  struct env1100*  ,    struct Tuple2_914  );
    struct env1100 env;
};

static  struct Drop_1099   into_dash_iter1103 (    struct Drop_1099  self853 ) {
    return (  self853 );
}

static  struct Maybe_922   next1104 (    struct Drop_1099 *  dref855 ) {
    while ( (  cmp371 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next923 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
        (* dref855 ) .field1 = (  op_dash_sub580 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next923 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
}

static  enum Unit_10   for_dash_each1098 (    struct Drop_1099  iterable1099 ,   struct envunion1101  fun1101 ) {
    struct Drop_1099  temp1102 = ( (  into_dash_iter1103 ) ( (  iterable1099 ) ) );
    struct Drop_1099 *  it1102 = ( &temp1102 );
    while ( ( true ) ) {
        struct Maybe_922  dref1103 = ( (  next1104 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_922_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_922_Just_t ) {
                struct envunion1101  temp1105 = (  fun1101 );
                ( temp1105.fun ( &temp1105.env ,  ( dref1103 .stuff .Maybe_922_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  struct Drop_1099   drop1106 (    struct Zip_918  iterable860 ,    size_t  i862 ) {
    struct Zip_918  it863 = ( (  into_dash_iter921 ) ( (  iterable860 ) ) );
    return ( ( Drop_1099_Drop ) ( (  it863 ) ,  (  i862 ) ) );
}

static  struct Slice_29   subslice1109 (    struct Slice_29  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Line_30 *  begin_dash_ptr2209 = ( (  offset_dash_ptr415 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp371 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp371 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_29) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub580 ( ( (  min956 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_29) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct SliceIter_919   into_dash_iter1108 (    struct List_28  self2433 ) {
    return ( (  into_dash_iter927 ) ( ( (  subslice1109 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

static  struct Zip_918   zip1107 (    struct List_28  left947 ,    struct FromIter_564  right949 ) {
    struct SliceIter_919  left_dash_it950 = ( (  into_dash_iter1108 ) ( (  left947 ) ) );
    struct FromIter_564  right_dash_it951 = ( (  into_dash_iter572 ) ( (  right949 ) ) );
    return ( (struct Zip_918) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  enum Unit_10   lam1110 (   struct env1100* env ,    struct Tuple2_914  dref2479 ) {
    return ( (  set1010 ) ( ( env->list2473 ) ,  (  op_dash_sub580 ( ( (  i32_dash_size349 ) ( ( dref2479 .field1 ) ) ) , ( env->num_dash_elems2478 ) ) ) ,  ( dref2479 .field0 ) ) );
}

struct env1113 {
    struct Slice_29  dest2281;
    ;
    ;
};

struct envunion1114 {
    enum Unit_10  (*fun) (  struct env1113*  ,    struct Tuple2_914  );
    struct env1113 env;
};

static  enum Unit_10   for_dash_each1112 (    struct Zip_918  iterable1099 ,   struct envunion1114  fun1101 ) {
    struct Zip_918  temp1115 = ( (  into_dash_iter921 ) ( (  iterable1099 ) ) );
    struct Zip_918 *  it1102 = ( &temp1115 );
    while ( ( true ) ) {
        struct Maybe_922  dref1103 = ( (  next923 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_922_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_922_Just_t ) {
                struct envunion1114  temp1116 = (  fun1101 );
                ( temp1116.fun ( &temp1116.env ,  ( dref1103 .stuff .Maybe_922_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam1117 (   struct env1113* env ,    struct Tuple2_914  dref2282 ) {
    return ( (  set916 ) ( ( env->dest2281 ) ,  ( (  i32_dash_size349 ) ( ( dref2282 .field1 ) ) ) ,  ( dref2282 .field0 ) ) );
}

static  enum Unit_10   copy_dash_to1111 (    struct Slice_29  src2279 ,    struct Slice_29  dest2281 ) {
    if ( (  cmp371 ( ( (  src2279 ) .f_count ) , ( (  dest2281 ) .f_count ) ) == 2 ) ) {
        ( (  panic732 ) ( ( ( StrConcat_733_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2279 ) .f_count ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2281 ) .f_count ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env1113 envinst1113 = {
        .dest2281 =  dest2281 ,
    };
    ( (  for_dash_each1112 ) ( ( (  zip926 ) ( (  src2279 ) ,  ( (  from573 ) ( (  from_dash_integral92 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1114){ .fun = (  enum Unit_10  (*) (  struct env1113*  ,    struct Tuple2_914  ) )lam1117 , .env =  envinst1113 } ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   remove_dash_range1097 (   struct env54* env ,    struct List_28 *  list2473 ,    size_t  from2475 ,    size_t  to_dash_excl2477 ) {
    if ( (  cmp371 ( (  to_dash_excl2477 ) , (  from2475 ) ) == 0 ) ) {
        ( (  panic1056 ) ( ( ( StrConcat_1057_StrConcat ) ( ( ( StrConcat_1058_StrConcat ) ( ( ( StrConcat_1059_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2475 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2477 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp371 ( (  from2475 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2475 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp371 ( (  to_dash_excl2477 ) , ( ( * (  list2473 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2477 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2478 = (  op_dash_sub580 ( (  to_dash_excl2477 ) , (  from2475 ) ) );
    struct env1100 envinst1100 = {
        .list2473 =  list2473 ,
        .num_dash_elems2478 =  num_dash_elems2478 ,
    };
    ( (  for_dash_each1098 ) ( ( (  drop1106 ) ( ( (  zip1107 ) ( ( * (  list2473 ) ) ,  ( (  from573 ) ( (  from_dash_integral92 ( 0 ) ) ) ) ) ) ,  (  op_dash_add425 ( (  from2475 ) , (  num_dash_elems2478 ) ) ) ) ) ,  ( (struct envunion1101){ .fun = (  enum Unit_10  (*) (  struct env1100*  ,    struct Tuple2_914  ) )lam1110 , .env =  envinst1100 } ) ) );
    (*  list2473 ) .f_count = (  op_dash_sub580 ( ( ( * (  list2473 ) ) .f_count ) , (  num_dash_elems2478 ) ) );
    size_t  capacity2482 = ( ( ( * (  list2473 ) ) .f_elements ) .f_count );
    if ( (  cmp371 ( (  op_dash_mul555 ( ( ( * (  list2473 ) ) .f_count ) , ( env->shrink_dash_factor2449 ) ) ) , (  capacity2482 ) ) == 0 ) ) {
        if ( (  eq352 ( ( ( * (  list2473 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free928 ) ( ( ( * (  list2473 ) ) .f_al ) ,  ( ( * (  list2473 ) ) .f_elements ) ) );
            (*  list2473 ) .f_elements = ( (  empty872 ) ( ) );
            return ( Unit_10_Unit );
        }
        size_t  new_dash_size2483 = (  op_dash_mul555 ( (  op_dash_add425 ( (  op_dash_div396 ( ( ( * (  list2473 ) ) .f_count ) , ( env->shrink_dash_factor2449 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2449 ) ) );
        struct Slice_29  new_dash_slice2484 = ( (  allocate907 ) ( ( ( * (  list2473 ) ) .f_al ) ,  (  new_dash_size2483 ) ) );
        ( (  copy_dash_to1111 ) ( ( (  subslice1109 ) ( ( ( * (  list2473 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  (  new_dash_slice2484 ) ) );
        ( (  free928 ) ( ( ( * (  list2473 ) ) .f_al ) ,  ( ( * (  list2473 ) ) .f_elements ) ) );
        (*  list2473 ) .f_elements = (  new_dash_slice2484 );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   change_dash_no_dash_action1002 (   struct env162* env ,    struct TextBuf_164 *  self4223 ,    struct Pos_40  from_dash_pos4225 ,    struct Pos_40  to_dash_pos4227 ,    struct StrView_18  bytes4229 ) {
    struct Pos_40  from4230 = ( (  min1003 ) ( (  from_dash_pos4225 ) ,  (  to_dash_pos4227 ) ) );
    struct Pos_40  to4231 = ( (  max1005 ) ( (  from_dash_pos4225 ) ,  (  to_dash_pos4227 ) ) );
    if ( (  eq1006 ( (  to4231 ) , (  from4230 ) ) ) ) {
        enum CAllocator_12  al4232 = ( ( ( * (  self4223 ) ) .f_buf ) .f_al );
        if ( ( (  eq352 ( ( (  size490 ) ( ( & ( ( * (  self4223 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size349 ) ( ( (  from4230 ) .f_line ) ) ) ) ) && (  eq660 ( ( (  from4230 ) .f_bi ) , (  from_dash_integral92 ( 0 ) ) ) ) ) ) {
            struct envunion168  temp1007 = ( (struct envunion168){ .fun = (  enum Unit_10  (*) (  struct env26*  ,    struct List_28 *  ,    struct Line_30  ) )add904 , .env =  env->envinst26 } );
            ( temp1007.fun ( &temp1007.env ,  ( & ( ( * (  self4223 ) ) .f_buf ) ) ,  ( (  mk_dash_line932 ) ( ( (  mk525 ) ( (  al4232 ) ) ) ) ) ) );
        }
        struct envunion163  temp1008 = ( (struct envunion163){ .fun = (  int32_t  (*) (  struct env158*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct StrView_18  ) )add_dash_to_dash_spot1009 , .env =  env->envinst158 } );
        ( temp1008.fun ( &temp1008.env ,  (  self4223 ) ,  (  from4230 ) ,  (  bytes4229 ) ) );
    } else {
        struct List_28 *  lines_dash_buf4233 = ( & ( ( * (  self4223 ) ) .f_buf ) );
        struct Line_30 *  first_dash_line4234 = ( (  get_dash_ptr370 ) ( (  lines_dash_buf4233 ) ,  ( (  i32_dash_size349 ) ( ( (  from4230 ) .f_line ) ) ) ) );
        (*  first_dash_line4234 ) .f_invalidated = ( true );
        if ( ( (  eq660 ( ( (  from4230 ) .f_line ) , ( (  to4231 ) .f_line ) ) ) && (  cmp222 ( ( (  to4231 ) .f_bi ) , (  op_dash_add224 ( ( (  size_dash_i32380 ) ( ( (  size1053 ) ( ( & ( ( * (  first_dash_line4234 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion170  temp1054 = ( (struct envunion170){ .fun = (  enum Unit_10  (*) (  struct env53*  ,    struct List_11 *  ,    size_t  ,    size_t  ) )remove_dash_range1055 , .env =  env->envinst53 } );
            ( temp1054.fun ( &temp1054.env ,  ( & ( ( * (  first_dash_line4234 ) ) .f_line ) ) ,  ( (  i32_dash_size349 ) ( ( (  from4230 ) .f_bi ) ) ) ,  ( (  i32_dash_size349 ) ( ( (  to4231 ) .f_bi ) ) ) ) );
            struct envunion1081  temp1080 = ( (struct envunion1081){ .fun = (  int32_t  (*) (  struct env158*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct StrView_18  ) )add_dash_to_dash_spot1009 , .env =  env->envinst158 } );
            ( temp1080.fun ( &temp1080.env ,  (  self4223 ) ,  (  from4230 ) ,  (  bytes4229 ) ) );
        } else {
            ( (  trim1082 ) ( ( & ( ( * (  first_dash_line4234 ) ) .f_line ) ) ,  ( (  i32_dash_size349 ) ( ( (  from4230 ) .f_bi ) ) ) ) );
            struct Line_30 *  last_dash_line4235 = ( (  get_dash_ptr370 ) ( (  lines_dash_buf4233 ) ,  ( (  i32_dash_size349 ) ( ( (  to4231 ) .f_line ) ) ) ) );
            (*  last_dash_line4235 ) .f_invalidated = ( true );
            to4231 .f_bi = ( (  min1083 ) ( ( (  to4231 ) .f_bi ) ,  (  op_dash_add224 ( ( (  size_dash_i32380 ) ( ( (  size1053 ) ( ( & ( ( * (  last_dash_line4235 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) ) );
            if ( (  eq660 ( ( (  to4231 ) .f_bi ) , (  op_dash_add224 ( ( (  size_dash_i32380 ) ( ( (  size1053 ) ( ( & ( ( * (  last_dash_line4235 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) ) {
                to4231 .f_line = (  op_dash_add224 ( ( (  to4231 ) .f_line ) , (  from_dash_integral92 ( 1 ) ) ) );
                to4231 .f_bi = (  from_dash_integral92 ( 0 ) );
            }
            struct envunion1085  temp1084 = ( (struct envunion1085){ .fun = (  int32_t  (*) (  struct env158*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct StrView_18  ) )add_dash_to_dash_spot1009 , .env =  env->envinst158 } );
            int32_t  lines_dash_added4236 = ( temp1084.fun ( &temp1084.env ,  (  self4223 ) ,  (  from4230 ) ,  (  bytes4229 ) ) );
            to4231 .f_line = (  op_dash_add224 ( ( (  to4231 ) .f_line ) , (  lines_dash_added4236 ) ) );
            from4230 .f_line = (  op_dash_add224 ( ( (  from4230 ) .f_line ) , (  lines_dash_added4236 ) ) );
            struct Slice_13  last_dash_line4239 = ( (  or_dash_else1086 ) ( ( (  fmap_dash_maybe1088 ) ( ( (  try_dash_get1089 ) ( (  lines_dash_buf4233 ) ,  ( (  i32_dash_size349 ) ( ( (  to4231 ) .f_line ) ) ) ) ) ,  (  lam1090 ) ) ) ,  ( (  empty526 ) ( ) ) ) );
            struct envunion169  temp1091 = ( (struct envunion169){ .fun = (  enum Unit_10  (*) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  ) )add_dash_all536 , .env =  env->envinst59 } );
            ( temp1091.fun ( &temp1091.env ,  ( & ( ( * (  first_dash_line4234 ) ) .f_line ) ) ,  ( (  from954 ) ( (  last_dash_line4239 ) ,  ( (  i32_dash_size349 ) ( ( (  to4231 ) .f_bi ) ) ) ) ) ) );
            ( (  assert1092 ) ( (  cmp222 ( ( (  to4231 ) .f_line ) , ( (  from4230 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion171  temp1096 = ( (struct envunion171){ .fun = (  enum Unit_10  (*) (  struct env54*  ,    struct List_28 *  ,    size_t  ,    size_t  ) )remove_dash_range1097 , .env =  env->envinst54 } );
            ( temp1096.fun ( &temp1096.env ,  ( & ( ( * (  self4223 ) ) .f_buf ) ) ,  ( (  i32_dash_size349 ) ( (  op_dash_add224 ( ( (  from4230 ) .f_line ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) ,  (  op_dash_add425 ( ( (  i32_dash_size349 ) ( ( (  to4231 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_10_Unit );
}

static  struct Pos_40   mk1118 (    int32_t  line3973 ,    int32_t  bi3975 ) {
    return ( (struct Pos_40) { .f_line = (  line3973 ) , .f_bi = (  bi3975 ) } );
}

static  struct Maybe_861   mk_dash_from_dash_file864 (   struct env176* env ,    enum CAllocator_12  al4262 ,    struct StrView_18  filename4264 ) {
    struct envunion177  temp866 = ( (struct envunion177){ .fun = (  struct TextBuf_164  (*) (  struct env174*  ,    enum CAllocator_12  ) )mk867 , .env =  env->envinst174 } );
    struct TextBuf_164  temp865 = ( temp866.fun ( &temp866.env ,  (  al4262 ) ) );
    struct TextBuf_164 *  tb4265 = ( &temp865 );
    (*  tb4265 ) .f_filetype = ( (  detect_dash_filetype_dash_from_dash_filename948 ) ( (  filename4264 ) ) );
    struct StrView_18  filename04266 = ( (  clone_dash_0730 ) ( (  filename4264 ) ,  (  al4262 ) ) );
    struct Maybe_125  dref4267 = ( (  try_dash_read_dash_contents989 ) ( ( (  as_dash_const_dash_str998 ) ( (  filename04266 ) ) ) ,  (  al4262 ) ) );
    if ( dref4267.tag == Maybe_125_None_t ) {
        ( (  free782 ) ( (  filename04266 ) ,  (  al4262 ) ) );
        return ( (struct Maybe_861) { .tag = Maybe_861_None_t } );
    }
    else {
        if ( dref4267.tag == Maybe_125_Just_t ) {
            if ( (  eq999 ( ( (  try_dash_get963 ) ( ( ( dref4267 .stuff .Maybe_125_Just_s .field0 ) .f_contents ) ,  (  op_dash_sub580 ( ( ( ( dref4267 .stuff .Maybe_125_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) , ( ( Maybe_111_Just ) ( ( (  ascii_dash_u8964 ) ( ( (  from_dash_charlike351 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) {
                dref4267 .stuff .Maybe_125_Just_s .field0 = ( (  byte_dash_substr965 ) ( ( dref4267 .stuff .Maybe_125_Just_s .field0 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub580 ( ( ( ( dref4267 .stuff .Maybe_125_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
            }
            struct envunion178  temp1001 = ( (struct envunion178){ .fun = (  enum Unit_10  (*) (  struct env162*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ,    struct StrView_18  ) )change_dash_no_dash_action1002 , .env =  env->envinst162 } );
            ( temp1001.fun ( &temp1001.env ,  (  tb4265 ) ,  ( (  mk1118 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  from_dash_integral92 ( 0 ) ) ) ) ,  ( (  mk1118 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  from_dash_integral92 ( 0 ) ) ) ) ,  ( dref4267 .stuff .Maybe_125_Just_s .field0 ) ) );
            (*  tb4265 ) .f_filename = ( ( Maybe_125_Just ) ( (  filename04266 ) ) );
            return ( ( Maybe_861_Just ) ( ( * (  tb4265 ) ) ) );
        }
    }
}

struct envunion1120 {
    struct TextBuf_164  (*fun) (  struct env174*  ,    enum CAllocator_12  );
    struct env174 env;
};

struct envunion1122 {
    struct TextBuf_164  (*fun) (  struct env174*  ,    enum CAllocator_12  );
    struct env174 env;
};

static  struct Pane_289   mk1125 (    enum CAllocator_12  al4479 ,    struct TextBuf_164 *  buf4481 ) {
    return ( (struct Pane_289) { .f_buf = (  buf4481 ) , .f_cursor = ( (  mk1118 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  from_dash_integral92 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral92 ( 0 ) ) , .f_sel = ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) , .f_mode = ( Mode_290_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_291) { .f_screen_dash_top = (  from_dash_integral92 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral92 ( 0 ) ) } ) } );
}

struct envunion1128 {
    struct Tui_146  (*fun) (  struct env141*  );
    struct env141 env;
};

static  enum Unit_10   for_dash_each1132 (    struct StrViewIter_362  iterable1099 ,    enum Unit_10 (*  fun1101 )(    struct Char_101  ) ) {
    struct StrViewIter_362  temp1133 = ( (  into_dash_iter363 ) ( (  iterable1099 ) ) );
    struct StrViewIter_362 *  it1102 = ( &temp1133 );
    while ( ( true ) ) {
        struct Maybe_420  dref1103 = ( (  next421 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_420_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_420_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_420_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print1131 (    struct StrView_18  s1335 ) {
    ( (  for_dash_each1132 ) ( ( (  chars364 ) ( (  s1335 ) ) ) ,  (  printf_dash_char387 ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   enable_dash_alternative_dash_screen_dash_buffer1130 (  ) {
    ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[?1049h" ) ,  ( 8 ) ) ) ) );
    return ( Unit_10_Unit );
}

static  int32_t   stdin_dash_fileno1136 (  ) {
    return (  from_dash_integral92 ( 0 ) );
}

static  struct termios *   cast_dash_ptr1137 (    struct Termios_136 *  p398 ) {
    return ( (struct termios * ) (  p398 ) );
}

static  int32_t   op_dash_neg1138 (    int32_t  x246 ) {
    return ( (  from_dash_integral92 ( 0 ) ) - (  x246 ) );
}

static  enum Unit_10   panic1139 (    struct StrView_18  errmsg1343 ) {
    ( (  print_dash_str1093 ) ( ( ( StrConcat_1094_StrConcat ) ( ( ( StrConcat_115_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_10_Unit );
}

static  uint32_t   u32_dash_and1140 (    uint32_t  l3039 ,    uint32_t  r3041 ) {
    return ( (  l3039 ) & (  r3041 ) );
}

static  uint32_t   u32_dash_neg1141 (    uint32_t  l3044 ) {
    return ( ~ (  l3044 ) );
}

struct Array_1143 {
    uint32_t _arr [4];
};

struct ArrayIter_1145 {
    struct Array_1143  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_1145   into_dash_iter1146 (    struct Array_1143  self2102 ) {
    return ( (struct ArrayIter_1145) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_1147 {
    enum {
        Maybe_1147_None_t,
        Maybe_1147_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_1147_Just_s;
    } stuff;
};

static struct Maybe_1147 Maybe_1147_Just (  uint32_t  field0 ) {
    return ( struct Maybe_1147 ) { .tag = Maybe_1147_Just_t, .stuff = { .Maybe_1147_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr1151 (    struct Array_1143 *  p398 ) {
    return ( (uint32_t * ) (  p398 ) );
}

static  uint32_t *   offset_dash_ptr1152 (    uint32_t *  x377 ,    int64_t  count379 ) {
    uint32_t  temp1153;
    return ( (uint32_t * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul416 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1153 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr1150 (    struct Array_1143 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp371 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2029 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic890 ) ( ( ( StrConcat_891_StrConcat ) ( ( ( StrConcat_892_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2030 = ( ( (  cast_dash_ptr1151 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr1152 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  uint32_t   get1149 (    struct Array_1143 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr1150 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_1147   next1148 (    struct ArrayIter_1145 *  self2109 ) {
    if ( (  cmp371 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_1147) { .tag = Maybe_1147_None_t } );
    }
    uint32_t  e2111 = ( (  get1149 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add425 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1147_Just ) ( (  e2111 ) ) );
}

static  uint32_t   reduce1144 (    struct Array_1143  iterable1118 ,    uint32_t  base1120 ,    uint32_t (*  fun1122 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1123 = (  base1120 );
    struct ArrayIter_1145  it1124 = ( (  into_dash_iter1146 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_1147  dref1125 = ( (  next1148 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_1147_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_1147_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_1147_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1154 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1154);
    abort ( );
    ( Unit_10_Unit );
    uint32_t  temp1155;
    return (  temp1155 );
}

static  uint32_t   u32_dash_or1156 (    uint32_t  l3031 ,    uint32_t  r3033 ) {
    return ( (  l3031 ) | (  r3033 ) );
}

static  uint32_t   u32_dash_ors1142 (    struct Array_1143  vals3036 ) {
    return ( (  reduce1144 ) ( (  vals3036 ) ,  (  from_dash_integral230 ( 0 ) ) ,  (  u32_dash_or1156 ) ) );
}

static  struct Array_1143   from_dash_listlike1157 (    struct Array_1143 *  self369 ) {
    return ( * (  self369 ) );
}

static  uint32_t   echo1159 (  ) {
    return (  from_dash_integral230 ( 8 ) );
}

static  uint32_t   icanon1160 (  ) {
    return (  from_dash_integral230 ( 2 ) );
}

static  uint32_t   isig1161 (  ) {
    return (  from_dash_integral230 ( 1 ) );
}

static  uint32_t   iexten1162 (  ) {
    return (  from_dash_integral230 ( 32768 ) );
}

struct Array_1164 {
    uint32_t _arr [5];
};

struct ArrayIter_1166 {
    struct Array_1164  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_1166   into_dash_iter1167 (    struct Array_1164  self2102 ) {
    return ( (struct ArrayIter_1166) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr1171 (    struct Array_1164 *  p398 ) {
    return ( (uint32_t * ) (  p398 ) );
}

static  uint32_t *   get_dash_ptr1170 (    struct Array_1164 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp371 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2029 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic890 ) ( ( ( StrConcat_891_StrConcat ) ( ( ( StrConcat_892_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2030 = ( ( (  cast_dash_ptr1171 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr1152 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  uint32_t   get1169 (    struct Array_1164 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr1170 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_1147   next1168 (    struct ArrayIter_1166 *  self2109 ) {
    if ( (  cmp371 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_1147) { .tag = Maybe_1147_None_t } );
    }
    uint32_t  e2111 = ( (  get1169 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add425 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1147_Just ) ( (  e2111 ) ) );
}

static  uint32_t   reduce1165 (    struct Array_1164  iterable1118 ,    uint32_t  base1120 ,    uint32_t (*  fun1122 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1123 = (  base1120 );
    struct ArrayIter_1166  it1124 = ( (  into_dash_iter1167 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_1147  dref1125 = ( (  next1168 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_1147_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_1147_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_1147_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1172 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1172);
    abort ( );
    ( Unit_10_Unit );
    uint32_t  temp1173;
    return (  temp1173 );
}

static  uint32_t   u32_dash_ors1163 (    struct Array_1164  vals3036 ) {
    return ( (  reduce1165 ) ( (  vals3036 ) ,  (  from_dash_integral230 ( 0 ) ) ,  (  u32_dash_or1156 ) ) );
}

static  struct Array_1164   from_dash_listlike1174 (    struct Array_1164 *  self369 ) {
    return ( * (  self369 ) );
}

static  uint32_t   brkint1176 (  ) {
    return (  from_dash_integral230 ( 2 ) );
}

static  uint32_t   icrnl1177 (  ) {
    return (  from_dash_integral230 ( 256 ) );
}

static  uint32_t   inpck1178 (  ) {
    return (  from_dash_integral230 ( 16 ) );
}

static  uint32_t   istrip1179 (  ) {
    return (  from_dash_integral230 ( 32 ) );
}

static  uint32_t   ixon1180 (  ) {
    return (  from_dash_integral230 ( 1024 ) );
}

struct Array_1182 {
    uint32_t _arr [1];
};

struct ArrayIter_1184 {
    struct Array_1182  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_1184   into_dash_iter1185 (    struct Array_1182  self2102 ) {
    return ( (struct ArrayIter_1184) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr1189 (    struct Array_1182 *  p398 ) {
    return ( (uint32_t * ) (  p398 ) );
}

static  uint32_t *   get_dash_ptr1188 (    struct Array_1182 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp371 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2029 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic890 ) ( ( ( StrConcat_891_StrConcat ) ( ( ( StrConcat_892_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2030 = ( ( (  cast_dash_ptr1189 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr1152 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  uint32_t   get1187 (    struct Array_1182 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr1188 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_1147   next1186 (    struct ArrayIter_1184 *  self2109 ) {
    if ( (  cmp371 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_1147) { .tag = Maybe_1147_None_t } );
    }
    uint32_t  e2111 = ( (  get1187 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add425 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1147_Just ) ( (  e2111 ) ) );
}

static  uint32_t   reduce1183 (    struct Array_1182  iterable1118 ,    uint32_t  base1120 ,    uint32_t (*  fun1122 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1123 = (  base1120 );
    struct ArrayIter_1184  it1124 = ( (  into_dash_iter1185 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_1147  dref1125 = ( (  next1186 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_1147_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_1147_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_1147_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1190 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1190);
    abort ( );
    ( Unit_10_Unit );
    uint32_t  temp1191;
    return (  temp1191 );
}

static  uint32_t   u32_dash_ors1181 (    struct Array_1182  vals3036 ) {
    return ( (  reduce1183 ) ( (  vals3036 ) ,  (  from_dash_integral230 ( 0 ) ) ,  (  u32_dash_or1156 ) ) );
}

static  struct Array_1182   from_dash_listlike1192 (    struct Array_1182 *  self369 ) {
    return ( * (  self369 ) );
}

static  uint32_t   opost1194 (  ) {
    return (  from_dash_integral230 ( 1 ) );
}

static  uint32_t   cs81195 (  ) {
    return (  from_dash_integral230 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr1198 (    struct Array_137 *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  uint8_t *   get_dash_ptr1197 (    struct Array_137 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp371 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2029 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic890 ) ( ( ( StrConcat_891_StrConcat ) ( ( ( StrConcat_892_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2030 = ( ( (  cast_dash_ptr1198 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr422 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  enum Unit_10   set1196 (    struct Array_137 *  arr2039 ,    size_t  i2042 ,    uint8_t  e2044 ) {
    uint8_t *  p2045 = ( (  get_dash_ptr1197 ) ( (  arr2039 ) ,  (  i2042 ) ) );
    (*  p2045 ) = (  e2044 );
    return ( Unit_10_Unit );
}

static  size_t   vmin1199 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime1200 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush1201 (  ) {
    return (  from_dash_integral92 ( 2 ) );
}

static  struct Termios_136   enable_dash_raw_dash_mode1134 (  ) {
    struct Termios_136  temp1135 = ( (  undefined139 ) ( ) );
    struct Termios_136 *  orig_dash_termios3692 = ( &temp1135 );
    if ( (  eq660 ( ( ( tcgetattr ) ( ( (  stdin_dash_fileno1136 ) ( ) ) ,  ( (  cast_dash_ptr1137 ) ( (  orig_dash_termios3692 ) ) ) ) ) , (  op_dash_neg1138 ( (  from_dash_integral92 ( 1 ) ) ) ) ) ) ) {
        ( (  panic1139 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"tcgetattr" ) ,  ( 9 ) ) ) ) );
    }
    struct Termios_136  raw3693 = ( * (  orig_dash_termios3692 ) );
    struct Array_1143  temp1158 = ( (struct Array_1143) { ._arr = { ( (  echo1159 ) ( ) ) , ( (  icanon1160 ) ( ) ) , ( (  isig1161 ) ( ) ) , ( ( (  iexten1162 ) ( ) ) ) } } );
    raw3693 .f_c_dash_lflag = ( (  u32_dash_and1140 ) ( ( (  raw3693 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg1141 ) ( ( (  u32_dash_ors1142 ) ( ( (  from_dash_listlike1157 ) ( ( &temp1158 ) ) ) ) ) ) ) ) );
    struct Array_1164  temp1175 = ( (struct Array_1164) { ._arr = { ( (  brkint1176 ) ( ) ) , ( (  icrnl1177 ) ( ) ) , ( (  inpck1178 ) ( ) ) , ( (  istrip1179 ) ( ) ) , ( ( (  ixon1180 ) ( ) ) ) } } );
    raw3693 .f_c_dash_iflag = ( (  u32_dash_and1140 ) ( ( (  raw3693 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg1141 ) ( ( (  u32_dash_ors1163 ) ( ( (  from_dash_listlike1174 ) ( ( &temp1175 ) ) ) ) ) ) ) ) );
    struct Array_1182  temp1193 = ( (struct Array_1182) { ._arr = { ( ( (  opost1194 ) ( ) ) ) } } );
    raw3693 .f_c_dash_oflag = ( (  u32_dash_and1140 ) ( ( (  raw3693 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg1141 ) ( ( (  u32_dash_ors1181 ) ( ( (  from_dash_listlike1192 ) ( ( &temp1193 ) ) ) ) ) ) ) ) );
    raw3693 .f_c_dash_cflag = ( (  u32_dash_or1156 ) ( ( (  raw3693 ) .f_c_dash_cflag ) ,  ( (  cs81195 ) ( ) ) ) );
    ( (  set1196 ) ( ( & ( (  raw3693 ) .f_c_dash_cc ) ) ,  ( (  vmin1199 ) ( ) ) ,  (  from_dash_integral397 ( 0 ) ) ) );
    ( (  set1196 ) ( ( & ( (  raw3693 ) .f_c_dash_cc ) ) ,  ( (  vtime1200 ) ( ) ) ,  (  from_dash_integral397 ( 0 ) ) ) );
    if ( (  eq660 ( ( ( tcsetattr ) ( ( (  stdin_dash_fileno1136 ) ( ) ) ,  ( (  tcsa_dash_flush1201 ) ( ) ) ,  ( (  cast_dash_ptr1137 ) ( ( & (  raw3693 ) ) ) ) ) ) , (  op_dash_neg1138 ( (  from_dash_integral92 ( 1 ) ) ) ) ) ) ) {
        ( (  panic1139 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"tcsetattr" ) ,  ( 9 ) ) ) ) );
    }
    return ( * (  orig_dash_termios3692 ) );
}

static  enum Unit_10   hide_dash_cursor1202 (  ) {
    ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   reset_dash_colors1203 (  ) {
    ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   clear_dash_screen1204 (  ) {
    ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   enable_dash_mouse1205 (  ) {
    ( (  print_dash_str379 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   flush_dash_stdout1206 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr991 ) ( ) ) ) );
    return ( Unit_10_Unit );
}

static  bool   ptr_dash_eq1210 (    enum Unit_10 *  l658 ,    enum Unit_10 *  r660 ) {
    return ( (  l658 ) == (  r660 ) );
}

static  enum Unit_10 *   cast1211 (    const char*  x395 ) {
    return ( (enum Unit_10 * ) (  x395 ) );
}

static  void *   cast_dash_ptr1215 (    enum Unit_10 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1216 (    enum Unit_10 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  enum Unit_10 *   zeroed1213 (  ) {
    enum Unit_10 *  temp1214;
    enum Unit_10 *  x642 = (  temp1214 );
    ( ( memset ) ( ( (  cast_dash_ptr1215 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of1216 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  enum Unit_10 *   null_dash_ptr1212 (  ) {
    return ( (  zeroed1213 ) ( ) );
}

static  struct Maybe_857   from_dash_nullable_dash_c_dash_str1209 (    const char*  s663 ) {
    if ( ( (  ptr_dash_eq1210 ) ( ( (  cast1211 ) ( (  s663 ) ) ) ,  ( ( (  null_dash_ptr1212 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_857) { .tag = Maybe_857_None_t } );
    } else {
        return ( ( Maybe_857_Just ) ( (  s663 ) ) );
    }
}

static  struct Maybe_857   get1208 (    const char*  s2794 ) {
    return ( (  from_dash_nullable_dash_c_dash_str1209 ) ( ( ( getenv ) ( (  s2794 ) ) ) ) );
}

static  enum ColorPalette_147   query_dash_palette1207 (  ) {
    struct Maybe_857  colorterm2795 = ( (  get1208 ) ( ( (  from_dash_string93 ) ( ( (uint8_t*)"COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_857  dref2796 = (  colorterm2795 );
    if ( dref2796.tag == Maybe_857_Just_t ) {
        if ( ( (  eq659 ( ( dref2796 .stuff .Maybe_857_Just_s .field0 ) , ( (  from_dash_string93 ) ( ( (uint8_t*)"truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq659 ( ( dref2796 .stuff .Maybe_857_Just_s .field0 ) , ( (  from_dash_string93 ) ( ( (uint8_t*)"24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_147_PaletteRGB );
        }
    }
    else {
        if ( dref2796.tag == Maybe_857_None_t ) {
        }
    }
    struct Maybe_857  dref2798 = ( (  get1208 ) ( ( (  from_dash_string93 ) ( ( (uint8_t*)"TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2798.tag == Maybe_857_Just_t ) {
        if ( (  eq659 ( ( dref2798 .stuff .Maybe_857_Just_s .field0 ) , ( (  from_dash_string93 ) ( ( (uint8_t*)"linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_147_Palette8 );
        }
    }
    else {
        if ( dref2798.tag == Maybe_857_None_t ) {
        }
    }
    return ( ColorPalette_147_Palette16 );
}

struct Tuple2_1217 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_1217 Tuple2_1217_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_1217 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_1219 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr1223 (    struct Winsize_1219 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1224 (    struct Winsize_1219  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Winsize_1219   zeroed1221 (  ) {
    struct Winsize_1219  temp1222;
    struct Winsize_1219  x642 = (  temp1222 );
    ( ( memset ) ( ( (  cast_dash_ptr1223 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of1224 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  int32_t   stdout_dash_fileno1225 (  ) {
    return (  from_dash_integral92 ( 1 ) );
}

static  uint64_t   from_dash_integral1227 (    size_t  x65 ) {
    return ( (uint64_t ) (  x65 ) );
}

static  uint64_t   tiocgwinsz1226 (  ) {
    return (  from_dash_integral1227 ( 21523 ) );
}

static  bool   eq1228 (    uint16_t  l130 ,    uint16_t  r132 ) {
    return ( (  l130 ) == (  r132 ) );
}

static  uint16_t   from_dash_integral1229 (    size_t  x56 ) {
    return ( (uint16_t ) (  x56 ) );
}

static  void *   cast_dash_ptr1235 (    uint32_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  uint32_t   zeroed1233 (  ) {
    uint32_t  temp1234;
    uint32_t  x642 = (  temp1234 );
    ( ( memset ) ( ( (  cast_dash_ptr1235 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of455 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  uint16_t *   cast1236 (    uint32_t *  x395 ) {
    return ( (uint16_t * ) (  x395 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed1231 (    uint16_t  x645 ) {
    uint32_t  temp1232 = ( (  zeroed1233 ) ( ) );
    uint32_t *  y646 = ( &temp1232 );
    uint16_t *  yp647 = ( (  cast1236 ) ( (  y646 ) ) );
    (*  yp647 ) = (  x645 );
    return ( * (  y646 ) );
}

static  uint32_t   u16_dash_u321230 (    uint16_t  x720 ) {
    return ( (  cast_dash_on_dash_zeroed1231 ) ( (  x720 ) ) );
}

static  struct Tuple2_1217   get_dash_dimensions1218 (  ) {
    struct Winsize_1219  temp1220 = ( ( (  zeroed1221 ) ( ) ) );
    struct Winsize_1219 *  ws2781 = ( &temp1220 );
    if ( ( (  eq660 ( ( ( ioctl ) ( ( (  stdout_dash_fileno1225 ) ( ) ) ,  ( (  tiocgwinsz1226 ) ( ) ) ,  (  ws2781 ) ) ) , (  op_dash_neg1138 ( (  from_dash_integral92 ( 1 ) ) ) ) ) ) || (  eq1228 ( ( ( * (  ws2781 ) ) .f_ws_dash_col ) , (  from_dash_integral1229 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_1217_Tuple2 ) ( (  from_dash_integral230 ( 80 ) ) ,  (  from_dash_integral230 ( 24 ) ) ) );
    }
    return ( ( Tuple2_1217_Tuple2 ) ( ( (  u16_dash_u321230 ) ( ( ( * (  ws2781 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u321230 ) ( ( ( * (  ws2781 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined1239 (  ) {
    struct timespec  temp1240;
    return (  temp1240 );
}

static  int32_t   clock_dash_monotonic1241 (  ) {
    return (  from_dash_integral92 ( 1 ) );
}

static  struct timespec   now1237 (  ) {
    struct timespec  temp1238 = ( (  undefined1239 ) ( ) );
    struct timespec *  t3651 = ( &temp1238 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic1241 ) ( ) ) ,  (  t3651 ) ) );
    return ( * (  t3651 ) );
}

struct env1242 {
    struct anon_135 *  tui_dash_global_dash_state3703;
};

struct envunion1243 {
    enum Unit_10  (*fun) (  struct env1242*  ,    int32_t  );
    struct env1242 env;
};

struct envunion1243  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig1244 ) {
    struct envunion1243  temp1245 = _intr_sigarr [  __intr__sig1244 ];
    temp1245.fun ( &temp1245.env ,  __intr__sig1244 );
}

static  enum Unit_10  _intr_register_signal (    int32_t  __intr__sig1246 ,   struct envunion1243  __intr__fun1247 ) {
    _intr_sigarr [  __intr__sig1246 ] =  __intr__fun1247;
    signal(  __intr__sig1246 , _intr_sighandle );
    return Unit_10_Unit;
}

static  int32_t   sigwinch1248 (  ) {
    return (  from_dash_integral92 ( 28 ) );
}

static  enum Unit_10   lam1249 (   struct env1242* env ,    int32_t  dref3709 ) {
    (* env->tui_dash_global_dash_state3703 ) .f_should_dash_resize = ( true );
    return ( Unit_10_Unit );
}

static  uint32_t   fst1250 (    struct Tuple2_1217  dref1563 ) {
    return ( dref1563 .field0 );
}

static  uint32_t   snd1251 (    struct Tuple2_1217  dref1566 ) {
    return ( dref1566 .field1 );
}

static  struct Tui_146   mk1129 (   struct env141* env ) {
    ( (  enable_dash_alternative_dash_screen_dash_buffer1130 ) ( ) );
    (* env->tui_dash_global_dash_state3703 ) .f_orig_dash_termios = ( (  enable_dash_raw_dash_mode1134 ) ( ) );
    ( (  hide_dash_cursor1202 ) ( ) );
    ( (  reset_dash_colors1203 ) ( ) );
    ( (  clear_dash_screen1204 ) ( ) );
    ( (  enable_dash_mouse1205 ) ( ) );
    ( (  flush_dash_stdout1206 ) ( ) );
    enum ColorPalette_147  palette3705 = ( (  query_dash_palette1207 ) ( ) );
    struct Tuple2_1217  dims3706 = ( (  get_dash_dimensions1218 ) ( ) );
    uint32_t  fps3707 = (  from_dash_integral230 ( 60 ) );
    struct timespec  last_dash_sync3708 = ( (  now1237 ) ( ) );
    struct env1242 envinst1242 = {
        .tui_dash_global_dash_state3703 = env->tui_dash_global_dash_state3703 ,
    };
    ( _intr_register_signal ( ( (  sigwinch1248 ) ( ) ) , ( (struct envunion1243){ .fun = (  enum Unit_10  (*) (  struct env1242*  ,    int32_t  ) )lam1249 , .env =  envinst1242 } ) ) );
    return ( (struct Tui_146) { .f_width = ( (  fst1250 ) ( (  dims3706 ) ) ) , .f_height = ( (  snd1251 ) ( (  dims3706 ) ) ) , .f_target_dash_fps = (  fps3707 ) , .f_actual_dash_fps = (  from_dash_integral230 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3708 ) , .f_fps_dash_ts = (  last_dash_sync3708 ) , .f_fps_dash_count = (  from_dash_integral230 ( 0 ) ) , .f_palette = (  palette3705 ) , .f_should_dash_redraw = ( true ) } );
}

struct TypeSize_1256 {
    size_t  f_size;
};

static  struct TypeSize_1256   get_dash_typesize1255 (  ) {
    struct Cell_838  temp1257;
    return ( (struct TypeSize_1256) { .f_size = ( sizeof( ( (  temp1257 ) ) ) ) } );
}

static  struct Cell_838 *   cast_dash_ptr1258 (    void *  p398 ) {
    return ( (struct Cell_838 * ) (  p398 ) );
}

static  struct Slice_837   allocate1254 (    enum CAllocator_12  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize1255 ) ( ) ) ) .f_size );
    struct Cell_838 *  ptr2371 = ( (  cast_dash_ptr1258 ) ( ( ( malloc ) ( (  op_dash_mul555 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_837) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

static  void *   cast_dash_ptr1264 (    size_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1265 (    size_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  size_t   zeroed1262 (  ) {
    size_t  temp1263;
    size_t  x642 = (  temp1263 );
    ( ( memset ) ( ( (  cast_dash_ptr1264 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of1265 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  uint32_t *   cast1266 (    size_t *  x395 ) {
    return ( (uint32_t * ) (  x395 ) );
}

static  size_t   cast_dash_on_dash_zeroed1260 (    uint32_t  x645 ) {
    size_t  temp1261 = ( (  zeroed1262 ) ( ) );
    size_t *  y646 = ( &temp1261 );
    uint32_t *  yp647 = ( (  cast1266 ) ( (  y646 ) ) );
    (*  yp647 ) = (  x645 );
    return ( * (  y646 ) );
}

static  size_t   u32_dash_size1259 (    uint32_t  x726 ) {
    return ( (  cast_dash_on_dash_zeroed1260 ) ( (  x726 ) ) );
}

struct env1269 {
    struct Slice_837  s2328;
    struct Cell_838 (*  fun2330 )(    struct Cell_838  );
    ;
    ;
    ;
};

struct envunion1270 {
    enum Unit_10  (*fun) (  struct env1269*  ,    int32_t  );
    struct env1269 env;
};

static  enum Unit_10   for_dash_each1268 (    struct Range_215  iterable1099 ,   struct envunion1270  fun1101 ) {
    struct RangeIter_218  temp1271 = ( (  into_dash_iter219 ) ( (  iterable1099 ) ) );
    struct RangeIter_218 *  it1102 = ( &temp1271 );
    while ( ( true ) ) {
        struct Maybe_220  dref1103 = ( (  next221 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_220_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_220_Just_t ) {
                struct envunion1270  temp1272 = (  fun1101 );
                ( temp1272.fun ( &temp1272.env ,  ( dref1103 .stuff .Maybe_220_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  struct Cell_838 *   offset_dash_ptr1276 (    struct Cell_838 *  x377 ,    int64_t  count379 ) {
    struct Cell_838  temp1277;
    return ( (struct Cell_838 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul416 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1277 ) ) ) ) ) ) ) ) );
}

static  struct Cell_838 *   get_dash_ptr1275 (    struct Slice_837  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp371 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_838 *  elem_dash_ptr2173 = ( (  offset_dash_ptr1276 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_10   set1274 (    struct Slice_837  slice2187 ,    size_t  i2189 ,    struct Cell_838  x2191 ) {
    struct Cell_838 *  ep2192 = ( (  get_dash_ptr1275 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_10_Unit );
}

struct Maybe_1281 {
    enum {
        Maybe_1281_None_t,
        Maybe_1281_Just_t,
    } tag;
    union {
        struct {
            struct Cell_838  field0;
        } Maybe_1281_Just_s;
    } stuff;
};

static struct Maybe_1281 Maybe_1281_Just (  struct Cell_838  field0 ) {
    return ( struct Maybe_1281 ) { .tag = Maybe_1281_Just_t, .stuff = { .Maybe_1281_Just_s = { .field0 = field0 } } };
};

static  struct Cell_838   undefined1282 (  ) {
    struct Cell_838  temp1283;
    return (  temp1283 );
}

static  struct Cell_838   or_dash_fail1280 (    struct Maybe_1281  x1353 ,    struct StrConcat_373  errmsg1355 ) {
    struct Maybe_1281  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_1281_None_t ) {
        ( (  panic372 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1282 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_1281_Just_t ) {
            return ( dref1356 .stuff .Maybe_1281_Just_s .field0 );
        }
    }
}

static  struct Maybe_1281   try_dash_get1284 (    struct Slice_837  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp371 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1281) { .tag = Maybe_1281_None_t } );
    }
    struct Cell_838 *  elem_dash_ptr2179 = ( (  offset_dash_ptr1276 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_1281_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  struct Cell_838   get1279 (    struct Slice_837  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail1280 ) ( ( (  try_dash_get1284 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_838   elem_dash_get1278 (    struct Slice_837  self2195 ,    size_t  idx2197 ) {
    return ( (  get1279 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

static  enum Unit_10   lam1273 (   struct env1269* env ,    int32_t  i2332 ) {
    return ( (  set1274 ) ( ( env->s2328 ) ,  ( (  i32_dash_size349 ) ( (  i2332 ) ) ) ,  ( ( env->fun2330 ) ( (  elem_dash_get1278 ( ( env->s2328 ) , ( (  i32_dash_size349 ) ( (  i2332 ) ) ) ) ) ) ) ) );
}

static  enum Unit_10   map1267 (    struct Slice_837  s2328 ,    struct Cell_838 (*  fun2330 )(    struct Cell_838  ) ) {
    struct env1269 envinst1269 = {
        .s2328 =  s2328 ,
        .fun2330 =  fun2330 ,
    };
    ( (  for_dash_each1268 ) ( ( (  to228 ) ( (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_i32380 ) ( (  op_dash_sub580 ( ( (  s2328 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1270){ .fun = (  enum Unit_10  (*) (  struct env1269*  ,    int32_t  ) )lam1273 , .env =  envinst1269 } ) ) );
    return ( Unit_10_Unit );
}

static  struct Cell_838   default_dash_cell1286 (  ) {
    return ( (struct Cell_838) { .f_c = ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_203) { .tag = Color_203_ColorDefault_t } ) , .f_bg = ( (struct Color_203) { .tag = Color_203_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral92 ( 1 ) ) } );
}

static  struct Cell_838   lam1285 (    struct Cell_838  dref3812 ) {
    return ( (  default_dash_cell1286 ) ( ) );
}

struct env1289 {
    struct Slice_837  s2328;
    struct Cell_838 (*  fun2330 )(    struct Cell_838  );
    ;
    ;
    ;
};

struct envunion1290 {
    enum Unit_10  (*fun) (  struct env1289*  ,    int32_t  );
    struct env1289 env;
};

static  enum Unit_10   for_dash_each1288 (    struct Range_215  iterable1099 ,   struct envunion1290  fun1101 ) {
    struct RangeIter_218  temp1291 = ( (  into_dash_iter219 ) ( (  iterable1099 ) ) );
    struct RangeIter_218 *  it1102 = ( &temp1291 );
    while ( ( true ) ) {
        struct Maybe_220  dref1103 = ( (  next221 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_220_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_220_Just_t ) {
                struct envunion1290  temp1292 = (  fun1101 );
                ( temp1292.fun ( &temp1292.env ,  ( dref1103 .stuff .Maybe_220_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam1293 (   struct env1289* env ,    int32_t  i2332 ) {
    return ( (  set1274 ) ( ( env->s2328 ) ,  ( (  i32_dash_size349 ) ( (  i2332 ) ) ) ,  ( ( env->fun2330 ) ( (  elem_dash_get1278 ( ( env->s2328 ) , ( (  i32_dash_size349 ) ( (  i2332 ) ) ) ) ) ) ) ) );
}

static  enum Unit_10   map1287 (    struct Slice_837  s2328 ,    struct Cell_838 (*  fun2330 )(    struct Cell_838  ) ) {
    struct env1289 envinst1289 = {
        .s2328 =  s2328 ,
        .fun2330 =  fun2330 ,
    };
    ( (  for_dash_each1288 ) ( ( (  to228 ) ( (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_i32380 ) ( (  op_dash_sub580 ( ( (  s2328 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1290){ .fun = (  enum Unit_10  (*) (  struct env1289*  ,    int32_t  ) )lam1293 , .env =  envinst1289 } ) ) );
    return ( Unit_10_Unit );
}

static  struct Cell_838   lam1294 (    struct Cell_838  dref3814 ) {
    return ( (  default_dash_cell1286 ) ( ) );
}

static  struct Screen_836   mk_dash_screen1253 (    struct Tui_146 *  tui3808 ,    enum CAllocator_12  al3810 ) {
    struct Slice_837  cur3811 = ( (  allocate1254 ) ( (  al3810 ) ,  ( (  u32_dash_size1259 ) ( (  op_dash_mul232 ( ( ( * (  tui3808 ) ) .f_width ) , ( ( * (  tui3808 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1267 ) ( (  cur3811 ) ,  (  lam1285 ) ) );
    struct Slice_837  prev3813 = ( (  allocate1254 ) ( (  al3810 ) ,  ( (  u32_dash_size1259 ) ( (  op_dash_mul232 ( ( ( * (  tui3808 ) ) .f_width ) , ( ( * (  tui3808 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1287 ) ( (  prev3813 ) ,  (  lam1294 ) ) );
    return ( (struct Screen_836) { .f_current = (  cur3811 ) , .f_previous = (  prev3813 ) , .f_al = (  al3810 ) , .f_tui = (  tui3808 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_203) { .tag = Color_203_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_203) { .tag = Color_203_ColorDefault_t } ) } );
}

enum MouseButton_1302 {
    MouseButton_1302_MouseLeft,
    MouseButton_1302_MouseMiddle,
    MouseButton_1302_MouseRight,
    MouseButton_1302_ScrollUp,
    MouseButton_1302_ScrollDown,
};

struct MouseEvent_1301 {
    enum MouseButton_1302  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_1300 {
    enum {
        InputEvent_1300_Key_t,
        InputEvent_1300_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_829  field0;
        } InputEvent_1300_Key_s;
        struct {
            struct MouseEvent_1301  field0;
        } InputEvent_1300_Mouse_s;
    } stuff;
};

static struct InputEvent_1300 InputEvent_1300_Key (  struct Key_829  field0 ) {
    return ( struct InputEvent_1300 ) { .tag = InputEvent_1300_Key_t, .stuff = { .InputEvent_1300_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_1300 InputEvent_1300_Mouse (  struct MouseEvent_1301  field0 ) {
    return ( struct InputEvent_1300 ) { .tag = InputEvent_1300_Mouse_t, .stuff = { .InputEvent_1300_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_1299 {
    enum {
        Maybe_1299_None_t,
        Maybe_1299_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_1300  field0;
        } Maybe_1299_Just_s;
    } stuff;
};

static struct Maybe_1299 Maybe_1299_Just (  struct InputEvent_1300  field0 ) {
    return ( struct Maybe_1299 ) { .tag = Maybe_1299_Just_t, .stuff = { .Maybe_1299_Just_s = { .field0 = field0 } } };
};

struct envunion1298 {
    struct Maybe_1299  (*fun) (  struct env144*  ,    struct Tui_146 *  );
    struct env144 env;
};

struct env1297 {
    struct Tui_146 *  tui5211;
    struct env144 envinst144;
};

struct envunion1303 {
    struct Maybe_1299  (*fun) (  struct env1297*  );
    struct env1297 env;
};

struct FunIter_1296 {
    struct envunion1303  f_fun;
    bool  f_finished;
};

static  struct FunIter_1296   into_dash_iter1304 (    struct FunIter_1296  self1053 ) {
    return (  self1053 );
}

static  struct FunIter_1296   from_dash_function1305 (   struct envunion1303  fun1061 ) {
    return ( (struct FunIter_1296) { .f_fun = (  fun1061 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions1310 (   struct env143* env ,    struct Tui_146 *  tui3774 ) {
    if ( ( ! ( ( * ( env->tui_dash_global_dash_state3703 ) ) .f_should_dash_resize ) ) ) {
        return ( false );
    }
    (*  tui3774 ) .f_should_dash_redraw = ( true );
    (* env->tui_dash_global_dash_state3703 ) .f_should_dash_resize = ( false );
    struct Tuple2_1217  dim3775 = ( (  get_dash_dimensions1218 ) ( ) );
    uint32_t  w3776 = ( (  fst1250 ) ( (  dim3775 ) ) );
    uint32_t  h3777 = ( (  snd1251 ) ( (  dim3775 ) ) );
    (*  tui3774 ) .f_width = (  w3776 );
    (*  tui3774 ) .f_height = (  h3777 );
    return ( true );
}

static  char   undefined1313 (  ) {
    char  temp1314;
    return (  temp1314 );
}

struct Maybe_1315 {
    enum {
        Maybe_1315_None_t,
        Maybe_1315_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_1315_Just_s;
    } stuff;
};

static struct Maybe_1315 Maybe_1315_Just (  char  field0 ) {
    return ( struct Maybe_1315 ) { .tag = Maybe_1315_Just_t, .stuff = { .Maybe_1315_Just_s = { .field0 = field0 } } };
};

struct Pollfd_1317 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr1318 (    struct Pollfd_1317 *  p398 ) {
    return ( (struct pollfd * ) (  p398 ) );
}

static  void *   cast_dash_ptr1321 (    char *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1322 (    char  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  char   zeroed1319 (  ) {
    char  temp1320;
    char  x642 = (  temp1320 );
    ( ( memset ) ( ( (  cast_dash_ptr1321 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of1322 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  struct Maybe_1315   read_dash_byte1316 (    int32_t  timeout_dash_ms3697 ) {
    struct Pollfd_1317  pfd3698 = ( (struct Pollfd_1317) { .f_fd = (  from_dash_integral92 ( 0 ) ) , .f_events = (  from_dash_integral1229 ( 1 ) ) , .f_revents = (  from_dash_integral1229 ( 0 ) ) } );
    if ( (  cmp222 ( ( ( poll ) ( ( (  cast_dash_ptr1318 ) ( ( & (  pfd3698 ) ) ) ) ,  (  from_dash_integral92 ( 1 ) ) ,  (  timeout_dash_ms3697 ) ) ) , (  from_dash_integral92 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_1315) { .tag = Maybe_1315_None_t } );
    }
    char  c3699 = ( ( (  zeroed1319 ) ( ) ) );
    if ( (  cmp222 ( ( ( read ) ( ( (  stdin_dash_fileno1136 ) ( ) ) ,  ( (  cast_dash_ptr1321 ) ( ( & (  c3699 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral92 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_1315) { .tag = Maybe_1315_None_t } );
    }
    return ( ( Maybe_1315_Just ) ( (  c3699 ) ) );
}

static  char   u8_dash_ascii1323 (    uint8_t  b1491 ) {
    return ( ( (char ) (  b1491 ) ) );
}

static  uint8_t *   cast1327 (    uint32_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed1325 (    uint8_t  x645 ) {
    uint32_t  temp1326 = ( (  zeroed1233 ) ( ) );
    uint32_t *  y646 = ( &temp1326 );
    uint8_t *  yp647 = ( (  cast1327 ) ( (  y646 ) ) );
    (*  yp647 ) = (  x645 );
    return ( * (  y646 ) );
}

static  uint32_t   u8_dash_u321324 (    uint8_t  x750 ) {
    return ( (  cast_dash_on_dash_zeroed1325 ) ( (  x750 ) ) );
}

struct Map_1330 {
    struct StrViewIter_362  field0;
    uint32_t (*  field1 )(    struct Char_101  );
};

static struct Map_1330 Map_1330_Map (  struct StrViewIter_362  field0 ,  uint32_t (*  field1 )(    struct Char_101  ) ) {
    return ( struct Map_1330 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1330   into_dash_iter1331 (    struct Map_1330  self804 ) {
    return (  self804 );
}

static  struct Maybe_1147   next1332 (    struct Map_1330 *  dref806 ) {
    struct Maybe_420  dref809 = ( (  next421 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_420_None_t ) {
        return ( (struct Maybe_1147) { .tag = Maybe_1147_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_420_Just_t ) {
            return ( ( Maybe_1147_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_420_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce1329 (    struct Map_1330  iterable1118 ,    uint32_t  base1120 ,    uint32_t (*  fun1122 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1123 = (  base1120 );
    struct Map_1330  it1124 = ( (  into_dash_iter1331 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_1147  dref1125 = ( (  next1332 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_1147_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_1147_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_1147_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1333 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1333);
    abort ( );
    ( Unit_10_Unit );
    uint32_t  temp1334;
    return (  temp1334 );
}

static  struct Map_1330   map1335 (    struct StrView_18  iterable813 ,    uint32_t (*  fun815 )(    struct Char_101  ) ) {
    struct StrViewIter_362  it816 = ( (  into_dash_iter365 ) ( (  iterable813 ) ) );
    return ( ( Map_1330_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  uint8_t *   cast1340 (    size_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  size_t   cast_dash_on_dash_zeroed1338 (    uint8_t  x645 ) {
    size_t  temp1339 = ( (  zeroed1262 ) ( ) );
    size_t *  y646 = ( &temp1339 );
    uint8_t *  yp647 = ( (  cast1340 ) ( (  y646 ) ) );
    (*  yp647 ) = (  x645 );
    return ( * (  y646 ) );
}

static  size_t   u8_dash_size1337 (    uint8_t  x741 ) {
    return ( (  cast_dash_on_dash_zeroed1338 ) ( (  x741 ) ) );
}

struct StrConcat_1343 {
    struct Char_101  field0;
    struct Char_101  field1;
};

static struct StrConcat_1343 StrConcat_1343_StrConcat (  struct Char_101  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_1343 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1342 {
    struct StrConcat_1343  field0;
    struct StrView_18  field1;
};

static struct StrConcat_1342 StrConcat_1342_StrConcat (  struct StrConcat_1343  field0 ,  struct StrView_18  field1 ) {
    return ( struct StrConcat_1342 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1347 {
    struct StrView_18  field0;
    struct StrConcat_1342  field1;
};

static struct StrConcat_1347 StrConcat_1347_StrConcat (  struct StrView_18  field0 ,  struct StrConcat_1342  field1 ) {
    return ( struct StrConcat_1347 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1346 {
    struct StrConcat_1347  field0;
    struct Char_101  field1;
};

static struct StrConcat_1346 StrConcat_1346_StrConcat (  struct StrConcat_1347  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_1346 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_10   print_dash_str1350 (    struct StrConcat_1343  self1302 ) {
    struct StrConcat_1343  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str386 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str386 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str1349 (    struct StrConcat_1342  self1302 ) {
    struct StrConcat_1342  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str1350 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str379 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str1348 (    struct StrConcat_1347  self1302 ) {
    struct StrConcat_1347  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str379 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str1349 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str1345 (    struct StrConcat_1346  self1302 ) {
    struct StrConcat_1346  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str1348 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str386 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   panic1344 (    struct StrConcat_1342  errmsg1343 ) {
    ( (  print_dash_str1345 ) ( ( ( StrConcat_1346_StrConcat ) ( ( ( StrConcat_1347_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_10_Unit );
}

static  uint8_t   or_dash_fail1341 (    struct Maybe_111  x1353 ,    struct StrConcat_1342  errmsg1355 ) {
    struct Maybe_111  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_111_None_t ) {
        ( (  panic1344 ) ( (  errmsg1355 ) ) );
        return ( (  undefined961 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_111_Just_t ) {
            return ( dref1356 .stuff .Maybe_111_Just_s .field0 );
        }
    }
}

static  enum Ordering_223   cmp1352 (    struct Char_101  l1459 ,    struct Char_101  r1461 ) {
    if ( ( ( !  eq352 ( ( (  l1459 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq352 ( ( (  r1461 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp1353 = ( (  from_dash_string93 ) ( ( (uint8_t*)"(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp1353);
        abort ( );
        ( Unit_10_Unit );
    }
    return ( (  cmp410 ) ( ( (  char_dash_u8578 ) ( (  l1459 ) ) ) ,  ( (  char_dash_u8578 ) ( (  r1461 ) ) ) ) );
}

static  uint8_t   op_dash_sub1354 (    uint8_t  l274 ,    uint8_t  r276 ) {
    return ( (  l274 ) - (  r276 ) );
}

static  uint8_t   op_dash_add1355 (    uint8_t  l269 ,    uint8_t  r271 ) {
    return ( (  l269 ) + (  r271 ) );
}

static  struct Maybe_111   hex_dash_digit1351 (    struct Char_101  c3207 ) {
    if ( ( (  cmp1352 ( (  c3207 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp1352 ( (  c3207 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_111_Just ) ( (  op_dash_sub1354 ( ( (  char_dash_u8578 ) ( (  c3207 ) ) ) , ( (  char_dash_u8578 ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp1352 ( (  c3207 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp1352 ( (  c3207 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_111_Just ) ( (  op_dash_add1355 ( (  op_dash_sub1354 ( ( (  char_dash_u8578 ) ( (  c3207 ) ) ) , ( (  char_dash_u8578 ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral397 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp1352 ( (  c3207 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp1352 ( (  c3207 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_111_Just ) ( (  op_dash_add1355 ( (  op_dash_sub1354 ( ( (  char_dash_u8578 ) ( (  c3207 ) ) ) , ( (  char_dash_u8578 ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral397 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_111) { .tag = Maybe_111_None_t } );
}

static  uint32_t   lam1336 (    struct Char_101  c3212 ) {
    return ( (  from_dash_integral230 ) ( ( (  u8_dash_size1337 ) ( ( (  or_dash_fail1341 ) ( ( (  hex_dash_digit1351 ) ( (  c3212 ) ) ) ,  ( ( StrConcat_1342_StrConcat ) ( ( ( StrConcat_1343_StrConcat ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\"" ) ,  ( 1 ) ) ) ,  (  c3212 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam1356 (    uint32_t  elem3214 ,    uint32_t  b3216 ) {
    return (  op_dash_add236 ( (  op_dash_mul232 ( (  b3216 ) , (  from_dash_integral230 ( 16 ) ) ) ) , (  elem3214 ) ) );
}

static  uint32_t   from_dash_hex1328 (    struct StrView_18  arr3210 ) {
    return ( (  reduce1329 ) ( ( (  map1335 ) ( (  arr3210 ) ,  (  lam1336 ) ) ) ,  (  from_dash_integral230 ( 0 ) ) ,  (  lam1356 ) ) );
}

static  bool   eq1358 (    char  l415 ,    char  r417 ) {
    return ( (  l415 ) == (  r417 ) );
}

struct Array_1359 {
    char _arr [32];
};

static  void *   cast_dash_ptr1363 (    struct Array_1359 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1364 (    struct Array_1359  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Array_1359   zeroed1361 (  ) {
    struct Array_1359  temp1362;
    struct Array_1359  x642 = (  temp1362 );
    ( ( memset ) ( ( (  cast_dash_ptr1363 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of1364 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  char *   cast_dash_ptr1368 (    struct Array_1359 *  p398 ) {
    return ( (char * ) (  p398 ) );
}

static  char *   offset_dash_ptr1369 (    char *  x377 ,    int64_t  count379 ) {
    char  temp1370;
    return ( (char * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul416 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1370 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr1367 (    struct Array_1359 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp371 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2029 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic890 ) ( ( ( StrConcat_891_StrConcat ) ( ( ( StrConcat_892_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2030 = ( ( (  cast_dash_ptr1368 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr1369 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  enum Unit_10   set1366 (    struct Array_1359 *  arr2039 ,    size_t  i2042 ,    char  e2044 ) {
    char *  p2045 = ( (  get_dash_ptr1367 ) ( (  arr2039 ) ,  (  i2042 ) ) );
    (*  p2045 ) = (  e2044 );
    return ( Unit_10_Unit );
}

struct Slice_1372 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail1375 (    struct Maybe_1315  x1353 ,    struct StrConcat_373  errmsg1355 ) {
    struct Maybe_1315  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_1315_None_t ) {
        ( (  panic372 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1313 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_1315_Just_t ) {
            return ( dref1356 .stuff .Maybe_1315_Just_s .field0 );
        }
    }
}

static  struct Maybe_1315   try_dash_get1376 (    struct Slice_1372  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp371 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1315) { .tag = Maybe_1315_None_t } );
    }
    char *  elem_dash_ptr2179 = ( (  offset_dash_ptr1369 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_1315_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  char   get1374 (    struct Slice_1372  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail1375 ) ( ( (  try_dash_get1376 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get1373 (    struct Slice_1372  self2195 ,    size_t  idx2197 ) {
    return ( (  get1374 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

struct Scanner_1377 {
    struct StrViewIter_362  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1377   mk_dash_from_dash_str1379 (    struct StrView_18  s3536 ) {
    return ( (struct Scanner_1377) { .f_s = ( (  chars364 ) ( (  s3536 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   offset_dash_ptr_prime_1383 (    uint8_t *  x382 ,    size_t  count384 ) {
    return ( (  offset_dash_ptr422 ) ( (  x382 ) ,  ( (int64_t ) (  count384 ) ) ) );
}

static  struct StrView_18   substr1380 (    struct StrView_18  s2602 ,    size_t  from2604 ,    size_t  to2606 ) {
    size_t  from_dash_bs2607 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_218  temp1381 =  into_dash_iter219 ( ( (  to228 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  op_dash_sub229 ( ( (  size_dash_i32380 ) ( (  from2604 ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_220  __cond1382 =  next221 (&temp1381);
        if (  __cond1382 .tag == 0 ) {
            break;
        }
        int32_t  dref2608 =  __cond1382 .stuff .Maybe_220_Just_s .field0;
        if ( (  cmp371 ( (  from_dash_bs2607 ) , ( ( (  s2602 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2607 = (  op_dash_add425 ( (  from_dash_bs2607 ) , ( (  next_dash_char409 ) ( ( (  offset_dash_ptr_prime_1383 ) ( ( ( (  s2602 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2607 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2609 = (  from_dash_bs2607 );
    struct RangeIter_218  temp1384 =  into_dash_iter219 ( ( (  to228 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  op_dash_sub229 ( (  op_dash_sub229 ( ( (  size_dash_i32380 ) ( (  to2606 ) ) ) , ( (  size_dash_i32380 ) ( (  from2604 ) ) ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_220  __cond1385 =  next221 (&temp1384);
        if (  __cond1385 .tag == 0 ) {
            break;
        }
        int32_t  dref2610 =  __cond1385 .stuff .Maybe_220_Just_s .field0;
        if ( (  cmp371 ( (  to_dash_bs2609 ) , ( ( (  s2602 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2609 = (  op_dash_add425 ( (  to_dash_bs2609 ) , ( (  next_dash_char409 ) ( ( (  offset_dash_ptr_prime_1383 ) ( ( ( (  s2602 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2609 ) ) ) ) ) ) );
    }
    return ( (struct StrView_18) { .f_contents = ( (  subslice955 ) ( ( (  s2602 ) .f_contents ) ,  (  from_dash_bs2607 ) ,  (  to_dash_bs2609 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr1388 (    char *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Slice_13   cast_dash_slice1387 (    struct Slice_1372  s2354 ) {
    return ( (struct Slice_13) { .f_ptr = ( (  cast_dash_ptr1388 ) ( ( (  s2354 ) .f_ptr ) ) ) , .f_count = ( (  s2354 ) .f_count ) } );
}

static  struct StrView_18   from_dash_ascii_dash_slice1386 (    struct Slice_1372  sl2576 ) {
    return ( (struct StrView_18) { .f_contents = ( (  cast_dash_slice1387 ) ( (  sl2576 ) ) ) } );
}

struct Maybe_1389 {
    enum {
        Maybe_1389_None_t,
        Maybe_1389_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_1389_Just_s;
    } stuff;
};

static struct Maybe_1389 Maybe_1389_Just (  int64_t  field0 ) {
    return ( struct Maybe_1389 ) { .tag = Maybe_1389_Just_t, .stuff = { .Maybe_1389_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_1391 {
    struct Scanner_1377  f_it;
    bool (*  f_pred )(    struct Char_101  );
};

static  struct Scanner_1377   into_dash_iter1394 (    struct Scanner_1377  self3527 ) {
    return (  self3527 );
}

static  struct Scanner_1377   into_dash_iter1393 (    struct Scanner_1377 *  self793 ) {
    return ( (  into_dash_iter1394 ) ( ( * (  self793 ) ) ) );
}

static  struct TakeWhile_1391   take_dash_while1392 (    struct Scanner_1377 *  it995 ,    bool (*  pred997 )(    struct Char_101  ) ) {
    return ( (struct TakeWhile_1391) { .f_it = ( (  into_dash_iter1393 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  struct Char_101   min1397 (    struct Char_101  l1367 ,    struct Char_101  r1369 ) {
    if ( (  cmp1352 ( (  l1367 ) , (  r1369 ) ) == 0 ) ) {
        return (  l1367 );
    } else {
        return (  r1369 );
    }
}

static  struct Char_101   max1398 (    struct Char_101  l1372 ,    struct Char_101  r1374 ) {
    if ( (  cmp1352 ( (  l1372 ) , (  r1374 ) ) == 2 ) ) {
        return (  l1372 );
    } else {
        return (  r1374 );
    }
}

static  bool   between1396 (    struct Char_101  c1377 ,    struct Char_101  l1379 ,    struct Char_101  r1381 ) {
    struct Char_101  from1382 = ( (  min1397 ) ( (  l1379 ) ,  (  r1381 ) ) );
    struct Char_101  to1383 = ( (  max1398 ) ( (  l1379 ) ,  (  r1381 ) ) );
    return ( (  cmp1352 ( (  from1382 ) , (  c1377 ) ) != 2 ) && (  cmp1352 ( (  c1377 ) , (  to1383 ) ) != 2 ) );
}

static  bool   is_dash_digit1395 (    struct Char_101  c1506 ) {
    return ( (  eq352 ( ( (  c1506 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1396 ) ( (  c1506 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) ) );
}

static  struct Maybe_420   next1402 (    struct Scanner_1377 *  self3522 ) {
    struct Maybe_420  dref3523 = ( (  next421 ) ( ( & ( ( * (  self3522 ) ) .f_s ) ) ) );
    if ( dref3523.tag == Maybe_420_Just_t ) {
        (*  self3522 ) .f_byte_dash_offset = (  op_dash_add425 ( ( ( * (  self3522 ) ) .f_byte_dash_offset ) , ( ( dref3523 .stuff .Maybe_420_Just_s .field0 ) .f_num_dash_bytes ) ) );
        return ( ( Maybe_420_Just ) ( ( dref3523 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref3523.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

static  struct Maybe_420   next1401 (    struct TakeWhile_1391 *  self989 ) {
    struct Maybe_420  mx990 = ( (  next1402 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_420  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_420_None_t ) {
        return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_420_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_420_Just ) ( ( dref991 .stuff .Maybe_420_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
            }
        }
    }
}

static  struct TakeWhile_1391   into_dash_iter1404 (    struct TakeWhile_1391  self986 ) {
    return (  self986 );
}

static  struct Maybe_420   head1400 (    struct TakeWhile_1391  it1167 ) {
    struct TakeWhile_1391  temp1403 = ( (  into_dash_iter1404 ) ( (  it1167 ) ) );
    return ( (  next1401 ) ( ( &temp1403 ) ) );
}

static  bool   null1399 (    struct TakeWhile_1391  it1176 ) {
    struct Maybe_420  dref1177 = ( (  head1400 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_420_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env1407 {
    ;
    struct Scanner_1377 *  it1218;
};

struct envunion1408 {
    struct Maybe_420  (*fun) (  struct env1407*  ,    int32_t  );
    struct env1407 env;
};

static  enum Unit_10   for_dash_each1406 (    struct Range_215  iterable1099 ,   struct envunion1408  fun1101 ) {
    struct RangeIter_218  temp1409 = ( (  into_dash_iter219 ) ( (  iterable1099 ) ) );
    struct RangeIter_218 *  it1102 = ( &temp1409 );
    while ( ( true ) ) {
        struct Maybe_220  dref1103 = ( (  next221 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_220_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_220_Just_t ) {
                struct envunion1408  temp1410 = (  fun1101 );
                ( temp1410.fun ( &temp1410.env ,  ( dref1103 .stuff .Maybe_220_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  struct Maybe_420   lam1411 (   struct env1407* env ,    int32_t  dref1221 ) {
    return ( (  next1402 ) ( ( env->it1218 ) ) );
}

static  enum Unit_10   drop_prime_1405 (    struct Scanner_1377 *  it1218 ,    size_t  n1220 ) {
    struct env1407 envinst1407 = {
        .it1218 =  it1218 ,
    };
    ( (  for_dash_each1406 ) ( ( (  to228 ) ( (  from_dash_integral92 ( 1 ) ) ,  ( (  size_dash_i32380 ) ( (  n1220 ) ) ) ) ) ,  ( (struct envunion1408){ .fun = (  struct Maybe_420  (*) (  struct env1407*  ,    int32_t  ) )lam1411 , .env =  envinst1407 } ) ) );
    return ( Unit_10_Unit );
}

static  size_t   reduce1413 (    struct TakeWhile_1391  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_101  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct TakeWhile_1391  it1124 = ( (  into_dash_iter1404 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_420  dref1125 = ( (  next1401 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_420_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_420_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_420_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1414 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1414);
    abort ( );
    ( Unit_10_Unit );
    size_t  temp1415;
    return (  temp1415 );
}

static  size_t   lam1416 (    struct Char_101  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add425 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1412 (    struct TakeWhile_1391  it1129 ) {
    return ( (  reduce1413 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1416 ) ) );
}

static  struct TakeWhile_1391   chars1418 (    struct TakeWhile_1391  self1889 ) {
    return (  self1889 );
}

static  struct Maybe_1389   reduce1419 (    struct TakeWhile_1391  iterable1118 ,    struct Maybe_1389  base1120 ,    struct Maybe_1389 (*  fun1122 )(    struct Char_101  ,    struct Maybe_1389  ) ) {
    struct Maybe_1389  x1123 = (  base1120 );
    struct TakeWhile_1391  it1124 = ( (  into_dash_iter1404 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_420  dref1125 = ( (  next1401 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_420_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_420_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_420_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1420 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1420);
    abort ( );
    ( Unit_10_Unit );
    struct Maybe_1389  temp1421;
    return (  temp1421 );
}

static  void *   cast_dash_ptr1429 (    int32_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1430 (    int32_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  int32_t   zeroed1427 (  ) {
    int32_t  temp1428;
    int32_t  x642 = (  temp1428 );
    ( ( memset ) ( ( (  cast_dash_ptr1429 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of1430 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  uint8_t *   cast1431 (    int32_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1425 (    uint8_t  x645 ) {
    int32_t  temp1426 = ( (  zeroed1427 ) ( ) );
    int32_t *  y646 = ( &temp1426 );
    uint8_t *  yp647 = ( (  cast1431 ) ( (  y646 ) ) );
    (*  yp647 ) = (  x645 );
    return ( * (  y646 ) );
}

static  int32_t   u8_dash_i321424 (    uint8_t  x747 ) {
    return ( (  cast_dash_on_dash_zeroed1425 ) ( (  x747 ) ) );
}

static  struct Maybe_220   parse_dash_digit1423 (    struct Char_101  c1531 ) {
    if ( ( (  is_dash_digit1395 ) ( (  c1531 ) ) ) ) {
        return ( ( Maybe_220_Just ) ( ( (  u8_dash_i321424 ) ( (  op_dash_sub1354 ( ( (  char_dash_u8578 ) ( (  c1531 ) ) ) , ( (  char_dash_u8578 ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_220) { .tag = Maybe_220_None_t } );
    }
}

static  int64_t   i32_dash_i641432 (    int32_t  x678 ) {
    return ( (int64_t ) (  x678 ) );
}

static  struct Maybe_1389   sequence_dash_maybe1422 (    struct Char_101  e1935 ,    struct Maybe_1389  b1937 ) {
    struct Maybe_1389  dref1938 = (  b1937 );
    if ( dref1938.tag == Maybe_1389_None_t ) {
        return ( (struct Maybe_1389) { .tag = Maybe_1389_None_t } );
    }
    else {
        if ( dref1938.tag == Maybe_1389_Just_t ) {
            struct Maybe_220  dref1940 = ( (  parse_dash_digit1423 ) ( (  e1935 ) ) );
            if ( dref1940.tag == Maybe_220_None_t ) {
                return ( (struct Maybe_1389) { .tag = Maybe_1389_None_t } );
            }
            else {
                if ( dref1940.tag == Maybe_220_Just_t ) {
                    return ( ( Maybe_1389_Just ) ( (  op_dash_add435 ( (  op_dash_mul416 ( ( dref1938 .stuff .Maybe_1389_Just_s .field0 ) , (  from_dash_integral434 ( 10 ) ) ) ) , ( (  i32_dash_i641432 ) ( ( dref1940 .stuff .Maybe_220_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_1389   parse_dash_int1417 (    struct TakeWhile_1391  s1932 ) {
    struct TakeWhile_1391  cs1942 = ( (  chars1418 ) ( (  s1932 ) ) );
    struct Maybe_420  dref1943 = ( (  head1400 ) ( (  cs1942 ) ) );
    if ( dref1943.tag == Maybe_420_Just_t ) {
        return ( (  reduce1419 ) ( (  cs1942 ) ,  ( ( Maybe_1389_Just ) ( (  from_dash_integral434 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1422 ) ) );
    }
    else {
        if ( dref1943.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_1389) { .tag = Maybe_1389_None_t } );
        }
    }
}

static  struct Maybe_1389   scan_dash_int1390 (    struct Scanner_1377 *  sc3542 ) {
    struct TakeWhile_1391  digit_dash_chars3543 = ( (  take_dash_while1392 ) ( (  sc3542 ) ,  (  is_dash_digit1395 ) ) );
    if ( ( (  null1399 ) ( (  digit_dash_chars3543 ) ) ) ) {
        return ( (struct Maybe_1389) { .tag = Maybe_1389_None_t } );
    }
    ( (  drop_prime_1405 ) ( (  sc3542 ) ,  ( (  count1412 ) ( (  digit_dash_chars3543 ) ) ) ) );
    return ( (  parse_dash_int1417 ) ( (  digit_dash_chars3543 ) ) );
}

static  int32_t   i64_dash_i321434 (    int64_t  x693 ) {
    return ( (int32_t ) (  x693 ) );
}

struct StrConcat_1436 {
    struct StrView_18  field0;
    int64_t  field1;
};

static struct StrConcat_1436 StrConcat_1436_StrConcat (  struct StrView_18  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_1436 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1438 {
    struct StrView_18  field0;
    struct StrConcat_1436  field1;
};

static struct StrConcat_1438 StrConcat_1438_StrConcat (  struct StrView_18  field0 ,  struct StrConcat_1436  field1 ) {
    return ( struct StrConcat_1438 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1440 {
    struct StrConcat_1438  field0;
    struct Char_101  field1;
};

static struct StrConcat_1440 StrConcat_1440_StrConcat (  struct StrConcat_1438  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_1440 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1445 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1444 {
    struct StrViewIter_362  f_left;
    struct IntStrIter_1445  f_right;
};

struct StrConcatIter_1443 {
    struct StrViewIter_362  f_left;
    struct StrConcatIter_1444  f_right;
};

struct StrConcatIter_1442 {
    struct StrConcatIter_1443  f_left;
    struct AppendIter_755  f_right;
};

static  struct StrConcatIter_1442   into_dash_iter1447 (    struct StrConcatIter_1442  self1290 ) {
    return (  self1290 );
}

struct env1454 {
    ;
    int64_t  base1386;
};

struct envunion1455 {
    int64_t  (*fun) (  struct env1454*  ,    int32_t  ,    int64_t  );
    struct env1454 env;
};

static  int64_t   reduce1453 (    struct Range_215  iterable1118 ,    int64_t  base1120 ,   struct envunion1455  fun1122 ) {
    int64_t  x1123 = (  base1120 );
    struct RangeIter_218  it1124 = ( (  into_dash_iter219 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_220  dref1125 = ( (  next221 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_220_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_220_Just_t ) {
                struct envunion1455  temp1456 = (  fun1122 );
                x1123 = ( temp1456.fun ( &temp1456.env ,  ( dref1125 .stuff .Maybe_220_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1457 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1457);
    abort ( );
    ( Unit_10_Unit );
    int64_t  temp1458;
    return (  temp1458 );
}

static  int64_t   lam1459 (   struct env1454* env ,    int32_t  item1390 ,    int64_t  x1392 ) {
    return (  op_dash_mul416 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  int64_t   pow1452 (    int64_t  base1386 ,    int32_t  p1388 ) {
    struct env1454 envinst1454 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce1453 ) ( ( (  to228 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  op_dash_sub229 ( (  p1388 ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral434 ( 1 ) ) ,  ( (struct envunion1455){ .fun = (  int64_t  (*) (  struct env1454*  ,    int32_t  ,    int64_t  ) )lam1459 , .env =  envinst1454 } ) ) );
}

static  int64_t   op_dash_div1460 (    int64_t  l218 ,    int64_t  r220 ) {
    return ( (  l218 ) / (  r220 ) );
}

static  uint8_t   cast1461 (    int64_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  int64_t   op_dash_sub1462 (    int64_t  l208 ,    int64_t  r210 ) {
    return ( (  l208 ) - (  r210 ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer1464 (    uint8_t *  ptr780 ,    uint8_t  b782 ) {
    size_t  s783 = ( ( (size_t ) (  ptr780 ) ) );
    size_t  exp784 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add425 ( (  op_dash_sub580 ( (  s783 ) , ( (  u8_dash_size1337 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer394 ) ( (  ptr780 ) ) ) ) ) ) ) , (  op_dash_mul555 ( (  exp784 ) , ( (  u8_dash_size1337 ) ( (  b782 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast1465 (    size_t  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  struct Char_101   char_dash_from_dash_u81463 (    uint8_t  b1277 ) {
    uint8_t *  ptr1278 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer1464 ) ( ( ( (  cast1465 ) ( ( (  u8_dash_size1337 ) ( (  b1277 ) ) ) ) ) ) ,  (  from_dash_integral397 ( 103 ) ) ) );
    return ( (struct Char_101) { .f_ptr = (  ptr1278 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_420   next1451 (    struct IntStrIter_1445 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_420_Just ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp222 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral92 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
    }
    int64_t  trim_dash_down1400 = ( (  pow1452 ) ( (  from_dash_integral434 ( 10 ) ) ,  (  op_dash_sub229 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral92 ( 1 ) ) ) ) ) );
    int64_t  upper1401 = (  op_dash_div1460 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    int64_t  upper_dash_mask1402 = (  op_dash_mul416 ( (  op_dash_div1460 ( (  upper1401 ) , (  from_dash_integral434 ( 10 ) ) ) ) , (  from_dash_integral434 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast1461 ) ( (  op_dash_sub1462 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub229 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral92 ( 1 ) ) ) );
    struct Char_101  digit_dash_char1404 = ( (  char_dash_from_dash_u81463 ) ( (  op_dash_add1355 ( (  digit1403 ) , (  from_dash_integral397 ( 48 ) ) ) ) ) );
    return ( ( Maybe_420_Just ) ( (  digit_dash_char1404 ) ) );
}

static  struct Maybe_420   next1450 (    struct StrConcatIter_1444 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next421 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next1451 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_420   next1449 (    struct StrConcatIter_1443 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next421 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next1450 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_420   next1448 (    struct StrConcatIter_1442 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next1449 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next771 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_10   for_dash_each1441 (    struct StrConcatIter_1442  iterable1099 ,    enum Unit_10 (*  fun1101 )(    struct Char_101  ) ) {
    struct StrConcatIter_1442  temp1446 = ( (  into_dash_iter1447 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_1442 *  it1102 = ( &temp1446 );
    while ( ( true ) ) {
        struct Maybe_420  dref1103 = ( (  next1448 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_420_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_420_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_420_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_223   cmp1474 (    int64_t  l163 ,    int64_t  r165 ) {
    return ( builtin_int64_tcmp( (  l163 ) , (  r165 ) ) );
}

static  bool   eq1476 (    int64_t  l110 ,    int64_t  r112 ) {
    return ( (  l110 ) == (  r112 ) );
}

static  int32_t   count_dash_digits1475 (    int64_t  self1407 ) {
    if ( (  eq1476 ( (  self1407 ) , (  from_dash_integral434 ( 0 ) ) ) ) ) {
        return (  from_dash_integral92 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral92 ( 0 ) );
    while ( (  cmp1474 ( (  self1407 ) , (  from_dash_integral434 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div1460 ( (  self1407 ) , (  from_dash_integral434 ( 10 ) ) ) );
        digits1408 = (  op_dash_add224 ( (  digits1408 ) , (  from_dash_integral92 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_1445   int_dash_iter1473 (    int64_t  int1411 ) {
    if ( (  cmp1474 ( (  int1411 ) , (  from_dash_integral434 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1445) { .f_int = (  op_dash_neg453 ( (  int1411 ) ) ) , .f_len = ( (  count_dash_digits1475 ) ( (  op_dash_neg453 ( (  int1411 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1445) { .f_int = (  int1411 ) , .f_len = ( (  count_dash_digits1475 ) ( (  int1411 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1445   chars1472 (    int64_t  self1808 ) {
    return ( (  int_dash_iter1473 ) ( (  self1808 ) ) );
}

static  struct StrConcatIter_1444   into_dash_iter1471 (    struct StrConcat_1436  dref1297 ) {
    return ( (struct StrConcatIter_1444) { .f_left = ( (  chars364 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1472 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1444   chars1470 (    struct StrConcat_1436  self1308 ) {
    return ( (  into_dash_iter1471 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_1443   into_dash_iter1469 (    struct StrConcat_1438  dref1297 ) {
    return ( (struct StrConcatIter_1443) { .f_left = ( (  chars364 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1470 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1443   chars1468 (    struct StrConcat_1438  self1308 ) {
    return ( (  into_dash_iter1469 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_1442   into_dash_iter1467 (    struct StrConcat_1440  dref1297 ) {
    return ( (struct StrConcatIter_1442) { .f_left = ( (  chars1468 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars762 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1442   chars1466 (    struct StrConcat_1440  self1308 ) {
    return ( (  into_dash_iter1467 ) ( (  self1308 ) ) );
}

static  enum Unit_10   print1439 (    struct StrConcat_1440  s1335 ) {
    ( (  for_dash_each1441 ) ( ( (  chars1466 ) ( (  s1335 ) ) ) ,  (  printf_dash_char387 ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   println1437 (    struct StrConcat_1438  s1338 ) {
    ( (  print1439 ) ( ( ( StrConcat_1440_StrConcat ) ( (  s1338 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum MouseButton_1302   undefined1477 (  ) {
    enum MouseButton_1302  temp1478;
    return (  temp1478 );
}

static  enum MouseButton_1302   panic_prime_1435 (    struct StrConcat_1436  errmsg2149 ) {
    ( (  println1437 ) ( ( ( StrConcat_1438_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg2149 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1477 ) ( ) );
}

static  enum MouseButton_1302   btn_dash_to_dash_mouse_dash_button1433 (    int64_t  btn3734 ) {
    return ( {  int32_t  dref3735 = ( (  i64_dash_i321434 ) ( (  btn3734 ) ) ) ;  eq660 (  dref3735 ,  from_dash_integral92 ( 0 ) ) ? ( MouseButton_1302_MouseLeft ) :  eq660 (  dref3735 ,  from_dash_integral92 ( 1 ) ) ? ( MouseButton_1302_MouseMiddle ) :  eq660 (  dref3735 ,  from_dash_integral92 ( 2 ) ) ? ( MouseButton_1302_MouseRight ) :  eq660 (  dref3735 ,  from_dash_integral92 ( 64 ) ) ? ( MouseButton_1302_ScrollUp ) :  eq660 (  dref3735 ,  from_dash_integral92 ( 65 ) ) ? ( MouseButton_1302_ScrollDown ) : ( (  panic_prime_1435 ) ( ( ( StrConcat_1436_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3734 ) ) ) ) ) ; } );
}

static  struct Scanner_1377   mk1480 (    struct StrView_18  s3530 ) {
    return ( (struct Scanner_1377) { .f_s = ( (  into_dash_iter365 ) ( (  s3530 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_1299   parse_dash_csi1371 (    struct Slice_1372  seq3741 ) {
    if ( (  eq352 ( ( (  seq3741 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1299) { .tag = Maybe_1299_None_t } );
    }
    char  last3742 = (  elem_dash_get1373 ( (  seq3741 ) , (  op_dash_sub580 ( ( (  seq3741 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq1358 ( (  elem_dash_get1373 ( (  seq3741 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ) ) && ( (  eq1358 ( (  last3742 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"M" ) ,  ( 1 ) ) ) ) ) || (  eq1358 ( (  last3742 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_1377  temp1378 = ( (  mk_dash_from_dash_str1379 ) ( ( (  substr1380 ) ( ( (  from_dash_ascii_dash_slice1386 ) ( (  seq3741 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3741 ) .f_count ) ) ) ) );
        struct Scanner_1377 *  sc3743 = ( &temp1378 );
        struct Maybe_1389  dref3744 = ( (  scan_dash_int1390 ) ( (  sc3743 ) ) );
        if ( dref3744.tag == Maybe_1389_None_t ) {
            return ( (struct Maybe_1299) { .tag = Maybe_1299_None_t } );
        }
        else {
            if ( dref3744.tag == Maybe_1389_Just_t ) {
                ( (  next1402 ) ( (  sc3743 ) ) );
                struct Maybe_1389  dref3746 = ( (  scan_dash_int1390 ) ( (  sc3743 ) ) );
                if ( dref3746.tag == Maybe_1389_None_t ) {
                    return ( (struct Maybe_1299) { .tag = Maybe_1299_None_t } );
                }
                else {
                    if ( dref3746.tag == Maybe_1389_Just_t ) {
                        ( (  next1402 ) ( (  sc3743 ) ) );
                        struct Maybe_1389  dref3748 = ( (  scan_dash_int1390 ) ( (  sc3743 ) ) );
                        if ( dref3748.tag == Maybe_1389_None_t ) {
                            return ( (struct Maybe_1299) { .tag = Maybe_1299_None_t } );
                        }
                        else {
                            if ( dref3748.tag == Maybe_1389_Just_t ) {
                                return ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Mouse ) ( ( (struct MouseEvent_1301) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1433 ) ( ( dref3744 .stuff .Maybe_1389_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub229 ( ( (  i64_dash_i321434 ) ( ( dref3746 .stuff .Maybe_1389_Just_s .field0 ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) , .f_y = (  op_dash_sub229 ( ( (  i64_dash_i321434 ) ( ( dref3748 .stuff .Maybe_1389_Just_s .field0 ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) , .f_pressed = (  eq1358 ( (  last3742 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq352 ( ( (  seq3741 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq1358 ( (  last3742 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_Up_t } ) ) ) ) );
        }
        if ( (  eq1358 ( (  last3742 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_Down_t } ) ) ) ) );
        }
        if ( (  eq1358 ( (  last3742 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_Right_t } ) ) ) ) );
        }
        if ( (  eq1358 ( (  last3742 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_Left_t } ) ) ) ) );
        }
        if ( (  eq1358 ( (  last3742 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_Home_t } ) ) ) ) );
        }
        if ( (  eq1358 ( (  last3742 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_1299) { .tag = Maybe_1299_None_t } );
    }
    if ( (  eq1358 ( (  last3742 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_1377  temp1479 = ( (  mk1480 ) ( ( (  from_dash_ascii_dash_slice1386 ) ( (  seq3741 ) ) ) ) );
        struct Scanner_1377 *  sc3750 = ( &temp1479 );
        struct Maybe_1389  dref3751 = ( (  scan_dash_int1390 ) ( (  sc3750 ) ) );
        if ( dref3751.tag == Maybe_1389_None_t ) {
            return ( (struct Maybe_1299) { .tag = Maybe_1299_None_t } );
        }
        else {
            if ( dref3751.tag == Maybe_1389_Just_t ) {
                return ( {  int32_t  dref3753 = ( (  i64_dash_i321434 ) ( ( dref3751 .stuff .Maybe_1389_Just_s .field0 ) ) ) ;  eq660 (  dref3753 ,  from_dash_integral92 ( 1 ) ) ? ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_Home_t } ) ) ) ) ) :  eq660 (  dref3753 ,  from_dash_integral92 ( 2 ) ) ? ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_Insert_t } ) ) ) ) ) :  eq660 (  dref3753 ,  from_dash_integral92 ( 3 ) ) ? ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_Delete_t } ) ) ) ) ) :  eq660 (  dref3753 ,  from_dash_integral92 ( 4 ) ) ? ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_End_t } ) ) ) ) ) :  eq660 (  dref3753 ,  from_dash_integral92 ( 5 ) ) ? ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_PageUp_t } ) ) ) ) ) :  eq660 (  dref3753 ,  from_dash_integral92 ( 6 ) ) ? ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_PageDown_t } ) ) ) ) ) :  eq660 (  dref3753 ,  from_dash_integral92 ( 15 ) ) ? ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_F5_t } ) ) ) ) ) :  eq660 (  dref3753 ,  from_dash_integral92 ( 17 ) ) ? ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_F6_t } ) ) ) ) ) :  eq660 (  dref3753 ,  from_dash_integral92 ( 18 ) ) ? ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_F7_t } ) ) ) ) ) :  eq660 (  dref3753 ,  from_dash_integral92 ( 19 ) ) ? ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_F8_t } ) ) ) ) ) :  eq660 (  dref3753 ,  from_dash_integral92 ( 20 ) ) ? ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_F9_t } ) ) ) ) ) :  eq660 (  dref3753 ,  from_dash_integral92 ( 21 ) ) ? ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_F10_t } ) ) ) ) ) :  eq660 (  dref3753 ,  from_dash_integral92 ( 23 ) ) ? ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_F11_t } ) ) ) ) ) :  eq660 (  dref3753 ,  from_dash_integral92 ( 24 ) ) ? ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_F12_t } ) ) ) ) ) : ( (struct Maybe_1299) { .tag = Maybe_1299_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_1299) { .tag = Maybe_1299_None_t } );
}

static  struct Slice_1372   subslice1481 (    struct Slice_1372  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    char *  begin_dash_ptr2209 = ( (  offset_dash_ptr1369 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp371 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp371 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_1372) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub580 ( ( (  min956 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_1372) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  char *   cast1483 (    struct Array_1359 *  x395 ) {
    return ( (char * ) (  x395 ) );
}

static  struct Slice_1372   as_dash_slice1482 (    struct Array_1359 *  arr2052 ) {
    return ( (struct Slice_1372) { .f_ptr = ( (  cast1483 ) ( (  arr2052 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_1485 {
    enum {
        Maybe_1485_None_t,
        Maybe_1485_Just_t,
    } tag;
    union {
        struct {
            struct Key_829  field0;
        } Maybe_1485_Just_s;
    } stuff;
};

static struct Maybe_1485 Maybe_1485_Just (  struct Key_829  field0 ) {
    return ( struct Maybe_1485 ) { .tag = Maybe_1485_Just_t, .stuff = { .Maybe_1485_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1485   parse_dash_ss31486 (    char  c3738 ) {
    if ( (  eq1358 ( (  c3738 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1485_Just ) ( ( (struct Key_829) { .tag = Key_829_Up_t } ) ) );
    }
    if ( (  eq1358 ( (  c3738 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1485_Just ) ( ( (struct Key_829) { .tag = Key_829_Down_t } ) ) );
    }
    if ( (  eq1358 ( (  c3738 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1485_Just ) ( ( (struct Key_829) { .tag = Key_829_Right_t } ) ) );
    }
    if ( (  eq1358 ( (  c3738 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1485_Just ) ( ( (struct Key_829) { .tag = Key_829_Left_t } ) ) );
    }
    if ( (  eq1358 ( (  c3738 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1485_Just ) ( ( (struct Key_829) { .tag = Key_829_Home_t } ) ) );
    }
    if ( (  eq1358 ( (  c3738 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1485_Just ) ( ( (struct Key_829) { .tag = Key_829_End_t } ) ) );
    }
    if ( (  eq1358 ( (  c3738 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1485_Just ) ( ( (struct Key_829) { .tag = Key_829_F1_t } ) ) );
    }
    if ( (  eq1358 ( (  c3738 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1485_Just ) ( ( (struct Key_829) { .tag = Key_829_F2_t } ) ) );
    }
    if ( (  eq1358 ( (  c3738 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1485_Just ) ( ( (struct Key_829) { .tag = Key_829_F3_t } ) ) );
    }
    if ( (  eq1358 ( (  c3738 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1485_Just ) ( ( (struct Key_829) { .tag = Key_829_F4_t } ) ) );
    }
    return ( (struct Maybe_1485) { .tag = Maybe_1485_None_t } );
}

static  struct Maybe_1299   read_dash_key1311 (  ) {
    char  temp1312 = ( (  undefined1313 ) ( ) );
    char *  ch3755 = ( &temp1312 );
    struct Maybe_1315  dref3756 = ( (  read_dash_byte1316 ) ( (  from_dash_integral92 ( 0 ) ) ) );
    if ( dref3756.tag == Maybe_1315_None_t ) {
        return ( (struct Maybe_1299) { .tag = Maybe_1299_None_t } );
    }
    else {
        if ( dref3756.tag == Maybe_1315_Just_t ) {
            (*  ch3755 ) = ( dref3756 .stuff .Maybe_1315_Just_s .field0 );
        }
    }
    if ( (  eq393 ( ( (  ascii_dash_u8964 ) ( ( * (  ch3755 ) ) ) ) , (  from_dash_integral397 ( 13 ) ) ) ) ) {
        return ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_Enter_t } ) ) ) ) );
    }
    if ( (  eq393 ( ( (  ascii_dash_u8964 ) ( ( * (  ch3755 ) ) ) ) , (  from_dash_integral397 ( 127 ) ) ) ) ) {
        return ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp410 ( ( (  ascii_dash_u8964 ) ( ( * (  ch3755 ) ) ) ) , (  from_dash_integral397 ( 27 ) ) ) == 0 ) && ( !  eq393 ( ( (  ascii_dash_u8964 ) ( ( * (  ch3755 ) ) ) ) , (  from_dash_integral397 ( 9 ) ) ) ) ) ) {
        char  letter3758 = ( (  u8_dash_ascii1323 ) ( ( (  u32_dash_u8209 ) ( ( (  u32_dash_or1156 ) ( ( (  u8_dash_u321324 ) ( ( (  ascii_dash_u8964 ) ( ( * (  ch3755 ) ) ) ) ) ) ,  ( (  from_dash_hex1328 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( ( Key_829_Ctrl ) ( (  letter3758 ) ) ) ) ) ) );
    }
    if ( ( !  eq393 ( ( (  ascii_dash_u8964 ) ( ( * (  ch3755 ) ) ) ) , (  from_dash_integral397 ( 27 ) ) ) ) ) {
        if ( (  cmp410 ( ( (  ascii_dash_u8964 ) ( ( * (  ch3755 ) ) ) ) , (  from_dash_integral397 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1311 ) ( ) );
        } else {
            return ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( ( Key_829_Char ) ( ( * (  ch3755 ) ) ) ) ) ) ) );
        }
    }
    char  temp1357 = ( (  undefined1313 ) ( ) );
    char *  ch23759 = ( &temp1357 );
    struct Maybe_1315  dref3760 = ( (  read_dash_byte1316 ) ( (  from_dash_integral92 ( 50 ) ) ) );
    if ( dref3760.tag == Maybe_1315_None_t ) {
        return ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3760.tag == Maybe_1315_Just_t ) {
            (*  ch23759 ) = ( dref3760 .stuff .Maybe_1315_Just_s .field0 );
        }
    }
    if ( (  eq1358 ( ( * (  ch23759 ) ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_1359  temp1360 = ( ( (  zeroed1361 ) ( ) ) );
        struct Array_1359 *  seq3762 = ( &temp1360 );
        int32_t  slen3763 = (  from_dash_integral92 ( 0 ) );
        while ( (  cmp222 ( (  slen3763 ) , (  from_dash_integral92 ( 31 ) ) ) == 0 ) ) {
            char  temp1365 = ( (  undefined1313 ) ( ) );
            char *  sc3764 = ( &temp1365 );
            struct Maybe_1315  dref3765 = ( (  read_dash_byte1316 ) ( (  from_dash_integral92 ( 50 ) ) ) );
            if ( dref3765.tag == Maybe_1315_None_t ) {
                break;
            }
            else {
                if ( dref3765.tag == Maybe_1315_Just_t ) {
                    (*  sc3764 ) = ( dref3765 .stuff .Maybe_1315_Just_s .field0 );
                }
            }
            ( (  set1366 ) ( (  seq3762 ) ,  ( (  i32_dash_size349 ) ( (  slen3763 ) ) ) ,  ( * (  sc3764 ) ) ) );
            slen3763 = (  op_dash_add224 ( (  slen3763 ) , (  from_dash_integral92 ( 1 ) ) ) );
            if ( ( (  cmp410 ( ( (  ascii_dash_u8964 ) ( ( * (  sc3764 ) ) ) ) , (  from_dash_integral397 ( 64 ) ) ) != 0 ) && (  cmp410 ( ( (  ascii_dash_u8964 ) ( ( * (  sc3764 ) ) ) ) , (  from_dash_integral397 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1371 ) ( ( (  subslice1481 ) ( ( (  as_dash_slice1482 ) ( (  seq3762 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size349 ) ( (  slen3763 ) ) ) ) ) ) );
    }
    if ( (  eq1358 ( ( * (  ch23759 ) ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp1484 = ( (  undefined1313 ) ( ) );
        char *  sc3767 = ( &temp1484 );
        struct Maybe_1315  dref3768 = ( (  read_dash_byte1316 ) ( (  from_dash_integral92 ( 50 ) ) ) );
        if ( dref3768.tag == Maybe_1315_None_t ) {
            return ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3768.tag == Maybe_1315_Just_t ) {
                (*  sc3767 ) = ( dref3768 .stuff .Maybe_1315_Just_s .field0 );
            }
        }
        struct Maybe_1485  dref3770 = ( (  parse_dash_ss31486 ) ( ( * (  sc3767 ) ) ) );
        if ( dref3770.tag == Maybe_1485_None_t ) {
            return ( (struct Maybe_1299) { .tag = Maybe_1299_None_t } );
        }
        else {
            if ( dref3770.tag == Maybe_1485_Just_t ) {
                return ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( dref3770 .stuff .Maybe_1485_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_1299_Just ) ( ( ( InputEvent_1300_Key ) ( ( (struct Key_829) { .tag = Key_829_Escape_t } ) ) ) ) );
}

static  struct Maybe_1299   read_dash_event1308 (   struct env144* env ,    struct Tui_146 *  tui3780 ) {
    struct envunion145  temp1309 = ( (struct envunion145){ .fun = (  bool  (*) (  struct env143*  ,    struct Tui_146 *  ) )update_dash_dimensions1310 , .env =  env->envinst143 } );
    ( temp1309.fun ( &temp1309.env ,  (  tui3780 ) ) );
    struct Maybe_1299  dref3781 = ( (  read_dash_key1311 ) ( ) );
    if ( dref3781.tag == Maybe_1299_None_t ) {
        return ( (struct Maybe_1299) { .tag = Maybe_1299_None_t } );
    }
    else {
        if ( dref3781.tag == Maybe_1299_Just_t ) {
            (*  tui3780 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_1299_Just ) ( ( dref3781 .stuff .Maybe_1299_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_1299   lam1306 (   struct env1297* env ) {
    struct envunion1298  temp1307 = ( (struct envunion1298){ .fun = (  struct Maybe_1299  (*) (  struct env144*  ,    struct Tui_146 *  ) )read_dash_event1308 , .env =  env->envinst144 } );
    return ( temp1307.fun ( &temp1307.env ,  ( env->tui5211 ) ) );
}

static  struct Maybe_1299   next1488 (    struct FunIter_1296 *  self1056 ) {
    if ( ( ( * (  self1056 ) ) .f_finished ) ) {
        return ( (struct Maybe_1299) { .tag = Maybe_1299_None_t } );
    }
    struct envunion1303  temp1489 = ( ( * (  self1056 ) ) .f_fun );
    struct Maybe_1299  dref1057 = ( temp1489.fun ( &temp1489.env ) );
    if ( dref1057.tag == Maybe_1299_Just_t ) {
        return ( ( Maybe_1299_Just ) ( ( dref1057 .stuff .Maybe_1299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1057.tag == Maybe_1299_None_t ) {
            (*  self1056 ) .f_finished = ( true );
            return ( (struct Maybe_1299) { .tag = Maybe_1299_None_t } );
        }
    }
}

struct env1492 {
    ;
    struct Editor_329 *  ed5022;
};

struct envunion1493 {
    enum Unit_10  (*fun) (  struct env1492*  ,    struct StrView_18  );
    struct env1492 env;
};

static  enum Unit_10   if_dash_just1491 (    struct Maybe_125  x1601 ,   struct envunion1493  fun1603 ) {
    struct Maybe_125  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_125_Just_t ) {
        struct envunion1493  temp1494 = (  fun1603 );
        ( temp1494.fun ( &temp1494.env ,  ( dref1604 .stuff .Maybe_125_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_125_None_t ) {
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam1495 (   struct env1492* env ,    struct StrView_18  msg5024 ) {
    ( (  free782 ) ( (  msg5024 ) ,  ( ( * ( env->ed5022 ) ) .f_al ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   reset_dash_msg1490 (    struct Editor_329 *  ed5022 ) {
    struct env1492 envinst1492 = {
        .ed5022 =  ed5022 ,
    };
    ( (  if_dash_just1491 ) ( ( ( * (  ed5022 ) ) .f_msg ) ,  ( (struct envunion1493){ .fun = (  enum Unit_10  (*) (  struct env1492*  ,    struct StrView_18  ) )lam1495 , .env =  envinst1492 } ) ) );
    (*  ed5022 ) .f_msg = ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    return ( Unit_10_Unit );
}

struct envunion1497 {
    enum Unit_10  (*fun) (  struct env820*  ,    struct Editor_329 *  ,    struct Key_829  );
    struct env820 env;
};

static  size_t   clamp1503 (    size_t  x1648 ,    size_t  mn1650 ,    size_t  mx1652 ) {
    if ( (  cmp371 ( (  x1648 ) , (  mn1650 ) ) == 0 ) ) {
        return (  mn1650 );
    } else {
        if ( (  cmp371 ( (  x1648 ) , (  mx1652 ) ) == 2 ) ) {
            return (  mx1652 );
        } else {
            return (  x1648 );
        }
    }
}

static  size_t   sync_dash_char1505 (    uint8_t *  p1429 ) {
    size_t  i1430 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb1431 = ( * ( (uint8_t * ) ( ( (void*) (  p1429 ) ) + (  op_dash_neg453 ( ( (  size_dash_i64418 ) ( (  i1430 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp410 ( (  pb1431 ) , (  from_dash_integral397 ( 128 ) ) ) != 0 ) && (  cmp410 ( (  pb1431 ) , (  op_dash_add1355 ( (  from_dash_integral397 ( 128 ) ) , (  from_dash_integral397 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i1430 );
        }
        i1430 = (  op_dash_add425 ( (  i1430 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char1504 (    uint8_t *  p1434 ) {
    return (  op_dash_add425 ( ( (  sync_dash_char1505 ) ( ( (  offset_dash_ptr422 ) ( (  p1434 ) ,  (  op_dash_neg453 ( (  from_dash_integral434 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_40   left_dash_pos1502 (    struct TextBuf_164 *  self4197 ,    struct Pos_40  pos4199 ) {
    if ( (  eq1006 ( (  pos4199 ) , ( (  mk1118 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  from_dash_integral92 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk1118 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  from_dash_integral92 ( 0 ) ) ) );
    }
    if ( (  eq660 ( ( (  pos4199 ) .f_bi ) , (  from_dash_integral92 ( 0 ) ) ) ) ) {
        ( (  assert1092 ) ( (  cmp222 ( ( (  pos4199 ) .f_line ) , (  from_dash_integral92 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk1118 ) ( (  op_dash_sub229 ( ( (  pos4199 ) .f_line ) , (  from_dash_integral92 ( 1 ) ) ) ) ,  ( (  size_dash_i32380 ) ( ( (  num_dash_bytes465 ) ( ( (  line366 ) ( (  self4197 ) ,  (  op_dash_sub229 ( ( (  pos4199 ) .f_line ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_18  line4200 = ( (  line366 ) ( (  self4197 ) ,  ( (  pos4199 ) .f_line ) ) );
    size_t  pos_dash_bi4201 = ( (  clamp1503 ) ( ( (  i32_dash_size349 ) ( ( (  pos4199 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes465 ) ( (  line4200 ) ) ) ) );
    size_t  off4202 = ( (  previous_dash_char1504 ) ( ( (  offset_dash_ptr422 ) ( ( ( (  line4200 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  pos_dash_bi4201 ) ) ) ) ) ) );
    return ( (  mk1118 ) ( ( (  pos4199 ) .f_line ) ,  ( (  size_dash_i32380 ) ( (  op_dash_sub580 ( (  pos_dash_bi4201 ) , (  off4202 ) ) ) ) ) ) );
}

static  enum Unit_10   move_dash_left1501 (    struct Pane_289 *  self4622 ) {
    ( (  set_dash_cursors356 ) ( (  self4622 ) ,  ( (  left_dash_pos1502 ) ( ( ( * (  self4622 ) ) .f_buf ) ,  ( ( * (  self4622 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) ,  ( CursorMovement_357_UpdateVI ) ) );
    return ( Unit_10_Unit );
}

static  struct Pos_40   right_dash_pos1507 (    struct TextBuf_164 *  self4189 ,    struct Pos_40  pos4191 ) {
    if ( (  cmp222 ( ( (  pos4191 ) .f_line ) , ( (  num_dash_lines489 ) ( (  self4189 ) ) ) ) != 0 ) ) {
        return ( (  mk1118 ) ( ( (  num_dash_lines489 ) ( (  self4189 ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ) );
    }
    struct StrView_18  line4192 = ( (  line366 ) ( (  self4189 ) ,  ( (  pos4191 ) .f_line ) ) );
    int64_t  bi4193 = ( (  i32_dash_i641432 ) ( ( (  pos4191 ) .f_bi ) ) );
    if ( (  cmp1474 ( (  bi4193 ) , ( (  size_dash_i64418 ) ( ( (  num_dash_bytes465 ) ( (  line4192 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp222 ( (  op_dash_add224 ( ( (  pos4191 ) .f_line ) , (  from_dash_integral92 ( 1 ) ) ) ) , ( (  num_dash_lines489 ) ( (  self4189 ) ) ) ) != 0 ) ) {
            return ( (  mk1118 ) ( ( (  pos4191 ) .f_line ) ,  ( (  size_dash_i32380 ) ( ( (  num_dash_bytes465 ) ( (  line4192 ) ) ) ) ) ) );
        }
        return ( (  mk1118 ) ( (  op_dash_add224 ( ( (  pos4191 ) .f_line ) , (  from_dash_integral92 ( 1 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ) );
    }
    int32_t  off4194 = ( (  size_dash_i32380 ) ( ( (  next_dash_char409 ) ( ( (  offset_dash_ptr422 ) ( ( ( (  line4192 ) .f_contents ) .f_ptr ) ,  (  bi4193 ) ) ) ) ) ) );
    return ( (  mk1118 ) ( ( (  pos4191 ) .f_line ) ,  (  op_dash_add224 ( ( (  pos4191 ) .f_bi ) , (  off4194 ) ) ) ) );
}

static  enum Unit_10   move_dash_right1506 (    struct Pane_289 *  self4619 ) {
    ( (  set_dash_cursors356 ) ( (  self4619 ) ,  ( (  right_dash_pos1507 ) ( ( ( * (  self4619 ) ) .f_buf ) ,  ( ( * (  self4619 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) ,  ( CursorMovement_357_UpdateVI ) ) );
    return ( Unit_10_Unit );
}

static  int32_t   vi_dash_bi1509 (    struct TextBuf_164 *  self4492 ,    int32_t  ln4494 ,    int32_t  vx4496 ) {
    int32_t  bi4497 = ( (  from_dash_integral92 ( 0 ) ) );
    int32_t  vi4498 = (  from_dash_integral92 ( 0 ) );
    struct StrViewIter_362  temp1510 =  into_dash_iter363 ( ( (  chars364 ) ( ( (  line366 ) ( (  self4492 ) ,  (  ln4494 ) ) ) ) ) );
    while (true) {
        struct Maybe_420  __cond1511 =  next421 (&temp1510);
        if (  __cond1511 .tag == 0 ) {
            break;
        }
        struct Char_101  c4500 =  __cond1511 .stuff .Maybe_420_Just_s .field0;
        vi4498 = (  op_dash_add224 ( (  vi4498 ) , ( (  char_dash_screen_dash_width426 ) ( (  c4500 ) ) ) ) );
        if ( (  cmp222 ( (  vx4496 ) , (  vi4498 ) ) == 0 ) ) {
            break;
        }
        bi4497 = (  op_dash_add224 ( (  bi4497 ) , ( (  size_dash_i32380 ) ( ( (  c4500 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi4497 );
}

static  enum Unit_10   move_dash_down1508 (    struct Pane_289 *  self4625 ,    int32_t  amnt4627 ) {
    struct Pos_40  cur4628 = ( ( * (  self4625 ) ) .f_cursor );
    int32_t  nu_dash_line4629 = ( (  min1083 ) ( (  op_dash_add224 ( ( (  cur4628 ) .f_line ) , (  amnt4627 ) ) ) ,  (  op_dash_sub229 ( ( (  num_dash_lines489 ) ( ( ( * (  self4625 ) ) .f_buf ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) ) );
    int32_t  vci4630 = ( ( * (  self4625 ) ) .f_vi );
    int32_t  bi4631 = ( (  vi_dash_bi1509 ) ( ( ( * (  self4625 ) ) .f_buf ) ,  (  nu_dash_line4629 ) ,  (  vci4630 ) ) );
    ( (  set_dash_cursors356 ) ( (  self4625 ) ,  ( (struct Pos_40) { .f_line = (  nu_dash_line4629 ) , .f_bi = (  bi4631 ) } ) ,  ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) ,  ( CursorMovement_357_NoChanges ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   move_dash_up1512 (    struct Pane_289 *  self4634 ,    int32_t  amnt4636 ) {
    struct Pos_40  cur4637 = ( ( * (  self4634 ) ) .f_cursor );
    int32_t  nu_dash_line4638 = ( (  max443 ) ( (  op_dash_sub229 ( ( (  cur4637 ) .f_line ) , (  amnt4636 ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ) );
    int32_t  vci4639 = ( ( * (  self4634 ) ) .f_vi );
    int32_t  bi4640 = ( (  vi_dash_bi1509 ) ( ( ( * (  self4634 ) ) .f_buf ) ,  (  nu_dash_line4638 ) ,  (  vci4639 ) ) );
    ( (  set_dash_cursors356 ) ( (  self4634 ) ,  ( (struct Pos_40) { .f_line = (  nu_dash_line4638 ) , .f_bi = (  bi4640 ) } ) ,  ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) ,  ( CursorMovement_357_NoChanges ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   flush_dash_insert_dash_action1514 (    struct TextBuf_164 *  self4295 ) {
    (*  self4295 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_166_NoChangeset );
    return ( Unit_10_Unit );
}

static  enum Unit_10   set_dash_mode1513 (    struct Pane_289 *  self4598 ,    enum Mode_290  mode4600 ) {
    if ( (  eq462 ( (  mode4600 ) , ( Mode_290_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1514 ) ( ( ( * (  self4598 ) ) .f_buf ) ) );
    }
    (*  self4598 ) .f_mode = (  mode4600 );
    return ( Unit_10_Unit );
}

struct SliceIter_1522 {
    struct Slice_44  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1521 {
    struct SliceIter_1522  field0;
    size_t  field1;
};

static struct Drop_1521 Drop_1521_Drop (  struct SliceIter_1522  field0 ,  size_t  field1 ) {
    return ( struct Drop_1521 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1521   into_dash_iter1523 (    struct Drop_1521  self853 ) {
    return (  self853 );
}

static  struct SliceIter_1522   into_dash_iter1526 (    struct Slice_44  self2250 ) {
    return ( (struct SliceIter_1522) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_45 *   offset_dash_ptr1528 (    struct Changeset_45 *  x377 ,    int64_t  count379 ) {
    struct Changeset_45  temp1529;
    return ( (struct Changeset_45 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul416 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1529 ) ) ) ) ) ) ) ) );
}

static  struct Slice_44   subslice1527 (    struct Slice_44  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Changeset_45 *  begin_dash_ptr2209 = ( (  offset_dash_ptr1528 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp371 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp371 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_44) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub580 ( ( (  min956 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_44) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct SliceIter_1522   into_dash_iter1525 (    struct List_43  self2433 ) {
    return ( (  into_dash_iter1526 ) ( ( (  subslice1527 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

static  struct Drop_1521   drop1524 (    struct List_43  iterable860 ,    size_t  i862 ) {
    struct SliceIter_1522  it863 = ( (  into_dash_iter1525 ) ( (  iterable860 ) ) );
    return ( ( Drop_1521_Drop ) ( (  it863 ) ,  (  i862 ) ) );
}

struct Maybe_1531 {
    enum {
        Maybe_1531_None_t,
        Maybe_1531_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_45  field0;
        } Maybe_1531_Just_s;
    } stuff;
};

static struct Maybe_1531 Maybe_1531_Just (  struct Changeset_45  field0 ) {
    return ( struct Maybe_1531 ) { .tag = Maybe_1531_Just_t, .stuff = { .Maybe_1531_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1531   next1533 (    struct SliceIter_1522 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp371 ( (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1531) { .tag = Maybe_1531_None_t } );
    }
    struct Changeset_45  elem2258 = ( * ( (  offset_dash_ptr1528 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1531_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_1531   next1532 (    struct Drop_1521 *  dref855 ) {
    while ( (  cmp371 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1533 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
        (* dref855 ) .field1 = (  op_dash_sub580 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1533 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
}

struct env1536 {
    enum CAllocator_12  al4130;
    ;
};

struct envunion1537 {
    enum Unit_10  (*fun) (  struct env1536*  ,    struct Action_39  );
    struct env1536 env;
};

struct SliceIter_1538 {
    struct Slice_38  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1538   into_dash_iter1541 (    struct Slice_38  self2250 ) {
    return ( (struct SliceIter_1538) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_39 *   offset_dash_ptr1543 (    struct Action_39 *  x377 ,    int64_t  count379 ) {
    struct Action_39  temp1544;
    return ( (struct Action_39 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul416 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1544 ) ) ) ) ) ) ) ) );
}

static  struct Slice_38   subslice1542 (    struct Slice_38  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Action_39 *  begin_dash_ptr2209 = ( (  offset_dash_ptr1543 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp371 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp371 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_38) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub580 ( ( (  min956 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_38) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct SliceIter_1538   into_dash_iter1540 (    struct List_37  self2433 ) {
    return ( (  into_dash_iter1541 ) ( ( (  subslice1542 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

struct Maybe_1545 {
    enum {
        Maybe_1545_None_t,
        Maybe_1545_Just_t,
    } tag;
    union {
        struct {
            struct Action_39  field0;
        } Maybe_1545_Just_s;
    } stuff;
};

static struct Maybe_1545 Maybe_1545_Just (  struct Action_39  field0 ) {
    return ( struct Maybe_1545 ) { .tag = Maybe_1545_Just_t, .stuff = { .Maybe_1545_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1545   next1546 (    struct SliceIter_1538 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp371 ( (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1545) { .tag = Maybe_1545_None_t } );
    }
    struct Action_39  elem2258 = ( * ( (  offset_dash_ptr1543 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1545_Just ) ( (  elem2258 ) ) );
}

static  enum Unit_10   for_dash_each1535 (    struct List_37  iterable1099 ,   struct envunion1537  fun1101 ) {
    struct SliceIter_1538  temp1539 = ( (  into_dash_iter1540 ) ( (  iterable1099 ) ) );
    struct SliceIter_1538 *  it1102 = ( &temp1539 );
    while ( ( true ) ) {
        struct Maybe_1545  dref1103 = ( (  next1546 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_1545_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_1545_Just_t ) {
                struct envunion1537  temp1547 = (  fun1101 );
                ( temp1547.fun ( &temp1547.env ,  ( dref1103 .stuff .Maybe_1545_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   free_dash_action1549 (    struct Action_39  action4123 ,    enum CAllocator_12  al4125 ) {
    ( (  free782 ) ( ( (  action4123 ) .f_fwd ) ,  (  al4125 ) ) );
    ( (  free782 ) ( ( (  action4123 ) .f_bwd ) ,  (  al4125 ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam1548 (   struct env1536* env ,    struct Action_39  a4132 ) {
    return ( (  free_dash_action1549 ) ( (  a4132 ) ,  ( env->al4130 ) ) );
}

static  void *   cast_dash_ptr1552 (    struct Action_39 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_10   free1551 (    enum CAllocator_12  dref2373 ,    struct Slice_38  slice2375 ) {
    if (!(  dref2373 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr1552 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   free1550 (    struct List_37 *  list2440 ) {
    ( (  free1551 ) ( ( ( * (  list2440 ) ) .f_al ) ,  ( ( * (  list2440 ) ) .f_elements ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   free_dash_changeset1534 (    struct Changeset_45  chs4128 ,    enum CAllocator_12  al4130 ) {
    struct env1536 envinst1536 = {
        .al4130 =  al4130 ,
    };
    ( (  for_dash_each1535 ) ( ( (  chs4128 ) .f_parts ) ,  ( (struct envunion1537){ .fun = (  enum Unit_10  (*) (  struct env1536*  ,    struct Action_39  ) )lam1548 , .env =  envinst1536 } ) ) );
    ( (  free1550 ) ( ( & ( (  chs4128 ) .f_parts ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   trim1553 (    struct List_43 *  l2530 ,    size_t  new_dash_count2532 ) {
    (*  l2530 ) .f_count = ( (  min956 ) ( (  new_dash_count2532 ) ,  ( ( * (  l2530 ) ) .f_count ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   trim_dash_actions1519 (    struct Actions_165 *  actions4146 ) {
    enum CAllocator_12  al4147 = ( ( ( * (  actions4146 ) ) .f_list ) .f_al );
    size_t  cur4148 = ( ( * (  actions4146 ) ) .f_cur );
    struct Drop_1521  temp1520 =  into_dash_iter1523 ( ( (  drop1524 ) ( ( ( * (  actions4146 ) ) .f_list ) ,  (  cur4148 ) ) ) );
    while (true) {
        struct Maybe_1531  __cond1530 =  next1532 (&temp1520);
        if (  __cond1530 .tag == 0 ) {
            break;
        }
        struct Changeset_45  action4150 =  __cond1530 .stuff .Maybe_1531_Just_s .field0;
        ( (  free_dash_changeset1534 ) ( (  action4150 ) ,  (  al4147 ) ) );
    }
    ( (  trim1553 ) ( ( & ( ( * (  actions4146 ) ) .f_list ) ) ,  (  cur4148 ) ) );
    return ( Unit_10_Unit );
}

static  struct StrView_18   clone1554 (    struct StrView_18  s2592 ,    enum CAllocator_12  al2594 ) {
    return ( (  clone_dash_0730 ) ( (  s2592 ) ,  (  al2594 ) ) );
}

static  struct Maybe_125   head1556 (    struct SplitIter_1026  it1167 ) {
    struct SplitIter_1026  temp1557 = ( (  into_dash_iter1033 ) ( (  it1167 ) ) );
    return ( (  next1040 ) ( ( &temp1557 ) ) );
}

static  struct Maybe_125   head1559 (    struct Drop_1025  it1167 ) {
    struct Drop_1025  temp1560 = ( (  into_dash_iter1031 ) ( (  it1167 ) ) );
    return ( (  next1039 ) ( ( &temp1560 ) ) );
}

static  bool   null1558 (    struct Drop_1025  it1176 ) {
    struct Maybe_125  dref1177 = ( (  head1559 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_125_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Tuple2_711   undefined1562 (  ) {
    struct Tuple2_711  temp1563;
    return (  temp1563 );
}

static  struct Tuple2_711   or_dash_fail1561 (    struct Maybe_722  x1353 ,    struct StrView_18  errmsg1355 ) {
    struct Maybe_722  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_722_None_t ) {
        ( (  panic1139 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1562 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_722_Just_t ) {
            return ( dref1356 .stuff .Maybe_722_Just_s .field0 );
        }
    }
}

static  struct Maybe_722   reduce1565 (    struct Zip_1024  iterable1118 ,    struct Maybe_722  base1120 ,    struct Maybe_722 (*  fun1122 )(    struct Tuple2_711  ,    struct Maybe_722  ) ) {
    struct Maybe_722  x1123 = (  base1120 );
    struct Zip_1024  it1124 = ( (  into_dash_iter1029 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_722  dref1125 = ( (  next1038 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_722_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_722_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_722_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1566 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1566);
    abort ( );
    ( Unit_10_Unit );
    struct Maybe_722  temp1567;
    return (  temp1567 );
}

static  struct Maybe_722   lam1568 (    struct Tuple2_711  e1172 ,    struct Maybe_722  dref1173 ) {
    return ( ( Maybe_722_Just ) ( (  e1172 ) ) );
}

static  struct Maybe_722   last1564 (    struct Zip_1024  it1170 ) {
    return ( (  reduce1565 ) ( (  it1170 ) ,  ( (struct Maybe_722) { .tag = Maybe_722_None_t } ) ,  (  lam1568 ) ) );
}

static  struct Pos_40   pos_dash_after_dash_str1555 (    struct TextBuf_164 *  self4281 ,    struct StrView_18  bytes4283 ,    struct Pos_40  from4285 ) {
    struct SplitIter_1026  lines4286 = ( (  split_dash_by_dash_each1034 ) ( (  bytes4283 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_18  first_dash_line4287 = ( (  or_dash_else1016 ) ( ( (  head1556 ) ( (  lines4286 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
    struct Drop_1025  headless4288 = ( (  drop1032 ) ( (  lines4286 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1558 ) ( (  headless4288 ) ) ) ) {
        struct Pos_40  next_dash_pos4289 = ( (  mk1118 ) ( ( (  from4285 ) .f_line ) ,  (  op_dash_add224 ( ( (  from4285 ) .f_bi ) , ( (  size_dash_i32380 ) ( ( (  num_dash_bytes465 ) ( (  first_dash_line4287 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos4289 );
    } else {
        struct Tuple2_711  dref4290 = ( (  or_dash_fail1561 ) ( ( (  last1564 ) ( ( (  zip1030 ) ( (  headless4288 ) ,  ( (  from573 ) ( (  op_dash_add224 ( ( (  from4285 ) .f_line ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"should not happen" ) ,  ( 17 ) ) ) ) );
        
        return ( (  mk1118 ) ( ( dref4290 .field1 ) ,  ( (  size_dash_i32380 ) ( ( (  num_dash_bytes465 ) ( ( dref4290 .field0 ) ) ) ) ) ) );
    }
}

struct envunion1574 {
    enum Unit_10  (*fun) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  );
    struct env59 env;
};

struct envunion1578 {
    enum Unit_10  (*fun) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  );
    struct env59 env;
};

struct envunion1580 {
    enum Unit_10  (*fun) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  );
    struct env59 env;
};

struct envunion1582 {
    enum Unit_10  (*fun) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  );
    struct env59 env;
};

static  struct StrView_18   str_dash_between1570 (   struct env187* env ,    struct TextBuf_164 *  self4315 ,    struct Pos_40  from4317 ,    struct Pos_40  to4319 ) {
    enum CAllocator_12  al4320 = ( ( ( * (  self4315 ) ) .f_buf ) .f_al );
    if ( (  eq660 ( ( (  from4317 ) .f_line ) , ( (  to4319 ) .f_line ) ) ) ) {
        if ( (  eq660 ( ( (  from4317 ) .f_line ) , ( (  num_dash_lines489 ) ( (  self4315 ) ) ) ) ) ) {
            return ( (  clone1554 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  (  al4320 ) ) );
        }
        size_t  from_dash_bi4321 = ( (  i32_dash_size349 ) ( ( (  min1083 ) ( ( (  from4317 ) .f_bi ) ,  ( (  to4319 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi4322 = ( (  i32_dash_size349 ) ( ( (  max443 ) ( ( (  from4317 ) .f_bi ) ,  ( (  to4319 ) .f_bi ) ) ) ) );
        return ( (  clone1554 ) ( ( (  byte_dash_substr965 ) ( ( (  line366 ) ( (  self4315 ) ,  ( (  from4317 ) .f_line ) ) ) ,  (  from_dash_bi4321 ) ,  (  to_dash_bi4322 ) ) ) ,  (  al4320 ) ) );
    } else {
        struct Pos_40  from_dash_pos4323 = ( (  min1003 ) ( (  from4317 ) ,  (  to4319 ) ) );
        struct Pos_40  to_dash_pos4324 = ( (  max1005 ) ( (  from4317 ) ,  (  to4319 ) ) );
        struct List_11  temp1571 = ( (  mk525 ) ( (  al4320 ) ) );
        struct List_11 *  sb4325 = ( &temp1571 );
        struct StrView_18  first_dash_line4326 = ( (  line366 ) ( (  self4315 ) ,  ( (  from_dash_pos4323 ) .f_line ) ) );
        struct envunion188  temp1572 = ( (struct envunion188){ .fun = (  enum Unit_10  (*) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  ) )add_dash_all536 , .env =  env->envinst59 } );
        ( temp1572.fun ( &temp1572.env ,  (  sb4325 ) ,  ( ( (  byte_dash_substr965 ) ( (  first_dash_line4326 ) ,  ( (  i32_dash_size349 ) ( ( (  from_dash_pos4323 ) .f_bi ) ) ) ,  ( (  num_dash_bytes465 ) ( (  first_dash_line4326 ) ) ) ) ) .f_contents ) ) );
        struct envunion1574  temp1573 = ( (struct envunion1574){ .fun = (  enum Unit_10  (*) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  ) )add_dash_all536 , .env =  env->envinst59 } );
        ( temp1573.fun ( &temp1573.env ,  (  sb4325 ) ,  ( ( ( (  from_dash_charlike699 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_218  temp1575 =  into_dash_iter219 ( ( (  to228 ) ( (  op_dash_add224 ( ( (  from_dash_pos4323 ) .f_line ) , (  from_dash_integral92 ( 1 ) ) ) ) ,  (  op_dash_sub229 ( ( (  to_dash_pos4324 ) .f_line ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_220  __cond1576 =  next221 (&temp1575);
            if (  __cond1576 .tag == 0 ) {
                break;
            }
            int32_t  i4328 =  __cond1576 .stuff .Maybe_220_Just_s .field0;
            struct envunion1578  temp1577 = ( (struct envunion1578){ .fun = (  enum Unit_10  (*) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  ) )add_dash_all536 , .env =  env->envinst59 } );
            ( temp1577.fun ( &temp1577.env ,  (  sb4325 ) ,  ( ( (  line366 ) ( (  self4315 ) ,  (  i4328 ) ) ) .f_contents ) ) );
            struct envunion1580  temp1579 = ( (struct envunion1580){ .fun = (  enum Unit_10  (*) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  ) )add_dash_all536 , .env =  env->envinst59 } );
            ( temp1579.fun ( &temp1579.env ,  (  sb4325 ) ,  ( ( ( (  from_dash_charlike699 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1582  temp1581 = ( (struct envunion1582){ .fun = (  enum Unit_10  (*) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  ) )add_dash_all536 , .env =  env->envinst59 } );
        ( temp1581.fun ( &temp1581.env ,  (  sb4325 ) ,  ( ( (  byte_dash_substr965 ) ( ( (  line366 ) ( (  self4315 ) ,  ( (  to_dash_pos4324 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size349 ) ( ( (  to_dash_pos4324 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes367 ) ( ( (  to_dash_slice368 ) ( ( * (  sb4325 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1583 (    struct Maybe_276  m1574 ) {
    struct Maybe_276  dref1575 = (  m1574 );
    if ( dref1575.tag == Maybe_276_None_t ) {
        return ( true );
    }
    else {
        if ( dref1575.tag == Maybe_276_Just_t ) {
            return ( false );
        }
    }
}

struct Tuple2_1585 {
    enum ChangesetInputType_166  field0;
    enum ChangesetInputType_166  field1;
};

static struct Tuple2_1585 Tuple2_1585_Tuple2 (  enum ChangesetInputType_166  field0 ,  enum ChangesetInputType_166  field1 ) {
    return ( struct Tuple2_1585 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1584 (    enum ChangesetInputType_166  l4136 ,    enum ChangesetInputType_166  r4138 ) {
    return ( {  struct Tuple2_1585  dref4139 = ( ( Tuple2_1585_Tuple2 ) ( (  l4136 ) ,  (  r4138 ) ) ) ;  dref4139 .field0 == ChangesetInputType_166_NoChangeset &&  dref4139 .field1 == ChangesetInputType_166_NoChangeset ? ( true ) :  dref4139 .field0 == ChangesetInputType_166_InputChangeset &&  dref4139 .field1 == ChangesetInputType_166_InputChangeset ? ( true ) :  dref4139 .field0 == ChangesetInputType_166_CustomChangeset &&  dref4139 .field1 == ChangesetInputType_166_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_45 *   get_dash_ptr1587 (    struct Slice_44  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp371 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_45 *  elem_dash_ptr2173 = ( (  offset_dash_ptr1528 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  struct Changeset_45 *   last_dash_ptr1586 (    struct Slice_44  s2360 ) {
    if ( (  eq352 ( ( (  s2360 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1139 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1587 ) ( (  s2360 ) ,  (  op_dash_sub580 ( ( (  s2360 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_44   to_dash_slice1588 (    struct List_43  l2541 ) {
    struct Changeset_45 *  ptr2542 = ( ( (  l2541 ) .f_elements ) .f_ptr );
    return ( (struct Slice_44) { .f_ptr = (  ptr2542 ) , .f_count = ( (  l2541 ) .f_count ) } );
}

struct TypeSize_1595 {
    size_t  f_size;
};

static  struct TypeSize_1595   get_dash_typesize1594 (  ) {
    struct Action_39  temp1596;
    return ( (struct TypeSize_1595) { .f_size = ( sizeof( ( (  temp1596 ) ) ) ) } );
}

static  struct Action_39 *   cast_dash_ptr1597 (    void *  p398 ) {
    return ( (struct Action_39 * ) (  p398 ) );
}

static  struct Slice_38   allocate1593 (    enum CAllocator_12  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize1594 ) ( ) ) ) .f_size );
    struct Action_39 *  ptr2371 = ( (  cast_dash_ptr1597 ) ( ( ( malloc ) ( (  op_dash_mul555 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_38) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env1598 {
    ;
    struct Slice_38  new_dash_slice2453;
    ;
};

struct Tuple2_1600 {
    struct Action_39  field0;
    int32_t  field1;
};

static struct Tuple2_1600 Tuple2_1600_Tuple2 (  struct Action_39  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1600 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1599 {
    enum Unit_10  (*fun) (  struct env1598*  ,    struct Tuple2_1600  );
    struct env1598 env;
};

static  struct Action_39 *   get_dash_ptr1603 (    struct Slice_38  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp371 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_39 *  elem_dash_ptr2173 = ( (  offset_dash_ptr1543 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_10   set1602 (    struct Slice_38  slice2187 ,    size_t  i2189 ,    struct Action_39  x2191 ) {
    struct Action_39 *  ep2192 = ( (  get_dash_ptr1603 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam1601 (   struct env1598* env ,    struct Tuple2_1600  dref2454 ) {
    return ( (  set1602 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size349 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct Zip_1605 {
    struct SliceIter_1538  f_left_dash_it;
    struct FromIter_564  f_right_dash_it;
};

static  struct Zip_1605   into_dash_iter1607 (    struct Zip_1605  self936 ) {
    return (  self936 );
}

struct Maybe_1608 {
    enum {
        Maybe_1608_None_t,
        Maybe_1608_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1600  field0;
        } Maybe_1608_Just_s;
    } stuff;
};

static struct Maybe_1608 Maybe_1608_Just (  struct Tuple2_1600  field0 ) {
    return ( struct Maybe_1608 ) { .tag = Maybe_1608_Just_t, .stuff = { .Maybe_1608_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1608   next1609 (    struct Zip_1605 *  self939 ) {
    struct Zip_1605  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_1545  dref941 = ( (  next1546 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_1545_None_t ) {
            return ( (struct Maybe_1608) { .tag = Maybe_1608_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_1545_Just_t ) {
                struct Maybe_220  dref943 = ( (  next569 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_220_None_t ) {
                    return ( (struct Maybe_1608) { .tag = Maybe_1608_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_220_Just_t ) {
                        ( (  next1546 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next569 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1608_Just ) ( ( ( Tuple2_1600_Tuple2 ) ( ( dref941 .stuff .Maybe_1545_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_220_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_10   for_dash_each1604 (    struct Zip_1605  iterable1099 ,   struct envunion1599  fun1101 ) {
    struct Zip_1605  temp1606 = ( (  into_dash_iter1607 ) ( (  iterable1099 ) ) );
    struct Zip_1605 *  it1102 = ( &temp1606 );
    while ( ( true ) ) {
        struct Maybe_1608  dref1103 = ( (  next1609 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_1608_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_1608_Just_t ) {
                struct envunion1599  temp1610 = (  fun1101 );
                ( temp1610.fun ( &temp1610.env ,  ( dref1103 .stuff .Maybe_1608_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  struct Zip_1605   zip1611 (    struct Slice_38  left947 ,    struct FromIter_564  right949 ) {
    struct SliceIter_1538  left_dash_it950 = ( (  into_dash_iter1541 ) ( (  left947 ) ) );
    struct FromIter_564  right_dash_it951 = ( (  into_dash_iter572 ) ( (  right949 ) ) );
    return ( (struct Zip_1605) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  enum Unit_10   grow_dash_if_dash_full1592 (   struct env5* env ,    struct List_37 *  list2452 ) {
    if ( (  eq352 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate1593 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq352 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_38  new_dash_slice2453 = ( (  allocate1593 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul555 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env1598 envinst1598 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion1599  fun2457 = ( (struct envunion1599){ .fun = (  enum Unit_10  (*) (  struct env1598*  ,    struct Tuple2_1600  ) )lam1601 , .env =  envinst1598 } );
            ( (  for_dash_each1604 ) ( ( (  zip1611 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from573 ) ( (  from_dash_integral92 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free1551 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   add1590 (   struct env35* env ,    struct List_37 *  list2460 ,    struct Action_39  elem2462 ) {
    struct envunion36  temp1591 = ( (struct envunion36){ .fun = (  enum Unit_10  (*) (  struct env5*  ,    struct List_37 *  ) )grow_dash_if_dash_full1592 , .env =  env->envinst5 } );
    ( temp1591.fun ( &temp1591.env ,  (  list2460 ) ) );
    ( (  set1602 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add425 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_10_Unit );
}

static  void *   cast_dash_ptr1618 (    struct Action_39 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1619 (    struct Action_39 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Action_39 *   zeroed1616 (  ) {
    struct Action_39 *  temp1617;
    struct Action_39 *  x642 = (  temp1617 );
    ( ( memset ) ( ( (  cast_dash_ptr1618 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of1619 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  struct Action_39 *   null_dash_ptr1615 (  ) {
    return ( (  zeroed1616 ) ( ) );
}

static  struct Slice_38   empty1614 (  ) {
    return ( (struct Slice_38) { .f_ptr = ( (  null_dash_ptr1615 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_37   mk1613 (    enum CAllocator_12  al2436 ) {
    struct Slice_38  elements2437 = ( (  empty1614 ) ( ) );
    return ( (struct List_37) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_46   or_dash_else1620 (    struct Maybe_276  self1360 ,    struct Cursors_46  alt1362 ) {
    struct Maybe_276  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_276_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_276_Just_t ) {
            return ( dref1363 .stuff .Maybe_276_Just_s .field0 );
        }
    }
}

struct envunion1622 {
    enum Unit_10  (*fun) (  struct env35*  ,    struct List_37 *  ,    struct Action_39  );
    struct env35 env;
};

struct TypeSize_1629 {
    size_t  f_size;
};

static  struct TypeSize_1629   get_dash_typesize1628 (  ) {
    struct Changeset_45  temp1630;
    return ( (struct TypeSize_1629) { .f_size = ( sizeof( ( (  temp1630 ) ) ) ) } );
}

static  struct Changeset_45 *   cast_dash_ptr1631 (    void *  p398 ) {
    return ( (struct Changeset_45 * ) (  p398 ) );
}

static  struct Slice_44   allocate1627 (    enum CAllocator_12  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize1628 ) ( ) ) ) .f_size );
    struct Changeset_45 *  ptr2371 = ( (  cast_dash_ptr1631 ) ( ( ( malloc ) ( (  op_dash_mul555 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_44) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env1632 {
    ;
    struct Slice_44  new_dash_slice2453;
    ;
};

struct Tuple2_1634 {
    struct Changeset_45  field0;
    int32_t  field1;
};

static struct Tuple2_1634 Tuple2_1634_Tuple2 (  struct Changeset_45  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1634 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1633 {
    enum Unit_10  (*fun) (  struct env1632*  ,    struct Tuple2_1634  );
    struct env1632 env;
};

static  enum Unit_10   set1636 (    struct Slice_44  slice2187 ,    size_t  i2189 ,    struct Changeset_45  x2191 ) {
    struct Changeset_45 *  ep2192 = ( (  get_dash_ptr1587 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam1635 (   struct env1632* env ,    struct Tuple2_1634  dref2454 ) {
    return ( (  set1636 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size349 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct Zip_1638 {
    struct SliceIter_1522  f_left_dash_it;
    struct FromIter_564  f_right_dash_it;
};

static  struct Zip_1638   into_dash_iter1640 (    struct Zip_1638  self936 ) {
    return (  self936 );
}

struct Maybe_1641 {
    enum {
        Maybe_1641_None_t,
        Maybe_1641_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1634  field0;
        } Maybe_1641_Just_s;
    } stuff;
};

static struct Maybe_1641 Maybe_1641_Just (  struct Tuple2_1634  field0 ) {
    return ( struct Maybe_1641 ) { .tag = Maybe_1641_Just_t, .stuff = { .Maybe_1641_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1641   next1642 (    struct Zip_1638 *  self939 ) {
    struct Zip_1638  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_1531  dref941 = ( (  next1533 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_1531_None_t ) {
            return ( (struct Maybe_1641) { .tag = Maybe_1641_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_1531_Just_t ) {
                struct Maybe_220  dref943 = ( (  next569 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_220_None_t ) {
                    return ( (struct Maybe_1641) { .tag = Maybe_1641_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_220_Just_t ) {
                        ( (  next1533 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next569 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1641_Just ) ( ( ( Tuple2_1634_Tuple2 ) ( ( dref941 .stuff .Maybe_1531_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_220_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_10   for_dash_each1637 (    struct Zip_1638  iterable1099 ,   struct envunion1633  fun1101 ) {
    struct Zip_1638  temp1639 = ( (  into_dash_iter1640 ) ( (  iterable1099 ) ) );
    struct Zip_1638 *  it1102 = ( &temp1639 );
    while ( ( true ) ) {
        struct Maybe_1641  dref1103 = ( (  next1642 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_1641_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_1641_Just_t ) {
                struct envunion1633  temp1643 = (  fun1101 );
                ( temp1643.fun ( &temp1643.env ,  ( dref1103 .stuff .Maybe_1641_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  struct Zip_1638   zip1644 (    struct Slice_44  left947 ,    struct FromIter_564  right949 ) {
    struct SliceIter_1522  left_dash_it950 = ( (  into_dash_iter1526 ) ( (  left947 ) ) );
    struct FromIter_564  right_dash_it951 = ( (  into_dash_iter572 ) ( (  right949 ) ) );
    return ( (struct Zip_1638) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  void *   cast_dash_ptr1646 (    struct Changeset_45 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_10   free1645 (    enum CAllocator_12  dref2373 ,    struct Slice_44  slice2375 ) {
    if (!(  dref2373 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr1646 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   grow_dash_if_dash_full1626 (   struct env6* env ,    struct List_43 *  list2452 ) {
    if ( (  eq352 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate1627 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq352 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_44  new_dash_slice2453 = ( (  allocate1627 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul555 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env1632 envinst1632 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion1633  fun2457 = ( (struct envunion1633){ .fun = (  enum Unit_10  (*) (  struct env1632*  ,    struct Tuple2_1634  ) )lam1635 , .env =  envinst1632 } );
            ( (  for_dash_each1637 ) ( ( (  zip1644 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from573 ) ( (  from_dash_integral92 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free1645 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   add1624 (   struct env41* env ,    struct List_43 *  list2460 ,    struct Changeset_45  elem2462 ) {
    struct envunion42  temp1625 = ( (struct envunion42){ .fun = (  enum Unit_10  (*) (  struct env6*  ,    struct List_43 *  ) )grow_dash_if_dash_full1626 , .env =  env->envinst6 } );
    ( temp1625.fun ( &temp1625.env ,  (  list2460 ) ) );
    ( (  set1636 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add425 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_10_Unit );
}

static  struct Pos_40   action_dash_fwd1648 (   struct env181* env ,    struct TextBuf_164 *  self4276 ,    struct Action_39  action4278 ) {
    struct envunion182  temp1649 = ( (struct envunion182){ .fun = (  enum Unit_10  (*) (  struct env162*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ,    struct StrView_18  ) )change_dash_no_dash_action1002 , .env =  env->envinst162 } );
    ( temp1649.fun ( &temp1649.env ,  (  self4276 ) ,  ( (  action4278 ) .f_from ) ,  ( (  action4278 ) .f_to_dash_bwd ) ,  ( (  action4278 ) .f_fwd ) ) );
    return ( (  action4278 ) .f_to_dash_fwd );
}

static  struct Maybe_276   change1518 (   struct env189* env ,    struct TextBuf_164 *  self4345 ,    struct Pos_40  from4347 ,    struct Pos_40  to4349 ,    struct StrView_18  bytes4351 ,    struct Maybe_276  before_dash_cursors4353 ) {
    struct Pos_40  from_dash_pos4354 = ( (  min1003 ) ( (  from4347 ) ,  (  to4349 ) ) );
    struct Pos_40  to_dash_pos4355 = ( (  max1005 ) ( (  from4347 ) ,  (  to4349 ) ) );
    struct Actions_165 *  actions4356 = ( & ( ( * (  self4345 ) ) .f_actions ) );
    ( (  trim_dash_actions1519 ) ( (  actions4356 ) ) );
    struct envunion190  temp1569 = ( (struct envunion190){ .fun = (  struct StrView_18  (*) (  struct env187*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ) )str_dash_between1570 , .env =  env->envinst187 } );
    struct Action_39  action4357 = ( (struct Action_39) { .f_from = (  from4347 ) , .f_fwd = ( (  clone1554 ) ( (  bytes4351 ) ,  ( ( * (  self4345 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1555 ) ( (  self4345 ) ,  (  bytes4351 ) ,  (  from_dash_pos4354 ) ) ) , .f_bwd = ( temp1569.fun ( &temp1569.env ,  (  self4345 ) ,  (  from_dash_pos4354 ) ,  (  to_dash_pos4355 ) ) ) , .f_to_dash_bwd = (  to_dash_pos4355 ) } );
    enum CAllocator_12  al4358 = ( ( ( * (  actions4356 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in4359 = ( (  is_dash_none1583 ) ( (  before_dash_cursors4353 ) ) );
    if ( ( (  eq1584 ( ( ( ( * (  self4345 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_166_CustomChangeset ) ) ) || ( (  eq1584 ( ( ( ( * (  self4345 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_166_InputChangeset ) ) ) && (  is_dash_typed_dash_in4359 ) ) ) ) {
        struct Changeset_45 *  last_dash_changeset4360 = ( (  last_dash_ptr1586 ) ( ( (  to_dash_slice1588 ) ( ( ( * (  actions4356 ) ) .f_list ) ) ) ) );
        struct envunion191  temp1589 = ( (struct envunion191){ .fun = (  enum Unit_10  (*) (  struct env35*  ,    struct List_37 *  ,    struct Action_39  ) )add1590 , .env =  env->envinst35 } );
        ( temp1589.fun ( &temp1589.env ,  ( & ( ( * (  last_dash_changeset4360 ) ) .f_parts ) ) ,  (  action4357 ) ) );
    } else {
        struct Changeset_45  temp1612 = ( (struct Changeset_45) { .f_parts = ( (  mk1613 ) ( (  al4358 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1620 ) ( (  before_dash_cursors4353 ) ,  ( (struct Cursors_46) { .f_cur = (  from4347 ) , .f_sel = ( (  eq1006 ( (  from4347 ) , (  to4349 ) ) ) ? ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) : ( ( Maybe_47_Just ) ( (  to4349 ) ) ) ) } ) ) ) } );
        struct Changeset_45 *  changeset4361 = ( &temp1612 );
        struct envunion1622  temp1621 = ( (struct envunion1622){ .fun = (  enum Unit_10  (*) (  struct env35*  ,    struct List_37 *  ,    struct Action_39  ) )add1590 , .env =  env->envinst35 } );
        ( temp1621.fun ( &temp1621.env ,  ( & ( ( * (  changeset4361 ) ) .f_parts ) ) ,  (  action4357 ) ) );
        struct envunion192  temp1623 = ( (struct envunion192){ .fun = (  enum Unit_10  (*) (  struct env41*  ,    struct List_43 *  ,    struct Changeset_45  ) )add1624 , .env =  env->envinst41 } );
        ( temp1623.fun ( &temp1623.env ,  ( & ( ( * (  actions4356 ) ) .f_list ) ) ,  ( * (  changeset4361 ) ) ) );
        (*  actions4356 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in4359 ) ? ( ChangesetInputType_166_InputChangeset ) : ( ChangesetInputType_166_NoChangeset ) );
        (*  actions4356 ) .f_cur = (  op_dash_add425 ( ( ( * (  actions4356 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion193  temp1647 = ( (struct envunion193){ .fun = (  struct Pos_40  (*) (  struct env181*  ,    struct TextBuf_164 *  ,    struct Action_39  ) )action_dash_fwd1648 , .env =  env->envinst181 } );
    struct Pos_40  to_dash_fwd4362 = ( temp1647.fun ( &temp1647.env ,  (  self4345 ) ,  (  action4357 ) ) );
    if ( (  cmp371 ( ( (  num_dash_bytes465 ) ( ( (  action4357 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_40  to_dash_fwd4363 = ( (  left_dash_pos1502 ) ( (  self4345 ) ,  (  to_dash_fwd4362 ) ) );
        return ( ( Maybe_276_Just ) ( ( (struct Cursors_46) { .f_cur = (  to_dash_fwd4363 ) , .f_sel = ( ( Maybe_47_Just ) ( ( (  action4357 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_276_Just ) ( ( (struct Cursors_46) { .f_cur = (  to_dash_fwd4362 ) , .f_sel = ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) } ) ) );
    }
}

static  enum Unit_10   add_dash_str_dash_at_dash_char1516 (   struct env274* env ,    struct Pane_289 *  self4721 ,    struct StrView_18  s4723 ) {
    struct Pos_40  cur4724 = ( ( * (  self4721 ) ) .f_cursor );
    struct envunion275  temp1517 = ( (struct envunion275){ .fun = (  struct Maybe_276  (*) (  struct env189*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ,    struct StrView_18  ,    struct Maybe_276  ) )change1518 , .env =  env->envinst189 } );
    ( temp1517.fun ( &temp1517.env ,  ( ( * (  self4721 ) ) .f_buf ) ,  (  cur4724 ) ,  (  cur4724 ) ,  (  s4723 ) ,  ( (struct Maybe_276) { .tag = Maybe_276_None_t } ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   indent_dash_at1655 (   struct env285* env ,    struct Pane_289 *  self4760 ,    int32_t  line4762 ) {
    struct envunion286  temp1656 = ( (struct envunion286){ .fun = (  struct Maybe_276  (*) (  struct env189*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ,    struct StrView_18  ,    struct Maybe_276  ) )change1518 , .env =  env->envinst189 } );
    ( temp1656.fun ( &temp1656.env ,  ( ( * (  self4760 ) ) .f_buf ) ,  ( (struct Pos_40) { .f_line = (  line4762 ) , .f_bi = (  from_dash_integral92 ( 0 ) ) } ) ,  ( (struct Pos_40) { .f_line = (  line4762 ) , .f_bi = (  from_dash_integral92 ( 0 ) ) } ) ,  ( (  from_dash_charlike699 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_276) { .tag = Maybe_276_None_t } ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   indent_dash_at_dash_current1651 (   struct env296* env ,    struct Pane_289 *  self4781 ,    int32_t  indent4783 ) {
    struct RangeIter_218  temp1652 =  into_dash_iter219 ( ( (  to228 ) ( (  from_dash_integral92 ( 1 ) ) ,  (  indent4783 ) ) ) );
    while (true) {
        struct Maybe_220  __cond1653 =  next221 (&temp1652);
        if (  __cond1653 .tag == 0 ) {
            break;
        }
        int32_t  dref4784 =  __cond1653 .stuff .Maybe_220_Just_s .field0;
        struct envunion297  temp1654 = ( (struct envunion297){ .fun = (  enum Unit_10  (*) (  struct env285*  ,    struct Pane_289 *  ,    int32_t  ) )indent_dash_at1655 , .env =  env->envinst285 } );
        ( temp1654.fun ( &temp1654.env ,  (  self4781 ) ,  ( ( ( * (  self4781 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1506 ) ( (  self4781 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   move_dash_to_dash_beginning1657 (    struct Pane_289 *  self4700 ) {
    struct Pos_40  temp1658 = ( ( * (  self4700 ) ) .f_cursor );
    temp1658 .  f_bi = (  from_dash_integral92 ( 0 ) );
    ( (  set_dash_cursors356 ) ( (  self4700 ) ,  ( temp1658 ) ,  ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) ,  ( CursorMovement_357_UpdateVI ) ) );
    return ( Unit_10_Unit );
}

struct envunion1660 {
    enum Unit_10  (*fun) (  struct env274*  ,    struct Pane_289 *  ,    struct StrView_18  );
    struct env274 env;
};

struct envunion1662 {
    enum Unit_10  (*fun) (  struct env296*  ,    struct Pane_289 *  ,    int32_t  );
    struct env296 env;
};

enum MoveDirection_1664 {
    MoveDirection_1664_MoveFwd,
    MoveDirection_1664_MoveBwd,
};

enum MoveTarget_1665 {
    MoveTarget_1665_NextWordStart,
    MoveTarget_1665_NextWordEnd,
};

static  struct Pos_40   own1667 (    struct Pos_40  x1561 ) {
    return (  x1561 );
}

struct env1668 {
    struct Pos_40 *  prev4666;
    ;
    ;
    struct Pane_289 *  pane4661;
    enum MoveDirection_1664  dir4663;
};

static  bool   is_dash_at_dash_line_dash_end1670 (    struct Pane_289 *  pane4643 ,    struct Pos_40  pos4645 ) {
    return (  eq352 ( ( (  i32_dash_size349 ) ( ( (  pos4645 ) .f_bi ) ) ) , ( (  num_dash_bytes465 ) ( ( (  line366 ) ( ( ( * (  pane4643 ) ) .f_buf ) ,  ( (  pos4645 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1669 (    struct Pane_289 *  pane4648 ) {
    return ( (  is_dash_at_dash_line_dash_end1670 ) ( (  pane4648 ) ,  ( ( * (  pane4648 ) ) .f_cursor ) ) );
}

struct envunion1672 {
    enum Unit_10  (*fun) (  struct env1668*  );
    struct env1668 env;
};

static  enum Unit_10   advance1673 (   struct env1668* env ) {
    (* env->prev4666 ) = ( ( * ( env->pane4661 ) ) .f_cursor );
    enum MoveDirection_1664  dref4668 = ( env->dir4663 );
    switch (  dref4668 ) {
        case MoveDirection_1664_MoveFwd : {
            ( (  move_dash_right1506 ) ( ( env->pane4661 ) ) );
            break;
        }
        case MoveDirection_1664_MoveBwd : {
            ( (  move_dash_left1501 ) ( ( env->pane4661 ) ) );
            break;
        }
    }
    return ( Unit_10_Unit );
}

enum CharType_1677 {
    CharType_1677_CharSpace,
    CharType_1677_CharWord,
    CharType_1677_CharPunctuation,
};

struct Tuple2_1678 {
    enum CharType_1677  field0;
    enum CharType_1677  field1;
};

static struct Tuple2_1678 Tuple2_1678_Tuple2 (  enum CharType_1677  field0 ,  enum CharType_1677  field1 ) {
    return ( struct Tuple2_1678 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1676 (    enum CharType_1677  l3985 ,    enum CharType_1677  r3987 ) {
    struct Tuple2_1678  dref3988 = ( ( Tuple2_1678_Tuple2 ) ( (  l3985 ) ,  (  r3987 ) ) );
    if (  dref3988 .field0 == CharType_1677_CharSpace &&  dref3988 .field1 == CharType_1677_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3988 .field0 == CharType_1677_CharWord &&  dref3988 .field1 == CharType_1677_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3988 .field0 == CharType_1677_CharPunctuation &&  dref3988 .field1 == CharType_1677_CharPunctuation ) {
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

static  bool   is_dash_alpha1681 (    struct Char_101  c1497 ) {
    return ( ( (  cmp371 ( ( (  c1497 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1396 ) ( (  c1497 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1396 ) ( (  c1497 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1680 (    struct Char_101  c1518 ) {
    return ( ( (  is_dash_alpha1681 ) ( (  c1518 ) ) ) || ( (  is_dash_digit1395 ) ( (  c1518 ) ) ) );
}

static  enum CharType_1677   char_dash_type1679 (    struct Char_101  c3991 ) {
    if ( ( ( ( (  is_dash_alphanumeric1680 ) ( (  c3991 ) ) ) || (  eq429 ( (  c3991 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) ) ) || (  eq429 ( (  c3991 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1677_CharWord );
    } else {
        if ( ( (  is_dash_whitespace484 ) ( (  c3991 ) ) ) ) {
            return ( CharType_1677_CharSpace );
        } else {
            return ( CharType_1677_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1675 (    struct Char_101  l3994 ,    struct Char_101  r3996 ) {
    return ( !  eq1676 ( ( (  char_dash_type1679 ) ( (  l3994 ) ) ) , ( (  char_dash_type1679 ) ( (  r3996 ) ) ) ) );
}

static  struct Char_101   or_dash_else1683 (    struct Maybe_420  self1360 ,    struct Char_101  alt1362 ) {
    struct Maybe_420  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_420_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_420_Just_t ) {
            return ( dref1363 .stuff .Maybe_420_Just_s .field0 );
        }
    }
}

static  struct Maybe_420   head1684 (    struct StrViewIter_362  it1167 ) {
    struct StrViewIter_362  temp1685 = ( (  into_dash_iter363 ) ( (  it1167 ) ) );
    return ( (  next421 ) ( ( &temp1685 ) ) );
}

static  struct Char_101   char_dash_at1682 (    struct Pane_289 *  pane4512 ,    struct Pos_40  pos4514 ) {
    struct StrView_18  line4515 = ( (  line366 ) ( ( ( * (  pane4512 ) ) .f_buf ) ,  ( (  pos4514 ) .f_line ) ) );
    return ( (  or_dash_else1683 ) ( ( (  head1684 ) ( ( (  chars364 ) ( ( (  byte_dash_substr965 ) ( (  line4515 ) ,  ( (  i32_dash_size349 ) ( ( (  pos4514 ) .f_bi ) ) ) ,  ( (  num_dash_bytes465 ) ( (  line4515 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
}

static  struct StrConcatIter_754   into_dash_iter1691 (    struct StrConcatIter_754  self1290 ) {
    return (  self1290 );
}

static  enum Unit_10   for_dash_each1689 (    struct StrConcatIter_754  iterable1099 ,    enum Unit_10 (*  fun1101 )(    struct Char_101  ) ) {
    struct StrConcatIter_754  temp1690 = ( (  into_dash_iter1691 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_754 *  it1102 = ( &temp1690 );
    while ( ( true ) ) {
        struct Maybe_420  dref1103 = ( (  next770 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_420_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_420_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_420_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print1688 (    struct StrConcat_108  s1335 ) {
    ( (  for_dash_each1689 ) ( ( (  chars760 ) ( (  s1335 ) ) ) ,  (  printf_dash_char387 ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   println1687 (    struct StrView_18  s1338 ) {
    ( (  print1688 ) ( ( ( StrConcat_108_StrConcat ) ( (  s1338 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_10_Unit );
}

static  bool   undefined1692 (  ) {
    bool  temp1693;
    return (  temp1693 );
}

static  bool   todo1686 (  ) {
    ( (  println1687 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1692 ) ( ) );
}

static  bool   reached_dash_target1674 (    struct Pane_289 *  pane4653 ,    enum MoveTarget_1665  target4655 ,    struct Pos_40  prev4657 ) {
    return ( {  enum MoveTarget_1665  dref4658 = (  target4655 ) ;  dref4658 == MoveTarget_1665_NextWordStart ? ( ( (  is_dash_word_dash_boundary1675 ) ( ( (  char_dash_at1682 ) ( (  pane4653 ) ,  (  prev4657 ) ) ) ,  ( (  char_dash_at1682 ) ( (  pane4653 ) ,  ( ( * (  pane4653 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1676 ( ( (  char_dash_type1679 ) ( ( (  char_dash_at1682 ) ( (  pane4653 ) ,  ( ( * (  pane4653 ) ) .f_cursor ) ) ) ) ) , ( CharType_1677_CharSpace ) ) ) ) ) :  dref4658 == MoveTarget_1665_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1675 ) ( ( (  char_dash_at1682 ) ( (  pane4653 ) ,  (  prev4657 ) ) ) ,  ( (  char_dash_at1682 ) ( (  pane4653 ) ,  ( ( * (  pane4653 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1676 ( ( (  char_dash_type1679 ) ( ( (  char_dash_at1682 ) ( (  pane4653 ) ,  (  prev4657 ) ) ) ) ) , ( CharType_1677_CharSpace ) ) ) ) ) : ( (  todo1686 ) ( ) ) ; } );
}

struct envunion1695 {
    enum Unit_10  (*fun) (  struct env1668*  );
    struct env1668 env;
};

struct envunion1697 {
    enum Unit_10  (*fun) (  struct env1668*  );
    struct env1668 env;
};

static  enum Unit_10   advance_dash_word1663 (    struct Pane_289 *  pane4661 ,    enum MoveDirection_1664  dir4663 ,    enum MoveTarget_1665  target4665 ) {
    struct Pos_40  temp1666 = ( (  own1667 ) ( ( ( * (  pane4661 ) ) .f_cursor ) ) );
    struct Pos_40 *  prev4666 = ( &temp1666 );
    struct env1668 envinst1668 = {
        .prev4666 =  prev4666 ,
        .pane4661 =  pane4661 ,
        .dir4663 =  dir4663 ,
    };
    struct Pos_40  sel4669 = ( ( * (  pane4661 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4670 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1669 ) ( (  pane4661 ) ) );
    struct envunion1672  temp1671 = ( (struct envunion1672){ .fun = (  enum Unit_10  (*) (  struct env1668*  ) )advance1673 , .env =  envinst1668 } );
    ( temp1671.fun ( &temp1671.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4670 ) || ( (  reached_dash_target1674 ) ( (  pane4661 ) ,  (  target4665 ) ,  ( * (  prev4666 ) ) ) ) ) ) {
        sel4669 = ( ( * (  pane4661 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1669 ) ( (  pane4661 ) ) ) ) {
        if ( (  eq1006 ( ( ( * (  pane4661 ) ) .f_cursor ) , ( * (  prev4666 ) ) ) ) ) {
            return ( Unit_10_Unit );
        }
        struct envunion1695  temp1694 = ( (struct envunion1695){ .fun = (  enum Unit_10  (*) (  struct env1668*  ) )advance1673 , .env =  envinst1668 } );
        ( temp1694.fun ( &temp1694.env ) );
        sel4669 = ( ( * (  pane4661 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1697  temp1696 = ( (struct envunion1697){ .fun = (  enum Unit_10  (*) (  struct env1668*  ) )advance1673 , .env =  envinst1668 } );
        ( temp1696.fun ( &temp1696.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1669 ) ( (  pane4661 ) ) ) || ( (  reached_dash_target1674 ) ( (  pane4661 ) ,  (  target4665 ) ,  ( * (  prev4666 ) ) ) ) ) ) {
            enum MoveDirection_1664  dref4671 = (  dir4663 );
            switch (  dref4671 ) {
                case MoveDirection_1664_MoveFwd : {
                    ( (  move_dash_left1501 ) ( (  pane4661 ) ) );
                    break;
                }
                case MoveDirection_1664_MoveBwd : {
                    ( (  move_dash_right1506 ) ( (  pane4661 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq1006 ( ( * (  prev4666 ) ) , ( ( * (  pane4661 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel461 ) ( (  pane4661 ) ,  ( ( Maybe_47_Just ) ( (  sel4669 ) ) ) ) );
    return ( Unit_10_Unit );
}

static  size_t   size1702 (    struct List_43 *  l2443 ) {
    return ( ( * (  l2443 ) ) .f_count );
}

static  struct Changeset_45 *   get_dash_ptr1705 (    struct List_43 *  list2406 ,    size_t  i2408 ) {
    if ( ( (  cmp371 ( (  i2408 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2408 ) , ( ( * (  list2406 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2408 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2406 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1587 ) ( ( ( * (  list2406 ) ) .f_elements ) ,  (  i2408 ) ) );
}

static  struct Changeset_45   get1704 (    struct List_43 *  list2416 ,    size_t  i2418 ) {
    return ( * ( (  get_dash_ptr1705 ) ( (  list2416 ) ,  (  i2418 ) ) ) );
}

static  struct Changeset_45   elem_dash_get1703 (    struct List_43  self2492 ,    size_t  k2494 ) {
    return ( (  get1704 ) ( ( & (  self2492 ) ) ,  (  k2494 ) ) );
}

static  struct Action_39   undefined1714 (  ) {
    struct Action_39  temp1715;
    return (  temp1715 );
}

static  struct Action_39   or_dash_fail1713 (    struct Maybe_1545  x1353 ,    struct StrConcat_373  errmsg1355 ) {
    struct Maybe_1545  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_1545_None_t ) {
        ( (  panic372 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1714 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_1545_Just_t ) {
            return ( dref1356 .stuff .Maybe_1545_Just_s .field0 );
        }
    }
}

static  struct Maybe_1545   try_dash_get1716 (    struct Slice_38  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp371 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1545) { .tag = Maybe_1545_None_t } );
    }
    struct Action_39 *  elem_dash_ptr2179 = ( (  offset_dash_ptr1543 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_1545_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  struct Action_39   get1712 (    struct Slice_38  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail1713 ) ( ( (  try_dash_get1716 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_39   elem_dash_get1711 (    struct Slice_38  self2195 ,    size_t  idx2197 ) {
    return ( (  get1712 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

static  struct Action_39   last1710 (    struct Slice_38  s2357 ) {
    if ( (  eq352 ( ( (  s2357 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1139 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1711 ( (  s2357 ) , (  op_dash_sub580 ( ( (  s2357 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_38   to_dash_slice1717 (    struct List_37  l2541 ) {
    struct Action_39 *  ptr2542 = ( ( (  l2541 ) .f_elements ) .f_ptr );
    return ( (struct Slice_38) { .f_ptr = (  ptr2542 ) , .f_count = ( (  l2541 ) .f_count ) } );
}

static  struct Maybe_276   redo1701 (   struct env185* env ,    struct TextBuf_164 *  self4305 ) {
    ( (  flush_dash_insert_dash_action1514 ) ( (  self4305 ) ) );
    struct Actions_165 *  actions4306 = ( & ( ( * (  self4305 ) ) .f_actions ) );
    if ( (  cmp371 ( ( ( * (  actions4306 ) ) .f_cur ) , ( (  size1702 ) ( ( & ( ( * (  actions4306 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
    }
    struct Changeset_45  changeset4307 = (  elem_dash_get1703 ( ( ( * (  actions4306 ) ) .f_list ) , ( ( * (  actions4306 ) ) .f_cur ) ) );
    struct Pos_40  temp1706;
    struct Pos_40  to_dash_fwd4308 = (  temp1706 );
    struct SliceIter_1538  temp1707 =  into_dash_iter1540 ( ( (  changeset4307 ) .f_parts ) );
    while (true) {
        struct Maybe_1545  __cond1708 =  next1546 (&temp1707);
        if (  __cond1708 .tag == 0 ) {
            break;
        }
        struct Action_39  action4310 =  __cond1708 .stuff .Maybe_1545_Just_s .field0;
        struct envunion186  temp1709 = ( (struct envunion186){ .fun = (  struct Pos_40  (*) (  struct env181*  ,    struct TextBuf_164 *  ,    struct Action_39  ) )action_dash_fwd1648 , .env =  env->envinst181 } );
        to_dash_fwd4308 = ( temp1709.fun ( &temp1709.env ,  (  self4305 ) ,  (  action4310 ) ) );
    }
    (*  actions4306 ) .f_cur = (  op_dash_add425 ( ( ( * (  actions4306 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_39  last_dash_action4311 = ( (  last1710 ) ( ( (  to_dash_slice1717 ) ( ( (  changeset4307 ) .f_parts ) ) ) ) );
    if ( (  cmp371 ( ( (  num_dash_bytes465 ) ( ( (  last_dash_action4311 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_40  to_dash_fwd4312 = ( (  left_dash_pos1502 ) ( (  self4305 ) ,  (  to_dash_fwd4308 ) ) );
        return ( ( Maybe_276_Just ) ( ( (struct Cursors_46) { .f_cur = (  to_dash_fwd4312 ) , .f_sel = ( ( Maybe_47_Just ) ( ( (  last_dash_action4311 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_276_Just ) ( ( (struct Cursors_46) { .f_cur = (  to_dash_fwd4308 ) , .f_sel = ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) } ) ) );
    }
}

struct env1719 {
    ;
    struct Pane_289 *  self4737;
};

struct envunion1720 {
    enum Unit_10  (*fun) (  struct env1719*  ,    struct Cursors_46  );
    struct env1719 env;
};

static  enum Unit_10   if_dash_just1718 (    struct Maybe_276  x1601 ,   struct envunion1720  fun1603 ) {
    struct Maybe_276  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_276_Just_t ) {
        struct envunion1720  temp1721 = (  fun1603 );
        ( temp1721.fun ( &temp1721.env ,  ( dref1604 .stuff .Maybe_276_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_276_None_t ) {
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam1722 (   struct env1719* env ,    struct Cursors_46  cursors4740 ) {
    ( (  set_dash_cursors356 ) ( ( env->self4737 ) ,  ( (  cursors4740 ) .f_cur ) ,  ( (  cursors4740 ) .f_sel ) ,  ( CursorMovement_357_OverrideSelect ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   redo1699 (   struct env281* env ,    struct Pane_289 *  self4737 ) {
    struct envunion282  temp1700 = ( (struct envunion282){ .fun = (  struct Maybe_276  (*) (  struct env185*  ,    struct TextBuf_164 *  ) )redo1701 , .env =  env->envinst185 } );
    struct Maybe_276  mcursors4738 = ( temp1700.fun ( &temp1700.env ,  ( ( * (  self4737 ) ) .f_buf ) ) );
    struct env1719 envinst1719 = {
        .self4737 =  self4737 ,
    };
    ( (  if_dash_just1718 ) ( (  mcursors4738 ) ,  ( (struct envunion1720){ .fun = (  enum Unit_10  (*) (  struct env1719*  ,    struct Cursors_46  ) )lam1722 , .env =  envinst1719 } ) ) );
    return ( Unit_10_Unit );
}

struct SliceReversedIter_1728 {
    struct Slice_38  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1728   into_dash_iter1729 (    struct SliceReversedIter_1728  self2321 ) {
    return (  self2321 );
}

static  struct SliceReversedIter_1728   reversed1730 (    struct Slice_38  slice2318 ) {
    return ( (struct SliceReversedIter_1728) { .f_slice = (  slice2318 ) , .f_current_dash_offset = ( (  slice2318 ) .f_count ) } );
}

static  struct Maybe_1545   next1732 (    struct SliceReversedIter_1728 *  self2324 ) {
    size_t  off2325 = ( ( * (  self2324 ) ) .f_current_dash_offset );
    if ( (  eq352 ( (  off2325 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1545) { .tag = Maybe_1545_None_t } );
    }
    (*  self2324 ) .f_current_dash_offset = (  op_dash_sub580 ( (  off2325 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1545_Just ) ( (  elem_dash_get1711 ( ( ( * (  self2324 ) ) .f_slice ) , ( ( * (  self2324 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_40   action_dash_bwd1734 (   struct env179* env ,    struct TextBuf_164 *  self4271 ,    struct Action_39  action4273 ) {
    struct envunion180  temp1735 = ( (struct envunion180){ .fun = (  enum Unit_10  (*) (  struct env162*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ,    struct StrView_18  ) )change_dash_no_dash_action1002 , .env =  env->envinst162 } );
    ( temp1735.fun ( &temp1735.env ,  (  self4271 ) ,  ( (  action4273 ) .f_from ) ,  ( (  action4273 ) .f_to_dash_fwd ) ,  ( (  action4273 ) .f_bwd ) ) );
    return ( (  action4273 ) .f_to_dash_bwd );
}

static  struct Maybe_276   undo1726 (   struct env183* env ,    struct TextBuf_164 *  self4298 ) {
    ( (  flush_dash_insert_dash_action1514 ) ( (  self4298 ) ) );
    struct Actions_165 *  actions4299 = ( & ( ( * (  self4298 ) ) .f_actions ) );
    if ( (  eq352 ( ( ( * (  actions4299 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
    }
    (*  actions4299 ) .f_cur = (  op_dash_sub580 ( ( ( * (  actions4299 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_45  changeset4300 = (  elem_dash_get1703 ( ( ( * (  actions4299 ) ) .f_list ) , ( ( * (  actions4299 ) ) .f_cur ) ) );
    struct SliceReversedIter_1728  temp1727 =  into_dash_iter1729 ( ( (  reversed1730 ) ( ( (  to_dash_slice1717 ) ( ( (  changeset4300 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1545  __cond1731 =  next1732 (&temp1727);
        if (  __cond1731 .tag == 0 ) {
            break;
        }
        struct Action_39  action4302 =  __cond1731 .stuff .Maybe_1545_Just_s .field0;
        struct envunion184  temp1733 = ( (struct envunion184){ .fun = (  struct Pos_40  (*) (  struct env179*  ,    struct TextBuf_164 *  ,    struct Action_39  ) )action_dash_bwd1734 , .env =  env->envinst179 } );
        ( temp1733.fun ( &temp1733.env ,  (  self4298 ) ,  (  action4302 ) ) );
    }
    return ( ( Maybe_276_Just ) ( ( (  changeset4300 ) .f_before_dash_cursors ) ) );
}

struct env1737 {
    ;
    struct Pane_289 *  self4731;
};

struct envunion1738 {
    enum Unit_10  (*fun) (  struct env1737*  ,    struct Cursors_46  );
    struct env1737 env;
};

static  enum Unit_10   if_dash_just1736 (    struct Maybe_276  x1601 ,   struct envunion1738  fun1603 ) {
    struct Maybe_276  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_276_Just_t ) {
        struct envunion1738  temp1739 = (  fun1603 );
        ( temp1739.fun ( &temp1739.env ,  ( dref1604 .stuff .Maybe_276_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_276_None_t ) {
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam1740 (   struct env1737* env ,    struct Cursors_46  cursors4734 ) {
    ( (  set_dash_cursors356 ) ( ( env->self4731 ) ,  ( (  cursors4734 ) .f_cur ) ,  ( (  cursors4734 ) .f_sel ) ,  ( CursorMovement_357_OverrideSelect ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   undo1724 (   struct env279* env ,    struct Pane_289 *  self4731 ) {
    struct envunion280  temp1725 = ( (struct envunion280){ .fun = (  struct Maybe_276  (*) (  struct env183*  ,    struct TextBuf_164 *  ) )undo1726 , .env =  env->envinst183 } );
    struct Maybe_276  mcursors4732 = ( temp1725.fun ( &temp1725.env ,  ( ( * (  self4731 ) ) .f_buf ) ) );
    struct env1737 envinst1737 = {
        .self4731 =  self4731 ,
    };
    ( (  if_dash_just1736 ) ( (  mcursors4732 ) ,  ( (struct envunion1738){ .fun = (  enum Unit_10  (*) (  struct env1737*  ,    struct Cursors_46  ) )lam1740 , .env =  envinst1737 } ) ) );
    return ( Unit_10_Unit );
}

static  struct Tuple2_301   minmax1744 (    struct Pos_40  l1634 ,    struct Pos_40  r1636 ) {
    return ( (  cmp1004 ( (  l1634 ) , (  r1636 ) ) == 0 ) ? ( ( Tuple2_301_Tuple2 ) ( (  l1634 ) ,  (  r1636 ) ) ) : ( ( Tuple2_301_Tuple2 ) ( (  r1636 ) ,  (  l1634 ) ) ) );
}

static  struct Pos_40   or_dash_else1745 (    struct Maybe_47  self1360 ,    struct Pos_40  alt1362 ) {
    struct Maybe_47  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_47_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_47_Just_t ) {
            return ( dref1363 .stuff .Maybe_47_Just_s .field0 );
        }
    }
}

static  struct Pos_40   fst1746 (    struct Tuple2_301  dref1563 ) {
    return ( dref1563 .field0 );
}

static  struct Pos_40   snd1747 (    struct Tuple2_301  dref1566 ) {
    return ( dref1566 .field1 );
}

static  struct Tuple2_301   selection1743 (    struct Pane_289 *  self4743 ) {
    struct Tuple2_301  from_dash_to4744 = ( (  minmax1744 ) ( ( (  or_dash_else1745 ) ( ( ( * (  self4743 ) ) .f_sel ) ,  ( ( * (  self4743 ) ) .f_cursor ) ) ) ,  ( ( * (  self4743 ) ) .f_cursor ) ) );
    struct Pos_40  from4745 = ( (  fst1746 ) ( (  from_dash_to4744 ) ) );
    struct Pos_40  to4746 = ( (  right_dash_pos1507 ) ( ( ( * (  self4743 ) ) .f_buf ) ,  ( (  snd1747 ) ( (  from_dash_to4744 ) ) ) ) );
    return ( ( Tuple2_301_Tuple2 ) ( (  from4745 ) ,  (  to4746 ) ) );
}

struct env1750 {
    ;
    struct Editor_329 *  ed5013;
};

struct envunion1751 {
    enum Unit_10  (*fun) (  struct env1750*  ,    struct StrView_18  );
    struct env1750 env;
};

static  enum Unit_10   if_dash_just1749 (    struct Maybe_125  x1601 ,   struct envunion1751  fun1603 ) {
    struct Maybe_125  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_125_Just_t ) {
        struct envunion1751  temp1752 = (  fun1603 );
        ( temp1752.fun ( &temp1752.env ,  ( dref1604 .stuff .Maybe_125_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_125_None_t ) {
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam1753 (   struct env1750* env ,    struct StrView_18  cp5019 ) {
    ( (  free782 ) ( (  cp5019 ) ,  ( ( * ( env->ed5013 ) ) .f_al ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   copy_dash_selection_dash_to_dash_clipboard1742 (   struct env314* env ,    struct Editor_329 *  ed5013 ) {
    struct Tuple2_301  dref5014 = ( (  selection1743 ) ( ( (  pane466 ) ( (  ed5013 ) ) ) ) );
    
    struct envunion315  temp1748 = ( (struct envunion315){ .fun = (  struct StrView_18  (*) (  struct env187*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ) )str_dash_between1570 , .env =  env->envinst187 } );
    struct StrView_18  cpd5017 = ( temp1748.fun ( &temp1748.env ,  ( ( ( * (  ed5013 ) ) .f_pane ) .f_buf ) ,  ( dref5014 .field0 ) ,  ( dref5014 .field1 ) ) );
    struct env1750 envinst1750 = {
        .ed5013 =  ed5013 ,
    };
    ( (  if_dash_just1749 ) ( ( ( * (  ed5013 ) ) .f_clipboard ) ,  ( (struct envunion1751){ .fun = (  enum Unit_10  (*) (  struct env1750*  ,    struct StrView_18  ) )lam1753 , .env =  envinst1750 } ) ) );
    (*  ed5013 ) .f_clipboard = ( ( Maybe_125_Just ) ( (  cpd5017 ) ) );
    return ( Unit_10_Unit );
}

struct env1758 {
    ;
    struct Pane_289 *  self4749;
};

struct envunion1759 {
    enum Unit_10  (*fun) (  struct env1758*  ,    struct Cursors_46  );
    struct env1758 env;
};

static  enum Unit_10   if_dash_just1757 (    struct Maybe_276  x1601 ,   struct envunion1759  fun1603 ) {
    struct Maybe_276  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_276_Just_t ) {
        struct envunion1759  temp1760 = (  fun1603 );
        ( temp1760.fun ( &temp1760.env ,  ( dref1604 .stuff .Maybe_276_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_276_None_t ) {
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam1761 (   struct env1758* env ,    struct Cursors_46  cursors4757 ) {
    ( (  set_dash_cursors356 ) ( ( env->self4749 ) ,  ( (  cursors4757 ) .f_cur ) ,  ( (  cursors4757 ) .f_sel ) ,  ( CursorMovement_357_OverrideSelect ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   replace_dash_selection1755 (   struct env283* env ,    struct Pane_289 *  self4749 ,    struct Tuple2_301  dref4750 ,    struct StrView_18  cp4754 ) {
    struct envunion284  temp1756 = ( (struct envunion284){ .fun = (  struct Maybe_276  (*) (  struct env189*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ,    struct StrView_18  ,    struct Maybe_276  ) )change1518 , .env =  env->envinst189 } );
    struct Maybe_276  mcursors4755 = ( temp1756.fun ( &temp1756.env ,  ( ( * (  self4749 ) ) .f_buf ) ,  ( dref4750 .field0 ) ,  ( dref4750 .field1 ) ,  (  cp4754 ) ,  ( ( Maybe_276_Just ) ( ( (struct Cursors_46) { .f_cur = ( ( * (  self4749 ) ) .f_cursor ) , .f_sel = ( ( * (  self4749 ) ) .f_sel ) } ) ) ) ) );
    struct env1758 envinst1758 = {
        .self4749 =  self4749 ,
    };
    ( (  if_dash_just1757 ) ( (  mcursors4755 ) ,  ( (struct envunion1759){ .fun = (  enum Unit_10  (*) (  struct env1758*  ,    struct Cursors_46  ) )lam1761 , .env =  envinst1758 } ) ) );
    return ( Unit_10_Unit );
}

struct envunion1763 {
    enum Unit_10  (*fun) (  struct env314*  ,    struct Editor_329 *  );
    struct env314 env;
};

struct envunion1765 {
    enum Unit_10  (*fun) (  struct env283*  ,    struct Pane_289 *  ,    struct Tuple2_301  ,    struct StrView_18  );
    struct env283 env;
};

struct envunion1767 {
    enum Unit_10  (*fun) (  struct env314*  ,    struct Editor_329 *  );
    struct env314 env;
};

struct IntStrIter_1778 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1777 {
    struct StrViewIter_362  f_left;
    struct IntStrIter_1778  f_right;
};

struct StrConcatIter_1776 {
    struct StrConcatIter_1777  f_left;
    struct StrViewIter_362  f_right;
};

struct env1779 {
    struct StrBuilder_98 *  builder2956;
    struct env96 envinst96;
};

struct envunion1780 {
    enum Unit_10  (*fun) (  struct env1779*  ,    struct Char_101  );
    struct env1779 env;
};

static  struct StrConcatIter_1776   into_dash_iter1782 (    struct StrConcatIter_1776  self1290 ) {
    return (  self1290 );
}

struct env1788 {
    size_t  base1386;
    ;
};

struct envunion1789 {
    size_t  (*fun) (  struct env1788*  ,    int32_t  ,    size_t  );
    struct env1788 env;
};

static  size_t   reduce1787 (    struct Range_215  iterable1118 ,    size_t  base1120 ,   struct envunion1789  fun1122 ) {
    size_t  x1123 = (  base1120 );
    struct RangeIter_218  it1124 = ( (  into_dash_iter219 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_220  dref1125 = ( (  next221 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_220_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_220_Just_t ) {
                struct envunion1789  temp1790 = (  fun1122 );
                x1123 = ( temp1790.fun ( &temp1790.env ,  ( dref1125 .stuff .Maybe_220_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1791 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1791);
    abort ( );
    ( Unit_10_Unit );
    size_t  temp1792;
    return (  temp1792 );
}

static  size_t   lam1793 (   struct env1788* env ,    int32_t  item1390 ,    size_t  x1392 ) {
    return (  op_dash_mul555 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  size_t   pow1786 (    size_t  base1386 ,    int32_t  p1388 ) {
    struct env1788 envinst1788 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce1787 ) ( ( (  to228 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  op_dash_sub229 ( (  p1388 ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1789){ .fun = (  size_t  (*) (  struct env1788*  ,    int32_t  ,    size_t  ) )lam1793 , .env =  envinst1788 } ) ) );
}

static  uint8_t   cast1794 (    size_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  struct Maybe_420   next1785 (    struct IntStrIter_1778 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_420_Just ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp222 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral92 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
    }
    size_t  trim_dash_down1400 = ( (  pow1786 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub229 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral92 ( 1 ) ) ) ) ) );
    size_t  upper1401 = (  op_dash_div396 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    size_t  upper_dash_mask1402 = (  op_dash_mul555 ( (  op_dash_div396 ( (  upper1401 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast1794 ) ( (  op_dash_sub580 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub229 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral92 ( 1 ) ) ) );
    struct Char_101  digit_dash_char1404 = ( (  char_dash_from_dash_u81463 ) ( (  op_dash_add1355 ( (  digit1403 ) , (  from_dash_integral397 ( 48 ) ) ) ) ) );
    return ( ( Maybe_420_Just ) ( (  digit_dash_char1404 ) ) );
}

static  struct Maybe_420   next1784 (    struct StrConcatIter_1777 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next421 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next1785 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_420   next1783 (    struct StrConcatIter_1776 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next1784 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next421 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_10   for_dash_each1775 (    struct StrConcatIter_1776  iterable1099 ,   struct envunion1780  fun1101 ) {
    struct StrConcatIter_1776  temp1781 = ( (  into_dash_iter1782 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_1776 *  it1102 = ( &temp1781 );
    while ( ( true ) ) {
        struct Maybe_420  dref1103 = ( (  next1783 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_420_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_420_Just_t ) {
                struct envunion1780  temp1795 = (  fun1101 );
                ( temp1795.fun ( &temp1795.env ,  ( dref1103 .stuff .Maybe_420_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  int32_t   count_dash_digits1802 (    size_t  self1407 ) {
    if ( (  eq352 ( (  self1407 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral92 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral92 ( 0 ) );
    while ( (  cmp371 ( (  self1407 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div396 ( (  self1407 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1408 = (  op_dash_add224 ( (  digits1408 ) , (  from_dash_integral92 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_1778   uint_dash_iter1801 (    size_t  int1414 ) {
    return ( (struct IntStrIter_1778) { .f_int = (  int1414 ) , .f_len = ( (  count_dash_digits1802 ) ( (  int1414 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1778   chars1800 (    size_t  self1426 ) {
    return ( (  uint_dash_iter1801 ) ( (  self1426 ) ) );
}

static  struct StrConcatIter_1777   into_dash_iter1799 (    struct StrConcat_119  dref1297 ) {
    return ( (struct StrConcatIter_1777) { .f_left = ( (  chars364 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1800 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1777   chars1798 (    struct StrConcat_119  self1308 ) {
    return ( (  into_dash_iter1799 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_1776   into_dash_iter1797 (    struct StrConcat_118  dref1297 ) {
    return ( (struct StrConcatIter_1776) { .f_left = ( (  chars1798 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars364 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1776   chars1796 (    struct StrConcat_118  self1308 ) {
    return ( (  into_dash_iter1797 ) ( (  self1308 ) ) );
}

static  enum Unit_10   write_dash_slice1807 (   struct env94* env ,    struct StrBuilder_98 *  builder2946 ,    struct Slice_13  s2948 ) {
    struct envunion95  temp1808 = ( (struct envunion95){ .fun = (  enum Unit_10  (*) (  struct env59*  ,    struct List_11 *  ,    struct Slice_13  ) )add_dash_all536 , .env =  env->envinst59 } );
    ( temp1808.fun ( &temp1808.env ,  ( & ( ( * (  builder2946 ) ) .f_chars ) ) ,  (  s2948 ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   write_dash_char1805 (   struct env96* env ,    struct StrBuilder_98 *  builder2951 ,    struct Char_101  c2953 ) {
    struct envunion97  temp1806 = ( (struct envunion97){ .fun = (  enum Unit_10  (*) (  struct env94*  ,    struct StrBuilder_98 *  ,    struct Slice_13  ) )write_dash_slice1807 , .env =  env->envinst94 } );
    struct Array_389  temp1810;
    struct Array_389  temp1809 = (  temp1810 );
    ( temp1806.fun ( &temp1806.env ,  (  builder2951 ) ,  ( (  as_dash_u8_dash_slice576 ) ( (  c2953 ) ,  ( &temp1809 ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam1803 (   struct env1779* env ,    struct Char_101  c2960 ) {
    struct envunion100  temp1804 = ( (struct envunion100){ .fun = (  enum Unit_10  (*) (  struct env96*  ,    struct StrBuilder_98 *  ,    struct Char_101  ) )write_dash_char1805 , .env =  env->envinst96 } );
    return ( temp1804.fun ( &temp1804.env ,  ( env->builder2956 ) ,  (  c2960 ) ) );
}

static  enum Unit_10   write1774 (   struct env102* env ,    struct StrBuilder_98 *  builder2956 ,    struct StrConcat_118  s2958 ) {
    struct env1779 envinst1779 = {
        .builder2956 =  builder2956 ,
        .envinst96 = env->envinst96 ,
    };
    ( (  for_dash_each1775 ) ( ( (  chars1796 ) ( (  s2958 ) ) ) ,  ( (struct envunion1780){ .fun = (  enum Unit_10  (*) (  struct env1779*  ,    struct Char_101  ) )lam1803 , .env =  envinst1779 } ) ) );
    return ( Unit_10_Unit );
}

static  uint8_t *   cast_dash_ptr1814 (    uint8_t *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Slice_13   cast_dash_slice1813 (    struct Slice_13  s2354 ) {
    return ( (struct Slice_13) { .f_ptr = ( (  cast_dash_ptr1814 ) ( ( (  s2354 ) .f_ptr ) ) ) , .f_count = ( (  s2354 ) .f_count ) } );
}

static  struct StrView_18   as_dash_str1812 (    struct StrBuilder_98 *  builder2994 ) {
    return ( (struct StrView_18) { .f_contents = ( (  cast_dash_slice1813 ) ( ( (  subslice955 ) ( ( ( ( * (  builder2994 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2994 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_18   mk_dash_dyn_dash_str1771 (   struct env116* env ,    struct StrConcat_118  s3014 ,    enum CAllocator_12  al3016 ) {
    struct StrBuilder_98  temp1772 = ( (  mk807 ) ( (  al3016 ) ) );
    struct StrBuilder_98 *  sb3017 = ( &temp1772 );
    struct envunion117  temp1773 = ( (struct envunion117){ .fun = (  enum Unit_10  (*) (  struct env102*  ,    struct StrBuilder_98 *  ,    struct StrConcat_118  ) )write1774 , .env =  env->envinst102 } );
    ( temp1773.fun ( &temp1773.env ,  (  sb3017 ) ,  (  s3014 ) ) );
    struct envunion113  temp1811 = ( (struct envunion113){ .fun = (  enum Unit_10  (*) (  struct env96*  ,    struct StrBuilder_98 *  ,    struct Char_101  ) )write_dash_char1805 , .env =  env->envinst96 } );
    ( temp1811.fun ( &temp1811.env ,  (  sb3017 ) ,  ( (  nullchar579 ) ( ) ) ) );
    struct StrView_18  dynstr3018 = ( (  as_dash_str1812 ) ( (  sb3017 ) ) );
    return ( (struct StrView_18) { .f_contents = ( (struct Slice_13) { .f_ptr = ( ( (  dynstr3018 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub580 ( ( ( (  dynstr3018 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_10   set_dash_msg1769 (   struct env318* env ,    struct Editor_329 *  ed5027 ,    struct StrConcat_118  s5029 ) {
    ( (  reset_dash_msg1490 ) ( (  ed5027 ) ) );
    struct envunion319  temp1770 = ( (struct envunion319){ .fun = (  struct StrView_18  (*) (  struct env116*  ,    struct StrConcat_118  ,    enum CAllocator_12  ) )mk_dash_dyn_dash_str1771 , .env =  env->envinst116 } );
    (*  ed5027 ) .f_msg = ( ( Maybe_125_Just ) ( ( temp1770.fun ( &temp1770.env ,  (  s5029 ) ,  ( ( * (  ed5027 ) ) .f_al ) ) ) ) );
    return ( Unit_10_Unit );
}

struct envunion1817 {
    enum Unit_10  (*fun) (  struct env283*  ,    struct Pane_289 *  ,    struct Tuple2_301  ,    struct StrView_18  );
    struct env283 env;
};

struct env1816 {
    ;
    struct env283 envinst283;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct Editor_329 *  ed5113;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion1818 {
    enum Unit_10  (*fun) (  struct env1816*  ,    struct StrView_18  );
    struct env1816 env;
};

static  enum Unit_10   if_dash_just1815 (    struct Maybe_125  x1601 ,   struct envunion1818  fun1603 ) {
    struct Maybe_125  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_125_Just_t ) {
        struct envunion1818  temp1819 = (  fun1603 );
        ( temp1819.fun ( &temp1819.env ,  ( dref1604 .stuff .Maybe_125_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_125_None_t ) {
        }
    }
    return ( Unit_10_Unit );
}

static  struct Pos_40   max_dash_pos1821 (    struct Pane_289 *  pane4679 ) {
    return ( {  struct Maybe_47  dref4680 = ( ( * (  pane4679 ) ) .f_sel ) ; dref4680.tag == Maybe_47_Just_t ? ( (  max1005 ) ( ( ( * (  pane4679 ) ) .f_cursor ) ,  ( dref4680 .stuff .Maybe_47_Just_s .field0 ) ) ) : ( ( * (  pane4679 ) ) .f_cursor ) ; } );
}

static  struct StrView_18   own1822 (    struct StrView_18  x1561 ) {
    return (  x1561 );
}

static  uint8_t   last1823 (    struct Slice_13  s2357 ) {
    if ( (  eq352 ( ( (  s2357 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1139 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get958 ( (  s2357 ) , (  op_dash_sub580 ( ( (  s2357 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1824 (    int32_t  x1648 ,    int32_t  mn1650 ,    int32_t  mx1652 ) {
    if ( (  cmp222 ( (  x1648 ) , (  mn1650 ) ) == 0 ) ) {
        return (  mn1650 );
    } else {
        if ( (  cmp222 ( (  x1648 ) , (  mx1652 ) ) == 2 ) ) {
            return (  mx1652 );
        } else {
            return (  x1648 );
        }
    }
}

struct envunion1827 {
    enum Unit_10  (*fun) (  struct env283*  ,    struct Pane_289 *  ,    struct Tuple2_301  ,    struct StrView_18  );
    struct env283 env;
};

static  enum Unit_10   lam1820 (   struct env1816* env ,    struct StrView_18  cp5124 ) {
    struct Pos_40  start5125 = ( (  max_dash_pos1821 ) ( ( (  pane466 ) ( ( env->ed5113 ) ) ) ) );
    struct StrView_18  cp5126 = ( (  own1822 ) ( (  cp5124 ) ) );
    if ( (  eq393 ( ( (  last1823 ) ( ( (  cp5126 ) .f_contents ) ) ) , ( (  ascii_dash_u8964 ) ( ( (  from_dash_charlike351 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        int32_t  max_dash_lines5127 = ( (  num_dash_lines489 ) ( ( ( * ( (  pane466 ) ( ( env->ed5113 ) ) ) ) .f_buf ) ) );
        struct Pos_40  start5128 = ( (struct Pos_40) { .f_line = ( (  clamp1824 ) ( (  op_dash_add224 ( ( (  start5125 ) .f_line ) , (  from_dash_integral92 ( 1 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  (  max_dash_lines5127 ) ) ) , .f_bi = (  from_dash_integral92 ( 0 ) ) } );
        if ( (  eq660 ( ( (  start5128 ) .f_line ) , (  max_dash_lines5127 ) ) ) ) {
            cp5126 = ( (  byte_dash_substr965 ) ( (  cp5126 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub580 ( ( ( (  cp5126 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
        struct envunion1817  temp1825 = ( (struct envunion1817){ .fun = (  enum Unit_10  (*) (  struct env283*  ,    struct Pane_289 *  ,    struct Tuple2_301  ,    struct StrView_18  ) )replace_dash_selection1755 , .env =  env->envinst283 } );
        ( temp1825.fun ( &temp1825.env ,  ( (  pane466 ) ( ( env->ed5113 ) ) ) ,  ( ( Tuple2_301_Tuple2 ) ( (  start5128 ) ,  (  start5128 ) ) ) ,  (  cp5126 ) ) );
    } else {
        struct Pos_40  start5129 = ( (  right_dash_pos1507 ) ( ( ( ( * ( env->ed5113 ) ) .f_pane ) .f_buf ) ,  (  start5125 ) ) );
        struct envunion1827  temp1826 = ( (struct envunion1827){ .fun = (  enum Unit_10  (*) (  struct env283*  ,    struct Pane_289 *  ,    struct Tuple2_301  ,    struct StrView_18  ) )replace_dash_selection1755 , .env =  env->envinst283 } );
        ( temp1826.fun ( &temp1826.env ,  ( (  pane466 ) ( ( env->ed5113 ) ) ) ,  ( ( Tuple2_301_Tuple2 ) ( (  start5129 ) ,  (  start5129 ) ) ) ,  (  cp5126 ) ) );
    }
    return ( Unit_10_Unit );
}

struct envunion1830 {
    enum Unit_10  (*fun) (  struct env283*  ,    struct Pane_289 *  ,    struct Tuple2_301  ,    struct StrView_18  );
    struct env283 env;
};

struct env1829 {
    ;
    struct Editor_329 *  ed5113;
    ;
    struct env283 envinst283;
    ;
    ;
    ;
    ;
    ;
};

struct envunion1831 {
    enum Unit_10  (*fun) (  struct env1829*  ,    struct StrView_18  );
    struct env1829 env;
};

static  enum Unit_10   if_dash_just1828 (    struct Maybe_125  x1601 ,   struct envunion1831  fun1603 ) {
    struct Maybe_125  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_125_Just_t ) {
        struct envunion1831  temp1832 = (  fun1603 );
        ( temp1832.fun ( &temp1832.env ,  ( dref1604 .stuff .Maybe_125_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_125_None_t ) {
        }
    }
    return ( Unit_10_Unit );
}

static  struct Pos_40   min_dash_pos1834 (    struct Pane_289 *  pane4674 ) {
    return ( {  struct Maybe_47  dref4675 = ( ( * (  pane4674 ) ) .f_sel ) ; dref4675.tag == Maybe_47_Just_t ? ( (  min1003 ) ( ( ( * (  pane4674 ) ) .f_cursor ) ,  ( dref4675 .stuff .Maybe_47_Just_s .field0 ) ) ) : ( ( * (  pane4674 ) ) .f_cursor ) ; } );
}

static  enum Unit_10   lam1833 (   struct env1829* env ,    struct StrView_18  cp5131 ) {
    struct Pos_40  start5132 = ( (  min_dash_pos1834 ) ( ( (  pane466 ) ( ( env->ed5113 ) ) ) ) );
    if ( (  eq393 ( ( (  last1823 ) ( ( (  cp5131 ) .f_contents ) ) ) , ( (  ascii_dash_u8964 ) ( ( (  from_dash_charlike351 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_40  temp1835 = (  start5132 );
        temp1835 .  f_bi = (  from_dash_integral92 ( 0 ) );
        start5132 = ( temp1835 );
    }
    struct envunion1830  temp1836 = ( (struct envunion1830){ .fun = (  enum Unit_10  (*) (  struct env283*  ,    struct Pane_289 *  ,    struct Tuple2_301  ,    struct StrView_18  ) )replace_dash_selection1755 , .env =  env->envinst283 } );
    ( temp1836.fun ( &temp1836.env ,  ( (  pane466 ) ( ( env->ed5113 ) ) ) ,  ( ( Tuple2_301_Tuple2 ) ( (  start5132 ) ,  (  start5132 ) ) ) ,  (  cp5131 ) ) );
    return ( Unit_10_Unit );
}

struct envunion1839 {
    enum Unit_10  (*fun) (  struct env283*  ,    struct Pane_289 *  ,    struct Tuple2_301  ,    struct StrView_18  );
    struct env283 env;
};

struct env1838 {
    ;
    struct Editor_329 *  ed5113;
    ;
    struct env283 envinst283;
    ;
    ;
    ;
};

struct envunion1840 {
    enum Unit_10  (*fun) (  struct env1838*  ,    struct StrView_18  );
    struct env1838 env;
};

static  enum Unit_10   if_dash_just1837 (    struct Maybe_125  x1601 ,   struct envunion1840  fun1603 ) {
    struct Maybe_125  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_125_Just_t ) {
        struct envunion1840  temp1841 = (  fun1603 );
        ( temp1841.fun ( &temp1841.env ,  ( dref1604 .stuff .Maybe_125_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_125_None_t ) {
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam1842 (   struct env1838* env ,    struct StrView_18  cp5134 ) {
    struct Pos_40  start5135 = ( (  min_dash_pos1834 ) ( ( (  pane466 ) ( ( env->ed5113 ) ) ) ) );
    struct Pos_40  end5136 = ( (  max_dash_pos1821 ) ( ( (  pane466 ) ( ( env->ed5113 ) ) ) ) );
    struct envunion1839  temp1843 = ( (struct envunion1839){ .fun = (  enum Unit_10  (*) (  struct env283*  ,    struct Pane_289 *  ,    struct Tuple2_301  ,    struct StrView_18  ) )replace_dash_selection1755 , .env =  env->envinst283 } );
    struct Pos_40  temp1844 = (  end5136 );
    temp1844 .  f_bi = (  op_dash_add224 ( ( (  end5136 ) .f_bi ) , (  from_dash_integral92 ( 1 ) ) ) );
    ( temp1843.fun ( &temp1843.env ,  ( (  pane466 ) ( ( env->ed5113 ) ) ) ,  ( ( Tuple2_301_Tuple2 ) ( (  start5135 ) ,  ( temp1844 ) ) ) ,  (  cp5134 ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   expand1845 (    struct Pane_289 *  pane4693 ) {
    struct Pos_40  min_dash_pos4694 = ( (  min_dash_pos1834 ) ( (  pane4693 ) ) );
    struct Pos_40  max_dash_pos4695 = ( (  max_dash_pos1821 ) ( (  pane4693 ) ) );
    int32_t  max_dash_pos_dash_max4696 = ( (  size_dash_i32380 ) ( ( (  num_dash_bytes465 ) ( ( (  line366 ) ( ( ( * (  pane4693 ) ) .f_buf ) ,  ( (  max_dash_pos4695 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq660 ( ( (  min_dash_pos4694 ) .f_bi ) , (  from_dash_integral92 ( 0 ) ) ) ) && (  eq660 ( ( (  max_dash_pos4695 ) .f_bi ) , (  max_dash_pos_dash_max4696 ) ) ) ) ) ) {
        struct Pos_40  temp1846 = (  min_dash_pos4694 );
        temp1846 .  f_bi = (  from_dash_integral92 ( 0 ) );
        (*  pane4693 ) .f_sel = ( ( Maybe_47_Just ) ( ( temp1846 ) ) );
        struct Pos_40  temp1847 = (  max_dash_pos4695 );
        temp1847 .  f_bi = (  max_dash_pos_dash_max4696 );
        (*  pane4693 ) .f_cursor = ( temp1847 );
    } else {
        if ( (  cmp222 ( (  op_dash_add224 ( ( (  max_dash_pos4695 ) .f_line ) , (  from_dash_integral92 ( 1 ) ) ) ) , ( (  num_dash_lines489 ) ( ( ( * (  pane4693 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_10_Unit );
        }
        struct Pos_40  temp1848 = (  min_dash_pos4694 );
        temp1848 .  f_bi = (  from_dash_integral92 ( 0 ) );
        (*  pane4693 ) .f_sel = ( ( Maybe_47_Just ) ( ( temp1848 ) ) );
        int32_t  next_dash_line4697 = (  op_dash_add224 ( ( (  max_dash_pos4695 ) .f_line ) , (  from_dash_integral92 ( 1 ) ) ) );
        (*  pane4693 ) .f_cursor = ( (struct Pos_40) { .f_line = (  next_dash_line4697 ) , .f_bi = ( (  size_dash_i32380 ) ( ( (  num_dash_bytes465 ) ( ( (  line366 ) ( ( ( * (  pane4693 ) ) .f_buf ) ,  (  next_dash_line4697 ) ) ) ) ) ) ) } );
    }
    return ( Unit_10_Unit );
}

static  bool   is_dash_none1849 (    struct Maybe_47  m1574 ) {
    struct Maybe_47  dref1575 = (  m1574 );
    if ( dref1575.tag == Maybe_47_None_t ) {
        return ( true );
    }
    else {
        if ( dref1575.tag == Maybe_47_Just_t ) {
            return ( false );
        }
    }
}

struct Maybe_1851 {
    enum {
        Maybe_1851_None_t,
        Maybe_1851_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_301  field0;
        } Maybe_1851_Just_s;
    } stuff;
};

static struct Maybe_1851 Maybe_1851_Just (  struct Tuple2_301  field0 ) {
    return ( struct Maybe_1851 ) { .tag = Maybe_1851_Just_t, .stuff = { .Maybe_1851_Just_s = { .field0 = field0 } } };
};

struct env1853 {
    ;
    ;
    struct Pane_289 *  pane4802;
    ;
    struct StrView_18  query4806;
    ;
};

struct envunion1855 {
    struct Maybe_345  (*fun) (  struct env1853*  ,    struct Pos_40  );
    struct env1853 env;
};

static  struct Maybe_345   find_dash_slice1857 (    struct Slice_13  haystack2335 ,    struct Slice_13  needle2337 ) {
    struct RangeIter_218  temp1858 =  into_dash_iter219 ( ( (  to228 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  op_dash_sub229 ( ( (  size_dash_i32380 ) ( ( (  haystack2335 ) .f_count ) ) ) , ( (  size_dash_i32380 ) ( ( (  needle2337 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_220  __cond1859 =  next221 (&temp1858);
        if (  __cond1859 .tag == 0 ) {
            break;
        }
        int32_t  i2339 =  __cond1859 .stuff .Maybe_220_Just_s .field0;
        if ( (  eq683 ( ( (  subslice955 ) ( (  haystack2335 ) ,  ( (  i32_dash_size349 ) ( (  i2339 ) ) ) ,  (  op_dash_add425 ( ( (  i32_dash_size349 ) ( (  i2339 ) ) ) , ( (  needle2337 ) .f_count ) ) ) ) ) , (  needle2337 ) ) ) ) {
            return ( ( Maybe_345_Just ) ( ( (  i32_dash_size349 ) ( (  i2339 ) ) ) ) );
        }
    }
    return ( (struct Maybe_345) { .tag = Maybe_345_None_t } );
}

static  struct Maybe_345   search_dash_on_dash_line1856 (   struct env1853* env ,    struct Pos_40  pos4809 ) {
    return ( (  find_dash_slice1857 ) ( ( ( (  byte_dash_substr_dash_from953 ) ( ( (  line366 ) ( ( ( * ( env->pane4802 ) ) .f_buf ) ,  ( (  pos4809 ) .f_line ) ) ) ,  ( (  i32_dash_size349 ) ( ( (  pos4809 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4806 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1865 (    int32_t  l241 ,    int32_t  r243 ) {
    return ( (  l241 ) / (  r243 ) );
}

static  int32_t   op_dash_mul1866 (    int32_t  l236 ,    int32_t  r238 ) {
    return ( (  l236 ) * (  r238 ) );
}

static  int32_t   mod1864 (    int32_t  l1544 ,    int32_t  d1546 ) {
    int32_t  r1547 = (  op_dash_div1865 ( (  l1544 ) , (  d1546 ) ) );
    int32_t  m1548 = (  op_dash_sub229 ( (  l1544 ) , (  op_dash_mul1866 ( (  r1547 ) , (  d1546 ) ) ) ) );
    if ( (  cmp222 ( (  m1548 ) , (  from_dash_integral92 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add224 ( (  d1546 ) , (  m1548 ) ) );
    } else {
        return (  m1548 );
    }
}

struct envunion1868 {
    struct Maybe_345  (*fun) (  struct env1853*  ,    struct Pos_40  );
    struct env1853 env;
};

static  struct Maybe_1851   search_dash_from1852 (    struct Pane_289 *  pane4802 ,    struct Pos_40  pos4804 ,    struct StrView_18  query4806 ) {
    struct env1853 envinst1853 = {
        .pane4802 =  pane4802 ,
        .query4806 =  query4806 ,
    };
    struct envunion1855  temp1854 = ( (struct envunion1855){ .fun = (  struct Maybe_345  (*) (  struct env1853*  ,    struct Pos_40  ) )search_dash_on_dash_line1856 , .env =  envinst1853 } );
    struct Maybe_345  dref4810 = ( temp1854.fun ( &temp1854.env ,  (  pos4804 ) ) );
    if ( dref4810.tag == Maybe_345_Just_t ) {
        struct Pos_40  temp1860 = (  pos4804 );
        temp1860 .  f_bi = (  op_dash_add224 ( ( (  pos4804 ) .f_bi ) , ( (  size_dash_i32380 ) ( ( dref4810 .stuff .Maybe_345_Just_s .field0 ) ) ) ) );
        struct Pos_40  sel_dash_pos4812 = ( temp1860 );
        struct Pos_40  temp1861 = (  pos4804 );
        temp1861 .  f_bi = (  op_dash_sub229 ( (  op_dash_add224 ( ( (  pos4804 ) .f_bi ) , ( (  size_dash_i32380 ) ( (  op_dash_add425 ( ( dref4810 .stuff .Maybe_345_Just_s .field0 ) , ( (  num_dash_bytes465 ) ( (  query4806 ) ) ) ) ) ) ) ) ) , (  from_dash_integral92 ( 1 ) ) ) );
        struct Pos_40  cur_dash_pos4813 = ( temp1861 );
        return ( ( Maybe_1851_Just ) ( ( ( Tuple2_301_Tuple2 ) ( (  sel_dash_pos4812 ) ,  (  cur_dash_pos4813 ) ) ) ) );
    }
    else {
        if ( dref4810.tag == Maybe_345_None_t ) {
            int32_t  num_dash_lines4814 = ( (  num_dash_lines489 ) ( ( ( * (  pane4802 ) ) .f_buf ) ) );
            struct RangeIter_218  temp1862 =  into_dash_iter219 ( ( (  to228 ) ( (  from_dash_integral92 ( 1 ) ) ,  (  num_dash_lines4814 ) ) ) );
            while (true) {
                struct Maybe_220  __cond1863 =  next221 (&temp1862);
                if (  __cond1863 .tag == 0 ) {
                    break;
                }
                int32_t  i4816 =  __cond1863 .stuff .Maybe_220_Just_s .field0;
                int32_t  line4817 = ( (  mod1864 ) ( (  op_dash_add224 ( ( (  pos4804 ) .f_line ) , (  i4816 ) ) ) ,  (  num_dash_lines4814 ) ) );
                struct envunion1868  temp1867 = ( (struct envunion1868){ .fun = (  struct Maybe_345  (*) (  struct env1853*  ,    struct Pos_40  ) )search_dash_on_dash_line1856 , .env =  envinst1853 } );
                struct Maybe_345  dref4818 = ( temp1867.fun ( &temp1867.env ,  ( (struct Pos_40) { .f_line = (  line4817 ) , .f_bi = (  from_dash_integral92 ( 0 ) ) } ) ) );
                if ( dref4818.tag == Maybe_345_Just_t ) {
                    struct Pos_40  sel_dash_pos4820 = ( (struct Pos_40) { .f_line = (  line4817 ) , .f_bi = ( (  size_dash_i32380 ) ( ( dref4818 .stuff .Maybe_345_Just_s .field0 ) ) ) } );
                    struct Pos_40  cur_dash_pos4821 = ( (struct Pos_40) { .f_line = (  line4817 ) , .f_bi = (  op_dash_sub229 ( ( (  size_dash_i32380 ) ( (  op_dash_add425 ( ( dref4818 .stuff .Maybe_345_Just_s .field0 ) , ( (  num_dash_bytes465 ) ( (  query4806 ) ) ) ) ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1851_Just ) ( ( ( Tuple2_301_Tuple2 ) ( (  sel_dash_pos4820 ) ,  (  cur_dash_pos4821 ) ) ) ) );
                }
                else {
                    if ( dref4818.tag == Maybe_345_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1851) { .tag = Maybe_1851_None_t } );
        }
    }
}

static  enum Unit_10   next_dash_match1850 (    struct Editor_329 *  ed5076 ) {
    struct Maybe_125  dref5077 = ( ( * (  ed5076 ) ) .f_search_dash_term );
    if ( dref5077.tag == Maybe_125_None_t ) {
        return ( Unit_10_Unit );
    }
    else {
        if ( dref5077.tag == Maybe_125_Just_t ) {
            struct Maybe_1851  dref5079 = ( (  search_dash_from1852 ) ( ( (  pane466 ) ( (  ed5076 ) ) ) ,  ( (  max_dash_pos1821 ) ( ( (  pane466 ) ( (  ed5076 ) ) ) ) ) ,  ( dref5077 .stuff .Maybe_125_Just_s .field0 ) ) );
            if ( dref5079.tag == Maybe_1851_None_t ) {
            }
            else {
                if ( dref5079.tag == Maybe_1851_Just_t ) {
                    ( (  set_dash_cursors356 ) ( ( (  pane466 ) ( (  ed5076 ) ) ) ,  ( dref5079 .stuff .Maybe_1851_Just_s .field0 .field1 ) ,  ( ( Maybe_47_Just ) ( ( dref5079 .stuff .Maybe_1851_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_357_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_10_Unit );
}

struct DownToRange_1874 {
    int32_t  f_from;
    int32_t  f_to;
};

struct DownToIter_1873 {
    struct DownToRange_1874  f_dtrange;
    int32_t  f_i;
};

static  struct DownToIter_1873   into_dash_iter1875 (    struct DownToRange_1874  self925 ) {
    return ( (struct DownToIter_1873) { .f_dtrange = (  self925 ) , .f_i = ( (  self925 ) .f_from ) } );
}

static  struct DownToRange_1874   down_dash_to1876 (    int32_t  from920 ,    int32_t  to922 ) {
    return ( (struct DownToRange_1874) { .f_from = (  from920 ) , .f_to = (  to922 ) } );
}

static  struct Maybe_220   next1878 (    struct DownToIter_1873 *  self931 ) {
    if ( (  cmp222 ( ( ( * (  self931 ) ) .f_i ) , ( ( ( * (  self931 ) ) .f_dtrange ) .f_to ) ) == 0 ) ) {
        return ( (struct Maybe_220) { .tag = Maybe_220_None_t } );
    }
    struct Maybe_220  x932 = ( ( Maybe_220_Just ) ( ( ( * (  self931 ) ) .f_i ) ) );
    (*  self931 ) .f_i = (  op_dash_sub229 ( ( ( * (  self931 ) ) .f_i ) , (  from_dash_integral92 ( 1 ) ) ) );
    return (  x932 );
}

static  struct Maybe_345   find_dash_last_dash_occurence_dash_of_dash_slice1871 (    struct Slice_13  haystack2342 ,    struct Slice_13  needle2344 ) {
    struct DownToIter_1873  temp1872 =  into_dash_iter1875 ( ( (  down_dash_to1876 ) ( (  op_dash_sub229 ( ( (  size_dash_i32380 ) ( ( (  haystack2342 ) .f_count ) ) ) , ( (  size_dash_i32380 ) ( ( (  needle2344 ) .f_count ) ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ) ) );
    while (true) {
        struct Maybe_220  __cond1877 =  next1878 (&temp1872);
        if (  __cond1877 .tag == 0 ) {
            break;
        }
        int32_t  i2346 =  __cond1877 .stuff .Maybe_220_Just_s .field0;
        if ( (  eq683 ( ( (  subslice955 ) ( (  haystack2342 ) ,  ( (  i32_dash_size349 ) ( (  i2346 ) ) ) ,  (  op_dash_add425 ( ( (  i32_dash_size349 ) ( (  i2346 ) ) ) , ( (  needle2344 ) .f_count ) ) ) ) ) , (  needle2344 ) ) ) ) {
            return ( ( Maybe_345_Just ) ( ( (  i32_dash_size349 ) ( (  i2346 ) ) ) ) );
        }
    }
    return ( (struct Maybe_345) { .tag = Maybe_345_None_t } );
}

static  struct Maybe_1851   search_dash_back1870 (    struct Pane_289 *  pane4824 ,    struct Pos_40  pos4826 ,    struct StrView_18  query4828 ) {
    struct Maybe_345  dref4829 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1871 ) ( ( ( (  byte_dash_substr965 ) ( ( (  line366 ) ( ( ( * (  pane4824 ) ) .f_buf ) ,  ( (  pos4826 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size349 ) ( ( (  pos4826 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4828 ) .f_contents ) ) );
    if ( dref4829.tag == Maybe_345_Just_t ) {
        struct Pos_40  temp1879 = (  pos4826 );
        temp1879 .  f_bi = ( (  size_dash_i32380 ) ( ( dref4829 .stuff .Maybe_345_Just_s .field0 ) ) );
        struct Pos_40  sel_dash_pos4831 = ( temp1879 );
        struct Pos_40  temp1880 = (  pos4826 );
        temp1880 .  f_bi = (  op_dash_sub229 ( ( (  size_dash_i32380 ) ( (  op_dash_add425 ( ( dref4829 .stuff .Maybe_345_Just_s .field0 ) , ( (  num_dash_bytes465 ) ( (  query4828 ) ) ) ) ) ) ) , (  from_dash_integral92 ( 1 ) ) ) );
        struct Pos_40  cur_dash_pos4832 = ( temp1880 );
        return ( ( Maybe_1851_Just ) ( ( ( Tuple2_301_Tuple2 ) ( (  sel_dash_pos4831 ) ,  (  cur_dash_pos4832 ) ) ) ) );
    }
    else {
        if ( dref4829.tag == Maybe_345_None_t ) {
            int32_t  num_dash_lines4833 = ( (  num_dash_lines489 ) ( ( ( * (  pane4824 ) ) .f_buf ) ) );
            struct RangeIter_218  temp1881 =  into_dash_iter219 ( ( (  to228 ) ( (  from_dash_integral92 ( 1 ) ) ,  (  num_dash_lines4833 ) ) ) );
            while (true) {
                struct Maybe_220  __cond1882 =  next221 (&temp1881);
                if (  __cond1882 .tag == 0 ) {
                    break;
                }
                int32_t  i4835 =  __cond1882 .stuff .Maybe_220_Just_s .field0;
                int32_t  line4836 = ( (  mod1864 ) ( (  op_dash_sub229 ( ( (  pos4826 ) .f_line ) , (  i4835 ) ) ) ,  (  num_dash_lines4833 ) ) );
                struct Maybe_345  dref4837 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1871 ) ( ( ( (  line366 ) ( ( ( * (  pane4824 ) ) .f_buf ) ,  (  line4836 ) ) ) .f_contents ) ,  ( (  query4828 ) .f_contents ) ) );
                if ( dref4837.tag == Maybe_345_Just_t ) {
                    struct Pos_40  sel_dash_pos4839 = ( (struct Pos_40) { .f_line = (  line4836 ) , .f_bi = ( (  size_dash_i32380 ) ( ( dref4837 .stuff .Maybe_345_Just_s .field0 ) ) ) } );
                    struct Pos_40  cur_dash_pos4840 = ( (struct Pos_40) { .f_line = (  line4836 ) , .f_bi = (  op_dash_sub229 ( ( (  size_dash_i32380 ) ( (  op_dash_add425 ( ( dref4837 .stuff .Maybe_345_Just_s .field0 ) , ( (  num_dash_bytes465 ) ( (  query4828 ) ) ) ) ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1851_Just ) ( ( ( Tuple2_301_Tuple2 ) ( (  sel_dash_pos4839 ) ,  (  cur_dash_pos4840 ) ) ) ) );
                }
                else {
                    if ( dref4837.tag == Maybe_345_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1851) { .tag = Maybe_1851_None_t } );
        }
    }
}

static  enum Unit_10   prev_dash_match1869 (    struct Editor_329 *  ed5084 ) {
    struct Maybe_125  dref5085 = ( ( * (  ed5084 ) ) .f_search_dash_term );
    if ( dref5085.tag == Maybe_125_None_t ) {
        return ( Unit_10_Unit );
    }
    else {
        if ( dref5085.tag == Maybe_125_Just_t ) {
            struct Maybe_1851  dref5087 = ( (  search_dash_back1870 ) ( ( (  pane466 ) ( (  ed5084 ) ) ) ,  ( (  min_dash_pos1834 ) ( ( (  pane466 ) ( (  ed5084 ) ) ) ) ) ,  ( dref5085 .stuff .Maybe_125_Just_s .field0 ) ) );
            if ( dref5087.tag == Maybe_1851_None_t ) {
            }
            else {
                if ( dref5087.tag == Maybe_1851_Just_t ) {
                    ( (  set_dash_cursors356 ) ( ( (  pane466 ) ( (  ed5084 ) ) ) ,  ( dref5087 .stuff .Maybe_1851_Just_s .field0 .field1 ) ,  ( ( Maybe_47_Just ) ( ( dref5087 .stuff .Maybe_1851_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_357_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   begin_dash_changeset1886 (   struct env194* env ,    struct TextBuf_164 *  self4366 ,    struct Cursors_46  before_dash_cursors4368 ) {
    struct Actions_165 *  actions4369 = ( & ( ( * (  self4366 ) ) .f_actions ) );
    ( (  trim_dash_actions1519 ) ( (  actions4369 ) ) );
    ( (  flush_dash_insert_dash_action1514 ) ( (  self4366 ) ) );
    ( (  assert1092 ) ( (  eq1584 ( ( ( ( * (  self4366 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_166_NoChangeset ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_12  al4370 = ( ( * (  self4366 ) ) .f_al );
    struct Changeset_45  temp1887 = ( (struct Changeset_45) { .f_parts = ( (  mk1613 ) ( (  al4370 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors4368 ) } );
    struct Changeset_45 *  changeset4371 = ( &temp1887 );
    struct envunion195  temp1888 = ( (struct envunion195){ .fun = (  enum Unit_10  (*) (  struct env41*  ,    struct List_43 *  ,    struct Changeset_45  ) )add1624 , .env =  env->envinst41 } );
    ( temp1888.fun ( &temp1888.env ,  ( & ( ( * (  actions4369 ) ) .f_list ) ) ,  ( * (  changeset4371 ) ) ) );
    (*  actions4369 ) .f_input_dash_changeset = ( ChangesetInputType_166_CustomChangeset );
    (*  actions4369 ) .f_cur = (  op_dash_add425 ( ( ( * (  actions4369 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_10_Unit );
}

static  struct Maybe_1545   head1894 (    struct List_37  it1167 ) {
    struct SliceIter_1538  temp1895 = ( (  into_dash_iter1540 ) ( (  it1167 ) ) );
    return ( (  next1546 ) ( ( &temp1895 ) ) );
}

static  bool   null1893 (    struct List_37  it1176 ) {
    struct Maybe_1545  dref1177 = ( (  head1894 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_1545_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_10   end_dash_changeset1892 (    struct TextBuf_164 *  self4374 ) {
    ( (  flush_dash_insert_dash_action1514 ) ( (  self4374 ) ) );
    struct Actions_165 *  actions4375 = ( & ( ( * (  self4374 ) ) .f_actions ) );
    if ( ( (  null1893 ) ( ( ( * ( (  last_dash_ptr1586 ) ( ( (  to_dash_slice1588 ) ( ( ( * (  actions4375 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions4375 ) .f_cur = (  op_dash_sub580 ( ( ( * (  actions4375 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions4375 ) .f_input_dash_changeset = ( ChangesetInputType_166_NoChangeset );
        ( (  trim_dash_actions1519 ) ( (  actions4375 ) ) );
    }
    return ( Unit_10_Unit );
}

static  struct Maybe_47   fmap_dash_maybe1897 (    struct Maybe_47  x1585 ,    struct Pos_40 (*  fun1587 )(    struct Pos_40  ) ) {
    struct Maybe_47  dref1588 = (  x1585 );
    if ( dref1588.tag == Maybe_47_None_t ) {
        return ( (struct Maybe_47) { .tag = Maybe_47_None_t } );
    }
    else {
        if ( dref1588.tag == Maybe_47_Just_t ) {
            return ( ( Maybe_47_Just ) ( ( (  fun1587 ) ( ( dref1588 .stuff .Maybe_47_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_40   lam1898 (    struct Pos_40  sel4769 ) {
    struct Pos_40  temp1899 = (  sel4769 );
    temp1899 .  f_bi = (  op_dash_add224 ( ( (  sel4769 ) .f_bi ) , (  from_dash_integral92 ( 1 ) ) ) );
    return ( temp1899 );
}

static  enum Unit_10   indent_dash_selection1884 (   struct env287* env ,    struct Pane_289 *  self4765 ) {
    struct envunion292  temp1885 = ( (struct envunion292){ .fun = (  enum Unit_10  (*) (  struct env194*  ,    struct TextBuf_164 *  ,    struct Cursors_46  ) )begin_dash_changeset1886 , .env =  env->envinst194 } );
    ( temp1885.fun ( &temp1885.env ,  ( ( * (  self4765 ) ) .f_buf ) ,  ( (struct Cursors_46) { .f_cur = ( ( * (  self4765 ) ) .f_cursor ) , .f_sel = ( ( * (  self4765 ) ) .f_sel ) } ) ) );
    struct RangeIter_218  temp1889 =  into_dash_iter219 ( ( (  to228 ) ( ( ( (  min_dash_pos1834 ) ( (  self4765 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1821 ) ( (  self4765 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_220  __cond1890 =  next221 (&temp1889);
        if (  __cond1890 .tag == 0 ) {
            break;
        }
        int32_t  line4767 =  __cond1890 .stuff .Maybe_220_Just_s .field0;
        struct envunion288  temp1891 = ( (struct envunion288){ .fun = (  enum Unit_10  (*) (  struct env285*  ,    struct Pane_289 *  ,    int32_t  ) )indent_dash_at1655 , .env =  env->envinst285 } );
        ( temp1891.fun ( &temp1891.env ,  (  self4765 ) ,  (  line4767 ) ) );
    }
    ( (  end_dash_changeset1892 ) ( ( ( * (  self4765 ) ) .f_buf ) ) );
    struct Pos_40  temp1896 = ( ( * (  self4765 ) ) .f_cursor );
    temp1896 .  f_bi = (  op_dash_add224 ( ( ( ( * (  self4765 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral92 ( 1 ) ) ) );
    ( (  set_dash_cursors356 ) ( (  self4765 ) ,  ( temp1896 ) ,  ( (  fmap_dash_maybe1897 ) ( ( ( * (  self4765 ) ) .f_sel ) ,  (  lam1898 ) ) ) ,  ( CursorMovement_357_UpdateVI ) ) );
    return ( Unit_10_Unit );
}

struct env1910 {
    ;
    bool  last_dash_char_dash_was_dash_tab4774;
    ;
};

struct envunion1911 {
    struct Pos_40  (*fun) (  struct env1910*  ,    struct Pos_40  );
    struct env1910 env;
};

static  struct Maybe_47   fmap_dash_maybe1909 (    struct Maybe_47  x1585 ,   struct envunion1911  fun1587 ) {
    struct Maybe_47  dref1588 = (  x1585 );
    if ( dref1588.tag == Maybe_47_None_t ) {
        return ( (struct Maybe_47) { .tag = Maybe_47_None_t } );
    }
    else {
        if ( dref1588.tag == Maybe_47_Just_t ) {
            struct envunion1911  temp1912 = (  fun1587 );
            return ( ( Maybe_47_Just ) ( ( temp1912.fun ( &temp1912.env ,  ( dref1588 .stuff .Maybe_47_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_40   lam1913 (   struct env1910* env ,    struct Pos_40  sel4778 ) {
    struct Pos_40  temp1914 = (  sel4778 );
    temp1914 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4774 ) ? (  op_dash_sub229 ( ( (  sel4778 ) .f_bi ) , (  from_dash_integral92 ( 1 ) ) ) ) : ( (  sel4778 ) .f_bi ) );
    return ( temp1914 );
}

static  enum Unit_10   dedent_dash_selection1901 (   struct env293* env ,    struct Pane_289 *  self4772 ) {
    struct envunion294  temp1902 = ( (struct envunion294){ .fun = (  enum Unit_10  (*) (  struct env194*  ,    struct TextBuf_164 *  ,    struct Cursors_46  ) )begin_dash_changeset1886 , .env =  env->envinst194 } );
    ( temp1902.fun ( &temp1902.env ,  ( ( * (  self4772 ) ) .f_buf ) ,  ( (struct Cursors_46) { .f_cur = ( ( * (  self4772 ) ) .f_cursor ) , .f_sel = ( ( * (  self4772 ) ) .f_sel ) } ) ) );
    struct Pos_40  temp1903 = ( (  min_dash_pos1834 ) ( (  self4772 ) ) );
    temp1903 .  f_bi = (  from_dash_integral92 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4773 = (  eq429 ( ( (  char_dash_at1682 ) ( (  self4772 ) ,  ( temp1903 ) ) ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_40  temp1904 = ( (  max_dash_pos1821 ) ( (  self4772 ) ) );
    temp1904 .  f_bi = (  from_dash_integral92 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4774 = (  eq429 ( ( (  char_dash_at1682 ) ( (  self4772 ) ,  ( temp1904 ) ) ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_218  temp1905 =  into_dash_iter219 ( ( (  to228 ) ( ( ( (  min_dash_pos1834 ) ( (  self4772 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1821 ) ( (  self4772 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_220  __cond1906 =  next221 (&temp1905);
        if (  __cond1906 .tag == 0 ) {
            break;
        }
        int32_t  line4776 =  __cond1906 .stuff .Maybe_220_Just_s .field0;
        if ( (  eq429 ( ( (  char_dash_at1682 ) ( (  self4772 ) ,  ( (struct Pos_40) { .f_line = (  line4776 ) , .f_bi = (  from_dash_integral92 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion295  temp1907 = ( (struct envunion295){ .fun = (  struct Maybe_276  (*) (  struct env189*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ,    struct StrView_18  ,    struct Maybe_276  ) )change1518 , .env =  env->envinst189 } );
            ( temp1907.fun ( &temp1907.env ,  ( ( * (  self4772 ) ) .f_buf ) ,  ( (struct Pos_40) { .f_line = (  line4776 ) , .f_bi = (  from_dash_integral92 ( 0 ) ) } ) ,  ( (struct Pos_40) { .f_line = (  line4776 ) , .f_bi = (  from_dash_integral92 ( 1 ) ) } ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_276) { .tag = Maybe_276_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1892 ) ( ( ( * (  self4772 ) ) .f_buf ) ) );
    struct Pos_40  temp1908 = ( ( * (  self4772 ) ) .f_cursor );
    temp1908 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4773 ) ? (  op_dash_sub229 ( ( ( ( * (  self4772 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral92 ( 1 ) ) ) ) : ( ( ( * (  self4772 ) ) .f_cursor ) .f_bi ) );
    struct env1910 envinst1910 = {
        .last_dash_char_dash_was_dash_tab4774 =  last_dash_char_dash_was_dash_tab4774 ,
    };
    ( (  set_dash_cursors356 ) ( (  self4772 ) ,  ( temp1908 ) ,  ( (  fmap_dash_maybe1909 ) ( ( ( * (  self4772 ) ) .f_sel ) ,  ( (struct envunion1911){ .fun = (  struct Pos_40  (*) (  struct env1910*  ,    struct Pos_40  ) )lam1913 , .env =  envinst1910 } ) ) ) ,  ( CursorMovement_357_UpdateVI ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   enmenue1915 (    struct Editor_329 *  ed5092 ,    struct Menu_331  menu5094 ) {
    (*  ed5092 ) .f_mode = ( ( EditorMode_330_Menu ) ( (  menu5094 ) ) );
    return ( Unit_10_Unit );
}

static  int32_t   undefined1919 (  ) {
    int32_t  temp1920;
    return (  temp1920 );
}

static  int32_t   or_dash_fail1918 (    struct Maybe_220  x1353 ,    struct StrView_18  errmsg1355 ) {
    struct Maybe_220  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_220_None_t ) {
        ( (  panic1139 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1919 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_220_Just_t ) {
            return ( dref1356 .stuff .Maybe_220_Just_s .field0 );
        }
    }
}

struct env1923 {
    struct Pane_289 *  self4787;
    ;
};

struct envunion1924 {
    int32_t  (*fun) (  struct env1923*  ,    int32_t  );
    struct env1923 env;
};

struct Map_1922 {
    struct RangeIter_218  field0;
    struct envunion1924  field1;
};

static struct Map_1922 Map_1922_Map (  struct RangeIter_218  field0 , struct envunion1924  field1 ) {
    return ( struct Map_1922 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1922   into_dash_iter1926 (    struct Map_1922  self804 ) {
    return (  self804 );
}

static  struct Maybe_220   next1927 (    struct Map_1922 *  dref806 ) {
    struct Maybe_220  dref809 = ( (  next221 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_220_None_t ) {
        return ( (struct Maybe_220) { .tag = Maybe_220_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_220_Just_t ) {
            struct envunion1924  temp1928 = ( (* dref806 ) .field1 );
            return ( ( Maybe_220_Just ) ( ( temp1928.fun ( &temp1928.env ,  ( dref809 .stuff .Maybe_220_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_220   reduce1925 (    struct Map_1922  iterable1118 ,    struct Maybe_220  base1120 ,    struct Maybe_220 (*  fun1122 )(    int32_t  ,    struct Maybe_220  ) ) {
    struct Maybe_220  x1123 = (  base1120 );
    struct Map_1922  it1124 = ( (  into_dash_iter1926 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_220  dref1125 = ( (  next1927 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_220_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_220_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_220_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1929 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1929);
    abort ( );
    ( Unit_10_Unit );
    struct Maybe_220  temp1930;
    return (  temp1930 );
}

struct env1933 {
    int32_t  x1553;
    ;
};

struct envunion1934 {
    struct Maybe_220  (*fun) (  struct env1933*  ,    int32_t  );
    struct env1933 env;
};

static  struct Maybe_220   maybe1932 (    struct Maybe_220  x1592 ,   struct envunion1934  fun1594 ,    struct Maybe_220  default1596 ) {
    struct envunion1934  temp1935 = (  fun1594 );
    return ( {  struct Maybe_220  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_220_Just_t ? ( temp1935.fun ( &temp1935.env ,  ( dref1597 .stuff .Maybe_220_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

static  struct Maybe_220   lam1936 (   struct env1933* env ,    int32_t  lm1622 ) {
    return ( ( Maybe_220_Just ) ( ( (  min1083 ) ( (  lm1622 ) ,  ( env->x1553 ) ) ) ) );
}

static  struct Maybe_220   lam1931 (    int32_t  x1553 ,    struct Maybe_220  last_dash_min1555 ) {
    struct env1933 envinst1933 = {
        .x1553 =  x1553 ,
    };
    return ( (  maybe1932 ) ( (  last_dash_min1555 ) ,  ( (struct envunion1934){ .fun = (  struct Maybe_220  (*) (  struct env1933*  ,    int32_t  ) )lam1936 , .env =  envinst1933 } ) ,  ( ( Maybe_220_Just ) ( (  x1553 ) ) ) ) );
}

static  struct Maybe_220   minimum1921 (    struct Map_1922  it1551 ) {
    return ( (  reduce1925 ) ( (  it1551 ) ,  ( (struct Maybe_220) { .tag = Maybe_220_None_t } ) ,  (  lam1931 ) ) );
}

static  struct Map_1922   map1937 (    struct Range_215  iterable813 ,   struct envunion1924  fun815 ) {
    struct RangeIter_218  it816 = ( (  into_dash_iter219 ) ( (  iterable813 ) ) );
    return ( ( Map_1922_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  int32_t   lam1938 (   struct env1923* env ,    int32_t  ln4791 ) {
    return ( (  indent_dash_at_dash_line469 ) ( ( env->self4787 ) ,  (  ln4791 ) ) );
}

struct env1940 {
    ;
    ;
    struct Pane_289 *  self4787;
};

struct envunion1941 {
    bool  (*fun) (  struct env1940*  ,    int32_t  );
    struct env1940 env;
};

struct env1943 {
    struct envunion1941  fun1151;
};

struct envunion1944 {
    bool  (*fun) (  struct env1943*  ,    int32_t  ,    bool  );
    struct env1943 env;
};

static  bool   reduce1942 (    struct Range_215  iterable1118 ,    bool  base1120 ,   struct envunion1944  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct RangeIter_218  it1124 = ( (  into_dash_iter219 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_220  dref1125 = ( (  next221 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_220_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_220_Just_t ) {
                struct envunion1944  temp1945 = (  fun1122 );
                x1123 = ( temp1945.fun ( &temp1945.env ,  ( dref1125 .stuff .Maybe_220_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1946 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1946);
    abort ( );
    ( Unit_10_Unit );
    bool  temp1947;
    return (  temp1947 );
}

static  bool   lam1948 (   struct env1943* env ,    int32_t  e1153 ,    bool  x1155 ) {
    struct envunion1941  temp1949 = ( env->fun1151 );
    return ( ( temp1949.fun ( &temp1949.env ,  (  e1153 ) ) ) && (  x1155 ) );
}

static  bool   all1939 (    struct Range_215  it1149 ,   struct envunion1941  fun1151 ) {
    struct env1943 envinst1943 = {
        .fun1151 =  fun1151 ,
    };
    return ( (  reduce1942 ) ( (  it1149 ) ,  ( true ) ,  ( (struct envunion1944){ .fun = (  bool  (*) (  struct env1943*  ,    int32_t  ,    bool  ) )lam1948 , .env =  envinst1943 } ) ) );
}

static  bool   is_dash_just1951 (    struct Maybe_1851  m1570 ) {
    struct Maybe_1851  dref1571 = (  m1570 );
    if ( dref1571.tag == Maybe_1851_None_t ) {
        return ( false );
    }
    else {
        if ( dref1571.tag == Maybe_1851_Just_t ) {
            return ( true );
        }
    }
}

static  bool   lam1953 (    struct Char_101  c4718 ) {
    return ( ( !  eq429 ( (  c4718 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace484 ) ( (  c4718 ) ) ) );
}

static  struct Maybe_1851   line_dash_begins_dash_with_dash_comment1952 (    struct Pane_289 *  self4712 ,    int32_t  line4714 ) {
    int32_t  indent4715 = ( (  indent_dash_at_dash_line469 ) ( (  self4712 ) ,  (  line4714 ) ) );
    if ( (  eq429 ( ( (  char_dash_at1682 ) ( (  self4712 ) ,  ( (  mk1118 ) ( (  line4714 ) ,  (  indent4715 ) ) ) ) ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4716 = (  op_dash_add224 ( (  indent4715 ) , (  from_dash_integral92 ( 1 ) ) ) );
        while ( ( (  lam1953 ) ( ( (  char_dash_at1682 ) ( (  self4712 ) ,  ( (  mk1118 ) ( (  line4714 ) ,  (  i4716 ) ) ) ) ) ) ) ) {
            i4716 = (  op_dash_add224 ( (  i4716 ) , (  from_dash_integral92 ( 1 ) ) ) );
        }
        return ( ( Maybe_1851_Just ) ( ( ( Tuple2_301_Tuple2 ) ( ( (  mk1118 ) ( (  line4714 ) ,  (  indent4715 ) ) ) ,  ( (  mk1118 ) ( (  line4714 ) ,  (  i4716 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1851) { .tag = Maybe_1851_None_t } );
    }
}

static  bool   lam1950 (   struct env1940* env ,    int32_t  ln4794 ) {
    return ( (  is_dash_just1951 ) ( ( (  line_dash_begins_dash_with_dash_comment1952 ) ( ( env->self4787 ) ,  (  ln4794 ) ) ) ) );
}

static  struct Tuple2_301   undefined1959 (  ) {
    struct Tuple2_301  temp1960;
    return (  temp1960 );
}

static  struct Tuple2_301   or_dash_fail1958 (    struct Maybe_1851  x1353 ,    struct StrView_18  errmsg1355 ) {
    struct Maybe_1851  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_1851_None_t ) {
        ( (  panic1139 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1959 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_1851_Just_t ) {
            return ( dref1356 .stuff .Maybe_1851_Just_s .field0 );
        }
    }
}

static  enum Unit_10   toggle_dash_comment1917 (   struct env298* env ,    struct Pane_289 *  self4787 ) {
    int32_t  from_dash_line4788 = ( ( (  min_dash_pos1834 ) ( (  self4787 ) ) ) .f_line );
    int32_t  to_dash_line4789 = ( ( (  max_dash_pos1821 ) ( (  self4787 ) ) ) .f_line );
    struct env1923 envinst1923 = {
        .self4787 =  self4787 ,
    };
    int32_t  min_dash_indent4792 = ( (  or_dash_fail1918 ) ( ( (  minimum1921 ) ( ( (  map1937 ) ( ( (  to228 ) ( (  from_dash_line4788 ) ,  (  to_dash_line4789 ) ) ) ,  ( (struct envunion1924){ .fun = (  int32_t  (*) (  struct env1923*  ,    int32_t  ) )lam1938 , .env =  envinst1923 } ) ) ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"no lines what??" ) ,  ( 15 ) ) ) ) );
    struct env1940 envinst1940 = {
        .self4787 =  self4787 ,
    };
    bool  all_dash_have_dash_comment4795 = ( (  all1939 ) ( ( (  to228 ) ( (  from_dash_line4788 ) ,  (  to_dash_line4789 ) ) ) ,  ( (struct envunion1941){ .fun = (  bool  (*) (  struct env1940*  ,    int32_t  ) )lam1950 , .env =  envinst1940 } ) ) );
    struct envunion302  temp1954 = ( (struct envunion302){ .fun = (  enum Unit_10  (*) (  struct env194*  ,    struct TextBuf_164 *  ,    struct Cursors_46  ) )begin_dash_changeset1886 , .env =  env->envinst194 } );
    ( temp1954.fun ( &temp1954.env ,  ( ( * (  self4787 ) ) .f_buf ) ,  ( (struct Cursors_46) { .f_cur = ( ( * (  self4787 ) ) .f_cursor ) , .f_sel = ( ( * (  self4787 ) ) .f_sel ) } ) ) );
    struct RangeIter_218  temp1955 =  into_dash_iter219 ( ( (  to228 ) ( (  from_dash_line4788 ) ,  (  to_dash_line4789 ) ) ) );
    while (true) {
        struct Maybe_220  __cond1956 =  next221 (&temp1955);
        if (  __cond1956 .tag == 0 ) {
            break;
        }
        int32_t  line4797 =  __cond1956 .stuff .Maybe_220_Just_s .field0;
        struct Char_101  comment_dash_str4798 = ( (  from_dash_charlike407 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) );
        if ( ( ! (  all_dash_have_dash_comment4795 ) ) ) {
            ( (  set_dash_cursors356 ) ( (  self4787 ) ,  ( (  mk1118 ) ( (  line4797 ) ,  (  min_dash_indent4792 ) ) ) ,  ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) ,  ( CursorMovement_357_NoChanges ) ) );
            struct envunion299  temp1957 = ( (struct envunion299){ .fun = (  enum Unit_10  (*) (  struct env274*  ,    struct Pane_289 *  ,    struct StrView_18  ) )add_dash_str_dash_at_dash_char1516 , .env =  env->envinst274 } );
            ( temp1957.fun ( &temp1957.env ,  (  self4787 ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"# " ) ,  ( 2 ) ) ) ) );
        } else {
            struct Tuple2_301  comment_dash_pos4799 = ( (  or_dash_fail1958 ) ( ( (  line_dash_begins_dash_with_dash_comment1952 ) ( (  self4787 ) ,  (  line4797 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"(Pane.toggle-comment) impossiburu" ) ,  ( 33 ) ) ) ) );
            struct envunion300  temp1961 = ( (struct envunion300){ .fun = (  enum Unit_10  (*) (  struct env283*  ,    struct Pane_289 *  ,    struct Tuple2_301  ,    struct StrView_18  ) )replace_dash_selection1755 , .env =  env->envinst283 } );
            ( temp1961.fun ( &temp1961.env ,  (  self4787 ) ,  (  comment_dash_pos4799 ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
        }
    }
    ( (  end_dash_changeset1892 ) ( ( ( * (  self4787 ) ) .f_buf ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   handle_dash_normal_dash_key1500 (   struct env809* env ,    struct Editor_329 *  ed5113 ,    struct Key_829  key5115 ) {
    struct Key_829  dref5116 = (  key5115 );
    if ( dref5116.tag == Key_829_Char_t ) {
        if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed5113 ) .f_running = ( false );
        } else {
            if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left1501 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ) );
            } else {
                if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1506 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ) );
                } else {
                    if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1508 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ,  (  from_dash_integral92 ( 1 ) ) ) );
                    } else {
                        if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1512 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ,  (  from_dash_integral92 ( 1 ) ) ) );
                        } else {
                            if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1513 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ,  ( Mode_290_Insert ) ) );
                            } else {
                                if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented468 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ) );
                                    ( (  set_dash_mode1513 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ,  ( Mode_290_Insert ) ) );
                                } else {
                                    if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end355 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ) );
                                        ( (  set_dash_mode1513 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ,  ( Mode_290_Insert ) ) );
                                    } else {
                                        if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_289 *  pane5118 = ( (  pane466 ) ( (  ed5113 ) ) );
                                            int32_t  indent5119 = ( (  indent_dash_at_dash_line469 ) ( (  pane5118 ) ,  ( ( ( * (  pane5118 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end355 ) ( (  pane5118 ) ) );
                                            struct envunion810  temp1515 = ( (struct envunion810){ .fun = (  enum Unit_10  (*) (  struct env274*  ,    struct Pane_289 *  ,    struct StrView_18  ) )add_dash_str_dash_at_dash_char1516 , .env =  env->envinst274 } );
                                            ( temp1515.fun ( &temp1515.env ,  (  pane5118 ) ,  ( (  from_dash_charlike699 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1506 ) ( (  pane5118 ) ) );
                                            struct envunion815  temp1650 = ( (struct envunion815){ .fun = (  enum Unit_10  (*) (  struct env296*  ,    struct Pane_289 *  ,    int32_t  ) )indent_dash_at_dash_current1651 , .env =  env->envinst296 } );
                                            ( temp1650.fun ( &temp1650.env ,  (  pane5118 ) ,  (  indent5119 ) ) );
                                            ( (  set_dash_mode1513 ) ( (  pane5118 ) ,  ( Mode_290_Insert ) ) );
                                        } else {
                                            if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_289 *  pane5120 = ( (  pane466 ) ( (  ed5113 ) ) );
                                                int32_t  indent5121 = ( (  indent_dash_at_dash_line469 ) ( (  pane5120 ) ,  ( ( ( * (  pane5120 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1657 ) ( (  pane5120 ) ) );
                                                struct envunion1660  temp1659 = ( (struct envunion1660){ .fun = (  enum Unit_10  (*) (  struct env274*  ,    struct Pane_289 *  ,    struct StrView_18  ) )add_dash_str_dash_at_dash_char1516 , .env =  env->envinst274 } );
                                                ( temp1659.fun ( &temp1659.env ,  (  pane5120 ) ,  ( (  from_dash_charlike699 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1662  temp1661 = ( (struct envunion1662){ .fun = (  enum Unit_10  (*) (  struct env296*  ,    struct Pane_289 *  ,    int32_t  ) )indent_dash_at_dash_current1651 , .env =  env->envinst296 } );
                                                ( temp1661.fun ( &temp1661.env ,  (  pane5120 ) ,  (  indent5121 ) ) );
                                                ( (  set_dash_mode1513 ) ( (  pane5120 ) ,  ( Mode_290_Insert ) ) );
                                            } else {
                                                if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1663 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ,  ( MoveDirection_1664_MoveFwd ) ,  ( MoveTarget_1665_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1663 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ,  ( MoveDirection_1664_MoveFwd ) ,  ( MoveTarget_1665_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1663 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ,  ( MoveDirection_1664_MoveBwd ) ,  ( MoveTarget_1665_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion814  temp1698 = ( (struct envunion814){ .fun = (  enum Unit_10  (*) (  struct env281*  ,    struct Pane_289 *  ) )redo1699 , .env =  env->envinst281 } );
                                                                ( temp1698.fun ( &temp1698.env ,  ( (  pane466 ) ( (  ed5113 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion813  temp1723 = ( (struct envunion813){ .fun = (  enum Unit_10  (*) (  struct env279*  ,    struct Pane_289 *  ) )undo1724 , .env =  env->envinst279 } );
                                                                    ( temp1723.fun ( &temp1723.env ,  ( (  pane466 ) ( (  ed5113 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion819  temp1741 = ( (struct envunion819){ .fun = (  enum Unit_10  (*) (  struct env314*  ,    struct Editor_329 *  ) )copy_dash_selection_dash_to_dash_clipboard1742 , .env =  env->envinst314 } );
                                                                        ( temp1741.fun ( &temp1741.env ,  (  ed5113 ) ) );
                                                                        struct envunion817  temp1754 = ( (struct envunion817){ .fun = (  enum Unit_10  (*) (  struct env283*  ,    struct Pane_289 *  ,    struct Tuple2_301  ,    struct StrView_18  ) )replace_dash_selection1755 , .env =  env->envinst283 } );
                                                                        ( temp1754.fun ( &temp1754.env ,  ( (  pane466 ) ( (  ed5113 ) ) ) ,  ( (  selection1743 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1513 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ,  ( Mode_290_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1763  temp1762 = ( (struct envunion1763){ .fun = (  enum Unit_10  (*) (  struct env314*  ,    struct Editor_329 *  ) )copy_dash_selection_dash_to_dash_clipboard1742 , .env =  env->envinst314 } );
                                                                            ( temp1762.fun ( &temp1762.env ,  (  ed5113 ) ) );
                                                                            struct envunion1765  temp1764 = ( (struct envunion1765){ .fun = (  enum Unit_10  (*) (  struct env283*  ,    struct Pane_289 *  ,    struct Tuple2_301  ,    struct StrView_18  ) )replace_dash_selection1755 , .env =  env->envinst283 } );
                                                                            ( temp1764.fun ( &temp1764.env ,  ( (  pane466 ) ( (  ed5113 ) ) ) ,  ( (  selection1743 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1513 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ,  ( Mode_290_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1767  temp1766 = ( (struct envunion1767){ .fun = (  enum Unit_10  (*) (  struct env314*  ,    struct Editor_329 *  ) )copy_dash_selection_dash_to_dash_clipboard1742 , .env =  env->envinst314 } );
                                                                                ( temp1766.fun ( &temp1766.env ,  (  ed5113 ) ) );
                                                                                size_t  bytes_dash_yanked5122 = ( (  num_dash_bytes465 ) ( ( (  or_dash_else1016 ) ( ( ( * (  ed5113 ) ) .f_clipboard ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion812  temp1768 = ( (struct envunion812){ .fun = (  enum Unit_10  (*) (  struct env318*  ,    struct Editor_329 *  ,    struct StrConcat_118  ) )set_dash_msg1769 , .env =  env->envinst318 } );
                                                                                ( temp1768.fun ( &temp1768.env ,  (  ed5113 ) ,  ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked5122 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)" bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1816 envinst1816 = {
                                                                                        .envinst283 = env->envinst283 ,
                                                                                        .ed5113 =  ed5113 ,
                                                                                    };
                                                                                    ( (  if_dash_just1815 ) ( ( ( * (  ed5113 ) ) .f_clipboard ) ,  ( (struct envunion1818){ .fun = (  enum Unit_10  (*) (  struct env1816*  ,    struct StrView_18  ) )lam1820 , .env =  envinst1816 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1829 envinst1829 = {
                                                                                            .ed5113 =  ed5113 ,
                                                                                            .envinst283 = env->envinst283 ,
                                                                                        };
                                                                                        ( (  if_dash_just1828 ) ( ( ( * (  ed5113 ) ) .f_clipboard ) ,  ( (struct envunion1831){ .fun = (  enum Unit_10  (*) (  struct env1829*  ,    struct StrView_18  ) )lam1833 , .env =  envinst1829 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1838 envinst1838 = {
                                                                                                .ed5113 =  ed5113 ,
                                                                                                .envinst283 = env->envinst283 ,
                                                                                            };
                                                                                            ( (  if_dash_just1837 ) ( ( ( * (  ed5113 ) ) .f_clipboard ) ,  ( (struct envunion1840){ .fun = (  enum Unit_10  (*) (  struct env1838*  ,    struct StrView_18  ) )lam1842 , .env =  envinst1838 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1845 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1513 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ,  ( Mode_290_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1849 ) ( ( ( ( * (  ed5113 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed5113 ) .f_pane .f_sel = ( ( Maybe_47_Just ) ( ( ( ( * (  ed5113 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed5113 ) .f_mode = ( ( EditorMode_330_Cmd ) ( ( ( * ( (  pane466 ) ( (  ed5113 ) ) ) ) .f_cursor ) ,  ( (  mk807 ) ( ( ( * (  ed5113 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed5113 ) .f_mode = ( ( EditorMode_330_Search ) ( ( ( * ( (  pane466 ) ( (  ed5113 ) ) ) ) .f_cursor ) ,  ( (  mk807 ) ( ( ( * (  ed5113 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1850 ) ( (  ed5113 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1869 ) ( (  ed5113 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion811  temp1883 = ( (struct envunion811){ .fun = (  enum Unit_10  (*) (  struct env287*  ,    struct Pane_289 *  ) )indent_dash_selection1884 , .env =  env->envinst287 } );
                                                                                                                        ( temp1883.fun ( &temp1883.env ,  ( (  pane466 ) ( (  ed5113 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion818  temp1900 = ( (struct envunion818){ .fun = (  enum Unit_10  (*) (  struct env293*  ,    struct Pane_289 *  ) )dedent_dash_selection1901 , .env =  env->envinst293 } );
                                                                                                                            ( temp1900.fun ( &temp1900.env ,  ( (  pane466 ) ( (  ed5113 ) ) ) ) );
                                                                                                                        } else {
                                                                                                                            if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                                ( (  enmenue1915 ) ( (  ed5113 ) ,  ( env->goto_dash_menu5103 ) ) );
                                                                                                                            } else {
                                                                                                                                if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Char_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                                    ( (  enmenue1915 ) ( (  ed5113 ) ,  ( env->space_dash_menu5110 ) ) );
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
    }
    else {
        if ( dref5116.tag == Key_829_Escape_t ) {
            ( (  set_dash_mode1513 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ,  ( Mode_290_Normal ) ) );
        }
        else {
            if ( dref5116.tag == Key_829_Ctrl_t ) {
                if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Ctrl_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion816  temp1916 = ( (struct envunion816){ .fun = (  enum Unit_10  (*) (  struct env298*  ,    struct Pane_289 *  ) )toggle_dash_comment1917 , .env =  env->envinst298 } );
                    ( temp1916.fun ( &temp1916.env ,  ( (  pane466 ) ( (  ed5113 ) ) ) ) );
                } else {
                    if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Ctrl_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1512 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ,  (  from_dash_integral92 ( 15 ) ) ) );
                    } else {
                        if ( (  eq1358 ( ( dref5116 .stuff .Key_829_Ctrl_s .field0 ) , ( (  from_dash_charlike351 ) ( ( (uint8_t*)"d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1508 ) ( ( (  pane466 ) ( (  ed5113 ) ) ) ,  (  from_dash_integral92 ( 15 ) ) ) );
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
    return ( Unit_10_Unit );
}

struct envunion1963 {
    enum Unit_10  (*fun) (  struct env809*  ,    struct Editor_329 *  ,    struct Key_829  );
    struct env809 env;
};

static  enum Unit_10   backspace1967 (   struct env277* env ,    struct Pane_289 *  self4727 ) {
    struct Pos_40  prev_dash_cur4728 = ( ( * (  self4727 ) ) .f_cursor );
    ( (  move_dash_left1501 ) ( (  self4727 ) ) );
    struct envunion278  temp1968 = ( (struct envunion278){ .fun = (  struct Maybe_276  (*) (  struct env189*  ,    struct TextBuf_164 *  ,    struct Pos_40  ,    struct Pos_40  ,    struct StrView_18  ,    struct Maybe_276  ) )change1518 , .env =  env->envinst189 } );
    ( temp1968.fun ( &temp1968.env ,  ( ( * (  self4727 ) ) .f_buf ) ,  ( ( * (  self4727 ) ) .f_cursor ) ,  (  prev_dash_cur4728 ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_276) { .tag = Maybe_276_None_t } ) ) );
    return ( Unit_10_Unit );
}

struct Array_1970 {
    char _arr [1];
};

static  char *   cast1971 (    struct Array_1970 *  x395 ) {
    return ( (char * ) (  x395 ) );
}

static  struct Slice_1372   as_dash_slice1969 (    struct Array_1970 *  arr2052 ) {
    return ( (struct Slice_1372) { .f_ptr = ( (  cast1971 ) ( (  arr2052 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1970   from_dash_listlike1973 (    struct Array_1970 *  self369 ) {
    return ( * (  self369 ) );
}

struct envunion1976 {
    enum Unit_10  (*fun) (  struct env274*  ,    struct Pane_289 *  ,    struct StrView_18  );
    struct env274 env;
};

struct Scanner_1979 {
    struct StrView_18  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1979   mk_dash_from_dash_strview1981 (    struct StrView_18  s3533 ) {
    return ( (struct Scanner_1979) { .f_s = (  s3533 ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct TakeWhile_1987 {
    struct StrViewIter_362  f_it;
    bool (*  f_pred )(    struct Char_101  );
};

struct Map_1986 {
    struct TakeWhile_1987  field0;
    size_t (*  field1 )(    struct Char_101  );
};

static struct Map_1986 Map_1986_Map (  struct TakeWhile_1987  field0 ,  size_t (*  field1 )(    struct Char_101  ) ) {
    return ( struct Map_1986 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1986   into_dash_iter1989 (    struct Map_1986  self804 ) {
    return (  self804 );
}

static  struct Maybe_420   next1991 (    struct TakeWhile_1987 *  self989 ) {
    struct Maybe_420  mx990 = ( (  next421 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_420  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_420_None_t ) {
        return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_420_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_420_Just ) ( ( dref991 .stuff .Maybe_420_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
            }
        }
    }
}

static  struct Maybe_345   next1990 (    struct Map_1986 *  dref806 ) {
    struct Maybe_420  dref809 = ( (  next1991 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_420_None_t ) {
        return ( (struct Maybe_345) { .tag = Maybe_345_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_420_Just_t ) {
            return ( ( Maybe_345_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_420_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1988 (    struct Map_1986  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_1986  it1124 = ( (  into_dash_iter1989 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_345  dref1125 = ( (  next1990 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_345_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_345_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_345_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1992 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1992);
    abort ( );
    ( Unit_10_Unit );
    size_t  temp1993;
    return (  temp1993 );
}

static  size_t   lam1994 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add425 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum1985 (    struct Map_1986  it1135 ) {
    return ( (  reduce1988 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1994 ) ) );
}

static  struct TakeWhile_1987   into_dash_iter1996 (    struct TakeWhile_1987  self986 ) {
    return (  self986 );
}

static  struct Map_1986   map1995 (    struct TakeWhile_1987  iterable813 ,    size_t (*  fun815 )(    struct Char_101  ) ) {
    struct TakeWhile_1987  it816 = ( (  into_dash_iter1996 ) ( (  iterable813 ) ) );
    return ( ( Map_1986_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_1987   take_dash_while1997 (    struct StrViewIter_362  it995 ,    bool (*  pred997 )(    struct Char_101  ) ) {
    return ( (struct TakeWhile_1987) { .f_it = ( (  into_dash_iter363 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  size_t   lam1998 (    struct Char_101  c2642 ) {
    return ( (  c2642 ) .f_num_dash_bytes );
}

static  struct StrView_18   take_dash_while1984 (    struct StrView_18  self2638 ,    bool (*  fun2640 )(    struct Char_101  ) ) {
    size_t  bi2643 = ( (  sum1985 ) ( ( (  map1995 ) ( ( (  take_dash_while1997 ) ( ( (  chars364 ) ( (  self2638 ) ) ) ,  (  fun2640 ) ) ) ,  (  lam1998 ) ) ) ) );
    return ( (  byte_dash_substr965 ) ( (  self2638 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2643 ) ) );
}

static  struct StrView_18   take_dash_str_dash_while1983 (    struct Scanner_1979 *  sc3613 ,    bool (*  fun3615 )(    struct Char_101  ) ) {
    struct StrView_18  s3616 = ( (  take_dash_while1984 ) ( ( ( * (  sc3613 ) ) .f_s ) ,  (  fun3615 ) ) );
    (*  sc3613 ) .f_s = ( (  byte_dash_substr_dash_from953 ) ( ( ( * (  sc3613 ) ) .f_s ) ,  ( (  num_dash_bytes465 ) ( (  s3616 ) ) ) ) );
    return (  s3616 );
}

static  enum Unit_10   drop_dash_str_dash_while1982 (    struct Scanner_1979 *  sc3619 ,    bool (*  fun3621 )(    struct Char_101  ) ) {
    ( (  take_dash_str_dash_while1983 ) ( (  sc3619 ) ,  (  fun3621 ) ) );
    return ( Unit_10_Unit );
}

struct TakeWhile_2003 {
    struct StrViewIter_362  f_it;
    bool (*  f_pred )(    struct Char_101  );
};

struct Map_2002 {
    struct TakeWhile_2003  field0;
    size_t (*  field1 )(    struct Char_101  );
};

static struct Map_2002 Map_2002_Map (  struct TakeWhile_2003  field0 ,  size_t (*  field1 )(    struct Char_101  ) ) {
    return ( struct Map_2002 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2002   into_dash_iter2005 (    struct Map_2002  self804 ) {
    return (  self804 );
}

static  struct Maybe_420   next2007 (    struct TakeWhile_2003 *  self989 ) {
    struct Maybe_420  mx990 = ( (  next421 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_420  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_420_None_t ) {
        return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_420_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_420_Just ) ( ( dref991 .stuff .Maybe_420_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
            }
        }
    }
}

static  struct Maybe_345   next2006 (    struct Map_2002 *  dref806 ) {
    struct Maybe_420  dref809 = ( (  next2007 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_420_None_t ) {
        return ( (struct Maybe_345) { .tag = Maybe_345_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_420_Just_t ) {
            return ( ( Maybe_345_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_420_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce2004 (    struct Map_2002  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_2002  it1124 = ( (  into_dash_iter2005 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_345  dref1125 = ( (  next2006 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_345_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_345_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_345_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2008 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2008);
    abort ( );
    ( Unit_10_Unit );
    size_t  temp2009;
    return (  temp2009 );
}

static  size_t   lam2010 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add425 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum2001 (    struct Map_2002  it1135 ) {
    return ( (  reduce2004 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2010 ) ) );
}

static  struct TakeWhile_2003   into_dash_iter2012 (    struct TakeWhile_2003  self986 ) {
    return (  self986 );
}

static  struct Map_2002   map2011 (    struct TakeWhile_2003  iterable813 ,    size_t (*  fun815 )(    struct Char_101  ) ) {
    struct TakeWhile_2003  it816 = ( (  into_dash_iter2012 ) ( (  iterable813 ) ) );
    return ( ( Map_2002_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_2003   take_dash_while2013 (    struct StrViewIter_362  it995 ,    bool (*  pred997 )(    struct Char_101  ) ) {
    return ( (struct TakeWhile_2003) { .f_it = ( (  into_dash_iter363 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  size_t   lam2014 (    struct Char_101  c2642 ) {
    return ( (  c2642 ) .f_num_dash_bytes );
}

static  struct StrView_18   take_dash_while2000 (    struct StrView_18  self2638 ,    bool (*  fun2640 )(    struct Char_101  ) ) {
    size_t  bi2643 = ( (  sum2001 ) ( ( (  map2011 ) ( ( (  take_dash_while2013 ) ( ( (  chars364 ) ( (  self2638 ) ) ) ,  (  fun2640 ) ) ) ,  (  lam2014 ) ) ) ) );
    return ( (  byte_dash_substr965 ) ( (  self2638 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2643 ) ) );
}

static  struct StrView_18   take_dash_str_dash_while1999 (    struct Scanner_1979 *  sc3613 ,    bool (*  fun3615 )(    struct Char_101  ) ) {
    struct StrView_18  s3616 = ( (  take_dash_while2000 ) ( ( ( * (  sc3613 ) ) .f_s ) ,  (  fun3615 ) ) );
    (*  sc3613 ) .f_s = ( (  byte_dash_substr_dash_from953 ) ( ( ( * (  sc3613 ) ) .f_s ) ,  ( (  num_dash_bytes465 ) ( (  s3616 ) ) ) ) );
    return (  s3616 );
}

static  bool   is_dash_not_dash_whitespace2015 (    struct Char_101  c1503 ) {
    return ( ! ( (  is_dash_whitespace484 ) ( (  c1503 ) ) ) );
}

static  struct Maybe_420   head2017 (    struct StrView_18  it1167 ) {
    struct StrViewIter_362  temp2018 = ( (  into_dash_iter365 ) ( (  it1167 ) ) );
    return ( (  next421 ) ( ( &temp2018 ) ) );
}

static  bool   null2016 (    struct StrView_18  it1176 ) {
    struct Maybe_420  dref1177 = ( (  head2017 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_420_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env2022 {
    ;
    enum CAllocator_12  al4245;
};

struct envunion2023 {
    struct StrView_18  (*fun) (  struct env2022*  ,    struct StrView_18  );
    struct env2022 env;
};

static  struct Maybe_125   fmap_dash_maybe2021 (    struct Maybe_125  x1585 ,   struct envunion2023  fun1587 ) {
    struct Maybe_125  dref1588 = (  x1585 );
    if ( dref1588.tag == Maybe_125_None_t ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    else {
        if ( dref1588.tag == Maybe_125_Just_t ) {
            struct envunion2023  temp2024 = (  fun1587 );
            return ( ( Maybe_125_Just ) ( ( temp2024.fun ( &temp2024.env ,  ( dref1588 .stuff .Maybe_125_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrView_18   lam2025 (   struct env2022* env ,    struct StrView_18  s4247 ) {
    return ( (  clone_dash_0730 ) ( (  s4247 ) ,  ( env->al4245 ) ) );
}

static  struct Maybe_125   maybe2026 (    struct Maybe_125  x1592 ,    struct Maybe_125 (*  fun1594 )(    struct StrView_18  ) ,    struct Maybe_125  default1596 ) {
    return ( {  struct Maybe_125  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_125_Just_t ? ( (  fun1594 ) ( ( dref1597 .stuff .Maybe_125_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

static  bool   is_dash_none2027 (    struct Maybe_125  m1574 ) {
    struct Maybe_125  dref1575 = (  m1574 );
    if ( dref1575.tag == Maybe_125_None_t ) {
        return ( true );
    }
    else {
        if ( dref1575.tag == Maybe_125_Just_t ) {
            return ( false );
        }
    }
}

struct env2036 {
    struct StrBuilder_98 *  builder2956;
    struct env96 envinst96;
};

struct envunion2037 {
    enum Unit_10  (*fun) (  struct env2036*  ,    struct Char_101  );
    struct env2036 env;
};

static  enum Unit_10   for_dash_each2035 (    struct StrConcatIter_754  iterable1099 ,   struct envunion2037  fun1101 ) {
    struct StrConcatIter_754  temp2038 = ( (  into_dash_iter1691 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_754 *  it1102 = ( &temp2038 );
    while ( ( true ) ) {
        struct Maybe_420  dref1103 = ( (  next770 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_420_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_420_Just_t ) {
                struct envunion2037  temp2039 = (  fun1101 );
                ( temp2039.fun ( &temp2039.env ,  ( dref1103 .stuff .Maybe_420_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam2040 (   struct env2036* env ,    struct Char_101  c2960 ) {
    struct envunion100  temp2041 = ( (struct envunion100){ .fun = (  enum Unit_10  (*) (  struct env96*  ,    struct StrBuilder_98 *  ,    struct Char_101  ) )write_dash_char1805 , .env =  env->envinst96 } );
    return ( temp2041.fun ( &temp2041.env ,  ( env->builder2956 ) ,  (  c2960 ) ) );
}

static  enum Unit_10   write2034 (   struct env105* env ,    struct StrBuilder_98 *  builder2956 ,    struct StrConcat_108  s2958 ) {
    struct env2036 envinst2036 = {
        .builder2956 =  builder2956 ,
        .envinst96 = env->envinst96 ,
    };
    ( (  for_dash_each2035 ) ( ( (  chars760 ) ( (  s2958 ) ) ) ,  ( (struct envunion2037){ .fun = (  enum Unit_10  (*) (  struct env2036*  ,    struct Char_101  ) )lam2040 , .env =  envinst2036 } ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   writeln2032 (   struct env106* env ,    struct StrBuilder_98 *  builder2963 ,    struct StrView_18  s2965 ) {
    struct envunion107  temp2033 = ( (struct envunion107){ .fun = (  enum Unit_10  (*) (  struct env105*  ,    struct StrBuilder_98 *  ,    struct StrConcat_108  ) )write2034 , .env =  env->envinst105 } );
    return ( temp2033.fun ( &temp2033.env ,  (  builder2963 ) ,  ( ( StrConcat_108_StrConcat ) ( (  s2965 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrView_18   undefined2043 (  ) {
    struct StrView_18  temp2044;
    return (  temp2044 );
}

static  struct StrView_18   or_dash_fail2042 (    struct Maybe_125  x1353 ,    struct StrView_18  errmsg1355 ) {
    struct Maybe_125  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_125_None_t ) {
        ( (  panic1139 ) ( (  errmsg1355 ) ) );
        return ( (  undefined2043 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_125_Just_t ) {
            return ( dref1356 .stuff .Maybe_125_Just_s .field0 );
        }
    }
}

static  struct StrViewIter_362   chars2047 (    struct StrBuilder_98  s3008 ) {
    return ( (  into_dash_iter365 ) ( ( (  as_dash_str1812 ) ( ( & (  s3008 ) ) ) ) ) );
}

static  struct StrViewIter_362   chars2046 (    struct StrBuilder_98 *  self1754 ) {
    return ( (  chars2047 ) ( ( * (  self1754 ) ) ) );
}

static  int32_t   fprintf_dash_char2048 (    FILE *  file1479 ,    struct Char_101  c1481 ) {
    struct Array_389  temp2050;
    struct Array_389  temp2049 = (  temp2050 );
    struct Char_101  c1482 = ( (  regularize388 ) ( (  c1481 ) ,  ( &temp2049 ) ) );
    return ( ( fprintf ) ( (  file1479 ) ,  ( (  from_dash_string93 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32380 ) ( ( (  c1482 ) .f_num_dash_bytes ) ) ) ,  ( (  c1482 ) .f_ptr ) ) );
}

static  bool   unreachable2051 (  ) {
    ( (  println1687 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1692 ) ( ) );
}

static  bool   try_dash_write_dash_contents2045 (    const char*  filename3257 ,    struct StrBuilder_98 *  contents3259 ) {
    FILE *  file3260 = ( ( fopen ) ( (  filename3257 ) ,  ( (  from_dash_charlike661 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null990 ) ( (  file3260 ) ) ) ) {
        return ( false );
    }
    struct StrViewIter_362  it3261 = ( (  chars2046 ) ( (  contents3259 ) ) );
    while ( ( true ) ) {
        struct Maybe_420  dref3262 = ( (  next421 ) ( ( & (  it3261 ) ) ) );
        if ( dref3262.tag == Maybe_420_None_t ) {
            ( ( fclose ) ( (  file3260 ) ) );
            return ( true );
        }
        else {
            if ( dref3262.tag == Maybe_420_Just_t ) {
                int32_t  chars_dash_written3264 = ( (  fprintf_dash_char2048 ) ( (  file3260 ) ,  ( dref3262 .stuff .Maybe_420_Just_s .field0 ) ) );
                if ( (  cmp222 ( (  chars_dash_written3264 ) , (  from_dash_integral92 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable2051 ) ( ) );
}

static  enum Unit_10   free2052 (    struct StrBuilder_98 *  builder3000 ) {
    ( (  free1052 ) ( ( & ( ( * (  builder3000 ) ) .f_chars ) ) ) );
    return ( Unit_10_Unit );
}

static  bool   is_dash_just2053 (    struct Maybe_125  m1570 ) {
    struct Maybe_125  dref1571 = (  m1570 );
    if ( dref1571.tag == Maybe_125_None_t ) {
        return ( false );
    }
    else {
        if ( dref1571.tag == Maybe_125_Just_t ) {
            return ( true );
        }
    }
}

static  struct Maybe_345   write_dash_to_dash_file2020 (   struct env172* env ,    struct TextBuf_164 *  self4242 ,    struct Maybe_125  altname4244 ) {
    enum CAllocator_12  al4245 = ( ( * (  self4242 ) ) .f_al );
    struct env2022 envinst2022 = {
        .al4245 =  al4245 ,
    };
    struct Maybe_125  nu_dash_filename4248 = ( (  fmap_dash_maybe2021 ) ( (  altname4244 ) ,  ( (struct envunion2023){ .fun = (  struct StrView_18  (*) (  struct env2022*  ,    struct StrView_18  ) )lam2025 , .env =  envinst2022 } ) ) );
    struct Maybe_125  filename4249 = ( (  maybe2026 ) ( (  altname4244 ) ,  ( Maybe_125_Just ) ,  ( ( * (  self4242 ) ) .f_filename ) ) );
    if ( ( (  is_dash_none2027 ) ( (  filename4249 ) ) ) ) {
        return ( (struct Maybe_345) { .tag = Maybe_345_None_t } );
    }
    struct StrBuilder_98  temp2028 = ( (  mk807 ) ( (  al4245 ) ) );
    struct StrBuilder_98 *  sb4250 = ( &temp2028 );
    struct RangeIter_218  temp2029 =  into_dash_iter219 ( ( (  to228 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  op_dash_sub229 ( ( (  num_dash_lines489 ) ( (  self4242 ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_220  __cond2030 =  next221 (&temp2029);
        if (  __cond2030 .tag == 0 ) {
            break;
        }
        int32_t  ln4252 =  __cond2030 .stuff .Maybe_220_Just_s .field0;
        struct envunion173  temp2031 = ( (struct envunion173){ .fun = (  enum Unit_10  (*) (  struct env106*  ,    struct StrBuilder_98 *  ,    struct StrView_18  ) )writeln2032 , .env =  env->envinst106 } );
        ( temp2031.fun ( &temp2031.env ,  (  sb4250 ) ,  ( (  line366 ) ( (  self4242 ) ,  (  ln4252 ) ) ) ) );
    }
    const char*  filename04253 = ( (  as_dash_const_dash_str998 ) ( ( (  or_dash_fail2042 ) ( (  filename4249 ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"expect filename (we should've quit earlier.)" ) ,  ( 44 ) ) ) ) ) ) );
    bool  result4254 = ( (  try_dash_write_dash_contents2045 ) ( (  filename04253 ) ,  (  sb4250 ) ) );
    ( (  free2052 ) ( (  sb4250 ) ) );
    if ( ( ! (  result4254 ) ) ) {
        return ( (struct Maybe_345) { .tag = Maybe_345_None_t } );
    }
    if ( ( (  is_dash_just2053 ) ( (  altname4244 ) ) ) ) {
        struct Maybe_125  dref4255 = ( ( * (  self4242 ) ) .f_filename );
        if ( dref4255.tag == Maybe_125_Just_t ) {
            ( (  free782 ) ( ( dref4255 .stuff .Maybe_125_Just_s .field0 ) ,  (  al4245 ) ) );
        }
        else {
            if ( dref4255.tag == Maybe_125_None_t ) {
            }
        }
        (*  self4242 ) .f_filename = (  altname4244 );
    }
    return ( ( Maybe_345_Just ) ( ( (  num_dash_bytes465 ) ( ( (  as_dash_str1812 ) ( (  sb4250 ) ) ) ) ) ) );
}

struct env2062 {
    struct StrBuilder_98 *  builder2956;
    struct env96 envinst96;
};

struct envunion2063 {
    enum Unit_10  (*fun) (  struct env2062*  ,    struct Char_101  );
    struct env2062 env;
};

static  enum Unit_10   for_dash_each2061 (    struct StrViewIter_362  iterable1099 ,   struct envunion2063  fun1101 ) {
    struct StrViewIter_362  temp2064 = ( (  into_dash_iter363 ) ( (  iterable1099 ) ) );
    struct StrViewIter_362 *  it1102 = ( &temp2064 );
    while ( ( true ) ) {
        struct Maybe_420  dref1103 = ( (  next421 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_420_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_420_Just_t ) {
                struct envunion2063  temp2065 = (  fun1101 );
                ( temp2065.fun ( &temp2065.env ,  ( dref1103 .stuff .Maybe_420_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam2066 (   struct env2062* env ,    struct Char_101  c2960 ) {
    struct envunion100  temp2067 = ( (struct envunion100){ .fun = (  enum Unit_10  (*) (  struct env96*  ,    struct StrBuilder_98 *  ,    struct Char_101  ) )write_dash_char1805 , .env =  env->envinst96 } );
    return ( temp2067.fun ( &temp2067.env ,  ( env->builder2956 ) ,  (  c2960 ) ) );
}

static  enum Unit_10   write2060 (   struct env103* env ,    struct StrBuilder_98 *  builder2956 ,    struct StrView_18  s2958 ) {
    struct env2062 envinst2062 = {
        .builder2956 =  builder2956 ,
        .envinst96 = env->envinst96 ,
    };
    ( (  for_dash_each2061 ) ( ( (  chars364 ) ( (  s2958 ) ) ) ,  ( (struct envunion2063){ .fun = (  enum Unit_10  (*) (  struct env2062*  ,    struct Char_101  ) )lam2066 , .env =  envinst2062 } ) ) );
    return ( Unit_10_Unit );
}

static  struct StrView_18   mk_dash_dyn_dash_str2057 (   struct env120* env ,    struct StrView_18  s3014 ,    enum CAllocator_12  al3016 ) {
    struct StrBuilder_98  temp2058 = ( (  mk807 ) ( (  al3016 ) ) );
    struct StrBuilder_98 *  sb3017 = ( &temp2058 );
    struct envunion121  temp2059 = ( (struct envunion121){ .fun = (  enum Unit_10  (*) (  struct env103*  ,    struct StrBuilder_98 *  ,    struct StrView_18  ) )write2060 , .env =  env->envinst103 } );
    ( temp2059.fun ( &temp2059.env ,  (  sb3017 ) ,  (  s3014 ) ) );
    struct envunion113  temp2068 = ( (struct envunion113){ .fun = (  enum Unit_10  (*) (  struct env96*  ,    struct StrBuilder_98 *  ,    struct Char_101  ) )write_dash_char1805 , .env =  env->envinst96 } );
    ( temp2068.fun ( &temp2068.env ,  (  sb3017 ) ,  ( (  nullchar579 ) ( ) ) ) );
    struct StrView_18  dynstr3018 = ( (  as_dash_str1812 ) ( (  sb3017 ) ) );
    return ( (struct StrView_18) { .f_contents = ( (struct Slice_13) { .f_ptr = ( ( (  dynstr3018 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub580 ( ( ( (  dynstr3018 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_10   set_dash_msg2055 (   struct env320* env ,    struct Editor_329 *  ed5027 ,    struct StrView_18  s5029 ) {
    ( (  reset_dash_msg1490 ) ( (  ed5027 ) ) );
    struct envunion321  temp2056 = ( (struct envunion321){ .fun = (  struct StrView_18  (*) (  struct env120*  ,    struct StrView_18  ,    enum CAllocator_12  ) )mk_dash_dyn_dash_str2057 , .env =  env->envinst120 } );
    (*  ed5027 ) .f_msg = ( ( Maybe_125_Just ) ( ( temp2056.fun ( &temp2056.env ,  (  s5029 ) ,  ( ( * (  ed5027 ) ) .f_al ) ) ) ) );
    return ( Unit_10_Unit );
}

struct StrConcatIter_2080 {
    struct StrViewIter_362  f_left;
    struct StrViewIter_362  f_right;
};

struct StrConcatIter_2079 {
    struct StrConcatIter_2080  f_left;
    struct AppendIter_755  f_right;
};

struct StrCaseIter_2078 {
    enum {
        StrCaseIter_2078_StrCaseIter1_t,
        StrCaseIter_2078_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_362  field0;
        } StrCaseIter_2078_StrCaseIter1_s;
        struct {
            struct StrConcatIter_2079  field0;
        } StrCaseIter_2078_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_2078 StrCaseIter_2078_StrCaseIter1 (  struct StrViewIter_362  field0 ) {
    return ( struct StrCaseIter_2078 ) { .tag = StrCaseIter_2078_StrCaseIter1_t, .stuff = { .StrCaseIter_2078_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_2078 StrCaseIter_2078_StrCaseIter2 (  struct StrConcatIter_2079  field0 ) {
    return ( struct StrCaseIter_2078 ) { .tag = StrCaseIter_2078_StrCaseIter2_t, .stuff = { .StrCaseIter_2078_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_2077 {
    struct StrViewIter_362  f_left;
    struct StrCaseIter_2078  f_right;
};

struct env2081 {
    struct StrBuilder_98 *  builder2956;
    struct env96 envinst96;
};

struct envunion2082 {
    enum Unit_10  (*fun) (  struct env2081*  ,    struct Char_101  );
    struct env2081 env;
};

static  struct StrConcatIter_2077   into_dash_iter2084 (    struct StrConcatIter_2077  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_420   next2088 (    struct StrConcatIter_2080 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next421 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next421 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_420   next2087 (    struct StrConcatIter_2079 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next2088 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next771 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_420   next2086 (    struct StrCaseIter_2078 *  self1730 ) {
    struct StrCaseIter_2078 *  dref1731 = (  self1730 );
    if ( (* dref1731 ).tag == StrCaseIter_2078_StrCaseIter1_t ) {
        return ( (  next421 ) ( ( & ( (* dref1731 ) .stuff .StrCaseIter_2078_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1731 ).tag == StrCaseIter_2078_StrCaseIter2_t ) {
            return ( (  next2087 ) ( ( & ( (* dref1731 ) .stuff .StrCaseIter_2078_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_420   next2085 (    struct StrConcatIter_2077 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next421 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next2086 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_10   for_dash_each2076 (    struct StrConcatIter_2077  iterable1099 ,   struct envunion2082  fun1101 ) {
    struct StrConcatIter_2077  temp2083 = ( (  into_dash_iter2084 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_2077 *  it1102 = ( &temp2083 );
    while ( ( true ) ) {
        struct Maybe_420  dref1103 = ( (  next2085 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_420_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_420_Just_t ) {
                struct envunion2082  temp2089 = (  fun1101 );
                ( temp2089.fun ( &temp2089.env ,  ( dref1103 .stuff .Maybe_420_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

struct StrCase_2093 {
    enum {
        StrCase_2093_StrCase1_t,
        StrCase_2093_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_18  field0;
        } StrCase_2093_StrCase1_s;
        struct {
            struct StrConcat_1094  field0;
        } StrCase_2093_StrCase2_s;
    } stuff;
};

static struct StrCase_2093 StrCase_2093_StrCase1 (  struct StrView_18  field0 ) {
    return ( struct StrCase_2093 ) { .tag = StrCase_2093_StrCase1_t, .stuff = { .StrCase_2093_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_2093 StrCase_2093_StrCase2 (  struct StrConcat_1094  field0 ) {
    return ( struct StrCase_2093 ) { .tag = StrCase_2093_StrCase2_t, .stuff = { .StrCase_2093_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_2080   into_dash_iter2100 (    struct StrConcat_115  dref1297 ) {
    return ( (struct StrConcatIter_2080) { .f_left = ( (  chars364 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars364 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2080   chars2099 (    struct StrConcat_115  self1308 ) {
    return ( (  into_dash_iter2100 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2079   into_dash_iter2098 (    struct StrConcat_1094  dref1297 ) {
    return ( (struct StrConcatIter_2079) { .f_left = ( (  chars2099 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars762 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2079   chars2097 (    struct StrConcat_1094  self1308 ) {
    return ( (  into_dash_iter2098 ) ( (  self1308 ) ) );
}

static  struct StrCaseIter_2078   into_dash_iter2096 (    struct StrCase_2093  self1736 ) {
    struct StrCase_2093  dref1737 = (  self1736 );
    if ( dref1737.tag == StrCase_2093_StrCase1_t ) {
        return ( ( StrCaseIter_2078_StrCaseIter1 ) ( ( (  chars364 ) ( ( dref1737 .stuff .StrCase_2093_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1737.tag == StrCase_2093_StrCase2_t ) {
            return ( ( StrCaseIter_2078_StrCaseIter2 ) ( ( (  chars2097 ) ( ( dref1737 .stuff .StrCase_2093_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_2078   chars2095 (    struct StrCase_2093  self1748 ) {
    return ( (  into_dash_iter2096 ) ( (  self1748 ) ) );
}

static  struct StrCaseIter_2078   chars2092 (    struct Maybe_125  self1762 ) {
    struct StrCase_2093  temp2094;
    struct StrCase_2093  c1763 = (  temp2094 );
    struct Maybe_125  dref1764 = (  self1762 );
    if ( dref1764.tag == Maybe_125_None_t ) {
        c1763 = ( ( StrCase_2093_StrCase1 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1764.tag == Maybe_125_Just_t ) {
            c1763 = ( ( StrCase_2093_StrCase2 ) ( ( ( StrConcat_1094_StrConcat ) ( ( ( StrConcat_115_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Just(" ) ,  ( 5 ) ) ) ,  ( dref1764 .stuff .Maybe_125_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars2095 ) ( (  c1763 ) ) );
}

static  struct StrConcatIter_2077   into_dash_iter2091 (    struct StrConcat_124  dref1297 ) {
    return ( (struct StrConcatIter_2077) { .f_left = ( (  chars364 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2092 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2077   chars2090 (    struct StrConcat_124  self1308 ) {
    return ( (  into_dash_iter2091 ) ( (  self1308 ) ) );
}

static  enum Unit_10   lam2101 (   struct env2081* env ,    struct Char_101  c2960 ) {
    struct envunion100  temp2102 = ( (struct envunion100){ .fun = (  enum Unit_10  (*) (  struct env96*  ,    struct StrBuilder_98 *  ,    struct Char_101  ) )write_dash_char1805 , .env =  env->envinst96 } );
    return ( temp2102.fun ( &temp2102.env ,  ( env->builder2956 ) ,  (  c2960 ) ) );
}

static  enum Unit_10   write2075 (   struct env104* env ,    struct StrBuilder_98 *  builder2956 ,    struct StrConcat_124  s2958 ) {
    struct env2081 envinst2081 = {
        .builder2956 =  builder2956 ,
        .envinst96 = env->envinst96 ,
    };
    ( (  for_dash_each2076 ) ( ( (  chars2090 ) ( (  s2958 ) ) ) ,  ( (struct envunion2082){ .fun = (  enum Unit_10  (*) (  struct env2081*  ,    struct Char_101  ) )lam2101 , .env =  envinst2081 } ) ) );
    return ( Unit_10_Unit );
}

static  struct StrView_18   mk_dash_dyn_dash_str2072 (   struct env122* env ,    struct StrConcat_124  s3014 ,    enum CAllocator_12  al3016 ) {
    struct StrBuilder_98  temp2073 = ( (  mk807 ) ( (  al3016 ) ) );
    struct StrBuilder_98 *  sb3017 = ( &temp2073 );
    struct envunion123  temp2074 = ( (struct envunion123){ .fun = (  enum Unit_10  (*) (  struct env104*  ,    struct StrBuilder_98 *  ,    struct StrConcat_124  ) )write2075 , .env =  env->envinst104 } );
    ( temp2074.fun ( &temp2074.env ,  (  sb3017 ) ,  (  s3014 ) ) );
    struct envunion113  temp2103 = ( (struct envunion113){ .fun = (  enum Unit_10  (*) (  struct env96*  ,    struct StrBuilder_98 *  ,    struct Char_101  ) )write_dash_char1805 , .env =  env->envinst96 } );
    ( temp2103.fun ( &temp2103.env ,  (  sb3017 ) ,  ( (  nullchar579 ) ( ) ) ) );
    struct StrView_18  dynstr3018 = ( (  as_dash_str1812 ) ( (  sb3017 ) ) );
    return ( (struct StrView_18) { .f_contents = ( (struct Slice_13) { .f_ptr = ( ( (  dynstr3018 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub580 ( ( ( (  dynstr3018 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_10   set_dash_msg2070 (   struct env322* env ,    struct Editor_329 *  ed5027 ,    struct StrConcat_124  s5029 ) {
    ( (  reset_dash_msg1490 ) ( (  ed5027 ) ) );
    struct envunion323  temp2071 = ( (struct envunion323){ .fun = (  struct StrView_18  (*) (  struct env122*  ,    struct StrConcat_124  ,    enum CAllocator_12  ) )mk_dash_dyn_dash_str2072 , .env =  env->envinst122 } );
    (*  ed5027 ) .f_msg = ( ( Maybe_125_Just ) ( ( temp2071.fun ( &temp2071.env ,  (  s5029 ) ,  ( ( * (  ed5027 ) ) .f_al ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   undefined2106 (  ) {
    enum Unit_10  temp2107;
    return (  temp2107 );
}

static  enum Unit_10   todo2105 (  ) {
    ( (  println1687 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined2106 ) ( ) );
}

static  bool   begins_dash_with2108 (    struct StrView_18  s1947 ,    struct StrView_18  beg1949 ) {
    struct StrViewIter_362  temp2109 = ( (  chars364 ) ( (  s1947 ) ) );
    struct StrViewIter_362 *  scs1950 = ( &temp2109 );
    struct StrViewIter_362  temp2110 = ( (  chars364 ) ( (  beg1949 ) ) );
    struct StrViewIter_362 *  begcs1951 = ( &temp2110 );
    while ( ( true ) ) {
        struct Tuple2_778  dref1952 = ( ( Tuple2_778_Tuple2 ) ( ( (  next421 ) ( (  scs1950 ) ) ) ,  ( (  next421 ) ( (  begcs1951 ) ) ) ) );
        if ( dref1952 .field0.tag == Maybe_420_Just_t && dref1952 .field1.tag == Maybe_420_Just_t ) {
            if ( ( !  eq429 ( ( dref1952 .field0 .stuff .Maybe_420_Just_s .field0 ) , ( dref1952 .field1 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else {
            if ( dref1952 .field0.tag == Maybe_420_None_t && dref1952 .field1.tag == Maybe_420_Just_t ) {
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

struct SliceAddressIter_2113 {
    struct Slice_29  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_2113   into_dash_iter2114 (    struct SliceAddressIter_2113  self2271 ) {
    return (  self2271 );
}

static  struct SliceAddressIter_2113   addresses2116 (    struct Slice_29  slice2268 ) {
    return ( (struct SliceAddressIter_2113) { .f_slice = (  slice2268 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_29   to_dash_slice2117 (    struct List_28  l2541 ) {
    struct Line_30 *  ptr2542 = ( ( (  l2541 ) .f_elements ) .f_ptr );
    return ( (struct Slice_29) { .f_ptr = (  ptr2542 ) , .f_count = ( (  l2541 ) .f_count ) } );
}

static  struct SliceAddressIter_2113   addresses2115 (    struct List_28  l2545 ) {
    return ( (  addresses2116 ) ( ( (  to_dash_slice2117 ) ( (  l2545 ) ) ) ) );
}

struct Maybe_2119 {
    enum {
        Maybe_2119_None_t,
        Maybe_2119_Just_t,
    } tag;
    union {
        struct {
            struct Line_30 *  field0;
        } Maybe_2119_Just_s;
    } stuff;
};

static struct Maybe_2119 Maybe_2119_Just (  struct Line_30 *  field0 ) {
    return ( struct Maybe_2119 ) { .tag = Maybe_2119_Just_t, .stuff = { .Maybe_2119_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2119   next2120 (    struct SliceAddressIter_2113 *  self2274 ) {
    size_t  off2275 = ( ( * (  self2274 ) ) .f_current_dash_offset );
    if ( (  cmp371 ( (  op_dash_add425 ( (  off2275 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2274 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2119) { .tag = Maybe_2119_None_t } );
    }
    struct Line_30 *  elem2276 = ( (  offset_dash_ptr415 ) ( ( ( ( * (  self2274 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  off2275 ) ) ) ) );
    (*  self2274 ) .f_current_dash_offset = (  op_dash_add425 ( (  off2275 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2119_Just ) ( (  elem2276 ) ) );
}

static  enum Unit_10   set_dash_filetype2111 (    struct TextBuf_164 *  self4378 ,    enum Filetype_167  type4380 ) {
    (*  self4378 ) .f_filetype = (  type4380 );
    struct SliceAddressIter_2113  temp2112 =  into_dash_iter2114 ( ( (  addresses2115 ) ( ( ( * (  self4378 ) ) .f_buf ) ) ) );
    while (true) {
        struct Maybe_2119  __cond2118 =  next2120 (&temp2112);
        if (  __cond2118 .tag == 0 ) {
            break;
        }
        struct Line_30 *  line4382 =  __cond2118 .stuff .Maybe_2119_Just_s .field0;
        (*  line4382 ) .f_invalidated = ( true );
    }
    return ( Unit_10_Unit );
}

struct envunion2122 {
    enum Unit_10  (*fun) (  struct env320*  ,    struct Editor_329 *  ,    struct StrView_18  );
    struct env320 env;
};

struct env2125 {
    bool (*  fun1151 )(    struct Char_101  );
};

struct envunion2126 {
    bool  (*fun) (  struct env2125*  ,    struct Char_101  ,    bool  );
    struct env2125 env;
};

static  bool   reduce2124 (    struct StrView_18  iterable1118 ,    bool  base1120 ,   struct envunion2126  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct StrViewIter_362  it1124 = ( (  into_dash_iter365 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_420  dref1125 = ( (  next421 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_420_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_420_Just_t ) {
                struct envunion2126  temp2127 = (  fun1122 );
                x1123 = ( temp2127.fun ( &temp2127.env ,  ( dref1125 .stuff .Maybe_420_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2128 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2128);
    abort ( );
    ( Unit_10_Unit );
    bool  temp2129;
    return (  temp2129 );
}

static  bool   lam2130 (   struct env2125* env ,    struct Char_101  e1153 ,    bool  x1155 ) {
    return ( ( ( env->fun1151 ) ( (  e1153 ) ) ) && (  x1155 ) );
}

static  bool   all2123 (    struct StrView_18  it1149 ,    bool (*  fun1151 )(    struct Char_101  ) ) {
    struct env2125 envinst2125 = {
        .fun1151 =  fun1151 ,
    };
    return ( (  reduce2124 ) ( (  it1149 ) ,  ( true ) ,  ( (struct envunion2126){ .fun = (  bool  (*) (  struct env2125*  ,    struct Char_101  ,    bool  ) )lam2130 , .env =  envinst2125 } ) ) );
}

struct envunion2132 {
    enum Unit_10  (*fun) (  struct env320*  ,    struct Editor_329 *  ,    struct StrView_18  );
    struct env320 env;
};

static  enum Unit_10   run_dash_cmd1978 (   struct env327* env ,    struct Editor_329 *  ed5051 ,    struct StrView_18  s5053 ) {
    struct Scanner_1979  temp1980 = ( (  mk_dash_from_dash_strview1981 ) ( (  s5053 ) ) );
    struct Scanner_1979 *  sc5054 = ( &temp1980 );
    ( (  drop_dash_str_dash_while1982 ) ( (  sc5054 ) ,  (  is_dash_whitespace484 ) ) );
    struct StrView_18  cmd5055 = ( (  take_dash_str_dash_while1999 ) ( (  sc5054 ) ,  (  is_dash_not_dash_whitespace2015 ) ) );
    ( (  drop_dash_str_dash_while1982 ) ( (  sc5054 ) ,  (  is_dash_whitespace484 ) ) );
    if ( (  eq682 ( (  cmd5055 ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed5051 ) .f_running = ( false );
    } else {
        if ( (  eq682 ( (  cmd5055 ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq682 ( (  cmd5055 ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) ) ) {
                struct StrView_18  filename5056 = ( (  take_dash_str_dash_while1999 ) ( (  sc5054 ) ,  (  is_dash_not_dash_whitespace2015 ) ) );
                struct Maybe_125  filename5057 = ( ( (  null2016 ) ( (  filename5056 ) ) ) ? ( (struct Maybe_125) { .tag = Maybe_125_None_t } ) : ( ( Maybe_125_Just ) ( (  filename5056 ) ) ) );
                struct envunion344  temp2019 = ( (struct envunion344){ .fun = (  struct Maybe_345  (*) (  struct env172*  ,    struct TextBuf_164 *  ,    struct Maybe_125  ) )write_dash_to_dash_file2020 , .env =  env->envinst172 } );
                struct Maybe_345  write_dash_result5058 = ( temp2019.fun ( &temp2019.env ,  ( ( * ( (  pane466 ) ( (  ed5051 ) ) ) ) .f_buf ) ,  (  filename5057 ) ) );
                struct Maybe_345  dref5059 = (  write_dash_result5058 );
                if ( dref5059.tag == Maybe_345_None_t ) {
                    if ( ( (  is_dash_none2027 ) ( (  filename5057 ) ) ) ) {
                        struct envunion328  temp2054 = ( (struct envunion328){ .fun = (  enum Unit_10  (*) (  struct env320*  ,    struct Editor_329 *  ,    struct StrView_18  ) )set_dash_msg2055 , .env =  env->envinst320 } );
                        ( temp2054.fun ( &temp2054.env ,  (  ed5051 ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"could not save changes (filename not set!!)" ) ,  ( 43 ) ) ) ) );
                    } else {
                        struct envunion342  temp2069 = ( (struct envunion342){ .fun = (  enum Unit_10  (*) (  struct env322*  ,    struct Editor_329 *  ,    struct StrConcat_124  ) )set_dash_msg2070 , .env =  env->envinst322 } );
                        ( temp2069.fun ( &temp2069.env ,  (  ed5051 ) ,  ( ( StrConcat_124_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"could not write to file " ) ,  ( 24 ) ) ) ,  (  filename5057 ) ) ) ) );
                    }
                }
                else {
                    if ( dref5059.tag == Maybe_345_Just_t ) {
                        struct envunion343  temp2104 = ( (struct envunion343){ .fun = (  enum Unit_10  (*) (  struct env318*  ,    struct Editor_329 *  ,    struct StrConcat_118  ) )set_dash_msg1769 , .env =  env->envinst318 } );
                        ( temp2104.fun ( &temp2104.env ,  (  ed5051 ) ,  ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"written " ) ,  ( 8 ) ) ) ,  ( dref5059 .stuff .Maybe_345_Just_s .field0 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)" bytes" ) ,  ( 6 ) ) ) ) ) ) );
                    }
                }
            } else {
                if ( (  eq682 ( (  cmd5055 ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  todo2105 ) ( ) );
                } else {
                    if ( (  eq682 ( (  cmd5055 ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"ln" ) ,  ( 2 ) ) ) ) ) ) {
                        struct StrView_18  what5061 = ( (  take_dash_str_dash_while1999 ) ( (  sc5054 ) ,  (  is_dash_not_dash_whitespace2015 ) ) );
                        if ( (  eq682 ( (  what5061 ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"on" ) ,  ( 2 ) ) ) ) ) ) {
                            (* (*  ed5051 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( true );
                        } else {
                            if ( (  eq682 ( (  what5061 ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"off" ) ,  ( 3 ) ) ) ) ) ) {
                                (* (*  ed5051 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( false );
                            } else {
                                if ( ( (  cmp371 ( ( (  count437 ) ( ( (  chars364 ) ( (  what5061 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with2108 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"absolute" ) ,  ( 8 ) ) ) ,  (  what5061 ) ) ) ) ) {
                                    (* (*  ed5051 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( false );
                                } else {
                                    if ( ( (  cmp371 ( ( (  count437 ) ( ( (  chars364 ) ( (  what5061 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with2108 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"relative" ) ,  ( 8 ) ) ) ,  (  what5061 ) ) ) ) ) {
                                        (* (*  ed5051 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( true );
                                    }
                                }
                            }
                        }
                    } else {
                        if ( (  eq682 ( (  cmd5055 ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"ft" ) ,  ( 2 ) ) ) ) ) ) {
                            struct StrView_18  type5062 = ( (  take_dash_str_dash_while1999 ) ( (  sc5054 ) ,  (  is_dash_not_dash_whitespace2015 ) ) );
                            struct TextBuf_164 *  tb5063 = ( ( * ( (  pane466 ) ( (  ed5051 ) ) ) ) .f_buf );
                            if ( (  eq682 ( (  type5062 ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"text" ) ,  ( 4 ) ) ) ) ) ) {
                                ( (  set_dash_filetype2111 ) ( (  tb5063 ) ,  ( Filetype_167_Text ) ) );
                            } else {
                                if ( (  eq682 ( (  type5062 ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"kc" ) ,  ( 2 ) ) ) ) ) ) {
                                    ( (  set_dash_filetype2111 ) ( (  tb5063 ) ,  ( Filetype_167_KC ) ) );
                                } else {
                                    if ( (  eq682 ( (  type5062 ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"md" ) ,  ( 2 ) ) ) ) ) ) {
                                        ( (  set_dash_filetype2111 ) ( (  tb5063 ) ,  ( Filetype_167_Markdown ) ) );
                                    } else {
                                        struct envunion2122  temp2121 = ( (struct envunion2122){ .fun = (  enum Unit_10  (*) (  struct env320*  ,    struct Editor_329 *  ,    struct StrView_18  ) )set_dash_msg2055 , .env =  env->envinst320 } );
                                        ( temp2121.fun ( &temp2121.env ,  (  ed5051 ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"unknown file type" ) ,  ( 17 ) ) ) ) );
                                    }
                                }
                            }
                        } else {
                            if ( (  eq682 ( (  cmd5055 ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"testerror" ) ,  ( 9 ) ) ) ) ) ) {
                                ( (  panic1139 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"test error" ) ,  ( 10 ) ) ) ) );
                            } else {
                                if ( (  eq682 ( (  cmd5055 ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"theme" ) ,  ( 5 ) ) ) ) ) ) {
                                } else {
                                    if ( ( (  all2123 ) ( (  cmd5055 ) ,  (  is_dash_digit1395 ) ) ) ) {
                                    } else {
                                        struct envunion2132  temp2131 = ( (struct envunion2132){ .fun = (  enum Unit_10  (*) (  struct env320*  ,    struct Editor_329 *  ,    struct StrView_18  ) )set_dash_msg2055 , .env =  env->envinst320 } );
                                        ( temp2131.fun ( &temp2131.env ,  (  ed5051 ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"unknown command" ) ,  ( 15 ) ) ) ) );
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   exit_dash_mode2133 (    struct Editor_329 *  ed5032 ) {
    struct Maybe_340  dref5033 = ( ( * (  ed5032 ) ) .f_next_dash_mode );
    if ( dref5033.tag == Maybe_340_None_t ) {
        (*  ed5032 ) .f_mode = ( (struct EditorMode_330) { .tag = EditorMode_330_Normal_t } );
    }
    else {
        if ( dref5033.tag == Maybe_340_Just_t ) {
            (*  ed5032 ) .f_mode = ( dref5033 .stuff .Maybe_340_Just_s .field0 );
            (*  ed5032 ) .f_next_dash_mode = ( (struct Maybe_340) { .tag = Maybe_340_None_t } );
        }
    }
    return ( Unit_10_Unit );
}

static  struct Char_101   from_dash_u82136 (    uint8_t  b1485 ) {
    return ( (  char_dash_from_dash_u81463 ) ( (  b1485 ) ) );
}

static  struct Char_101   ascii_dash_char2135 (    char  c1494 ) {
    return ( (  from_dash_u82136 ) ( ( (  ascii_dash_u8964 ) ( (  c1494 ) ) ) ) );
}

static  struct Maybe_1389   reduce2140 (    struct StrViewIter_362  iterable1118 ,    struct Maybe_1389  base1120 ,    struct Maybe_1389 (*  fun1122 )(    struct Char_101  ,    struct Maybe_1389  ) ) {
    struct Maybe_1389  x1123 = (  base1120 );
    struct StrViewIter_362  it1124 = ( (  into_dash_iter363 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_420  dref1125 = ( (  next421 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_420_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_420_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_420_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2141 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2141);
    abort ( );
    ( Unit_10_Unit );
    struct Maybe_1389  temp2142;
    return (  temp2142 );
}

static  struct Maybe_1389   sequence_dash_maybe2143 (    struct Char_101  e1935 ,    struct Maybe_1389  b1937 ) {
    struct Maybe_1389  dref1938 = (  b1937 );
    if ( dref1938.tag == Maybe_1389_None_t ) {
        return ( (struct Maybe_1389) { .tag = Maybe_1389_None_t } );
    }
    else {
        if ( dref1938.tag == Maybe_1389_Just_t ) {
            struct Maybe_220  dref1940 = ( (  parse_dash_digit1423 ) ( (  e1935 ) ) );
            if ( dref1940.tag == Maybe_220_None_t ) {
                return ( (struct Maybe_1389) { .tag = Maybe_1389_None_t } );
            }
            else {
                if ( dref1940.tag == Maybe_220_Just_t ) {
                    return ( ( Maybe_1389_Just ) ( (  op_dash_add435 ( (  op_dash_mul416 ( ( dref1938 .stuff .Maybe_1389_Just_s .field0 ) , (  from_dash_integral434 ( 10 ) ) ) ) , ( (  i32_dash_i641432 ) ( ( dref1940 .stuff .Maybe_220_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_1389   parse_dash_int2139 (    struct StrView_18  s1932 ) {
    struct StrViewIter_362  cs1942 = ( (  chars364 ) ( (  s1932 ) ) );
    struct Maybe_420  dref1943 = ( (  head1684 ) ( (  cs1942 ) ) );
    if ( dref1943.tag == Maybe_420_Just_t ) {
        return ( (  reduce2140 ) ( (  cs1942 ) ,  ( ( Maybe_1389_Just ) ( (  from_dash_integral434 ( 0 ) ) ) ) ,  (  sequence_dash_maybe2143 ) ) );
    }
    else {
        if ( dref1943.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_1389) { .tag = Maybe_1389_None_t } );
        }
    }
}

struct TakeWhile_2149 {
    struct StrViewIter_362  f_it;
    bool (*  f_pred )(    struct Char_101  );
};

struct Map_2148 {
    struct TakeWhile_2149  field0;
    size_t (*  field1 )(    struct Char_101  );
};

static struct Map_2148 Map_2148_Map (  struct TakeWhile_2149  field0 ,  size_t (*  field1 )(    struct Char_101  ) ) {
    return ( struct Map_2148 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2148   into_dash_iter2151 (    struct Map_2148  self804 ) {
    return (  self804 );
}

static  struct Maybe_420   next2153 (    struct TakeWhile_2149 *  self989 ) {
    struct Maybe_420  mx990 = ( (  next421 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_420  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_420_None_t ) {
        return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_420_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_420_Just ) ( ( dref991 .stuff .Maybe_420_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
            }
        }
    }
}

static  struct Maybe_345   next2152 (    struct Map_2148 *  dref806 ) {
    struct Maybe_420  dref809 = ( (  next2153 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_420_None_t ) {
        return ( (struct Maybe_345) { .tag = Maybe_345_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_420_Just_t ) {
            return ( ( Maybe_345_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_420_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce2150 (    struct Map_2148  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_2148  it1124 = ( (  into_dash_iter2151 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_345  dref1125 = ( (  next2152 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_345_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_345_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_345_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2154 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2154);
    abort ( );
    ( Unit_10_Unit );
    size_t  temp2155;
    return (  temp2155 );
}

static  size_t   lam2156 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add425 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum2147 (    struct Map_2148  it1135 ) {
    return ( (  reduce2150 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2156 ) ) );
}

static  struct TakeWhile_2149   into_dash_iter2158 (    struct TakeWhile_2149  self986 ) {
    return (  self986 );
}

static  struct Map_2148   map2157 (    struct TakeWhile_2149  iterable813 ,    size_t (*  fun815 )(    struct Char_101  ) ) {
    struct TakeWhile_2149  it816 = ( (  into_dash_iter2158 ) ( (  iterable813 ) ) );
    return ( ( Map_2148_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_2149   take_dash_while2159 (    struct StrViewIter_362  it995 ,    bool (*  pred997 )(    struct Char_101  ) ) {
    return ( (struct TakeWhile_2149) { .f_it = ( (  into_dash_iter363 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  size_t   lam2160 (    struct Char_101  c2642 ) {
    return ( (  c2642 ) .f_num_dash_bytes );
}

static  struct StrView_18   take_dash_while2146 (    struct StrView_18  self2638 ,    bool (*  fun2640 )(    struct Char_101  ) ) {
    size_t  bi2643 = ( (  sum2147 ) ( ( (  map2157 ) ( ( (  take_dash_while2159 ) ( ( (  chars364 ) ( (  self2638 ) ) ) ,  (  fun2640 ) ) ) ,  (  lam2160 ) ) ) ) );
    return ( (  byte_dash_substr965 ) ( (  self2638 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2643 ) ) );
}

static  struct StrView_18   take_dash_str_dash_while2145 (    struct Scanner_1979 *  sc3613 ,    bool (*  fun3615 )(    struct Char_101  ) ) {
    struct StrView_18  s3616 = ( (  take_dash_while2146 ) ( ( ( * (  sc3613 ) ) .f_s ) ,  (  fun3615 ) ) );
    (*  sc3613 ) .f_s = ( (  byte_dash_substr_dash_from953 ) ( ( ( * (  sc3613 ) ) .f_s ) ,  ( (  num_dash_bytes465 ) ( (  s3616 ) ) ) ) );
    return (  s3616 );
}

struct TakeWhile_2165 {
    struct StrViewIter_362  f_it;
    bool (*  f_pred )(    struct Char_101  );
};

struct Map_2164 {
    struct TakeWhile_2165  field0;
    size_t (*  field1 )(    struct Char_101  );
};

static struct Map_2164 Map_2164_Map (  struct TakeWhile_2165  field0 ,  size_t (*  field1 )(    struct Char_101  ) ) {
    return ( struct Map_2164 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2164   into_dash_iter2167 (    struct Map_2164  self804 ) {
    return (  self804 );
}

static  struct Maybe_420   next2169 (    struct TakeWhile_2165 *  self989 ) {
    struct Maybe_420  mx990 = ( (  next421 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_420  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_420_None_t ) {
        return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_420_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_420_Just ) ( ( dref991 .stuff .Maybe_420_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
            }
        }
    }
}

static  struct Maybe_345   next2168 (    struct Map_2164 *  dref806 ) {
    struct Maybe_420  dref809 = ( (  next2169 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_420_None_t ) {
        return ( (struct Maybe_345) { .tag = Maybe_345_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_420_Just_t ) {
            return ( ( Maybe_345_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_420_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce2166 (    struct Map_2164  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_2164  it1124 = ( (  into_dash_iter2167 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_345  dref1125 = ( (  next2168 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_345_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_345_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_345_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2170 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2170);
    abort ( );
    ( Unit_10_Unit );
    size_t  temp2171;
    return (  temp2171 );
}

static  size_t   lam2172 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add425 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum2163 (    struct Map_2164  it1135 ) {
    return ( (  reduce2166 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2172 ) ) );
}

static  struct TakeWhile_2165   into_dash_iter2174 (    struct TakeWhile_2165  self986 ) {
    return (  self986 );
}

static  struct Map_2164   map2173 (    struct TakeWhile_2165  iterable813 ,    size_t (*  fun815 )(    struct Char_101  ) ) {
    struct TakeWhile_2165  it816 = ( (  into_dash_iter2174 ) ( (  iterable813 ) ) );
    return ( ( Map_2164_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_2165   take_dash_while2175 (    struct StrViewIter_362  it995 ,    bool (*  pred997 )(    struct Char_101  ) ) {
    return ( (struct TakeWhile_2165) { .f_it = ( (  into_dash_iter363 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  size_t   lam2176 (    struct Char_101  c2642 ) {
    return ( (  c2642 ) .f_num_dash_bytes );
}

static  struct StrView_18   take_dash_while2162 (    struct StrView_18  self2638 ,    bool (*  fun2640 )(    struct Char_101  ) ) {
    size_t  bi2643 = ( (  sum2163 ) ( ( (  map2173 ) ( ( (  take_dash_while2175 ) ( ( (  chars364 ) ( (  self2638 ) ) ) ,  (  fun2640 ) ) ) ,  (  lam2176 ) ) ) ) );
    return ( (  byte_dash_substr965 ) ( (  self2638 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2643 ) ) );
}

static  struct StrView_18   take_dash_str_dash_while2161 (    struct Scanner_1979 *  sc3613 ,    bool (*  fun3615 )(    struct Char_101  ) ) {
    struct StrView_18  s3616 = ( (  take_dash_while2162 ) ( ( ( * (  sc3613 ) ) .f_s ) ,  (  fun3615 ) ) );
    (*  sc3613 ) .f_s = ( (  byte_dash_substr_dash_from953 ) ( ( ( * (  sc3613 ) ) .f_s ) ,  ( (  num_dash_bytes465 ) ( (  s3616 ) ) ) ) );
    return (  s3616 );
}

static  bool   lam2177 (    struct Char_101  c5047 ) {
    return ( ! ( (  is_dash_whitespace484 ) ( (  c5047 ) ) ) );
}

static  struct Theme_237 *   or_dash_else2178 (    struct Maybe_326  self1360 ,    struct Theme_237 *  alt1362 ) {
    struct Maybe_326  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_326_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_326_Just_t ) {
            return ( dref1363 .stuff .Maybe_326_Just_s .field0 );
        }
    }
}

struct SliceIter_2184 {
    struct Slice_261  f_slice;
    size_t  f_current_dash_offset;
};

struct env2185 {
    ;
    struct StrView_18  name4446;
};

struct envunion2186 {
    bool  (*fun) (  struct env2185*  ,    struct Tuple2_262  );
    struct env2185 env;
};

struct Filter_2183 {
    struct SliceIter_2184  f_og;
    struct envunion2186  f_fun;
};

struct Map_2182 {
    struct Filter_2183  field0;
    struct Theme_237 * (*  field1 )(    struct Tuple2_262  );
};

static struct Map_2182 Map_2182_Map (  struct Filter_2183  field0 ,  struct Theme_237 * (*  field1 )(    struct Tuple2_262  ) ) {
    return ( struct Map_2182 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_2188 {
    enum {
        Maybe_2188_None_t,
        Maybe_2188_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_262  field0;
        } Maybe_2188_Just_s;
    } stuff;
};

static struct Maybe_2188 Maybe_2188_Just (  struct Tuple2_262  field0 ) {
    return ( struct Maybe_2188 ) { .tag = Maybe_2188_Just_t, .stuff = { .Maybe_2188_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_262 *   offset_dash_ptr2191 (    struct Tuple2_262 *  x377 ,    int64_t  count379 ) {
    struct Tuple2_262  temp2192;
    return ( (struct Tuple2_262 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul416 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp2192 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2188   next2190 (    struct SliceIter_2184 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp371 ( (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2188) { .tag = Maybe_2188_None_t } );
    }
    struct Tuple2_262  elem2258 = ( * ( (  offset_dash_ptr2191 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2188_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_2188   next2189 (    struct Filter_2183 *  self841 ) {
    while ( ( true ) ) {
        struct Maybe_2188  dref842 = ( (  next2190 ) ( ( & ( ( * (  self841 ) ) .f_og ) ) ) );
        if ( dref842.tag == Maybe_2188_None_t ) {
            return ( (struct Maybe_2188) { .tag = Maybe_2188_None_t } );
        }
        else {
            if ( dref842.tag == Maybe_2188_Just_t ) {
                struct envunion2186  temp2193 = ( ( * (  self841 ) ) .f_fun );
                if ( ( temp2193.fun ( &temp2193.env ,  ( dref842 .stuff .Maybe_2188_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2188_Just ) ( ( dref842 .stuff .Maybe_2188_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2188  temp2194;
    return (  temp2194 );
}

static  struct Maybe_326   next2187 (    struct Map_2182 *  dref806 ) {
    struct Maybe_2188  dref809 = ( (  next2189 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_2188_None_t ) {
        return ( (struct Maybe_326) { .tag = Maybe_326_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_2188_Just_t ) {
            return ( ( Maybe_326_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_2188_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Map_2182   into_dash_iter2196 (    struct Map_2182  self804 ) {
    return (  self804 );
}

static  struct Maybe_326   head2181 (    struct Map_2182  it1167 ) {
    struct Map_2182  temp2195 = ( (  into_dash_iter2196 ) ( (  it1167 ) ) );
    return ( (  next2187 ) ( ( &temp2195 ) ) );
}

static  struct Filter_2183   into_dash_iter2198 (    struct Filter_2183  self838 ) {
    return (  self838 );
}

static  struct Map_2182   map2197 (    struct Filter_2183  iterable813 ,    struct Theme_237 * (*  fun815 )(    struct Tuple2_262  ) ) {
    struct Filter_2183  it816 = ( (  into_dash_iter2198 ) ( (  iterable813 ) ) );
    return ( ( Map_2182_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct SliceIter_2184   into_dash_iter2200 (    struct Slice_261  self2250 ) {
    return ( (struct SliceIter_2184) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_2183   filter2199 (    struct Slice_261  iterable846 ,   struct envunion2186  fun848 ) {
    struct SliceIter_2184  it849 = ( (  into_dash_iter2200 ) ( (  iterable846 ) ) );
    return ( (struct Filter_2183) { .f_og = (  it849 ) , .f_fun = (  fun848 ) } );
}

static  bool   lam2201 (   struct env2185* env ,    struct Tuple2_262  dref4447 ) {
    return ( (  begins_dash_with2108 ) ( ( dref4447 .field0 ) ,  ( env->name4446 ) ) );
}

static  struct Theme_237 *   snd2202 (    struct Tuple2_262  dref1566 ) {
    return ( dref1566 .field1 );
}

static  struct Maybe_326   match_dash_theme2180 (   struct env270* env ,    struct StrView_18  name4446 ) {
    if ( ( (  null2016 ) ( (  name4446 ) ) ) ) {
        return ( (struct Maybe_326) { .tag = Maybe_326_None_t } );
    }
    struct env2185 envinst2185 = {
        .name4446 =  name4446 ,
    };
    return ( (  head2181 ) ( ( (  map2197 ) ( ( (  filter2199 ) ( ( env->all_dash_themes4443 ) ,  ( (struct envunion2186){ .fun = (  bool  (*) (  struct env2185*  ,    struct Tuple2_262  ) )lam2201 , .env =  envinst2185 } ) ) ) ,  (  snd2202 ) ) ) ) );
}

static  enum Unit_10   live_dash_cmd2138 (   struct env324* env ,    struct Editor_329 *  ed5037 ,    struct StrView_18  cmd5039 ) {
    struct Maybe_1389  dref5040 = ( (  parse_dash_int2139 ) ( (  cmd5039 ) ) );
    if ( dref5040.tag == Maybe_1389_Just_t ) {
        int32_t  line5042 = ( (  clamp1824 ) ( ( (  i64_dash_i321434 ) ( ( dref5040 .stuff .Maybe_1389_Just_s .field0 ) ) ) ,  (  from_dash_integral92 ( 1 ) ) ,  ( (  num_dash_lines489 ) ( ( ( * ( (  pane466 ) ( (  ed5037 ) ) ) ) .f_buf ) ) ) ) );
        int32_t  line5043 = (  op_dash_sub229 ( (  line5042 ) , (  from_dash_integral92 ( 1 ) ) ) );
        ( (  set_dash_cursors356 ) ( ( (  pane466 ) ( (  ed5037 ) ) ) ,  ( (struct Pos_40) { .f_line = (  line5043 ) , .f_bi = (  from_dash_integral92 ( 0 ) ) } ) ,  ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) ,  ( CursorMovement_357_NoChanges ) ) );
    }
    else {
        if ( dref5040.tag == Maybe_1389_None_t ) {
            struct Scanner_1979  temp2144 = ( (  mk_dash_from_dash_strview1981 ) ( (  cmd5039 ) ) );
            struct Scanner_1979 *  sc5044 = ( &temp2144 );
            struct StrView_18  cmd5045 = ( (  take_dash_str_dash_while2145 ) ( (  sc5044 ) ,  (  is_dash_alpha1681 ) ) );
            if ( (  eq682 ( (  cmd5045 ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"theme" ) ,  ( 5 ) ) ) ) ) ) {
                ( (  drop_dash_str_dash_while1982 ) ( (  sc5044 ) ,  (  is_dash_whitespace484 ) ) );
                struct StrView_18  theme_dash_name5048 = ( (  take_dash_str_dash_while2161 ) ( (  sc5044 ) ,  (  lam2177 ) ) );
                struct envunion325  temp2179 = ( (struct envunion325){ .fun = (  struct Maybe_326  (*) (  struct env270*  ,    struct StrView_18  ) )match_dash_theme2180 , .env =  env->envinst270 } );
                (* (*  ed5037 ) .f_cfg ) .f_theme = ( (  or_dash_else2178 ) ( ( temp2179.fun ( &temp2179.env ,  (  theme_dash_name5048 ) ) ) ,  ( ( * (  ed5037 ) ) .f_og_dash_theme ) ) );
            } else {
            }
        }
    }
    return ( Unit_10_Unit );
}

static  struct StrViewIter_362   into_dash_iter2206 (    struct StrBuilder_98  self3011 ) {
    return ( (  chars2047 ) ( (  self3011 ) ) );
}

static  struct Maybe_420   head2204 (    struct StrBuilder_98  it1167 ) {
    struct StrViewIter_362  temp2205 = ( (  into_dash_iter2206 ) ( (  it1167 ) ) );
    return ( (  next421 ) ( ( &temp2205 ) ) );
}

static  bool   null2203 (    struct StrBuilder_98  it1176 ) {
    struct Maybe_420  dref1177 = ( (  head2204 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_420_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  uint8_t *   get_dash_ptr2213 (    struct List_11 *  list2406 ,    size_t  i2408 ) {
    if ( ( (  cmp371 ( (  i2408 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2408 ) , ( ( * (  list2406 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2408 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2406 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr561 ) ( ( ( * (  list2406 ) ) .f_elements ) ,  (  i2408 ) ) );
}

static  uint8_t   get2212 (    struct List_11 *  list2416 ,    size_t  i2418 ) {
    return ( * ( (  get_dash_ptr2213 ) ( (  list2416 ) ,  (  i2418 ) ) ) );
}

static  struct Maybe_111   last2211 (    struct List_11 *  list2503 ) {
    if ( (  eq352 ( ( ( * (  list2503 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_111) { .tag = Maybe_111_None_t } );
    } else {
        return ( ( Maybe_111_Just ) ( ( (  get2212 ) ( (  list2503 ) ,  (  op_dash_sub580 ( ( (  size1053 ) ( (  list2503 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) );
    }
}

static  enum Unit_10   remove2215 (   struct env55* env ,    struct List_11 *  list2487 ,    size_t  i2489 ) {
    struct envunion56  temp2216 = ( (struct envunion56){ .fun = (  enum Unit_10  (*) (  struct env53*  ,    struct List_11 *  ,    size_t  ,    size_t  ) )remove_dash_range1055 , .env =  env->envinst53 } );
    ( temp2216.fun ( &temp2216.env ,  (  list2487 ) ,  (  i2489 ) ,  (  op_dash_add425 ( (  i2489 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_10_Unit );
}

static  struct Maybe_111   pop2210 (   struct env57* env ,    struct List_11 *  list2506 ) {
    if ( (  eq352 ( ( ( * (  list2506 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1139 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct Maybe_111  last_dash_elem2507 = ( (  last2211 ) ( (  list2506 ) ) );
    struct envunion58  temp2214 = ( (struct envunion58){ .fun = (  enum Unit_10  (*) (  struct env55*  ,    struct List_11 *  ,    size_t  ) )remove2215 , .env =  env->envinst55 } );
    ( temp2214.fun ( &temp2214.env ,  (  list2506 ) ,  (  op_dash_sub580 ( ( ( * (  list2506 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return (  last_dash_elem2507 );
}

static  struct Maybe_111   pop2208 (   struct env109* env ,    struct StrBuilder_98 *  sb2974 ) {
    struct envunion110  temp2209 = ( (struct envunion110){ .fun = (  struct Maybe_111  (*) (  struct env57*  ,    struct List_11 *  ) )pop2210 , .env =  env->envinst57 } );
    return ( temp2209.fun ( &temp2209.env ,  ( & ( ( * (  sb2974 ) ) .f_chars ) ) ) );
}

struct envunion2218 {
    enum Unit_10  (*fun) (  struct env324*  ,    struct Editor_329 *  ,    struct StrView_18  );
    struct env324 env;
};

struct env2220 {
    ;
    struct Editor_329 *  ed5140;
};

struct envunion2221 {
    enum Unit_10  (*fun) (  struct env2220*  ,    struct StrView_18  );
    struct env2220 env;
};

static  enum Unit_10   if_dash_just2219 (    struct Maybe_125  x1601 ,   struct envunion2221  fun1603 ) {
    struct Maybe_125  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_125_Just_t ) {
        struct envunion2221  temp2222 = (  fun1603 );
        ( temp2222.fun ( &temp2222.env ,  ( dref1604 .stuff .Maybe_125_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_125_None_t ) {
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam2223 (   struct env2220* env ,    struct StrView_18  st5157 ) {
    ( (  free782 ) ( (  st5157 ) ,  ( ( * ( env->ed5140 ) ) .f_al ) ) );
    return ( Unit_10_Unit );
}

struct envunion2225 {
    enum Unit_10  (*fun) (  struct env96*  ,    struct StrBuilder_98 *  ,    struct Char_101  );
    struct env96 env;
};

static  enum Unit_10   live_dash_search2226 (    struct Editor_329 *  ed5066 ,    struct Pos_40  begin_dash_pos5068 ,    struct StrView_18  query5070 ) {
    if ( ( ! ( (  null2016 ) ( (  query5070 ) ) ) ) ) {
        struct Maybe_1851  dref5071 = ( (  search_dash_from1852 ) ( ( (  pane466 ) ( (  ed5066 ) ) ) ,  (  begin_dash_pos5068 ) ,  (  query5070 ) ) );
        if ( dref5071.tag == Maybe_1851_Just_t ) {
            ( (  set_dash_cursors356 ) ( ( (  pane466 ) ( (  ed5066 ) ) ) ,  ( dref5071 .stuff .Maybe_1851_Just_s .field0 .field1 ) ,  ( ( Maybe_47_Just ) ( ( dref5071 .stuff .Maybe_1851_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_357_NoChanges ) ) );
        }
        else {
            if ( dref5071.tag == Maybe_1851_None_t ) {
                ( (  set_dash_cursors356 ) ( ( (  pane466 ) ( (  ed5066 ) ) ) ,  (  begin_dash_pos5068 ) ,  ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) ,  ( CursorMovement_357_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors356 ) ( ( (  pane466 ) ( (  ed5066 ) ) ) ,  (  begin_dash_pos5068 ) ,  ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) ,  ( CursorMovement_357_NoChanges ) ) );
    }
    return ( Unit_10_Unit );
}

struct envunion2228 {
    struct Maybe_111  (*fun) (  struct env109*  ,    struct StrBuilder_98 *  );
    struct env109 env;
};

struct SliceIter_2230 {
    struct Slice_332  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_2230   into_dash_iter2231 (    struct Slice_332  self2250 ) {
    return ( (struct SliceIter_2230) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_2233 {
    enum {
        Maybe_2233_None_t,
        Maybe_2233_Just_t,
    } tag;
    union {
        struct {
            struct MenuItem_333  field0;
        } Maybe_2233_Just_s;
    } stuff;
};

static struct Maybe_2233 Maybe_2233_Just (  struct MenuItem_333  field0 ) {
    return ( struct Maybe_2233 ) { .tag = Maybe_2233_Just_t, .stuff = { .Maybe_2233_Just_s = { .field0 = field0 } } };
};

static  struct MenuItem_333 *   offset_dash_ptr2235 (    struct MenuItem_333 *  x377 ,    int64_t  count379 ) {
    struct MenuItem_333  temp2236;
    return ( (struct MenuItem_333 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul416 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp2236 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2233   next2234 (    struct SliceIter_2230 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp371 ( (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2233) { .tag = Maybe_2233_None_t } );
    }
    struct MenuItem_333  elem2258 = ( * ( (  offset_dash_ptr2235 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2233_Just ) ( (  elem2258 ) ) );
}

static  struct StrView_18   fst2240 (    struct Tuple2_338  dref1563 ) {
    return ( dref1563 .field0 );
}

struct Maybe_2244 {
    enum {
        Maybe_2244_None_t,
        Maybe_2244_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_338  field0;
        } Maybe_2244_Just_s;
    } stuff;
};

static struct Maybe_2244 Maybe_2244_Just (  struct Tuple2_338  field0 ) {
    return ( struct Maybe_2244 ) { .tag = Maybe_2244_Just_t, .stuff = { .Maybe_2244_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_338   undefined2245 (  ) {
    struct Tuple2_338  temp2246;
    return (  temp2246 );
}

static  struct Tuple2_338   or_dash_fail2243 (    struct Maybe_2244  x1353 ,    struct StrConcat_373  errmsg1355 ) {
    struct Maybe_2244  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_2244_None_t ) {
        ( (  panic372 ) ( (  errmsg1355 ) ) );
        return ( (  undefined2245 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_2244_Just_t ) {
            return ( dref1356 .stuff .Maybe_2244_Just_s .field0 );
        }
    }
}

static  struct Maybe_2244   try_dash_get2247 (    struct Slice_337  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp371 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_2244) { .tag = Maybe_2244_None_t } );
    }
    struct Tuple2_338 *  elem_dash_ptr2179 = ( (  offset_dash_ptr805 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_2244_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  struct Tuple2_338   get2242 (    struct Slice_337  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail2243 ) ( ( (  try_dash_get2247 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Tuple2_338   elem_dash_get2241 (    struct Slice_337  self2195 ,    size_t  idx2197 ) {
    return ( (  get2242 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

struct BufList_2250 {
    struct Slice_337  f_slice;
    size_t  f_capacity;
};

static  struct BufList_2250   mk2252 (    struct Slice_337  og4881 ) {
    return ( (struct BufList_2250) { .f_slice = ( (struct Slice_337) { .f_ptr = ( (  og4881 ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) , .f_capacity = ( (  og4881 ) .f_count ) } );
}

static  struct StrView_18   drop_dash_while_dash_from_dash_end2255 (    struct StrView_18  sv2657 ,    bool (*  fun2659 )(    struct Char_101  ) ) {
    size_t  total2660 = (  from_dash_integral0 ( 0 ) );
    size_t  until2661 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_362  temp2256 =  into_dash_iter363 ( ( (  chars364 ) ( (  sv2657 ) ) ) );
    while (true) {
        struct Maybe_420  __cond2257 =  next421 (&temp2256);
        if (  __cond2257 .tag == 0 ) {
            break;
        }
        struct Char_101  c2663 =  __cond2257 .stuff .Maybe_420_Just_s .field0;
        total2660 = (  op_dash_add425 ( (  total2660 ) , ( (  c2663 ) .f_num_dash_bytes ) ) );
        if ( ( ! ( (  fun2659 ) ( (  c2663 ) ) ) ) ) {
            until2661 = (  total2660 );
        }
    }
    return ( (  byte_dash_substr965 ) ( (  sv2657 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  until2661 ) ) );
}

static  struct StrView_18   drop_dash_while2258 (    struct StrView_18  sv2649 ,    bool (*  fun2651 )(    struct Char_101  ) ) {
    size_t  from2652 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_362  temp2259 =  into_dash_iter363 ( ( (  chars364 ) ( (  sv2649 ) ) ) );
    while (true) {
        struct Maybe_420  __cond2260 =  next421 (&temp2259);
        if (  __cond2260 .tag == 0 ) {
            break;
        }
        struct Char_101  c2654 =  __cond2260 .stuff .Maybe_420_Just_s .field0;
        if ( ( ! ( (  fun2651 ) ( (  c2654 ) ) ) ) ) {
            break;
        }
        from2652 = (  op_dash_add425 ( (  from2652 ) , ( (  c2654 ) .f_num_dash_bytes ) ) );
    }
    return ( (  byte_dash_substr_dash_from953 ) ( (  sv2649 ) ,  (  from2652 ) ) );
}

static  struct StrView_18   trim2254 (    struct StrView_18  sv2666 ) {
    return ( (  drop_dash_while_dash_from_dash_end2255 ) ( ( (  drop_dash_while2258 ) ( (  sv2666 ) ,  (  is_dash_whitespace484 ) ) ) ,  (  is_dash_whitespace484 ) ) );
}

struct env2263 {
    ;
    ;
    struct StrView_18  query4903;
};

struct envunion2264 {
    struct Maybe_2244  (*fun) (  struct env2263*  ,    struct StrView_18  );
    struct env2263 env;
};

struct MapMaybe_2262 {
    struct SliceIter_719  field0;
    struct envunion2264  field1;
};

static struct MapMaybe_2262 MapMaybe_2262_MapMaybe (  struct SliceIter_719  field0 , struct envunion2264  field1 ) {
    return ( struct MapMaybe_2262 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct MapMaybe_2262   into_dash_iter2266 (    struct MapMaybe_2262  self820 ) {
    return (  self820 );
}

static  struct Maybe_2244   next2268 (    struct MapMaybe_2262 *  dref822 ) {
    while ( ( true ) ) {
        struct Maybe_125  dref825 = ( (  next724 ) ( ( & ( (* dref822 ) .field0 ) ) ) );
        if ( dref825.tag == Maybe_125_None_t ) {
            return ( (struct Maybe_2244) { .tag = Maybe_2244_None_t } );
        }
        else {
            if ( dref825.tag == Maybe_125_Just_t ) {
                struct envunion2264  temp2269 = ( (* dref822 ) .field1 );
                struct Maybe_2244  dref827 = ( temp2269.fun ( &temp2269.env ,  ( dref825 .stuff .Maybe_125_Just_s .field0 ) ) );
                if ( dref827.tag == Maybe_2244_None_t ) {
                }
                else {
                    if ( dref827.tag == Maybe_2244_Just_t ) {
                        return ( ( Maybe_2244_Just ) ( ( dref827 .stuff .Maybe_2244_Just_s .field0 ) ) );
                    }
                }
            }
        }
    }
}

struct StrConcat_2274 {
    struct StrView_18  field0;
    struct StrConcat_1059  field1;
};

static struct StrConcat_2274 StrConcat_2274_StrConcat (  struct StrView_18  field0 ,  struct StrConcat_1059  field1 ) {
    return ( struct StrConcat_2274 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2273 {
    struct StrConcat_2274  field0;
    struct Char_101  field1;
};

static struct StrConcat_2273 StrConcat_2273_StrConcat (  struct StrConcat_2274  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_2273 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_10   print_dash_str2275 (    struct StrConcat_2274  self1302 ) {
    struct StrConcat_2274  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str379 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str1066 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str2272 (    struct StrConcat_2273  self1302 ) {
    struct StrConcat_2273  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str2275 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str386 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   panic2271 (    struct StrConcat_1059  errmsg1343 ) {
    ( (  print_dash_str2272 ) ( ( ( StrConcat_2273_StrConcat ) ( ( ( StrConcat_2274_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_10_Unit );
}

static  struct Tuple2_338 *   get_dash_ptr2277 (    struct Slice_337  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp371 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Tuple2_338 *  elem_dash_ptr2173 = ( (  offset_dash_ptr805 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_10   set2276 (    struct Slice_337  slice2187 ,    size_t  i2189 ,    struct Tuple2_338  x2191 ) {
    struct Tuple2_338 *  ep2192 = ( (  get_dash_ptr2277 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_10_Unit );
}

static  struct BufList_2250 *   add2270 (    struct BufList_2250 *  self4892 ,    struct Tuple2_338  elem4894 ) {
    if ( (  cmp371 ( ( ( ( * (  self4892 ) ) .f_slice ) .f_count ) , ( ( * (  self4892 ) ) .f_capacity ) ) != 0 ) ) {
        ( (  panic2271 ) ( ( ( StrConcat_1059_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"(BufList.add) list full (" ) ,  ( 25 ) ) ) ,  ( ( * (  self4892 ) ) .f_capacity ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    (*  self4892 ) .f_slice .f_count = (  op_dash_add425 ( ( ( ( * (  self4892 ) ) .f_slice ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    ( (  set2276 ) ( ( ( * (  self4892 ) ) .f_slice ) ,  (  op_dash_sub580 ( ( ( ( * (  self4892 ) ) .f_slice ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  (  elem4894 ) ) );
    return (  self4892 );
}

static  struct BufList_2250 *   add_dash_all2261 (    struct BufList_2250 *  self4897 ,    struct MapMaybe_2262  elems4899 ) {
    struct MapMaybe_2262  temp2265 =  into_dash_iter2266 ( (  elems4899 ) );
    while (true) {
        struct Maybe_2244  __cond2267 =  next2268 (&temp2265);
        if (  __cond2267 .tag == 0 ) {
            break;
        }
        struct Tuple2_338  elem4901 =  __cond2267 .stuff .Maybe_2244_Just_s .field0;
        ( (  add2270 ) ( (  self4897 ) ,  (  elem4901 ) ) );
    }
    return (  self4897 );
}

static  struct MapMaybe_2262   map_dash_maybe2278 (    struct Slice_17  iterable831 ,   struct envunion2264  fun833 ) {
    struct SliceIter_719  it834 = ( (  into_dash_iter727 ) ( (  iterable831 ) ) );
    return ( ( MapMaybe_2262_MapMaybe ) ( (  it834 ) ,  (  fun833 ) ) );
}

struct env2281 {
    struct StrView_18  filename4905;
};

struct envunion2282 {
    struct Tuple2_338  (*fun) (  struct env2281*  ,    size_t  );
    struct env2281 env;
};

static  struct Maybe_2244   fmap_dash_maybe2280 (    struct Maybe_345  x1585 ,   struct envunion2282  fun1587 ) {
    struct Maybe_345  dref1588 = (  x1585 );
    if ( dref1588.tag == Maybe_345_None_t ) {
        return ( (struct Maybe_2244) { .tag = Maybe_2244_None_t } );
    }
    else {
        if ( dref1588.tag == Maybe_345_Just_t ) {
            struct envunion2282  temp2283 = (  fun1587 );
            return ( ( Maybe_2244_Just ) ( ( temp2283.fun ( &temp2283.env ,  ( dref1588 .stuff .Maybe_345_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_345   find2284 (    struct StrView_18  haystack2669 ,    struct StrView_18  needle2671 ) {
    return ( (  find_dash_slice1857 ) ( ( (  haystack2669 ) .f_contents ) ,  ( (  needle2671 ) .f_contents ) ) );
}

static  struct Tuple2_338   lam2285 (   struct env2281* env ,    size_t  idx4907 ) {
    return ( ( Tuple2_338_Tuple2 ) ( ( env->filename4905 ) ,  (  idx4907 ) ) );
}

static  struct Maybe_2244   lam2279 (   struct env2263* env ,    struct StrView_18  filename4905 ) {
    struct env2281 envinst2281 = {
        .filename4905 =  filename4905 ,
    };
    return ( (  fmap_dash_maybe2280 ) ( ( (  find2284 ) ( (  filename4905 ) ,  ( env->query4903 ) ) ) ,  ( (struct envunion2282){ .fun = (  struct Tuple2_338  (*) (  struct env2281*  ,    size_t  ) )lam2285 , .env =  envinst2281 } ) ) );
}

static  enum Unit_10   query_dash_update2249 (    struct FilePicker_336 *  p4877 ) {
    struct Slice_337  temp2253 = ( ( * (  p4877 ) ) .f_rendered_dash_files );
    temp2253 .  f_count = ( ( ( * (  p4877 ) ) .f_total_dash_files ) .f_count );
    struct BufList_2250  temp2251 = ( (  mk2252 ) ( ( temp2253 ) ) );
    struct BufList_2250 *  buflist4902 = ( &temp2251 );
    struct StrView_18  query4903 = ( (  trim2254 ) ( ( (  as_dash_str1812 ) ( ( & ( ( * (  p4877 ) ) .f_query ) ) ) ) ) );
    struct env2263 envinst2263 = {
        .query4903 =  query4903 ,
    };
    ( (  add_dash_all2261 ) ( (  buflist4902 ) ,  ( (  map_dash_maybe2278 ) ( ( ( * (  p4877 ) ) .f_total_dash_files ) ,  ( (struct envunion2264){ .fun = (  struct Maybe_2244  (*) (  struct env2263*  ,    struct StrView_18  ) )lam2279 , .env =  envinst2263 } ) ) ) ) );
    (*  p4877 ) .f_rendered_dash_files = ( ( * (  buflist4902 ) ) .f_slice );
    (*  p4877 ) .f_sel = (  from_dash_integral0 ( 0 ) );
    (*  p4877 ) .f_sel_dash_size = ( (  num_dash_bytes465 ) ( (  query4903 ) ) );
    return ( Unit_10_Unit );
}

static  size_t   mod2287 (    size_t  l1544 ,    size_t  d1546 ) {
    size_t  r1547 = (  op_dash_div396 ( (  l1544 ) , (  d1546 ) ) );
    size_t  m1548 = (  op_dash_sub580 ( (  l1544 ) , (  op_dash_mul555 ( (  r1547 ) , (  d1546 ) ) ) ) );
    if ( (  cmp371 ( (  m1548 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add425 ( (  d1546 ) , (  m1548 ) ) );
    } else {
        return (  m1548 );
    }
}

static  struct Maybe_832   handle_dash_key2239 (   struct env311* env ,    struct FilePicker_336 *  p4987 ,    struct Key_829  key4989 ) {
    struct Key_829  dref4990 = (  key4989 );
    if ( dref4990.tag == Key_829_Escape_t ) {
        return ( ( Maybe_832_Just ) ( ( (struct Choice_833) { .tag = Choice_833_PickerExit_t } ) ) );
    }
    else {
        if ( dref4990.tag == Key_829_Enter_t ) {
            if ( (  eq352 ( ( ( ( * (  p4987 ) ) .f_rendered_dash_files ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
                return ( ( Maybe_832_Just ) ( ( (struct Choice_833) { .tag = Choice_833_PickerExit_t } ) ) );
            }
            ( (  assert1092 ) ( (  cmp371 ( ( ( * (  p4987 ) ) .f_sel ) , ( ( ( * (  p4987 ) ) .f_rendered_dash_files ) .f_count ) ) == 0 ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"(FilePicker.handle-key) index must point to a valid list element" ) ,  ( 64 ) ) ) ) );
            return ( ( Maybe_832_Just ) ( ( ( Choice_833_PickerFile ) ( ( (  fst2240 ) ( (  elem_dash_get2241 ( ( ( * (  p4987 ) ) .f_rendered_dash_files ) , ( ( * (  p4987 ) ) .f_sel ) ) ) ) ) ) ) ) );
        }
        else {
            if ( dref4990.tag == Key_829_Char_t ) {
                struct envunion312  temp2248 = ( (struct envunion312){ .fun = (  enum Unit_10  (*) (  struct env96*  ,    struct StrBuilder_98 *  ,    struct Char_101  ) )write_dash_char1805 , .env =  env->envinst96 } );
                ( temp2248.fun ( &temp2248.env ,  ( & ( ( * (  p4987 ) ) .f_query ) ) ,  ( (  ascii_dash_char2135 ) ( ( dref4990 .stuff .Key_829_Char_s .field0 ) ) ) ) );
                ( (  query_dash_update2249 ) ( (  p4987 ) ) );
            }
            else {
                if ( dref4990.tag == Key_829_Backspace_t ) {
                    if ( ( ! ( (  null2203 ) ( ( ( * (  p4987 ) ) .f_query ) ) ) ) ) {
                        struct envunion313  temp2286 = ( (struct envunion313){ .fun = (  struct Maybe_111  (*) (  struct env109*  ,    struct StrBuilder_98 *  ) )pop2208 , .env =  env->envinst109 } );
                        ( temp2286.fun ( &temp2286.env ,  ( & ( ( * (  p4987 ) ) .f_query ) ) ) );
                    }
                    ( (  query_dash_update2249 ) ( (  p4987 ) ) );
                }
                else {
                    if ( dref4990.tag == Key_829_Up_t ) {
                        size_t  filecount4992 = ( ( ( * (  p4987 ) ) .f_rendered_dash_files ) .f_count );
                        if ( (  eq352 ( (  filecount4992 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
                            return ( (struct Maybe_832) { .tag = Maybe_832_None_t } );
                        }
                        if ( (  eq352 ( ( ( * (  p4987 ) ) .f_sel ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
                            (*  p4987 ) .f_sel = (  op_dash_sub580 ( (  filecount4992 ) , (  from_dash_integral0 ( 1 ) ) ) );
                        } else {
                            (*  p4987 ) .f_sel = (  op_dash_sub580 ( ( ( * (  p4987 ) ) .f_sel ) , (  from_dash_integral0 ( 1 ) ) ) );
                        }
                    }
                    else {
                        if ( dref4990.tag == Key_829_Down_t ) {
                            size_t  filecount4993 = ( ( ( * (  p4987 ) ) .f_rendered_dash_files ) .f_count );
                            if ( (  eq352 ( (  filecount4993 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
                                return ( (struct Maybe_832) { .tag = Maybe_832_None_t } );
                            }
                            (*  p4987 ) .f_sel = ( (  mod2287 ) ( (  op_dash_add425 ( ( ( * (  p4987 ) ) .f_sel ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  (  filecount4993 ) ) );
                        }
                        else {
                            if ( true ) {
                            }
                        }
                    }
                }
            }
        }
    }
    return ( (struct Maybe_832) { .tag = Maybe_832_None_t } );
}

static  void *   cast_dash_ptr2292 (    struct Tuple2_338 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_10   free2291 (    enum CAllocator_12  dref2373 ,    struct Slice_337  slice2375 ) {
    if (!(  dref2373 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr2292 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   free2288 (    struct FilePicker_336  p4870 ,    enum CAllocator_12  al4872 ) {
    struct SliceIter_719  temp2289 =  into_dash_iter727 ( ( (  p4870 ) .f_total_dash_files ) );
    while (true) {
        struct Maybe_125  __cond2290 =  next724 (&temp2289);
        if (  __cond2290 .tag == 0 ) {
            break;
        }
        struct StrView_18  name4874 =  __cond2290 .stuff .Maybe_125_Just_s .field0;
        ( (  free782 ) ( (  name4874 ) ,  (  al4872 ) ) );
    }
    ( (  free728 ) ( (  al4872 ) ,  ( (  p4870 ) .f_total_dash_files ) ) );
    ( (  free2291 ) ( (  al4872 ) ,  ( (  p4870 ) .f_rendered_dash_files ) ) );
    ( (  free2052 ) ( ( & ( (  p4870 ) .f_query ) ) ) );
    return ( Unit_10_Unit );
}

struct env2301 {
    struct StrBuilder_98 *  builder2956;
    struct env96 envinst96;
};

struct envunion2302 {
    enum Unit_10  (*fun) (  struct env2301*  ,    struct Char_101  );
    struct env2301 env;
};

static  struct StrConcatIter_2080   into_dash_iter2304 (    struct StrConcatIter_2080  self1290 ) {
    return (  self1290 );
}

static  enum Unit_10   for_dash_each2300 (    struct StrConcatIter_2080  iterable1099 ,   struct envunion2302  fun1101 ) {
    struct StrConcatIter_2080  temp2303 = ( (  into_dash_iter2304 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_2080 *  it1102 = ( &temp2303 );
    while ( ( true ) ) {
        struct Maybe_420  dref1103 = ( (  next2088 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_420_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_420_Just_t ) {
                struct envunion2302  temp2305 = (  fun1101 );
                ( temp2305.fun ( &temp2305.env ,  ( dref1103 .stuff .Maybe_420_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam2306 (   struct env2301* env ,    struct Char_101  c2960 ) {
    struct envunion100  temp2307 = ( (struct envunion100){ .fun = (  enum Unit_10  (*) (  struct env96*  ,    struct StrBuilder_98 *  ,    struct Char_101  ) )write_dash_char1805 , .env =  env->envinst96 } );
    return ( temp2307.fun ( &temp2307.env ,  ( env->builder2956 ) ,  (  c2960 ) ) );
}

static  enum Unit_10   write2299 (   struct env99* env ,    struct StrBuilder_98 *  builder2956 ,    struct StrConcat_115  s2958 ) {
    struct env2301 envinst2301 = {
        .builder2956 =  builder2956 ,
        .envinst96 = env->envinst96 ,
    };
    ( (  for_dash_each2300 ) ( ( (  chars2099 ) ( (  s2958 ) ) ) ,  ( (struct envunion2302){ .fun = (  enum Unit_10  (*) (  struct env2301*  ,    struct Char_101  ) )lam2306 , .env =  envinst2301 } ) ) );
    return ( Unit_10_Unit );
}

static  struct StrView_18   mk_dash_dyn_dash_str2296 (   struct env112* env ,    struct StrConcat_115  s3014 ,    enum CAllocator_12  al3016 ) {
    struct StrBuilder_98  temp2297 = ( (  mk807 ) ( (  al3016 ) ) );
    struct StrBuilder_98 *  sb3017 = ( &temp2297 );
    struct envunion114  temp2298 = ( (struct envunion114){ .fun = (  enum Unit_10  (*) (  struct env99*  ,    struct StrBuilder_98 *  ,    struct StrConcat_115  ) )write2299 , .env =  env->envinst99 } );
    ( temp2298.fun ( &temp2298.env ,  (  sb3017 ) ,  (  s3014 ) ) );
    struct envunion113  temp2308 = ( (struct envunion113){ .fun = (  enum Unit_10  (*) (  struct env96*  ,    struct StrBuilder_98 *  ,    struct Char_101  ) )write_dash_char1805 , .env =  env->envinst96 } );
    ( temp2308.fun ( &temp2308.env ,  (  sb3017 ) ,  ( (  nullchar579 ) ( ) ) ) );
    struct StrView_18  dynstr3018 = ( (  as_dash_str1812 ) ( (  sb3017 ) ) );
    return ( (struct StrView_18) { .f_contents = ( (struct Slice_13) { .f_ptr = ( ( (  dynstr3018 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub580 ( ( ( (  dynstr3018 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_10   set_dash_msg2294 (   struct env316* env ,    struct Editor_329 *  ed5027 ,    struct StrConcat_115  s5029 ) {
    ( (  reset_dash_msg1490 ) ( (  ed5027 ) ) );
    struct envunion317  temp2295 = ( (struct envunion317){ .fun = (  struct StrView_18  (*) (  struct env112*  ,    struct StrConcat_115  ,    enum CAllocator_12  ) )mk_dash_dyn_dash_str2296 , .env =  env->envinst112 } );
    (*  ed5027 ) .f_msg = ( ( Maybe_125_Just ) ( ( temp2295.fun ( &temp2295.env ,  (  s5029 ) ,  ( ( * (  ed5027 ) ) .f_al ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   handle_dash_key1498 (   struct env820* env ,    struct Editor_329 *  ed5140 ,    struct Key_829  key5142 ) {
    struct EditorMode_330 *  dref5143 = ( & ( ( * (  ed5140 ) ) .f_mode ) );
    if ( (* dref5143 ).tag == EditorMode_330_Normal_t ) {
        enum Mode_290  dref5144 = ( ( ( * (  ed5140 ) ) .f_pane ) .f_mode );
        switch (  dref5144 ) {
            case Mode_290_Normal : {
                struct envunion828  temp1499 = ( (struct envunion828){ .fun = (  enum Unit_10  (*) (  struct env809*  ,    struct Editor_329 *  ,    struct Key_829  ) )handle_dash_normal_dash_key1500 , .env =  env->envinst809 } );
                ( temp1499.fun ( &temp1499.env ,  (  ed5140 ) ,  (  key5142 ) ) );
                break;
            }
            case Mode_290_Select : {
                struct envunion1963  temp1962 = ( (struct envunion1963){ .fun = (  enum Unit_10  (*) (  struct env809*  ,    struct Editor_329 *  ,    struct Key_829  ) )handle_dash_normal_dash_key1500 , .env =  env->envinst809 } );
                ( temp1962.fun ( &temp1962.env ,  (  ed5140 ) ,  (  key5142 ) ) );
                break;
            }
            case Mode_290_Insert : {
                struct Key_829  dref5145 = (  key5142 );
                if ( dref5145.tag == Key_829_Escape_t ) {
                    ( (  set_dash_mode1513 ) ( ( (  pane466 ) ( (  ed5140 ) ) ) ,  ( Mode_290_Normal ) ) );
                }
                else {
                    if ( dref5145.tag == Key_829_Enter_t ) {
                        int32_t  indent5146 = ( (  indent_dash_at_dash_line469 ) ( ( (  pane466 ) ( (  ed5140 ) ) ) ,  ( ( ( * ( (  pane466 ) ( (  ed5140 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion823  temp1964 = ( (struct envunion823){ .fun = (  enum Unit_10  (*) (  struct env274*  ,    struct Pane_289 *  ,    struct StrView_18  ) )add_dash_str_dash_at_dash_char1516 , .env =  env->envinst274 } );
                        ( temp1964.fun ( &temp1964.env ,  ( (  pane466 ) ( (  ed5140 ) ) ) ,  ( (  from_dash_charlike699 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1506 ) ( ( (  pane466 ) ( (  ed5140 ) ) ) ) );
                        struct envunion821  temp1965 = ( (struct envunion821){ .fun = (  enum Unit_10  (*) (  struct env296*  ,    struct Pane_289 *  ,    int32_t  ) )indent_dash_at_dash_current1651 , .env =  env->envinst296 } );
                        ( temp1965.fun ( &temp1965.env ,  ( (  pane466 ) ( (  ed5140 ) ) ) ,  (  indent5146 ) ) );
                    }
                    else {
                        if ( dref5145.tag == Key_829_Backspace_t ) {
                            struct envunion826  temp1966 = ( (struct envunion826){ .fun = (  enum Unit_10  (*) (  struct env277*  ,    struct Pane_289 *  ) )backspace1967 , .env =  env->envinst277 } );
                            ( temp1966.fun ( &temp1966.env ,  ( (  pane466 ) ( (  ed5140 ) ) ) ) );
                        }
                        else {
                            if ( dref5145.tag == Key_829_Char_t ) {
                                struct Array_1970  temp1974 = ( (struct Array_1970) { ._arr = { ( dref5145 .stuff .Key_829_Char_s .field0 ) } } );
                                struct Array_1970  temp1972 = ( (  from_dash_listlike1973 ) ( ( &temp1974 ) ) );
                                struct StrView_18  s5148 = ( (  from_dash_ascii_dash_slice1386 ) ( ( (  as_dash_slice1969 ) ( ( &temp1972 ) ) ) ) );
                                struct envunion1976  temp1975 = ( (struct envunion1976){ .fun = (  enum Unit_10  (*) (  struct env274*  ,    struct Pane_289 *  ,    struct StrView_18  ) )add_dash_str_dash_at_dash_char1516 , .env =  env->envinst274 } );
                                ( temp1975.fun ( &temp1975.env ,  ( (  pane466 ) ( (  ed5140 ) ) ) ,  (  s5148 ) ) );
                                ( (  move_dash_right1506 ) ( ( (  pane466 ) ( (  ed5140 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref5143 ).tag == EditorMode_330_Cmd_t ) {
            struct Key_829  dref5151 = (  key5142 );
            if ( dref5151.tag == Key_829_Escape_t ) {
                ( (  set_dash_cursors356 ) ( ( (  pane466 ) ( (  ed5140 ) ) ) ,  ( (* dref5143 ) .stuff .EditorMode_330_Cmd_s .field0 ) ,  ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) ,  ( CursorMovement_357_UpdateVI ) ) );
                (*  ed5140 ) .f_mode = ( (struct EditorMode_330) { .tag = EditorMode_330_Normal_t } );
                (* (*  ed5140 ) .f_cfg ) .f_theme = ( ( * (  ed5140 ) ) .f_og_dash_theme );
            }
            else {
                if ( dref5151.tag == Key_829_Enter_t ) {
                    struct envunion830  temp1977 = ( (struct envunion830){ .fun = (  enum Unit_10  (*) (  struct env327*  ,    struct Editor_329 *  ,    struct StrView_18  ) )run_dash_cmd1978 , .env =  env->envinst327 } );
                    ( temp1977.fun ( &temp1977.env ,  (  ed5140 ) ,  ( (  as_dash_str1812 ) ( ( & ( (* dref5143 ) .stuff .EditorMode_330_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free2052 ) ( ( & ( (* dref5143 ) .stuff .EditorMode_330_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors356 ) ( ( (  pane466 ) ( (  ed5140 ) ) ) ,  ( ( * ( (  pane466 ) ( (  ed5140 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) ,  ( CursorMovement_357_UpdateVI ) ) );
                    ( (  exit_dash_mode2133 ) ( (  ed5140 ) ) );
                    (*  ed5140 ) .f_og_dash_theme = ( ( * ( ( * (  ed5140 ) ) .f_cfg ) ) .f_theme );
                }
                else {
                    if ( dref5151.tag == Key_829_Char_t ) {
                        struct envunion824  temp2134 = ( (struct envunion824){ .fun = (  enum Unit_10  (*) (  struct env96*  ,    struct StrBuilder_98 *  ,    struct Char_101  ) )write_dash_char1805 , .env =  env->envinst96 } );
                        ( temp2134.fun ( &temp2134.env ,  ( & ( (* dref5143 ) .stuff .EditorMode_330_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char2135 ) ( ( dref5151 .stuff .Key_829_Char_s .field0 ) ) ) ) );
                        struct envunion822  temp2137 = ( (struct envunion822){ .fun = (  enum Unit_10  (*) (  struct env324*  ,    struct Editor_329 *  ,    struct StrView_18  ) )live_dash_cmd2138 , .env =  env->envinst324 } );
                        ( temp2137.fun ( &temp2137.env ,  (  ed5140 ) ,  ( (  as_dash_str1812 ) ( ( & ( (* dref5143 ) .stuff .EditorMode_330_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref5151.tag == Key_829_Backspace_t ) {
                            if ( ( ! ( (  null2203 ) ( ( (* dref5143 ) .stuff .EditorMode_330_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion825  temp2207 = ( (struct envunion825){ .fun = (  struct Maybe_111  (*) (  struct env109*  ,    struct StrBuilder_98 *  ) )pop2208 , .env =  env->envinst109 } );
                                ( temp2207.fun ( &temp2207.env ,  ( & ( (* dref5143 ) .stuff .EditorMode_330_Cmd_s .field1 ) ) ) );
                            }
                            struct envunion2218  temp2217 = ( (struct envunion2218){ .fun = (  enum Unit_10  (*) (  struct env324*  ,    struct Editor_329 *  ,    struct StrView_18  ) )live_dash_cmd2138 , .env =  env->envinst324 } );
                            ( temp2217.fun ( &temp2217.env ,  (  ed5140 ) ,  ( (  as_dash_str1812 ) ( ( & ( (* dref5143 ) .stuff .EditorMode_330_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref5143 ).tag == EditorMode_330_Search_t ) {
                struct Key_829  dref5155 = (  key5142 );
                if ( dref5155.tag == Key_829_Escape_t ) {
                    ( (  set_dash_cursors356 ) ( ( (  pane466 ) ( (  ed5140 ) ) ) ,  ( (* dref5143 ) .stuff .EditorMode_330_Search_s .field0 ) ,  ( (struct Maybe_47) { .tag = Maybe_47_None_t } ) ,  ( CursorMovement_357_UpdateVI ) ) );
                    (*  ed5140 ) .f_mode = ( (struct EditorMode_330) { .tag = EditorMode_330_Normal_t } );
                }
                else {
                    if ( dref5155.tag == Key_829_Enter_t ) {
                        ( (  set_dash_cursors356 ) ( ( (  pane466 ) ( (  ed5140 ) ) ) ,  ( ( * ( (  pane466 ) ( (  ed5140 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane466 ) ( (  ed5140 ) ) ) ) .f_sel ) ,  ( CursorMovement_357_UpdateVI ) ) );
                        struct env2220 envinst2220 = {
                            .ed5140 =  ed5140 ,
                        };
                        ( (  if_dash_just2219 ) ( ( ( * (  ed5140 ) ) .f_search_dash_term ) ,  ( (struct envunion2221){ .fun = (  enum Unit_10  (*) (  struct env2220*  ,    struct StrView_18  ) )lam2223 , .env =  envinst2220 } ) ) );
                        if ( ( ! ( (  null2203 ) ( ( (* dref5143 ) .stuff .EditorMode_330_Search_s .field1 ) ) ) ) ) {
                            struct Pos_40  to5158 = ( ( * ( (  pane466 ) ( (  ed5140 ) ) ) ) .f_cursor );
                            struct Pos_40  from5159 = ( (  or_dash_else1745 ) ( ( ( * ( (  pane466 ) ( (  ed5140 ) ) ) ) .f_sel ) ,  (  to5158 ) ) );
                            (*  ed5140 ) .f_search_dash_term = ( ( Maybe_125_Just ) ( ( (  as_dash_str1812 ) ( ( & ( (* dref5143 ) .stuff .EditorMode_330_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed5140 ) .f_search_dash_term = ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
                        }
                    }
                    else {
                        if ( dref5155.tag == Key_829_Char_t ) {
                            struct envunion2225  temp2224 = ( (struct envunion2225){ .fun = (  enum Unit_10  (*) (  struct env96*  ,    struct StrBuilder_98 *  ,    struct Char_101  ) )write_dash_char1805 , .env =  env->envinst96 } );
                            ( temp2224.fun ( &temp2224.env ,  ( & ( (* dref5143 ) .stuff .EditorMode_330_Search_s .field1 ) ) ,  ( (  ascii_dash_char2135 ) ( ( dref5155 .stuff .Key_829_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search2226 ) ( (  ed5140 ) ,  ( (* dref5143 ) .stuff .EditorMode_330_Search_s .field0 ) ,  ( (  as_dash_str1812 ) ( ( & ( (* dref5143 ) .stuff .EditorMode_330_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref5155.tag == Key_829_Backspace_t ) {
                                if ( ( ! ( (  null2203 ) ( ( (* dref5143 ) .stuff .EditorMode_330_Search_s .field1 ) ) ) ) ) {
                                    struct envunion2228  temp2227 = ( (struct envunion2228){ .fun = (  struct Maybe_111  (*) (  struct env109*  ,    struct StrBuilder_98 *  ) )pop2208 , .env =  env->envinst109 } );
                                    ( temp2227.fun ( &temp2227.env ,  ( & ( (* dref5143 ) .stuff .EditorMode_330_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search2226 ) ( (  ed5140 ) ,  ( (* dref5143 ) .stuff .EditorMode_330_Search_s .field0 ) ,  ( (  as_dash_str1812 ) ( ( & ( (* dref5143 ) .stuff .EditorMode_330_Search_s .field1 ) ) ) ) ) );
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
                if ( (* dref5143 ).tag == EditorMode_330_Menu_t ) {
                    struct Key_829  dref5162 = (  key5142 );
                    if ( dref5162.tag == Key_829_Char_t ) {
                        struct SliceIter_2230  temp2229 =  into_dash_iter2231 ( ( ( (* dref5143 ) .stuff .EditorMode_330_Menu_s .field0 ) .f_items ) );
                        while (true) {
                            struct Maybe_2233  __cond2232 =  next2234 (&temp2229);
                            if (  __cond2232 .tag == 0 ) {
                                break;
                            }
                            struct MenuItem_333  menu_dash_item5165 =  __cond2232 .stuff .Maybe_2233_Just_s .field0;
                            if ( (  eq1358 ( ( (  menu_dash_item5165 ) .f_key ) , ( dref5162 .stuff .Key_829_Char_s .field0 ) ) ) ) {
                                struct envunion339  temp2237 = ( (  menu_dash_item5165 ) .f_action );
                                ( temp2237.fun ( &temp2237.env ,  (  ed5140 ) ) );
                            }
                        }
                        ( (  exit_dash_mode2133 ) ( (  ed5140 ) ) );
                    }
                    else {
                        if ( dref5162.tag == Key_829_Escape_t ) {
                            ( (  exit_dash_mode2133 ) ( (  ed5140 ) ) );
                        }
                        else {
                            if ( true ) {
                            }
                        }
                    }
                }
                else {
                    if ( (* dref5143 ).tag == EditorMode_330_Picker_t ) {
                        struct envunion831  temp2238 = ( (struct envunion831){ .fun = (  struct Maybe_832  (*) (  struct env311*  ,    struct FilePicker_336 *  ,    struct Key_829  ) )handle_dash_key2239 , .env =  env->envinst311 } );
                        struct Maybe_832  dref5167 = ( temp2238.fun ( &temp2238.env ,  ( & ( (* dref5143 ) .stuff .EditorMode_330_Picker_s .field0 ) ) ,  (  key5142 ) ) );
                        if ( dref5167.tag == Maybe_832_Just_t && dref5167 .stuff .Maybe_832_Just_s .field0.tag == Choice_833_PickerExit_t ) {
                            ( (  free2288 ) ( ( (* dref5143 ) .stuff .EditorMode_330_Picker_s .field0 ) ,  ( ( * (  ed5140 ) ) .f_al ) ) );
                            ( (  exit_dash_mode2133 ) ( (  ed5140 ) ) );
                        }
                        else {
                            if ( dref5167.tag == Maybe_832_Just_t && dref5167 .stuff .Maybe_832_Just_s .field0.tag == Choice_833_PickerFile_t ) {
                                struct envunion827  temp2293 = ( (struct envunion827){ .fun = (  enum Unit_10  (*) (  struct env316*  ,    struct Editor_329 *  ,    struct StrConcat_115  ) )set_dash_msg2294 , .env =  env->envinst316 } );
                                ( temp2293.fun ( &temp2293.env ,  (  ed5140 ) ,  ( ( StrConcat_115_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"selected file: " ) ,  ( 15 ) ) ) ,  ( dref5167 .stuff .Maybe_832_Just_s .field0 .stuff .Choice_833_PickerFile_s .field0 ) ) ) ) );
                                ( (  free2288 ) ( ( (* dref5143 ) .stuff .EditorMode_330_Picker_s .field0 ) ,  ( ( * (  ed5140 ) ) .f_al ) ) );
                                ( (  exit_dash_mode2133 ) ( (  ed5140 ) ) );
                            }
                            else {
                                if ( dref5167.tag == Maybe_832_None_t ) {
                                }
                            }
                        }
                    }
                    else {
                        if ( true ) {
                            ( (  todo2105 ) ( ) );
                        }
                    }
                }
            }
        }
    }
    return ( Unit_10_Unit );
}

struct envunion2310 {
    bool  (*fun) (  struct env148*  ,    struct Screen_836 *  );
    struct env148 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed2311 (   struct env148* env ,    struct Screen_836 *  screen3855 ) {
    struct Tui_146 *  tui3856 = ( ( * (  screen3855 ) ) .f_tui );
    struct envunion149  temp2312 = ( (struct envunion149){ .fun = (  bool  (*) (  struct env143*  ,    struct Tui_146 *  ) )update_dash_dimensions1310 , .env =  env->envinst143 } );
    bool  updated_dash_dimensions3857 = ( temp2312.fun ( &temp2312.env ,  (  tui3856 ) ) );
    if ( ( ! (  updated_dash_dimensions3857 ) ) ) {
        return ( false );
    }
    (*  screen3855 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3858 = ( ( * ( ( * (  screen3855 ) ) .f_tui ) ) .f_width );
    uint32_t  h3859 = ( ( * ( ( * (  screen3855 ) ) .f_tui ) ) .f_height );
    size_t  nusz3860 = ( (  u32_dash_size1259 ) ( (  op_dash_mul232 ( (  w3858 ) , (  h3859 ) ) ) ) );
    if ( (  cmp371 ( (  nusz3860 ) , ( ( ( * (  screen3855 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_836  nuscreen3861 = ( (  mk_dash_screen1253 ) ( (  tui3856 ) ,  ( ( * (  screen3855 ) ) .f_al ) ) );
    (*  screen3855 ) .f_current = ( (  nuscreen3861 ) .f_current );
    (*  screen3855 ) .f_previous = ( (  nuscreen3861 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw2313 (    struct Tui_146 *  tui3785 ) {
    bool  redraw3786 = ( ( * (  tui3785 ) ) .f_should_dash_redraw );
    (*  tui3785 ) .f_should_dash_redraw = ( false );
    return (  redraw3786 );
}

struct env2317 {
    struct Slice_837  s2328;
    struct Cell_838 (*  fun2330 )(    struct Cell_838  );
    ;
    ;
    ;
};

struct envunion2318 {
    enum Unit_10  (*fun) (  struct env2317*  ,    int32_t  );
    struct env2317 env;
};

static  enum Unit_10   for_dash_each2316 (    struct Range_215  iterable1099 ,   struct envunion2318  fun1101 ) {
    struct RangeIter_218  temp2319 = ( (  into_dash_iter219 ) ( (  iterable1099 ) ) );
    struct RangeIter_218 *  it1102 = ( &temp2319 );
    while ( ( true ) ) {
        struct Maybe_220  dref1103 = ( (  next221 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_220_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_220_Just_t ) {
                struct envunion2318  temp2320 = (  fun1101 );
                ( temp2320.fun ( &temp2320.env ,  ( dref1103 .stuff .Maybe_220_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam2321 (   struct env2317* env ,    int32_t  i2332 ) {
    return ( (  set1274 ) ( ( env->s2328 ) ,  ( (  i32_dash_size349 ) ( (  i2332 ) ) ) ,  ( ( env->fun2330 ) ( (  elem_dash_get1278 ( ( env->s2328 ) , ( (  i32_dash_size349 ) ( (  i2332 ) ) ) ) ) ) ) ) );
}

static  enum Unit_10   map2315 (    struct Slice_837  s2328 ,    struct Cell_838 (*  fun2330 )(    struct Cell_838  ) ) {
    struct env2317 envinst2317 = {
        .s2328 =  s2328 ,
        .fun2330 =  fun2330 ,
    };
    ( (  for_dash_each2316 ) ( ( (  to228 ) ( (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_i32380 ) ( (  op_dash_sub580 ( ( (  s2328 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion2318){ .fun = (  enum Unit_10  (*) (  struct env2317*  ,    int32_t  ) )lam2321 , .env =  envinst2317 } ) ) );
    return ( Unit_10_Unit );
}

static  struct Cell_838   lam2322 (    struct Cell_838  dref3822 ) {
    return ( (  default_dash_cell1286 ) ( ) );
}

static  enum Unit_10   clear_dash_screen2314 (    struct Screen_836 *  screen3821 ) {
    ( (  map2315 ) ( ( ( * (  screen3821 ) ) .f_current ) ,  (  lam2322 ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   set_dash_screen_dash_fg2323 (    struct Screen_836 *  screen3864 ,    struct Color_203  c3866 ) {
    (*  screen3864 ) .f_default_dash_fg = (  c3866 );
    return ( Unit_10_Unit );
}

static  enum Unit_10   set_dash_screen_dash_bg2324 (    struct Screen_836 *  screen3869 ,    struct Color_203  c3871 ) {
    (*  screen3869 ) .f_default_dash_bg = (  c3871 );
    return ( Unit_10_Unit );
}

static  int32_t   cast2328 (    uint32_t  x395 ) {
    return ( (int32_t ) (  x395 ) );
}

static  int32_t   u32_dash_i322327 (    uint32_t  x738 ) {
    return ( (  cast2328 ) ( (  x738 ) ) );
}

struct Maybe_2333 {
    enum {
        Maybe_2333_None_t,
        Maybe_2333_Just_t,
    } tag;
    union {
        struct {
            struct Cell_838 *  field0;
        } Maybe_2333_Just_s;
    } stuff;
};

static struct Maybe_2333 Maybe_2333_Just (  struct Cell_838 *  field0 ) {
    return ( struct Maybe_2333 ) { .tag = Maybe_2333_Just_t, .stuff = { .Maybe_2333_Just_s = { .field0 = field0 } } };
};

static  struct Cell_838 *   undefined2334 (  ) {
    struct Cell_838 *  temp2335;
    return (  temp2335 );
}

static  struct Cell_838 *   or_dash_fail2332 (    struct Maybe_2333  x1353 ,    struct StrView_18  errmsg1355 ) {
    struct Maybe_2333  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_2333_None_t ) {
        ( (  panic1139 ) ( (  errmsg1355 ) ) );
        return ( (  undefined2334 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_2333_Just_t ) {
            return ( dref1356 .stuff .Maybe_2333_Just_s .field0 );
        }
    }
}

static  struct Maybe_2333   get_dash_cell_dash_ptr2336 (    struct Screen_836 *  screen3885 ,    int32_t  x3887 ,    int32_t  y3889 ) {
    int32_t  w3890 = ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3885 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp222 ( (  x3887 ) , (  from_dash_integral92 ( 0 ) ) ) == 0 ) || (  cmp222 ( (  x3887 ) , (  w3890 ) ) != 0 ) ) ) {
        return ( (struct Maybe_2333) { .tag = Maybe_2333_None_t } );
    }
    if ( ( (  cmp222 ( (  y3889 ) , (  from_dash_integral92 ( 0 ) ) ) == 0 ) || (  cmp222 ( (  y3889 ) , ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3885 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_2333) { .tag = Maybe_2333_None_t } );
    }
    size_t  i3891 = ( (  i32_dash_size349 ) ( (  op_dash_add224 ( (  op_dash_mul1866 ( (  y3889 ) , (  w3890 ) ) ) , (  x3887 ) ) ) ) );
    return ( ( Maybe_2333_Just ) ( ( (  get_dash_ptr1275 ) ( ( ( * (  screen3885 ) ) .f_current ) ,  (  i3891 ) ) ) ) );
}

static  enum Unit_10   fill_dash_default2325 (    struct Screen_836 *  screen3894 ) {
    struct RangeIter_218  temp2326 =  into_dash_iter219 ( ( (  to228 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  op_dash_sub229 ( ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3894 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_220  __cond2329 =  next221 (&temp2326);
        if (  __cond2329 .tag == 0 ) {
            break;
        }
        int32_t  y3896 =  __cond2329 .stuff .Maybe_220_Just_s .field0;
        struct RangeIter_218  temp2330 =  into_dash_iter219 ( ( (  to228 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  op_dash_sub229 ( ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3894 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_220  __cond2331 =  next221 (&temp2330);
            if (  __cond2331 .tag == 0 ) {
                break;
            }
            int32_t  x3898 =  __cond2331 .stuff .Maybe_220_Just_s .field0;
            struct Cell_838 *  cell3899 = ( (  or_dash_fail2332 ) ( ( (  get_dash_cell_dash_ptr2336 ) ( (  screen3894 ) ,  (  x3898 ) ,  (  y3896 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"no cell??" ) ,  ( 9 ) ) ) ) );
            (*  cell3899 ) .f_bg = ( ( * (  screen3894 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_10_Unit );
}

struct envunion2338 {
    enum Unit_10  (*fun) (  struct env834*  ,    struct Screen_836 *  ,    struct Editor_329 *  );
    struct env834 env;
};

struct IntStrIter_2343 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_2343   into_dash_iter2345 (    struct IntStrIter_2343  self1396 ) {
    return (  self1396 );
}

struct env2349 {
    int32_t  base1386;
    ;
};

struct envunion2350 {
    int32_t  (*fun) (  struct env2349*  ,    int32_t  ,    int32_t  );
    struct env2349 env;
};

static  int32_t   reduce2348 (    struct Range_215  iterable1118 ,    int32_t  base1120 ,   struct envunion2350  fun1122 ) {
    int32_t  x1123 = (  base1120 );
    struct RangeIter_218  it1124 = ( (  into_dash_iter219 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_220  dref1125 = ( (  next221 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_220_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_220_Just_t ) {
                struct envunion2350  temp2351 = (  fun1122 );
                x1123 = ( temp2351.fun ( &temp2351.env ,  ( dref1125 .stuff .Maybe_220_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2352 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2352);
    abort ( );
    ( Unit_10_Unit );
    int32_t  temp2353;
    return (  temp2353 );
}

static  int32_t   lam2354 (   struct env2349* env ,    int32_t  item1390 ,    int32_t  x1392 ) {
    return (  op_dash_mul1866 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  int32_t   pow2347 (    int32_t  base1386 ,    int32_t  p1388 ) {
    struct env2349 envinst2349 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce2348 ) ( ( (  to228 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  op_dash_sub229 ( (  p1388 ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral92 ( 1 ) ) ,  ( (struct envunion2350){ .fun = (  int32_t  (*) (  struct env2349*  ,    int32_t  ,    int32_t  ) )lam2354 , .env =  envinst2349 } ) ) );
}

static  struct Maybe_420   next2346 (    struct IntStrIter_2343 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_420_Just ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp222 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral92 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
    }
    int32_t  trim_dash_down1400 = ( (  pow2347 ) ( (  from_dash_integral92 ( 10 ) ) ,  (  op_dash_sub229 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral92 ( 1 ) ) ) ) ) );
    int32_t  upper1401 = (  op_dash_div1865 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    int32_t  upper_dash_mask1402 = (  op_dash_mul1866 ( (  op_dash_div1865 ( (  upper1401 ) , (  from_dash_integral92 ( 10 ) ) ) ) , (  from_dash_integral92 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast676 ) ( (  op_dash_sub229 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub229 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral92 ( 1 ) ) ) );
    struct Char_101  digit_dash_char1404 = ( (  char_dash_from_dash_u81463 ) ( (  op_dash_add1355 ( (  digit1403 ) , (  from_dash_integral397 ( 48 ) ) ) ) ) );
    return ( ( Maybe_420_Just ) ( (  digit_dash_char1404 ) ) );
}

static  size_t   reduce2344 (    struct IntStrIter_2343  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_101  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct IntStrIter_2343  it1124 = ( (  into_dash_iter2345 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_420  dref1125 = ( (  next2346 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_420_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_420_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_420_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2355 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2355);
    abort ( );
    ( Unit_10_Unit );
    size_t  temp2356;
    return (  temp2356 );
}

static  size_t   lam2357 (    struct Char_101  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add425 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2342 (    struct IntStrIter_2343  it1129 ) {
    return ( (  reduce2344 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2357 ) ) );
}

static  int32_t   count_dash_digits2360 (    int32_t  self1407 ) {
    if ( (  eq660 ( (  self1407 ) , (  from_dash_integral92 ( 0 ) ) ) ) ) {
        return (  from_dash_integral92 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral92 ( 0 ) );
    while ( (  cmp222 ( (  self1407 ) , (  from_dash_integral92 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div1865 ( (  self1407 ) , (  from_dash_integral92 ( 10 ) ) ) );
        digits1408 = (  op_dash_add224 ( (  digits1408 ) , (  from_dash_integral92 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_2343   int_dash_iter2359 (    int32_t  int1411 ) {
    if ( (  cmp222 ( (  int1411 ) , (  from_dash_integral92 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_2343) { .f_int = (  op_dash_neg1138 ( (  int1411 ) ) ) , .f_len = ( (  count_dash_digits2360 ) ( (  op_dash_neg1138 ( (  int1411 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_2343) { .f_int = (  int1411 ) , .f_len = ( (  count_dash_digits2360 ) ( (  int1411 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_2343   chars2358 (    int32_t  self1420 ) {
    return ( (  int_dash_iter2359 ) ( (  self1420 ) ) );
}

static  int32_t   screen_dash_width2362 (    struct ScreenDims_839  sd4526 ) {
    return (  op_dash_add224 ( (  op_dash_sub229 ( ( (  sd4526 ) .f_to_dash_sx ) , ( (  sd4526 ) .f_from_dash_sx ) ) ) , (  from_dash_integral92 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height2363 (    struct ScreenDims_839  sd4529 ) {
    return (  op_dash_add224 ( (  op_dash_sub229 ( ( (  sd4529 ) .f_to_dash_sy ) , ( (  sd4529 ) .f_from_dash_sy ) ) ) , (  from_dash_integral92 ( 1 ) ) ) );
}

static  enum Unit_10   update_dash_screen_dash_offset2361 (    struct Pane_289 *  pane4532 ,    struct ScreenDims_839  sd4534 ) {
    struct Pos_40  cur4535 = ( ( * (  pane4532 ) ) .f_cursor );
    int32_t  cur_dash_sx4536 = ( (  pos_dash_vi360 ) ( ( ( * (  pane4532 ) ) .f_buf ) ,  (  cur4535 ) ) );
    struct ScreenCursorOffset_291  sc_dash_off4537 = ( ( * (  pane4532 ) ) .f_sc_dash_off );
    int32_t  sw4538 = (  op_dash_sub229 ( ( (  screen_dash_width2362 ) ( (  sd4534 ) ) ) , (  from_dash_integral92 ( 1 ) ) ) );
    int32_t  sh4539 = (  op_dash_sub229 ( ( (  screen_dash_height2363 ) ( (  sd4534 ) ) ) , (  from_dash_integral92 ( 1 ) ) ) );
    int32_t  margin4540 = (  from_dash_integral92 ( 5 ) );
    int32_t  csi4541 = ( (  pos_dash_vi360 ) ( ( ( * (  pane4532 ) ) .f_buf ) ,  (  cur4535 ) ) );
    int32_t  csx4542 = (  op_dash_sub229 ( (  csi4541 ) , ( (  sc_dash_off4537 ) .f_screen_dash_left ) ) );
    int32_t  csy4543 = (  op_dash_sub229 ( ( (  cur4535 ) .f_line ) , ( (  sc_dash_off4537 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left4544 = ( (  sc_dash_off4537 ) .f_screen_dash_left );
    if ( (  cmp222 ( (  csx4542 ) , (  margin4540 ) ) == 0 ) ) {
        nu_dash_screen_dash_left4544 = (  op_dash_sub229 ( (  csi4541 ) , (  margin4540 ) ) );
    } else {
        if ( (  cmp222 ( (  csx4542 ) , (  op_dash_sub229 ( (  sw4538 ) , (  margin4540 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left4544 = (  op_dash_sub229 ( (  csi4541 ) , (  op_dash_sub229 ( (  sw4538 ) , (  margin4540 ) ) ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left4545 = ( (  max443 ) ( (  nu_dash_screen_dash_left4544 ) ,  (  from_dash_integral92 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top4546 = ( (  sc_dash_off4537 ) .f_screen_dash_top );
    if ( (  cmp222 ( (  csy4543 ) , (  margin4540 ) ) == 0 ) ) {
        nu_dash_screen_dash_top4546 = (  op_dash_sub229 ( ( (  cur4535 ) .f_line ) , (  margin4540 ) ) );
    } else {
        if ( (  cmp222 ( (  csy4543 ) , (  op_dash_sub229 ( (  sh4539 ) , (  margin4540 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top4546 = (  op_dash_sub229 ( ( (  cur4535 ) .f_line ) , (  op_dash_sub229 ( (  sh4539 ) , (  margin4540 ) ) ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top4547 = ( (  max443 ) ( (  nu_dash_screen_dash_top4546 ) ,  (  from_dash_integral92 ( 0 ) ) ) );
    (*  pane4532 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_291) { .f_screen_dash_top = (  nu_dash_screen_dash_top4547 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left4545 ) } );
    return ( Unit_10_Unit );
}

static  enum Unit_10   set_dash_screen_dash_colors2368 (    struct Screen_836 *  screen3874 ,    struct Color_203  fg3876 ,    struct Color_203  bg3878 ) {
    (*  screen3874 ) .f_default_dash_fg = (  fg3876 );
    (*  screen3874 ) .f_default_dash_bg = (  bg3878 );
    return ( Unit_10_Unit );
}

static  enum Unit_10   set_dash_colors2367 (    struct Screen_836 *  screen4550 ,    struct Colors_238  colors4552 ) {
    ( (  set_dash_screen_dash_colors2368 ) ( (  screen4550 ) ,  ( (  colors4552 ) .f_fg ) ,  ( (  colors4552 ) .f_bg ) ) );
    return ( Unit_10_Unit );
}

static  int32_t   abs2369 (    int32_t  x1639 ) {
    return ( (  cmp222 ( (  x1639 ) , (  from_dash_integral92 ( 0 ) ) ) != 0 ) ? (  x1639 ) : (  op_dash_neg1138 ( (  x1639 ) ) ) );
}

struct Map_2372 {
    struct IntStrIter_2343  field0;
    int32_t (*  field1 )(    struct Char_101  );
};

static struct Map_2372 Map_2372_Map (  struct IntStrIter_2343  field0 ,  int32_t (*  field1 )(    struct Char_101  ) ) {
    return ( struct Map_2372 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2372   into_dash_iter2374 (    struct Map_2372  self804 ) {
    return (  self804 );
}

static  struct Maybe_220   next2375 (    struct Map_2372 *  dref806 ) {
    struct Maybe_420  dref809 = ( (  next2346 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_420_None_t ) {
        return ( (struct Maybe_220) { .tag = Maybe_220_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_420_Just_t ) {
            return ( ( Maybe_220_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_420_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2373 (    struct Map_2372  iterable1118 ,    int32_t  base1120 ,    int32_t (*  fun1122 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1123 = (  base1120 );
    struct Map_2372  it1124 = ( (  into_dash_iter2374 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_220  dref1125 = ( (  next2375 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_220_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_220_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_220_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2376 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2376);
    abort ( );
    ( Unit_10_Unit );
    int32_t  temp2377;
    return (  temp2377 );
}

static  int32_t   lam2378 (    int32_t  v1137 ,    int32_t  s1139 ) {
    return (  op_dash_add224 ( (  v1137 ) , (  s1139 ) ) );
}

static  int32_t   sum2371 (    struct Map_2372  it1135 ) {
    return ( (  reduce2373 ) ( (  it1135 ) ,  (  from_dash_integral92 ( 0 ) ) ,  (  lam2378 ) ) );
}

static  struct Map_2372   map2379 (    struct IntStrIter_2343  iterable813 ,    int32_t (*  fun815 )(    struct Char_101  ) ) {
    struct IntStrIter_2343  it816 = ( (  into_dash_iter2345 ) ( (  iterable813 ) ) );
    return ( ( Map_2372_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  enum Unit_10   put_dash_char2383 (    struct Screen_836 *  screen3902 ,    struct Char_101  c3904 ,    int32_t  x3906 ,    int32_t  y3908 ) {
    int32_t  w3909 = ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3902 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp222 ( (  x3906 ) , (  w3909 ) ) != 0 ) || (  cmp222 ( (  y3908 ) , ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3902 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp222 ( (  x3906 ) , (  from_dash_integral92 ( 0 ) ) ) == 0 ) ) || (  cmp222 ( (  y3908 ) , (  from_dash_integral92 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_10_Unit );
    }
    size_t  i3910 = ( (  i32_dash_size349 ) ( (  op_dash_add224 ( (  op_dash_mul1866 ( (  y3908 ) , (  w3909 ) ) ) , (  x3906 ) ) ) ) );
    struct Color_203  fg3911 = ( ( * (  screen3902 ) ) .f_default_dash_fg );
    struct Color_203  bg3912 = ( ( * (  screen3902 ) ) .f_default_dash_bg );
    struct Char_101  c3913 = (  c3904 );
    int32_t  char_dash_width3914 = ( (  wcwidth444 ) ( (  c3913 ) ) );
    if ( ( (  cmp222 ( (  x3906 ) , (  from_dash_integral92 ( 0 ) ) ) == 2 ) && (  cmp222 ( ( (  elem_dash_get1278 ( ( ( * (  screen3902 ) ) .f_current ) , (  op_dash_sub580 ( (  i3910 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral92 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_838  pc3915 = (  elem_dash_get1278 ( ( ( * (  screen3902 ) ) .f_current ) , (  op_dash_sub580 ( (  i3910 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set1274 ) ( ( ( * (  screen3902 ) ) .f_current ) ,  (  op_dash_sub580 ( (  i3910 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_838) { .f_c = ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3915 ) .f_fg ) , .f_bg = ( (  pc3915 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral92 ( 1 ) ) } ) ) );
    }
    ( (  set1274 ) ( ( ( * (  screen3902 ) ) .f_current ) ,  (  i3910 ) ,  ( (struct Cell_838) { .f_c = (  c3913 ) , .f_fg = (  fg3911 ) , .f_bg = (  bg3912 ) , .f_char_dash_width = (  char_dash_width3914 ) } ) ) );
    struct RangeIter_218  temp2384 =  into_dash_iter219 ( ( (  to228 ) ( (  op_dash_add224 ( (  x3906 ) , (  from_dash_integral92 ( 1 ) ) ) ) ,  ( (  min1083 ) ( (  op_dash_sub229 ( (  op_dash_add224 ( (  x3906 ) , (  char_dash_width3914 ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) ,  (  w3909 ) ) ) ) ) );
    while (true) {
        struct Maybe_220  __cond2385 =  next221 (&temp2384);
        if (  __cond2385 .tag == 0 ) {
            break;
        }
        int32_t  xx3917 =  __cond2385 .stuff .Maybe_220_Just_s .field0;
        size_t  i3918 = ( (  i32_dash_size349 ) ( (  op_dash_add224 ( (  op_dash_mul1866 ( (  y3908 ) , (  w3909 ) ) ) , (  xx3917 ) ) ) ) );
        ( (  set1274 ) ( ( ( * (  screen3902 ) ) .f_current ) ,  (  i3918 ) ,  ( (struct Cell_838) { .f_c = ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = (  fg3911 ) , .f_bg = (  bg3912 ) , .f_char_dash_width = (  from_dash_integral92 ( 1 ) ) } ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   draw_dash_str2380 (    struct Screen_836 *  screen3921 ,    int32_t  s3923 ,    int32_t  x3925 ,    int32_t  y3927 ) {
    int32_t  w3928 = ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3921 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp222 ( (  y3927 ) , (  from_dash_integral92 ( 0 ) ) ) == 0 ) || (  cmp222 ( (  y3927 ) , ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3921 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_10_Unit );
    }
    int32_t  i3929 = (  op_dash_add224 ( (  op_dash_mul1866 ( (  y3927 ) , (  w3928 ) ) ) , (  x3925 ) ) );
    int32_t  x3930 = ( (  min1083 ) ( (  x3925 ) ,  (  w3928 ) ) );
    size_t  max_dash_len3931 = ( (  i32_dash_size349 ) ( (  op_dash_sub229 ( (  w3928 ) , (  x3930 ) ) ) ) );
    int32_t  xx3932 = (  from_dash_integral92 ( 0 ) );
    struct IntStrIter_2343  temp2381 =  into_dash_iter2345 ( ( (  chars2358 ) ( (  s3923 ) ) ) );
    while (true) {
        struct Maybe_420  __cond2382 =  next2346 (&temp2381);
        if (  __cond2382 .tag == 0 ) {
            break;
        }
        struct Char_101  c3934 =  __cond2382 .stuff .Maybe_420_Just_s .field0;
        ( (  put_dash_char2383 ) ( (  screen3921 ) ,  (  c3934 ) ,  (  op_dash_add224 ( (  x3930 ) , (  xx3932 ) ) ) ,  (  y3927 ) ) );
        xx3932 = (  op_dash_add224 ( (  xx3932 ) , ( (  rendered_dash_wcwidth442 ) ( (  c3934 ) ) ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   draw_dash_str_dash_right2370 (    struct Screen_836 *  screen3937 ,    int32_t  s3939 ,    int32_t  x3941 ,    int32_t  y3943 ) {
    int32_t  slen3944 = ( (  sum2371 ) ( ( (  map2379 ) ( ( (  chars2358 ) ( (  s3939 ) ) ) ,  (  rendered_dash_wcwidth442 ) ) ) ) );
    int32_t  w3945 = ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3937 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3946 = (  op_dash_sub229 ( (  op_dash_sub229 ( (  w3945 ) , (  x3941 ) ) ) , (  slen3944 ) ) );
    ( (  draw_dash_str2380 ) ( (  screen3937 ) ,  (  s3939 ) ,  (  x3946 ) ,  (  y3943 ) ) );
    return ( Unit_10_Unit );
}

struct StrConcat_2387 {
    struct StrView_18  field0;
    int32_t  field1;
};

static struct StrConcat_2387 StrConcat_2387_StrConcat (  struct StrView_18  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_2387 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2390 {
    struct StrView_18  field0;
    struct StrConcat_2387  field1;
};

static struct StrConcat_2390 StrConcat_2390_StrConcat (  struct StrView_18  field0 ,  struct StrConcat_2387  field1 ) {
    return ( struct StrConcat_2390 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2389 {
    struct StrConcat_2390  field0;
    struct Char_101  field1;
};

static struct StrConcat_2389 StrConcat_2389_StrConcat (  struct StrConcat_2390  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_2389 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_10   print_dash_str2392 (    struct StrConcat_2387  self1302 ) {
    struct StrConcat_2387  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str379 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str899 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str2391 (    struct StrConcat_2390  self1302 ) {
    struct StrConcat_2390  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str379 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str2392 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   print_dash_str2388 (    struct StrConcat_2389  self1302 ) {
    struct StrConcat_2389  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str2391 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str386 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   assert2386 (    bool  cond1346 ,    struct StrConcat_2387  msg1348 ) {
    if ( ( ! (  cond1346 ) ) ) {
        ( (  print_dash_str2388 ) ( ( ( StrConcat_2389_StrConcat ) ( ( ( StrConcat_2390_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1348 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_10_Unit );
}

struct AppendIter_2394 {
    struct StrViewIter_362  f_it;
    struct Char_101  f_elem;
    bool  f_appended;
};

static  struct AppendIter_2394   into_dash_iter2395 (    struct AppendIter_2394  self1044 ) {
    return (  self1044 );
}

static  struct AppendIter_2394   append2396 (    struct StrViewIter_362  it1031 ,    struct Char_101  e1033 ) {
    return ( (struct AppendIter_2394) { .f_it = ( (  into_dash_iter363 ) ( (  it1031 ) ) ) , .f_elem = (  e1033 ) , .f_appended = ( false ) } );
}

static  struct Maybe_420   next2398 (    struct AppendIter_2394 *  self1047 ) {
    struct Maybe_420  dref1048 = ( (  next421 ) ( ( & ( ( * (  self1047 ) ) .f_it ) ) ) );
    if ( dref1048.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1048 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1048.tag == Maybe_420_None_t ) {
            if ( ( ! ( ( * (  self1047 ) ) .f_appended ) ) ) {
                (*  self1047 ) .f_appended = ( true );
                return ( ( Maybe_420_Just ) ( ( ( * (  self1047 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

static  bool   between2400 (    struct Pos_40  c1377 ,    struct Pos_40  l1379 ,    struct Pos_40  r1381 ) {
    struct Pos_40  from1382 = ( (  min1003 ) ( (  l1379 ) ,  (  r1381 ) ) );
    struct Pos_40  to1383 = ( (  max1005 ) ( (  l1379 ) ,  (  r1381 ) ) );
    return ( (  cmp1004 ( (  from1382 ) , (  c1377 ) ) != 2 ) && (  cmp1004 ( (  c1377 ) , (  to1383 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection2399 (    struct Pane_289 *  pane4518 ,    struct Pos_40  pos4520 ) {
    return ( {  struct Maybe_47  dref4521 = ( ( * (  pane4518 ) ) .f_sel ) ; dref4521.tag == Maybe_47_Just_t ? ( (  between2400 ) ( (  pos4520 ) ,  ( ( * (  pane4518 ) ) .f_cursor ) ,  ( dref4521 .stuff .Maybe_47_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct env2402 {
    struct Theme_237 *  theme4562;
    struct Screen_836 *  screen4555;
    ;
    ;
};

struct envunion2403 {
    enum Unit_10  (*fun) (  struct env2402*  ,    enum HighlightType_34  );
    struct env2402 env;
};

static  enum Unit_10   if_dash_just2401 (    struct Maybe_273  x1601 ,   struct envunion2403  fun1603 ) {
    struct Maybe_273  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_273_Just_t ) {
        struct envunion2403  temp2404 = (  fun1603 );
        ( temp2404.fun ( &temp2404.env ,  ( dref1604 .stuff .Maybe_273_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_273_None_t ) {
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   trim2409 (    struct List_31 *  l2530 ,    size_t  new_dash_count2532 ) {
    (*  l2530 ) .f_count = ( (  min956 ) ( (  new_dash_count2532 ) ,  ( ( * (  l2530 ) ) .f_count ) ) );
    return ( Unit_10_Unit );
}

static  struct Maybe_420   head2414 (    struct Scanner_1377 *  it1167 ) {
    struct Scanner_1377  temp2415 = ( (  into_dash_iter1393 ) ( (  it1167 ) ) );
    return ( (  next1402 ) ( ( &temp2415 ) ) );
}

static  bool   null2413 (    struct Scanner_1377 *  it1176 ) {
    struct Maybe_420  dref1177 = ( (  head2414 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_420_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_420   peek2416 (    struct Scanner_1377 *  sc3552 ) {
    return ( (  head1684 ) ( ( ( * (  sc3552 ) ) .f_s ) ) );
}

static  bool   eq2418 (    struct Maybe_420  l150 ,    struct Maybe_420  r152 ) {
    struct Tuple2_778  dref153 = ( ( Tuple2_778_Tuple2 ) ( (  l150 ) ,  (  r152 ) ) );
    if ( dref153 .field0.tag == Maybe_420_None_t && dref153 .field1.tag == Maybe_420_None_t ) {
        return ( true );
    }
    else {
        if ( dref153 .field0.tag == Maybe_420_Just_t && dref153 .field1.tag == Maybe_420_Just_t ) {
            return (  eq429 ( ( dref153 .field0 .stuff .Maybe_420_Just_s .field0 ) , ( dref153 .field1 .stuff .Maybe_420_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  bool   try_dash_char2417 (    struct Scanner_1377 *  sc3555 ,    struct Char_101  char3557 ) {
    if ( (  eq2418 ( ( (  peek2416 ) ( (  sc3555 ) ) ) , ( ( Maybe_420_Just ) ( (  char3557 ) ) ) ) ) ) {
        ( (  drop_prime_1405 ) ( (  sc3555 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        return ( true );
    }
    return ( false );
}

static  bool   is_dash_just2421 (    struct Maybe_420  m1570 ) {
    struct Maybe_420  dref1571 = (  m1570 );
    if ( dref1571.tag == Maybe_420_None_t ) {
        return ( false );
    }
    else {
        if ( dref1571.tag == Maybe_420_Just_t ) {
            return ( true );
        }
    }
}

static  struct Maybe_420   char_dash_satisfies_prime_2422 (    struct Scanner_1377 *  sc3560 ,    bool (*  condition3562 )(    struct Char_101  ) ) {
    struct Maybe_420  dref3563 = ( (  head1684 ) ( ( ( * (  sc3560 ) ) .f_s ) ) );
    if ( dref3563.tag == Maybe_420_Just_t ) {
        if ( ( (  condition3562 ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1405 ) ( (  sc3560 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_420_Just ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
    else {
        if ( dref3563.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2420 (    struct Scanner_1377 *  sc3567 ,    bool (*  condition3569 )(    struct Char_101  ) ) {
    return ( (  is_dash_just2421 ) ( ( (  char_dash_satisfies_prime_2422 ) ( (  sc3567 ) ,  (  condition3569 ) ) ) ) );
}

static  enum Unit_10   skip_dash_while2419 (    struct Scanner_1377 *  sc3583 ,    bool (*  condition3585 )(    struct Char_101  ) ) {
    while ( ( (  char_dash_satisfies2420 ) ( (  sc3583 ) ,  (  condition3585 ) ) ) ) {
    }
    return ( Unit_10_Unit );
}

static  bool   lam2423 (    struct Char_101  c4017 ) {
    return ( !  eq429 ( (  c4017 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) ) );
}

struct envunion2425 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

struct TypeSize_2431 {
    size_t  f_size;
};

static  struct TypeSize_2431   get_dash_typesize2430 (  ) {
    struct Highlight_33  temp2432;
    return ( (struct TypeSize_2431) { .f_size = ( sizeof( ( (  temp2432 ) ) ) ) } );
}

static  struct Highlight_33 *   cast_dash_ptr2433 (    void *  p398 ) {
    return ( (struct Highlight_33 * ) (  p398 ) );
}

static  struct Slice_32   allocate2429 (    enum CAllocator_12  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize2430 ) ( ) ) ) .f_size );
    struct Highlight_33 *  ptr2371 = ( (  cast_dash_ptr2433 ) ( ( ( malloc ) ( (  op_dash_mul555 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_32) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env2434 {
    ;
    struct Slice_32  new_dash_slice2453;
    ;
};

struct Tuple2_2436 {
    struct Highlight_33  field0;
    int32_t  field1;
};

static struct Tuple2_2436 Tuple2_2436_Tuple2 (  struct Highlight_33  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2436 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2435 {
    enum Unit_10  (*fun) (  struct env2434*  ,    struct Tuple2_2436  );
    struct env2434 env;
};

static  struct Highlight_33 *   offset_dash_ptr2440 (    struct Highlight_33 *  x377 ,    int64_t  count379 ) {
    struct Highlight_33  temp2441;
    return ( (struct Highlight_33 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul416 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp2441 ) ) ) ) ) ) ) ) );
}

static  struct Highlight_33 *   get_dash_ptr2439 (    struct Slice_32  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp371 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic372 ) ( ( ( StrConcat_373_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Highlight_33 *  elem_dash_ptr2173 = ( (  offset_dash_ptr2440 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_10   set2438 (    struct Slice_32  slice2187 ,    size_t  i2189 ,    struct Highlight_33  x2191 ) {
    struct Highlight_33 *  ep2192 = ( (  get_dash_ptr2439 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam2437 (   struct env2434* env ,    struct Tuple2_2436  dref2454 ) {
    return ( (  set2438 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size349 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct SliceIter_2444 {
    struct Slice_32  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2443 {
    struct SliceIter_2444  f_left_dash_it;
    struct FromIter_564  f_right_dash_it;
};

static  struct Zip_2443   into_dash_iter2446 (    struct Zip_2443  self936 ) {
    return (  self936 );
}

struct Maybe_2447 {
    enum {
        Maybe_2447_None_t,
        Maybe_2447_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2436  field0;
        } Maybe_2447_Just_s;
    } stuff;
};

static struct Maybe_2447 Maybe_2447_Just (  struct Tuple2_2436  field0 ) {
    return ( struct Maybe_2447 ) { .tag = Maybe_2447_Just_t, .stuff = { .Maybe_2447_Just_s = { .field0 = field0 } } };
};

struct Maybe_2449 {
    enum {
        Maybe_2449_None_t,
        Maybe_2449_Just_t,
    } tag;
    union {
        struct {
            struct Highlight_33  field0;
        } Maybe_2449_Just_s;
    } stuff;
};

static struct Maybe_2449 Maybe_2449_Just (  struct Highlight_33  field0 ) {
    return ( struct Maybe_2449 ) { .tag = Maybe_2449_Just_t, .stuff = { .Maybe_2449_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2449   next2450 (    struct SliceIter_2444 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp371 ( (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2449) { .tag = Maybe_2449_None_t } );
    }
    struct Highlight_33  elem2258 = ( * ( (  offset_dash_ptr2440 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2449_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_2447   next2448 (    struct Zip_2443 *  self939 ) {
    struct Zip_2443  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_2449  dref941 = ( (  next2450 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_2449_None_t ) {
            return ( (struct Maybe_2447) { .tag = Maybe_2447_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_2449_Just_t ) {
                struct Maybe_220  dref943 = ( (  next569 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_220_None_t ) {
                    return ( (struct Maybe_2447) { .tag = Maybe_2447_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_220_Just_t ) {
                        ( (  next2450 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next569 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2447_Just ) ( ( ( Tuple2_2436_Tuple2 ) ( ( dref941 .stuff .Maybe_2449_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_220_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_10   for_dash_each2442 (    struct Zip_2443  iterable1099 ,   struct envunion2435  fun1101 ) {
    struct Zip_2443  temp2445 = ( (  into_dash_iter2446 ) ( (  iterable1099 ) ) );
    struct Zip_2443 *  it1102 = ( &temp2445 );
    while ( ( true ) ) {
        struct Maybe_2447  dref1103 = ( (  next2448 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_2447_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_2447_Just_t ) {
                struct envunion2435  temp2451 = (  fun1101 );
                ( temp2451.fun ( &temp2451.env ,  ( dref1103 .stuff .Maybe_2447_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  struct SliceIter_2444   into_dash_iter2453 (    struct Slice_32  self2250 ) {
    return ( (struct SliceIter_2444) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2443   zip2452 (    struct Slice_32  left947 ,    struct FromIter_564  right949 ) {
    struct SliceIter_2444  left_dash_it950 = ( (  into_dash_iter2453 ) ( (  left947 ) ) );
    struct FromIter_564  right_dash_it951 = ( (  into_dash_iter572 ) ( (  right949 ) ) );
    return ( (struct Zip_2443) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  void *   cast_dash_ptr2455 (    struct Highlight_33 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_10   free2454 (    enum CAllocator_12  dref2373 ,    struct Slice_32  slice2375 ) {
    if (!(  dref2373 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr2455 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   grow_dash_if_dash_full2428 (   struct env7* env ,    struct List_31 *  list2452 ) {
    if ( (  eq352 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate2429 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq352 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_32  new_dash_slice2453 = ( (  allocate2429 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul555 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env2434 envinst2434 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion2435  fun2457 = ( (struct envunion2435){ .fun = (  enum Unit_10  (*) (  struct env2434*  ,    struct Tuple2_2436  ) )lam2437 , .env =  envinst2434 } );
            ( (  for_dash_each2442 ) ( ( (  zip2452 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from573 ) ( (  from_dash_integral92 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free2454 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   add2426 (   struct env48* env ,    struct List_31 *  list2460 ,    struct Highlight_33  elem2462 ) {
    struct envunion49  temp2427 = ( (struct envunion49){ .fun = (  enum Unit_10  (*) (  struct env7*  ,    struct List_31 *  ) )grow_dash_if_dash_full2428 , .env =  env->envinst7 } );
    ( temp2427.fun ( &temp2427.env ,  (  list2460 ) ) );
    ( (  set2438 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add425 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_10_Unit );
}

static  struct Maybe_420   char_dash_satisfies_prime_2459 (    struct Scanner_1377 *  sc3560 ,    bool (*  condition3562 )(    struct Char_101  ) ) {
    struct Maybe_420  dref3563 = ( (  head1684 ) ( ( ( * (  sc3560 ) ) .f_s ) ) );
    if ( dref3563.tag == Maybe_420_Just_t ) {
        if ( ( (  condition3562 ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1405 ) ( (  sc3560 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_420_Just ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
    else {
        if ( dref3563.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2458 (    struct Scanner_1377 *  sc3567 ,    bool (*  condition3569 )(    struct Char_101  ) ) {
    return ( (  is_dash_just2421 ) ( ( (  char_dash_satisfies_prime_2459 ) ( (  sc3567 ) ,  (  condition3569 ) ) ) ) );
}

static  enum Unit_10   skip_dash_while2457 (    struct Scanner_1377 *  sc3583 ,    bool (*  condition3585 )(    struct Char_101  ) ) {
    while ( ( (  char_dash_satisfies2458 ) ( (  sc3583 ) ,  (  condition3585 ) ) ) ) {
    }
    return ( Unit_10_Unit );
}

static  bool   lam2460 (    struct Char_101  c4020 ) {
    return ( ( !  eq429 ( (  c4020 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) && ( !  eq429 ( (  c4020 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\\" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2462 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

static  struct Maybe_420   char_dash_satisfies_prime_2464 (    struct Scanner_1377 *  sc3560 ,    bool (*  condition3562 )(    struct Char_101  ) ) {
    struct Maybe_420  dref3563 = ( (  head1684 ) ( ( ( * (  sc3560 ) ) .f_s ) ) );
    if ( dref3563.tag == Maybe_420_Just_t ) {
        if ( ( (  condition3562 ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1405 ) ( (  sc3560 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_420_Just ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
    else {
        if ( dref3563.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2463 (    struct Scanner_1377 *  sc3567 ,    bool (*  condition3569 )(    struct Char_101  ) ) {
    return ( (  is_dash_just2421 ) ( ( (  char_dash_satisfies_prime_2464 ) ( (  sc3567 ) ,  (  condition3569 ) ) ) ) );
}

static  struct Maybe_420   char_dash_satisfies_prime_2467 (    struct Scanner_1377 *  sc3560 ,    bool (*  condition3562 )(    struct Char_101  ) ) {
    struct Maybe_420  dref3563 = ( (  head1684 ) ( ( ( * (  sc3560 ) ) .f_s ) ) );
    if ( dref3563.tag == Maybe_420_Just_t ) {
        if ( ( (  condition3562 ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1405 ) ( (  sc3560 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_420_Just ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
    else {
        if ( dref3563.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2466 (    struct Scanner_1377 *  sc3567 ,    bool (*  condition3569 )(    struct Char_101  ) ) {
    return ( (  is_dash_just2421 ) ( ( (  char_dash_satisfies_prime_2467 ) ( (  sc3567 ) ,  (  condition3569 ) ) ) ) );
}

static  enum Unit_10   skip_dash_while2465 (    struct Scanner_1377 *  sc3583 ,    bool (*  condition3585 )(    struct Char_101  ) ) {
    while ( ( (  char_dash_satisfies2466 ) ( (  sc3583 ) ,  (  condition3585 ) ) ) ) {
    }
    return ( Unit_10_Unit );
}

static  bool   lam2468 (    struct Char_101  c4023 ) {
    return ( (  eq1676 ( ( (  char_dash_type1679 ) ( (  c4023 ) ) ) , ( CharType_1677_CharWord ) ) ) || (  eq429 ( (  c4023 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2470 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

struct Array_2472 {
    struct StrView_18 _arr [1];
};

struct env2473 {
    struct Scanner_1377 *  sc4013;
    ;
};

struct envunion2474 {
    bool  (*fun) (  struct env2473*  ,    struct StrView_18  );
    struct env2473 env;
};

struct env2476 {
    struct envunion2474  fun1160;
};

struct envunion2477 {
    bool  (*fun) (  struct env2476*  ,    struct StrView_18  ,    bool  );
    struct env2476 env;
};

struct ArrayIter_2478 {
    struct Array_2472  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2478   into_dash_iter2479 (    struct Array_2472  self2102 ) {
    return ( (struct ArrayIter_2478) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_18 *   cast_dash_ptr2483 (    struct Array_2472 *  p398 ) {
    return ( (struct StrView_18 * ) (  p398 ) );
}

static  struct StrView_18 *   get_dash_ptr2482 (    struct Array_2472 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp371 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2029 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic890 ) ( ( ( StrConcat_891_StrConcat ) ( ( ( StrConcat_892_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_18 *  p2030 = ( ( (  cast_dash_ptr2483 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr715 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_18   get2481 (    struct Array_2472 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr2482 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_125   next2480 (    struct ArrayIter_2478 *  self2109 ) {
    if ( (  cmp371 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    struct StrView_18  e2111 = ( (  get2481 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add425 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_125_Just ) ( (  e2111 ) ) );
}

static  bool   reduce2475 (    struct Array_2472  iterable1118 ,    bool  base1120 ,   struct envunion2477  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_2478  it1124 = ( (  into_dash_iter2479 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_125  dref1125 = ( (  next2480 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_125_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_125_Just_t ) {
                struct envunion2477  temp2484 = (  fun1122 );
                x1123 = ( temp2484.fun ( &temp2484.env ,  ( dref1125 .stuff .Maybe_125_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2485 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2485);
    abort ( );
    ( Unit_10_Unit );
    bool  temp2486;
    return (  temp2486 );
}

static  bool   lam2487 (   struct env2476* env ,    struct StrView_18  e1162 ,    bool  x1164 ) {
    struct envunion2474  temp2488 = ( env->fun1160 );
    return ( ( temp2488.fun ( &temp2488.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2471 (    struct Array_2472  it1158 ,   struct envunion2474  fun1160 ) {
    struct env2476 envinst2476 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2475 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2477){ .fun = (  bool  (*) (  struct env2476*  ,    struct StrView_18  ,    bool  ) )lam2487 , .env =  envinst2476 } ) ) );
}

static  struct Array_2472   from_dash_listlike2489 (    struct Array_2472 *  self369 ) {
    return ( * (  self369 ) );
}

static  struct StrViewIter_362   own2495 (    struct StrViewIter_362  x1561 ) {
    return (  x1561 );
}

static  bool   matches_dash_str2492 (    struct Scanner_1377 *  sc3572 ,    struct StrView_18  s3574 ) {
    size_t  skip3575 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_362  temp2493 = ( (  chars364 ) ( (  s3574 ) ) );
    struct StrViewIter_362 *  ss3576 = ( &temp2493 );
    struct StrViewIter_362  temp2494 = ( (  own2495 ) ( ( ( * (  sc3572 ) ) .f_s ) ) );
    struct StrViewIter_362 *  sccp3577 = ( &temp2494 );
    while ( ( true ) ) {
        struct Tuple2_778  dref3578 = ( ( Tuple2_778_Tuple2 ) ( ( (  next421 ) ( (  sccp3577 ) ) ) ,  ( (  next421 ) ( (  ss3576 ) ) ) ) );
        if ( dref3578 .field1.tag == Maybe_420_None_t ) {
            ( (  drop_prime_1405 ) ( (  sc3572 ) ,  (  skip3575 ) ) );
            return ( true );
        }
        else {
            if ( dref3578 .field0.tag == Maybe_420_Just_t && dref3578 .field1.tag == Maybe_420_Just_t ) {
                if ( ( !  eq429 ( ( dref3578 .field0 .stuff .Maybe_420_Just_s .field0 ) , ( dref3578 .field1 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
                    return ( false );
                }
                skip3575 = (  op_dash_add425 ( (  skip3575 ) , (  from_dash_integral0 ( 1 ) ) ) );
            }
            else {
                if ( true ) {
                    return ( false );
                }
            }
        }
    }
}

static  bool   lam2491 (   struct env2473* env ,    struct StrView_18  sym4026 ) {
    return ( (  matches_dash_str2492 ) ( ( env->sc4013 ) ,  (  sym4026 ) ) );
}

struct envunion2497 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

struct Array_2499 {
    struct StrView_18 _arr [10];
};

struct env2500 {
    struct Scanner_1377 *  sc4013;
    ;
};

struct envunion2501 {
    bool  (*fun) (  struct env2500*  ,    struct StrView_18  );
    struct env2500 env;
};

struct env2503 {
    struct envunion2501  fun1160;
};

struct envunion2504 {
    bool  (*fun) (  struct env2503*  ,    struct StrView_18  ,    bool  );
    struct env2503 env;
};

struct ArrayIter_2505 {
    struct Array_2499  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2505   into_dash_iter2506 (    struct Array_2499  self2102 ) {
    return ( (struct ArrayIter_2505) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_18 *   cast_dash_ptr2510 (    struct Array_2499 *  p398 ) {
    return ( (struct StrView_18 * ) (  p398 ) );
}

static  struct StrView_18 *   get_dash_ptr2509 (    struct Array_2499 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp371 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2029 ) , ( (size_t ) ( 10 ) ) ) != 0 ) ) ) {
        ( (  panic890 ) ( ( ( StrConcat_891_StrConcat ) ( ( ( StrConcat_892_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 10 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_18 *  p2030 = ( ( (  cast_dash_ptr2510 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr715 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_18   get2508 (    struct Array_2499 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr2509 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_125   next2507 (    struct ArrayIter_2505 *  self2109 ) {
    if ( (  cmp371 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 10 ) ) ) != 0 ) ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    struct StrView_18  e2111 = ( (  get2508 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add425 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_125_Just ) ( (  e2111 ) ) );
}

static  bool   reduce2502 (    struct Array_2499  iterable1118 ,    bool  base1120 ,   struct envunion2504  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_2505  it1124 = ( (  into_dash_iter2506 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_125  dref1125 = ( (  next2507 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_125_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_125_Just_t ) {
                struct envunion2504  temp2511 = (  fun1122 );
                x1123 = ( temp2511.fun ( &temp2511.env ,  ( dref1125 .stuff .Maybe_125_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2512 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2512);
    abort ( );
    ( Unit_10_Unit );
    bool  temp2513;
    return (  temp2513 );
}

static  bool   lam2514 (   struct env2503* env ,    struct StrView_18  e1162 ,    bool  x1164 ) {
    struct envunion2501  temp2515 = ( env->fun1160 );
    return ( ( temp2515.fun ( &temp2515.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2498 (    struct Array_2499  it1158 ,   struct envunion2501  fun1160 ) {
    struct env2503 envinst2503 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2502 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2504){ .fun = (  bool  (*) (  struct env2503*  ,    struct StrView_18  ,    bool  ) )lam2514 , .env =  envinst2503 } ) ) );
}

static  struct Array_2499   from_dash_listlike2516 (    struct Array_2499 *  self369 ) {
    return ( * (  self369 ) );
}

static  bool   lam2518 (   struct env2500* env ,    struct StrView_18  sym4030 ) {
    return ( (  matches_dash_str2492 ) ( ( env->sc4013 ) ,  (  sym4030 ) ) );
}

struct envunion2520 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

struct Array_2522 {
    struct StrView_18 _arr [12];
};

struct env2523 {
    struct Scanner_1377 *  sc4013;
    ;
};

struct envunion2524 {
    bool  (*fun) (  struct env2523*  ,    struct StrView_18  );
    struct env2523 env;
};

struct env2526 {
    struct envunion2524  fun1160;
};

struct envunion2527 {
    bool  (*fun) (  struct env2526*  ,    struct StrView_18  ,    bool  );
    struct env2526 env;
};

struct ArrayIter_2528 {
    struct Array_2522  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2528   into_dash_iter2529 (    struct Array_2522  self2102 ) {
    return ( (struct ArrayIter_2528) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_18 *   cast_dash_ptr2533 (    struct Array_2522 *  p398 ) {
    return ( (struct StrView_18 * ) (  p398 ) );
}

static  struct StrView_18 *   get_dash_ptr2532 (    struct Array_2522 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp371 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2029 ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) ) {
        ( (  panic890 ) ( ( ( StrConcat_891_StrConcat ) ( ( ( StrConcat_892_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 12 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_18 *  p2030 = ( ( (  cast_dash_ptr2533 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr715 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_18   get2531 (    struct Array_2522 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr2532 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_125   next2530 (    struct ArrayIter_2528 *  self2109 ) {
    if ( (  cmp371 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    struct StrView_18  e2111 = ( (  get2531 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add425 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_125_Just ) ( (  e2111 ) ) );
}

static  bool   reduce2525 (    struct Array_2522  iterable1118 ,    bool  base1120 ,   struct envunion2527  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_2528  it1124 = ( (  into_dash_iter2529 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_125  dref1125 = ( (  next2530 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_125_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_125_Just_t ) {
                struct envunion2527  temp2534 = (  fun1122 );
                x1123 = ( temp2534.fun ( &temp2534.env ,  ( dref1125 .stuff .Maybe_125_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2535 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2535);
    abort ( );
    ( Unit_10_Unit );
    bool  temp2536;
    return (  temp2536 );
}

static  bool   lam2537 (   struct env2526* env ,    struct StrView_18  e1162 ,    bool  x1164 ) {
    struct envunion2524  temp2538 = ( env->fun1160 );
    return ( ( temp2538.fun ( &temp2538.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2521 (    struct Array_2522  it1158 ,   struct envunion2524  fun1160 ) {
    struct env2526 envinst2526 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2525 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2527){ .fun = (  bool  (*) (  struct env2526*  ,    struct StrView_18  ,    bool  ) )lam2537 , .env =  envinst2526 } ) ) );
}

static  struct Array_2522   from_dash_listlike2539 (    struct Array_2522 *  self369 ) {
    return ( * (  self369 ) );
}

static  bool   lam2541 (   struct env2523* env ,    struct StrView_18  sym4034 ) {
    return ( (  matches_dash_str2492 ) ( ( env->sc4013 ) ,  (  sym4034 ) ) );
}

struct envunion2543 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

static  struct Maybe_420   char_dash_satisfies_prime_2546 (    struct Scanner_1377 *  sc3560 ,    bool (*  condition3562 )(    struct Char_101  ) ) {
    struct Maybe_420  dref3563 = ( (  head1684 ) ( ( ( * (  sc3560 ) ) .f_s ) ) );
    if ( dref3563.tag == Maybe_420_Just_t ) {
        if ( ( (  condition3562 ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1405 ) ( (  sc3560 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_420_Just ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
    else {
        if ( dref3563.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2545 (    struct Scanner_1377 *  sc3567 ,    bool (*  condition3569 )(    struct Char_101  ) ) {
    return ( (  is_dash_just2421 ) ( ( (  char_dash_satisfies_prime_2546 ) ( (  sc3567 ) ,  (  condition3569 ) ) ) ) );
}

static  enum Unit_10   skip_dash_while2544 (    struct Scanner_1377 *  sc3583 ,    bool (*  condition3585 )(    struct Char_101  ) ) {
    while ( ( (  char_dash_satisfies2545 ) ( (  sc3583 ) ,  (  condition3585 ) ) ) ) {
    }
    return ( Unit_10_Unit );
}

static  bool   lam2547 (    struct Char_101  c4038 ) {
    return ( (  eq1676 ( ( (  char_dash_type1679 ) ( (  c4038 ) ) ) , ( CharType_1677_CharWord ) ) ) || (  eq429 ( (  c4038 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   maybe2548 (    struct Maybe_420  x1592 ,    bool (*  fun1594 )(    struct Char_101  ) ,    bool  default1596 ) {
    return ( {  struct Maybe_420  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_420_Just_t ? ( (  fun1594 ) ( ( dref1597 .stuff .Maybe_420_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

static  bool   is_dash_upper2549 (    struct Char_101  c1521 ) {
    return ( (  eq352 ( ( (  c1521 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1396 ) ( (  c1521 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"Z" ) ,  ( 1 ) ) ) ) ) );
}

struct Array_2550 {
    struct StrView_18 _arr [6];
};

static  struct Array_2550   from_dash_listlike2551 (    struct Array_2550 *  self369 ) {
    return ( * (  self369 ) );
}

struct Array_2553 {
    struct StrView_18 _arr [16];
};

static  struct Array_2553   from_dash_listlike2554 (    struct Array_2553 *  self369 ) {
    return ( * (  self369 ) );
}

struct env2557 {
    struct StrView_18  ident4042;
    ;
};

struct envunion2558 {
    bool  (*fun) (  struct env2557*  ,    struct StrView_18  );
    struct env2557 env;
};

struct env2560 {
    struct envunion2558  fun1160;
};

struct envunion2561 {
    bool  (*fun) (  struct env2560*  ,    struct StrView_18  ,    bool  );
    struct env2560 env;
};

struct ArrayIter_2562 {
    struct Array_2550  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2562   into_dash_iter2563 (    struct Array_2550  self2102 ) {
    return ( (struct ArrayIter_2562) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_18 *   cast_dash_ptr2567 (    struct Array_2550 *  p398 ) {
    return ( (struct StrView_18 * ) (  p398 ) );
}

static  struct StrView_18 *   get_dash_ptr2566 (    struct Array_2550 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp371 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2029 ) , ( (size_t ) ( 6 ) ) ) != 0 ) ) ) {
        ( (  panic890 ) ( ( ( StrConcat_891_StrConcat ) ( ( ( StrConcat_892_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 6 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_18 *  p2030 = ( ( (  cast_dash_ptr2567 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr715 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_18   get2565 (    struct Array_2550 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr2566 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_125   next2564 (    struct ArrayIter_2562 *  self2109 ) {
    if ( (  cmp371 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 6 ) ) ) != 0 ) ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    struct StrView_18  e2111 = ( (  get2565 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add425 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_125_Just ) ( (  e2111 ) ) );
}

static  bool   reduce2559 (    struct Array_2550  iterable1118 ,    bool  base1120 ,   struct envunion2561  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_2562  it1124 = ( (  into_dash_iter2563 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_125  dref1125 = ( (  next2564 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_125_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_125_Just_t ) {
                struct envunion2561  temp2568 = (  fun1122 );
                x1123 = ( temp2568.fun ( &temp2568.env ,  ( dref1125 .stuff .Maybe_125_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2569 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2569);
    abort ( );
    ( Unit_10_Unit );
    bool  temp2570;
    return (  temp2570 );
}

static  bool   lam2571 (   struct env2560* env ,    struct StrView_18  e1162 ,    bool  x1164 ) {
    struct envunion2558  temp2572 = ( env->fun1160 );
    return ( ( temp2572.fun ( &temp2572.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2556 (    struct Array_2550  it1158 ,   struct envunion2558  fun1160 ) {
    struct env2560 envinst2560 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2559 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2561){ .fun = (  bool  (*) (  struct env2560*  ,    struct StrView_18  ,    bool  ) )lam2571 , .env =  envinst2560 } ) ) );
}

static  bool   lam2573 (   struct env2557* env ,    struct StrView_18  kw4046 ) {
    return (  eq682 ( (  kw4046 ) , ( env->ident4042 ) ) );
}

struct env2575 {
    struct StrView_18  ident4042;
    ;
};

struct envunion2576 {
    bool  (*fun) (  struct env2575*  ,    struct StrView_18  );
    struct env2575 env;
};

struct env2578 {
    struct envunion2576  fun1160;
};

struct envunion2579 {
    bool  (*fun) (  struct env2578*  ,    struct StrView_18  ,    bool  );
    struct env2578 env;
};

struct ArrayIter_2580 {
    struct Array_2553  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2580   into_dash_iter2581 (    struct Array_2553  self2102 ) {
    return ( (struct ArrayIter_2580) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_18 *   cast_dash_ptr2585 (    struct Array_2553 *  p398 ) {
    return ( (struct StrView_18 * ) (  p398 ) );
}

static  struct StrView_18 *   get_dash_ptr2584 (    struct Array_2553 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp371 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  i2029 ) , ( (size_t ) ( 16 ) ) ) != 0 ) ) ) {
        ( (  panic890 ) ( ( ( StrConcat_891_StrConcat ) ( ( ( StrConcat_892_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 16 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_18 *  p2030 = ( ( (  cast_dash_ptr2585 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr715 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_18   get2583 (    struct Array_2553 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr2584 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_125   next2582 (    struct ArrayIter_2580 *  self2109 ) {
    if ( (  cmp371 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 16 ) ) ) != 0 ) ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    struct StrView_18  e2111 = ( (  get2583 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add425 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_125_Just ) ( (  e2111 ) ) );
}

static  bool   reduce2577 (    struct Array_2553  iterable1118 ,    bool  base1120 ,   struct envunion2579  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_2580  it1124 = ( (  into_dash_iter2581 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_125  dref1125 = ( (  next2582 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_125_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_125_Just_t ) {
                struct envunion2579  temp2586 = (  fun1122 );
                x1123 = ( temp2586.fun ( &temp2586.env ,  ( dref1125 .stuff .Maybe_125_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2587 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2587);
    abort ( );
    ( Unit_10_Unit );
    bool  temp2588;
    return (  temp2588 );
}

static  bool   lam2589 (   struct env2578* env ,    struct StrView_18  e1162 ,    bool  x1164 ) {
    struct envunion2576  temp2590 = ( env->fun1160 );
    return ( ( temp2590.fun ( &temp2590.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2574 (    struct Array_2553  it1158 ,   struct envunion2576  fun1160 ) {
    struct env2578 envinst2578 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2577 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2579){ .fun = (  bool  (*) (  struct env2578*  ,    struct StrView_18  ,    bool  ) )lam2589 , .env =  envinst2578 } ) ) );
}

static  bool   lam2591 (   struct env2575* env ,    struct StrView_18  kw4048 ) {
    return (  eq682 ( (  kw4048 ) , ( env->ident4042 ) ) );
}

struct envunion2593 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

static  struct Maybe_1389   int2594 (    struct Scanner_1377 *  sc3546 ) {
    return ( (  scan_dash_int1390 ) ( (  sc3546 ) ) );
}

static  struct Maybe_420   char_dash_satisfies_prime_2597 (    struct Scanner_1377 *  sc3560 ,    bool (*  condition3562 )(    struct Char_101  ) ) {
    struct Maybe_420  dref3563 = ( (  head1684 ) ( ( ( * (  sc3560 ) ) .f_s ) ) );
    if ( dref3563.tag == Maybe_420_Just_t ) {
        if ( ( (  condition3562 ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1405 ) ( (  sc3560 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_420_Just ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
    else {
        if ( dref3563.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2596 (    struct Scanner_1377 *  sc3567 ,    bool (*  condition3569 )(    struct Char_101  ) ) {
    return ( (  is_dash_just2421 ) ( ( (  char_dash_satisfies_prime_2597 ) ( (  sc3567 ) ,  (  condition3569 ) ) ) ) );
}

static  enum Unit_10   skip_dash_while2595 (    struct Scanner_1377 *  sc3583 ,    bool (*  condition3585 )(    struct Char_101  ) ) {
    while ( ( (  char_dash_satisfies2596 ) ( (  sc3583 ) ,  (  condition3585 ) ) ) ) {
    }
    return ( Unit_10_Unit );
}

static  bool   is_dash_hex2598 (    struct Char_101  c1509 ) {
    return ( (  eq352 ( ( (  c1509 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( ( ( (  is_dash_digit1395 ) ( (  c1509 ) ) ) || ( (  between1396 ) ( (  c1509 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1396 ) ( (  c1509 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2600 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

static  enum Unit_10   skip_dash_while2601 (    struct Scanner_1377 *  sc3583 ,    bool (*  condition3585 )(    struct Char_101  ) ) {
    while ( ( (  char_dash_satisfies2463 ) ( (  sc3583 ) ,  (  condition3585 ) ) ) ) {
    }
    return ( Unit_10_Unit );
}

struct envunion2603 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

static  struct Maybe_420   char_dash_satisfies_prime_2606 (    struct Scanner_1377 *  sc3560 ,    bool (*  condition3562 )(    struct Char_101  ) ) {
    struct Maybe_420  dref3563 = ( (  head1684 ) ( ( ( * (  sc3560 ) ) .f_s ) ) );
    if ( dref3563.tag == Maybe_420_Just_t ) {
        if ( ( (  condition3562 ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1405 ) ( (  sc3560 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_420_Just ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
    else {
        if ( dref3563.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2605 (    struct Scanner_1377 *  sc3567 ,    bool (*  condition3569 )(    struct Char_101  ) ) {
    return ( (  is_dash_just2421 ) ( ( (  char_dash_satisfies_prime_2606 ) ( (  sc3567 ) ,  (  condition3569 ) ) ) ) );
}

static  enum Unit_10   skip_dash_while2604 (    struct Scanner_1377 *  sc3583 ,    bool (*  condition3585 )(    struct Char_101  ) ) {
    while ( ( (  char_dash_satisfies2605 ) ( (  sc3583 ) ,  (  condition3585 ) ) ) ) {
    }
    return ( Unit_10_Unit );
}

static  bool   is_dash_octal2607 (    struct Char_101  c1515 ) {
    return ( (  eq352 ( ( (  c1515 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1396 ) ( (  c1515 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"7" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2609 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

static  struct Maybe_420   char_dash_satisfies_prime_2612 (    struct Scanner_1377 *  sc3560 ,    bool (*  condition3562 )(    struct Char_101  ) ) {
    struct Maybe_420  dref3563 = ( (  head1684 ) ( ( ( * (  sc3560 ) ) .f_s ) ) );
    if ( dref3563.tag == Maybe_420_Just_t ) {
        if ( ( (  condition3562 ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1405 ) ( (  sc3560 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_420_Just ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
    else {
        if ( dref3563.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2611 (    struct Scanner_1377 *  sc3567 ,    bool (*  condition3569 )(    struct Char_101  ) ) {
    return ( (  is_dash_just2421 ) ( ( (  char_dash_satisfies_prime_2612 ) ( (  sc3567 ) ,  (  condition3569 ) ) ) ) );
}

static  enum Unit_10   skip_dash_while2610 (    struct Scanner_1377 *  sc3583 ,    bool (*  condition3585 )(    struct Char_101  ) ) {
    while ( ( (  char_dash_satisfies2611 ) ( (  sc3583 ) ,  (  condition3585 ) ) ) ) {
    }
    return ( Unit_10_Unit );
}

struct envunion2614 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

static  struct Maybe_420   char_dash_satisfies_prime_2617 (    struct Scanner_1377 *  sc3560 ,    bool (*  condition3562 )(    struct Char_101  ) ) {
    struct Maybe_420  dref3563 = ( (  head1684 ) ( ( ( * (  sc3560 ) ) .f_s ) ) );
    if ( dref3563.tag == Maybe_420_Just_t ) {
        if ( ( (  condition3562 ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1405 ) ( (  sc3560 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_420_Just ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
    else {
        if ( dref3563.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2616 (    struct Scanner_1377 *  sc3567 ,    bool (*  condition3569 )(    struct Char_101  ) ) {
    return ( (  is_dash_just2421 ) ( ( (  char_dash_satisfies_prime_2617 ) ( (  sc3567 ) ,  (  condition3569 ) ) ) ) );
}

static  enum Unit_10   skip_dash_while2615 (    struct Scanner_1377 *  sc3583 ,    bool (*  condition3585 )(    struct Char_101  ) ) {
    while ( ( (  char_dash_satisfies2616 ) ( (  sc3583 ) ,  (  condition3585 ) ) ) ) {
    }
    return ( Unit_10_Unit );
}

static  bool   is_dash_binary2618 (    struct Char_101  c1512 ) {
    return ( (  eq352 ( ( (  c1512 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  eq429 ( (  c1512 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) || (  eq429 ( (  c1512 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"1" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2620 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

struct envunion2622 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

struct envunion2624 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

struct envunion2626 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

static  enum Unit_10   kc2411 (   struct env150* env ,    struct List_31 *  hls4010 ,    struct StrView_18  line_dash_sv4012 ) {
    struct Scanner_1377  temp2412 = ( (  mk_dash_from_dash_str1379 ) ( (  line_dash_sv4012 ) ) );
    struct Scanner_1377 *  sc4013 = ( &temp2412 );
    while ( ( ! ( (  null2413 ) ( (  sc4013 ) ) ) ) ) {
        int32_t  from_dash_off4014 = ( (  size_dash_i32380 ) ( ( ( * (  sc4013 ) ) .f_byte_dash_offset ) ) );
        struct Maybe_420  first_dash_char4015 = ( (  peek2416 ) ( (  sc4013 ) ) );
        if ( ( (  try_dash_char2417 ) ( (  sc4013 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
            if ( ( (  try_dash_char2417 ) ( (  sc4013 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  skip_dash_while2419 ) ( (  sc4013 ) ,  (  lam2423 ) ) );
                ( (  drop_prime_1405 ) ( (  sc4013 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                int32_t  to_dash_off4018 = ( (  size_dash_i32380 ) ( ( ( * (  sc4013 ) ) .f_byte_dash_offset ) ) );
                struct envunion2425  temp2424 = ( (struct envunion2425){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                ( temp2424.fun ( &temp2424.env ,  (  hls4010 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4014 ) , .f_to = ( (  size_dash_i32380 ) ( ( (  num_dash_bytes465 ) ( (  line_dash_sv4012 ) ) ) ) ) , .f_type = ( HighlightType_34_Special3 ) } ) ) );
            } else {
                struct envunion151  temp2456 = ( (struct envunion151){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                ( temp2456.fun ( &temp2456.env ,  (  hls4010 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4014 ) , .f_to = ( (  size_dash_i32380 ) ( ( (  num_dash_bytes465 ) ( (  line_dash_sv4012 ) ) ) ) ) , .f_type = ( HighlightType_34_Comment ) } ) ) );
            }
            break;
        } else {
            if ( ( (  try_dash_char2417 ) ( (  sc4013 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) ) {
                while ( ( true ) ) {
                    ( (  skip_dash_while2457 ) ( (  sc4013 ) ,  (  lam2460 ) ) );
                    if ( (  eq2418 ( ( (  peek2416 ) ( (  sc4013 ) ) ) , ( ( Maybe_420_Just ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"\\" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                        ( (  drop_prime_1405 ) ( (  sc4013 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        if ( (  eq2418 ( ( (  peek2416 ) ( (  sc4013 ) ) ) , ( ( Maybe_420_Just ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                            ( (  drop_prime_1405 ) ( (  sc4013 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        } else {
                        }
                    } else {
                        ( (  drop_prime_1405 ) ( (  sc4013 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        break;
                    }
                }
                int32_t  cur_dash_off4021 = ( (  size_dash_i32380 ) ( ( ( * (  sc4013 ) ) .f_byte_dash_offset ) ) );
                struct envunion2462  temp2461 = ( (struct envunion2462){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                ( temp2461.fun ( &temp2461.env ,  (  hls4010 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4014 ) , .f_to = (  cur_dash_off4021 ) , .f_type = ( HighlightType_34_String ) } ) ) );
            } else {
                if ( ( (  try_dash_char2417 ) ( (  sc4013 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"@" ) ,  ( 1 ) ) ) ) ) ) {
                    if ( ( (  char_dash_satisfies2463 ) ( (  sc4013 ) ,  (  is_dash_alpha1681 ) ) ) ) {
                        ( (  skip_dash_while2465 ) ( (  sc4013 ) ,  (  lam2468 ) ) );
                        int32_t  cur_dash_off4024 = ( (  size_dash_i32380 ) ( ( ( * (  sc4013 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2470  temp2469 = ( (struct envunion2470){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                        ( temp2469.fun ( &temp2469.env ,  (  hls4010 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4014 ) , .f_to = (  cur_dash_off4024 ) , .f_type = ( HighlightType_34_Ident3 ) } ) ) );
                    } else {
                    }
                } else {
                    struct Array_2472  temp2490 = ( (struct Array_2472) { ._arr = { ( (  from_dash_string269 ) ( ( (uint8_t*)"->" ) ,  ( 2 ) ) ) } } );
                    struct env2473 envinst2473 = {
                        .sc4013 =  sc4013 ,
                    };
                    if ( ( (  any2471 ) ( ( (  from_dash_listlike2489 ) ( ( &temp2490 ) ) ) ,  ( (struct envunion2474){ .fun = (  bool  (*) (  struct env2473*  ,    struct StrView_18  ) )lam2491 , .env =  envinst2473 } ) ) ) ) {
                        int32_t  cur_dash_off4027 = ( (  size_dash_i32380 ) ( ( ( * (  sc4013 ) ) .f_byte_dash_offset ) ) );
                        enum HighlightType_34  type4028 = ( HighlightType_34_Special1 );
                        struct envunion2497  temp2496 = ( (struct envunion2497){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                        ( temp2496.fun ( &temp2496.env ,  (  hls4010 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4014 ) , .f_to = (  cur_dash_off4027 ) , .f_type = (  type4028 ) } ) ) );
                    } else {
                        struct Array_2499  temp2517 = ( (struct Array_2499) { ._arr = { ( (  from_dash_string269 ) ( ( (uint8_t*)"==" ) ,  ( 2 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"/=" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"+" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"/" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"*" ) ,  ( 1 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)">=" ) ,  ( 2 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"<=" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)">" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) } } );
                        struct env2500 envinst2500 = {
                            .sc4013 =  sc4013 ,
                        };
                        if ( ( (  any2498 ) ( ( (  from_dash_listlike2516 ) ( ( &temp2517 ) ) ) ,  ( (struct envunion2501){ .fun = (  bool  (*) (  struct env2500*  ,    struct StrView_18  ) )lam2518 , .env =  envinst2500 } ) ) ) ) {
                            int32_t  cur_dash_off4031 = ( (  size_dash_i32380 ) ( ( ( * (  sc4013 ) ) .f_byte_dash_offset ) ) );
                            enum HighlightType_34  type4032 = ( HighlightType_34_Special2 );
                            struct envunion2520  temp2519 = ( (struct envunion2520){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                            ( temp2519.fun ( &temp2519.env ,  (  hls4010 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4014 ) , .f_to = (  cur_dash_off4031 ) , .f_type = (  type4032 ) } ) ) );
                        } else {
                            struct Array_2522  temp2540 = ( (struct Array_2522) { ._arr = { ( (  from_dash_string269 ) ( ( (uint8_t*)"<&" ) ,  ( 2 ) ) ) , ( ( (  from_dash_charlike699 ) ( ( (uint8_t*)"=" ) ,  ( 1 ) ) ) ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"&" ) ,  ( 1 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"->" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"(" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"{" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"}" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike699 ) ( ( (uint8_t*)"," ) ,  ( 1 ) ) ) } } );
                            struct env2523 envinst2523 = {
                                .sc4013 =  sc4013 ,
                            };
                            if ( ( (  any2521 ) ( ( (  from_dash_listlike2539 ) ( ( &temp2540 ) ) ) ,  ( (struct envunion2524){ .fun = (  bool  (*) (  struct env2523*  ,    struct StrView_18  ) )lam2541 , .env =  envinst2523 } ) ) ) ) {
                                int32_t  cur_dash_off4035 = ( (  size_dash_i32380 ) ( ( ( * (  sc4013 ) ) .f_byte_dash_offset ) ) );
                                enum HighlightType_34  type4036 = ( HighlightType_34_Special1 );
                                struct envunion2543  temp2542 = ( (struct envunion2543){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                                ( temp2542.fun ( &temp2542.env ,  (  hls4010 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4014 ) , .f_to = (  cur_dash_off4035 ) , .f_type = (  type4036 ) } ) ) );
                            } else {
                                if ( ( (  char_dash_satisfies2463 ) ( (  sc4013 ) ,  (  is_dash_alpha1681 ) ) ) ) {
                                    ( (  skip_dash_while2544 ) ( (  sc4013 ) ,  (  lam2547 ) ) );
                                    int32_t  cur_dash_off4039 = ( (  size_dash_i32380 ) ( ( ( * (  sc4013 ) ) .f_byte_dash_offset ) ) );
                                    bool  first_dash_char_dash_uppercase4040 = ( (  maybe2548 ) ( (  first_dash_char4015 ) ,  (  is_dash_upper2549 ) ,  ( false ) ) );
                                    enum HighlightType_34  type4041 = ( (  first_dash_char_dash_uppercase4040 ) ? ( HighlightType_34_Ident2 ) : ( HighlightType_34_Ident1 ) );
                                    struct StrView_18  ident4042 = ( ( (  byte_dash_substr965 ) ( (  line_dash_sv4012 ) ,  ( (  i32_dash_size349 ) ( (  from_dash_off4014 ) ) ) ,  ( (  i32_dash_size349 ) ( (  cur_dash_off4039 ) ) ) ) ) );
                                    struct Array_2550  temp2552 = ( (struct Array_2550) { ._arr = { ( (  from_dash_string269 ) ( ( (uint8_t*)"fn" ) ,  ( 2 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"class" ) ,  ( 5 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"inst" ) ,  ( 4 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"external" ) ,  ( 8 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"use" ) ,  ( 3 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"export" ) ,  ( 6 ) ) ) } } );
                                    struct Array_2550  keywords14043 = ( (  from_dash_listlike2551 ) ( ( &temp2552 ) ) );
                                    struct Array_2553  temp2555 = ( (struct Array_2553) { ._arr = { ( (  from_dash_string269 ) ( ( (uint8_t*)"if" ) ,  ( 2 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"elif" ) ,  ( 4 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"else" ) ,  ( 4 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"case" ) ,  ( 4 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"for" ) ,  ( 3 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"in" ) ,  ( 2 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"while" ) ,  ( 5 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"pass" ) ,  ( 4 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"break" ) ,  ( 5 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"continue" ) ,  ( 8 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"as" ) ,  ( 2 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"or" ) ,  ( 2 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"and" ) ,  ( 3 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"not" ) ,  ( 3 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"return" ) ,  ( 6 ) ) ) , ( (  from_dash_string269 ) ( ( (uint8_t*)"let" ) ,  ( 3 ) ) ) } } );
                                    struct Array_2553  keywords24044 = ( (  from_dash_listlike2554 ) ( ( &temp2555 ) ) );
                                    struct env2557 envinst2557 = {
                                        .ident4042 =  ident4042 ,
                                    };
                                    if ( ( (  any2556 ) ( (  keywords14043 ) ,  ( (struct envunion2558){ .fun = (  bool  (*) (  struct env2557*  ,    struct StrView_18  ) )lam2573 , .env =  envinst2557 } ) ) ) ) {
                                        type4041 = ( HighlightType_34_Keyword1 );
                                    } else {
                                        struct env2575 envinst2575 = {
                                            .ident4042 =  ident4042 ,
                                        };
                                        if ( ( (  any2574 ) ( (  keywords24044 ) ,  ( (struct envunion2576){ .fun = (  bool  (*) (  struct env2575*  ,    struct StrView_18  ) )lam2591 , .env =  envinst2575 } ) ) ) ) {
                                            type4041 = ( HighlightType_34_Keyword2 );
                                        } else {
                                            if ( ( ( ! (  first_dash_char_dash_uppercase4040 ) ) && (  eq2418 ( ( (  peek2416 ) ( (  sc4013 ) ) ) , ( ( Maybe_420_Just ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"(" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
                                                type4041 = ( HighlightType_34_Ident4 );
                                            }
                                        }
                                    }
                                    struct envunion2593  temp2592 = ( (struct envunion2593){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                                    ( temp2592.fun ( &temp2592.env ,  (  hls4010 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4014 ) , .f_to = (  cur_dash_off4039 ) , .f_type = (  type4041 ) } ) ) );
                                } else {
                                    struct Maybe_1389  dref4049 = ( (  int2594 ) ( (  sc4013 ) ) );
                                    if ( dref4049.tag == Maybe_1389_Just_t ) {
                                        int32_t  cur_dash_off4051 = ( (  size_dash_i32380 ) ( ( ( * (  sc4013 ) ) .f_byte_dash_offset ) ) );
                                        enum HighlightType_34  type4052 = ( HighlightType_34_Number );
                                        if ( (  eq1476 ( ( dref4049 .stuff .Maybe_1389_Just_s .field0 ) , (  from_dash_integral434 ( 0 ) ) ) ) ) {
                                            if ( ( (  try_dash_char2417 ) ( (  sc4013 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"x" ) ,  ( 1 ) ) ) ) ) ) {
                                                ( (  skip_dash_while2595 ) ( (  sc4013 ) ,  (  is_dash_hex2598 ) ) );
                                                int32_t  cur_dash_off4053 = ( (  size_dash_i32380 ) ( ( ( * (  sc4013 ) ) .f_byte_dash_offset ) ) );
                                                struct envunion2600  temp2599 = ( (struct envunion2600){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                                                ( temp2599.fun ( &temp2599.env ,  (  hls4010 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4014 ) , .f_to = (  cur_dash_off4053 ) , .f_type = (  type4052 ) } ) ) );
                                                ( (  skip_dash_while2601 ) ( (  sc4013 ) ,  (  is_dash_alpha1681 ) ) );
                                                int32_t  invalid_dash_off4054 = ( (  size_dash_i32380 ) ( ( ( * (  sc4013 ) ) .f_byte_dash_offset ) ) );
                                                if ( ( !  eq660 ( (  cur_dash_off4053 ) , (  invalid_dash_off4054 ) ) ) ) {
                                                    struct envunion2603  temp2602 = ( (struct envunion2603){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                                                    ( temp2602.fun ( &temp2602.env ,  (  hls4010 ) ,  ( (struct Highlight_33) { .f_from = (  cur_dash_off4053 ) , .f_to = (  invalid_dash_off4054 ) , .f_type = ( HighlightType_34_Invalid ) } ) ) );
                                                }
                                            } else {
                                                if ( ( (  try_dash_char2417 ) ( (  sc4013 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  skip_dash_while2604 ) ( (  sc4013 ) ,  (  is_dash_octal2607 ) ) );
                                                    int32_t  cur_dash_off4055 = ( (  size_dash_i32380 ) ( ( ( * (  sc4013 ) ) .f_byte_dash_offset ) ) );
                                                    struct envunion2609  temp2608 = ( (struct envunion2609){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                                                    ( temp2608.fun ( &temp2608.env ,  (  hls4010 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4014 ) , .f_to = (  cur_dash_off4055 ) , .f_type = (  type4052 ) } ) ) );
                                                    ( (  skip_dash_while2610 ) ( (  sc4013 ) ,  (  is_dash_digit1395 ) ) );
                                                    int32_t  invalid_dash_off4056 = ( (  size_dash_i32380 ) ( ( ( * (  sc4013 ) ) .f_byte_dash_offset ) ) );
                                                    if ( ( !  eq660 ( (  cur_dash_off4055 ) , (  invalid_dash_off4056 ) ) ) ) {
                                                        struct envunion2614  temp2613 = ( (struct envunion2614){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                                                        ( temp2613.fun ( &temp2613.env ,  (  hls4010 ) ,  ( (struct Highlight_33) { .f_from = (  cur_dash_off4055 ) , .f_to = (  invalid_dash_off4056 ) , .f_type = ( HighlightType_34_Invalid ) } ) ) );
                                                    }
                                                } else {
                                                    if ( ( (  try_dash_char2417 ) ( (  sc4013 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  skip_dash_while2615 ) ( (  sc4013 ) ,  (  is_dash_binary2618 ) ) );
                                                        int32_t  cur_dash_off4057 = ( (  size_dash_i32380 ) ( ( ( * (  sc4013 ) ) .f_byte_dash_offset ) ) );
                                                        struct envunion2620  temp2619 = ( (struct envunion2620){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                                                        ( temp2619.fun ( &temp2619.env ,  (  hls4010 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4014 ) , .f_to = (  cur_dash_off4057 ) , .f_type = (  type4052 ) } ) ) );
                                                        ( (  skip_dash_while2610 ) ( (  sc4013 ) ,  (  is_dash_digit1395 ) ) );
                                                        int32_t  invalid_dash_off4058 = ( (  size_dash_i32380 ) ( ( ( * (  sc4013 ) ) .f_byte_dash_offset ) ) );
                                                        if ( ( !  eq660 ( (  cur_dash_off4057 ) , (  invalid_dash_off4058 ) ) ) ) {
                                                            struct envunion2622  temp2621 = ( (struct envunion2622){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                                                            ( temp2621.fun ( &temp2621.env ,  (  hls4010 ) ,  ( (struct Highlight_33) { .f_from = (  cur_dash_off4057 ) , .f_to = (  invalid_dash_off4058 ) , .f_type = ( HighlightType_34_Invalid ) } ) ) );
                                                        }
                                                    } else {
                                                        struct envunion2624  temp2623 = ( (struct envunion2624){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                                                        ( temp2623.fun ( &temp2623.env ,  (  hls4010 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4014 ) , .f_to = (  cur_dash_off4051 ) , .f_type = (  type4052 ) } ) ) );
                                                    }
                                                }
                                            }
                                        } else {
                                            struct envunion2626  temp2625 = ( (struct envunion2626){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                                            ( temp2625.fun ( &temp2625.env ,  (  hls4010 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4014 ) , .f_to = (  cur_dash_off4051 ) , .f_type = (  type4052 ) } ) ) );
                                        }
                                    }
                                    else {
                                        if ( dref4049.tag == Maybe_1389_None_t ) {
                                            ( (  drop_prime_1405 ) ( (  sc4013 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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
    return ( Unit_10_Unit );
}

struct envunion2631 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

struct envunion2633 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

static  struct Maybe_420   char_dash_satisfies_prime_2636 (    struct Scanner_1377 *  sc3560 ,    bool (*  condition3562 )(    struct Char_101  ) ) {
    struct Maybe_420  dref3563 = ( (  head1684 ) ( ( ( * (  sc3560 ) ) .f_s ) ) );
    if ( dref3563.tag == Maybe_420_Just_t ) {
        if ( ( (  condition3562 ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1405 ) ( (  sc3560 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_420_Just ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
    else {
        if ( dref3563.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2635 (    struct Scanner_1377 *  sc3567 ,    bool (*  condition3569 )(    struct Char_101  ) ) {
    return ( (  is_dash_just2421 ) ( ( (  char_dash_satisfies_prime_2636 ) ( (  sc3567 ) ,  (  condition3569 ) ) ) ) );
}

static  enum Unit_10   skip_dash_while2634 (    struct Scanner_1377 *  sc3583 ,    bool (*  condition3585 )(    struct Char_101  ) ) {
    while ( ( (  char_dash_satisfies2635 ) ( (  sc3583 ) ,  (  condition3585 ) ) ) ) {
    }
    return ( Unit_10_Unit );
}

struct envunion2639 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

struct envunion2641 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

struct envunion2643 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

static  enum Unit_10   markdown2628 (   struct env152* env ,    struct List_31 *  hls4061 ,    struct StrView_18  line_dash_sv4063 ) {
    struct Scanner_1377  temp2629 = ( (  mk_dash_from_dash_str1379 ) ( (  line_dash_sv4063 ) ) );
    struct Scanner_1377 *  sc4064 = ( &temp2629 );
    if ( ( (  matches_dash_str2492 ) ( (  sc4064 ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"---" ) ,  ( 3 ) ) ) ) ) ) {
        int32_t  to_dash_off4065 = ( (  size_dash_i32380 ) ( ( ( * (  sc4064 ) ) .f_byte_dash_offset ) ) );
        struct envunion2631  temp2630 = ( (struct envunion2631){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
        ( temp2630.fun ( &temp2630.env ,  (  hls4061 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_integral92 ( 0 ) ) , .f_to = (  to_dash_off4065 ) , .f_type = ( HighlightType_34_Special1 ) } ) ) );
    } else {
        if ( ( (  try_dash_char2417 ) ( (  sc4064 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion2633  temp2632 = ( (struct envunion2633){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
            ( temp2632.fun ( &temp2632.env ,  (  hls4061 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_integral92 ( 0 ) ) , .f_to = ( (  size_dash_i32380 ) ( ( (  num_dash_bytes465 ) ( (  line_dash_sv4063 ) ) ) ) ) , .f_type = ( HighlightType_34_Keyword1 ) } ) ) );
        } else {
            ( (  skip_dash_while2634 ) ( (  sc4064 ) ,  (  is_dash_whitespace484 ) ) );
            int32_t  from_dash_off4066 = ( (  size_dash_i32380 ) ( ( ( * (  sc4064 ) ) .f_byte_dash_offset ) ) );
            if ( ( (  try_dash_char2417 ) ( (  sc4064 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) ) ) {
                int32_t  to_dash_off4067 = ( (  size_dash_i32380 ) ( ( ( * (  sc4064 ) ) .f_byte_dash_offset ) ) );
                struct envunion153  temp2637 = ( (struct envunion153){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                ( temp2637.fun ( &temp2637.env ,  (  hls4061 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4066 ) , .f_to = (  to_dash_off4067 ) , .f_type = ( HighlightType_34_Special1 ) } ) ) );
                ( (  skip_dash_while2634 ) ( (  sc4064 ) ,  (  is_dash_whitespace484 ) ) );
                int32_t  from_dash_off4068 = ( (  size_dash_i32380 ) ( ( ( * (  sc4064 ) ) .f_byte_dash_offset ) ) );
                if ( ( (  matches_dash_str2492 ) ( (  sc4064 ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"[ ]" ) ,  ( 3 ) ) ) ) ) ) {
                    int32_t  to_dash_off4069 = ( (  size_dash_i32380 ) ( ( ( * (  sc4064 ) ) .f_byte_dash_offset ) ) );
                    struct envunion2639  temp2638 = ( (struct envunion2639){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                    ( temp2638.fun ( &temp2638.env ,  (  hls4061 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4068 ) , .f_to = (  to_dash_off4069 ) , .f_type = ( HighlightType_34_Keyword1 ) } ) ) );
                } else {
                    if ( ( ( (  matches_dash_str2492 ) ( (  sc4064 ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"[x]" ) ,  ( 3 ) ) ) ) ) || ( (  matches_dash_str2492 ) ( (  sc4064 ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"[X]" ) ,  ( 3 ) ) ) ) ) ) ) {
                        int32_t  to_dash_off4070 = ( (  size_dash_i32380 ) ( ( ( * (  sc4064 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2641  temp2640 = ( (struct envunion2641){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                        ( temp2640.fun ( &temp2640.env ,  (  hls4061 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4068 ) , .f_to = (  to_dash_off4070 ) , .f_type = ( HighlightType_34_Keyword2 ) } ) ) );
                    }
                }
            }
            while ( ( ! ( (  null2413 ) ( (  sc4064 ) ) ) ) ) {
                int32_t  from_dash_off4071 = ( (  size_dash_i32380 ) ( ( ( * (  sc4064 ) ) .f_byte_dash_offset ) ) );
                if ( ( (  try_dash_char2417 ) ( (  sc4064 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"`" ) ,  ( 1 ) ) ) ) ) ) {
                    while ( ( ( ! ( (  try_dash_char2417 ) ( (  sc4064 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"`" ) ,  ( 1 ) ) ) ) ) ) && ( ! ( (  null2413 ) ( (  sc4064 ) ) ) ) ) ) {
                        ( (  drop_prime_1405 ) ( (  sc4064 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                    }
                    int32_t  to_dash_off4072 = ( (  size_dash_i32380 ) ( ( ( * (  sc4064 ) ) .f_byte_dash_offset ) ) );
                    struct envunion2643  temp2642 = ( (struct envunion2643){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                    ( temp2642.fun ( &temp2642.env ,  (  hls4061 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4071 ) , .f_to = (  to_dash_off4072 ) , .f_type = ( HighlightType_34_Ident2 ) } ) ) );
                } else {
                    ( (  drop_prime_1405 ) ( (  sc4064 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                }
            }
        }
    }
    return ( Unit_10_Unit );
}

static  struct Maybe_420   char_dash_satisfies_prime_2648 (    struct Scanner_1377 *  sc3560 ,    bool (*  condition3562 )(    struct Char_101  ) ) {
    struct Maybe_420  dref3563 = ( (  head1684 ) ( ( ( * (  sc3560 ) ) .f_s ) ) );
    if ( dref3563.tag == Maybe_420_Just_t ) {
        if ( ( (  condition3562 ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1405 ) ( (  sc3560 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_420_Just ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
    else {
        if ( dref3563.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2647 (    struct Scanner_1377 *  sc3567 ,    bool (*  condition3569 )(    struct Char_101  ) ) {
    return ( (  is_dash_just2421 ) ( ( (  char_dash_satisfies_prime_2648 ) ( (  sc3567 ) ,  (  condition3569 ) ) ) ) );
}

static  struct Maybe_420   char_dash_satisfies_prime_2651 (    struct Scanner_1377 *  sc3560 ,    bool (*  condition3562 )(    struct Char_101  ) ) {
    struct Maybe_420  dref3563 = ( (  head1684 ) ( ( ( * (  sc3560 ) ) .f_s ) ) );
    if ( dref3563.tag == Maybe_420_Just_t ) {
        if ( ( (  condition3562 ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1405 ) ( (  sc3560 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_420_Just ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
    else {
        if ( dref3563.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2650 (    struct Scanner_1377 *  sc3567 ,    bool (*  condition3569 )(    struct Char_101  ) ) {
    return ( (  is_dash_just2421 ) ( ( (  char_dash_satisfies_prime_2651 ) ( (  sc3567 ) ,  (  condition3569 ) ) ) ) );
}

static  enum Unit_10   skip_dash_while2649 (    struct Scanner_1377 *  sc3583 ,    bool (*  condition3585 )(    struct Char_101  ) ) {
    while ( ( (  char_dash_satisfies2650 ) ( (  sc3583 ) ,  (  condition3585 ) ) ) ) {
    }
    return ( Unit_10_Unit );
}

static  bool   gcode_dash_keyword_dash_char2652 (    struct Char_101  c4075 ) {
    return ( ( (  is_dash_not_dash_whitespace2015 ) ( (  c4075 ) ) ) && ( !  eq429 ( (  c4075 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) );
}

static  uint8_t   char_dash_case_dash_diff2654 (  ) {
    return (  op_dash_sub1354 ( ( (  char_dash_u8578 ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) ) , ( (  char_dash_u8578 ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Char_101   to_dash_lower2653 (    struct Char_101  c1528 ) {
    if ( ( (  is_dash_upper2549 ) ( (  c1528 ) ) ) ) {
        ( (  assert1092 ) ( (  eq352 ( ( (  c1528 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"(to-lower) utf8 not yet supported." ) ,  ( 34 ) ) ) ) );
        return ( (  from_dash_u82136 ) ( (  op_dash_add1355 ( ( (  char_dash_u8578 ) ( (  c1528 ) ) ) , ( (  char_dash_case_dash_diff2654 ) ( ) ) ) ) ) );
    }
    return (  c1528 );
}

static  struct Char_101   undefined2657 (  ) {
    struct Char_101  temp2658;
    return (  temp2658 );
}

static  struct Char_101   or_dash_fail2656 (    struct Maybe_420  x1353 ,    struct StrConcat_1059  errmsg1355 ) {
    struct Maybe_420  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_420_None_t ) {
        ( (  panic2271 ) ( (  errmsg1355 ) ) );
        return ( (  undefined2657 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_420_Just_t ) {
            return ( dref1356 .stuff .Maybe_420_Just_s .field0 );
        }
    }
}

static  struct Char_101   char_dash_at_dash_offset2655 (    struct StrView_18  self2633 ,    size_t  i2635 ) {
    return ( (  or_dash_fail2656 ) ( ( (  head1684 ) ( ( (  chars364 ) ( ( (struct StrView_18) { .f_contents = ( (  from954 ) ( ( (  self2633 ) .f_contents ) ,  (  i2635 ) ) ) } ) ) ) ) ) ,  ( ( StrConcat_1059_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"(StrView.char-at-offset) off too great for this StrView (" ) ,  ( 57 ) ) ) ,  (  i2635 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2661 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

static  struct Maybe_420   char_dash_satisfies_prime_2663 (    struct Scanner_1377 *  sc3560 ,    bool (*  condition3562 )(    struct Char_101  ) ) {
    struct Maybe_420  dref3563 = ( (  head1684 ) ( ( ( * (  sc3560 ) ) .f_s ) ) );
    if ( dref3563.tag == Maybe_420_Just_t ) {
        if ( ( (  condition3562 ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1405 ) ( (  sc3560 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_420_Just ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
    else {
        if ( dref3563.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2662 (    struct Scanner_1377 *  sc3567 ,    bool (*  condition3569 )(    struct Char_101  ) ) {
    return ( (  is_dash_just2421 ) ( ( (  char_dash_satisfies_prime_2663 ) ( (  sc3567 ) ,  (  condition3569 ) ) ) ) );
}

static  bool   lam2664 (    struct Char_101  c4089 ) {
    return ( !  eq429 ( (  c4089 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) );
}

struct envunion2666 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

static  enum Unit_10   gcode2645 (   struct env154* env ,    struct List_31 *  hls4078 ,    struct StrView_18  line_dash_sv4080 ) {
    struct Scanner_1377  temp2646 = ( (  mk_dash_from_dash_str1379 ) ( (  line_dash_sv4080 ) ) );
    struct Scanner_1377 *  sc4081 = ( &temp2646 );
    ( (  skip_dash_while2634 ) ( (  sc4081 ) ,  (  is_dash_whitespace484 ) ) );
    int32_t  first_dash_from_dash_off4082 = ( (  size_dash_i32380 ) ( ( ( * (  sc4081 ) ) .f_byte_dash_offset ) ) );
    if ( ( (  char_dash_satisfies2647 ) ( (  sc4081 ) ,  (  is_dash_alphanumeric1680 ) ) ) ) {
        ( (  skip_dash_while2649 ) ( (  sc4081 ) ,  (  gcode_dash_keyword_dash_char2652 ) ) );
        int32_t  first_dash_to_dash_off4083 = ( (  size_dash_i32380 ) ( ( ( * (  sc4081 ) ) .f_byte_dash_offset ) ) );
        enum HighlightType_34  type4084 = ( HighlightType_34_Invalid );
        struct Char_101  first_dash_char4085 = ( (  to_dash_lower2653 ) ( ( (  char_dash_at_dash_offset2655 ) ( (  line_dash_sv4080 ) ,  ( (  i32_dash_size349 ) ( (  first_dash_from_dash_off4082 ) ) ) ) ) ) );
        if ( (  eq429 ( (  first_dash_char4085 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) {
            type4084 = ( HighlightType_34_Keyword1 );
        } else {
            if ( (  eq429 ( (  first_dash_char4085 ) , ( (  from_dash_charlike407 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) ) ) ) {
                type4084 = ( HighlightType_34_Ident1 );
            }
        }
        struct envunion155  temp2659 = ( (struct envunion155){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
        ( temp2659.fun ( &temp2659.env ,  (  hls4078 ) ,  ( (struct Highlight_33) { .f_from = (  first_dash_from_dash_off4082 ) , .f_to = (  first_dash_to_dash_off4083 ) , .f_type = (  type4084 ) } ) ) );
        ( (  skip_dash_while2634 ) ( (  sc4081 ) ,  (  is_dash_whitespace484 ) ) );
        int32_t  from_dash_off4086 = ( (  size_dash_i32380 ) ( ( ( * (  sc4081 ) ) .f_byte_dash_offset ) ) );
        while ( ( (  char_dash_satisfies2647 ) ( (  sc4081 ) ,  (  is_dash_alphanumeric1680 ) ) ) ) {
            ( (  skip_dash_while2649 ) ( (  sc4081 ) ,  (  gcode_dash_keyword_dash_char2652 ) ) );
            int32_t  to_dash_off4087 = ( (  size_dash_i32380 ) ( ( ( * (  sc4081 ) ) .f_byte_dash_offset ) ) );
            ( (  skip_dash_while2634 ) ( (  sc4081 ) ,  (  is_dash_whitespace484 ) ) );
            struct envunion2661  temp2660 = ( (struct envunion2661){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
            ( temp2660.fun ( &temp2660.env ,  (  hls4078 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4086 ) , .f_to = (  to_dash_off4087 ) , .f_type = ( HighlightType_34_Ident4 ) } ) ) );
        }
    }
    while ( ( (  char_dash_satisfies2662 ) ( (  sc4081 ) ,  (  lam2664 ) ) ) ) {
    }
    int32_t  from_dash_off4090 = ( (  size_dash_i32380 ) ( ( ( * (  sc4081 ) ) .f_byte_dash_offset ) ) );
    if ( ( (  try_dash_char2417 ) ( (  sc4081 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ) {
        struct envunion2666  temp2665 = ( (struct envunion2666){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
        ( temp2665.fun ( &temp2665.env ,  (  hls4078 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4090 ) , .f_to = ( (  size_dash_i32380 ) ( ( (  num_dash_bytes465 ) ( (  line_dash_sv4080 ) ) ) ) ) , .f_type = ( HighlightType_34_Comment ) } ) ) );
    }
    return ( Unit_10_Unit );
}

struct Tuple2_2671 {
    struct Char_101  field0;
    enum HighlightType_34  field1;
};

static struct Tuple2_2671 Tuple2_2671_Tuple2 (  struct Char_101  field0 ,  enum HighlightType_34  field1 ) {
    return ( struct Tuple2_2671 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Slice_2670 {
    struct Tuple2_2671 *  f_ptr;
    size_t  f_count;
};

struct Array_2673 {
    struct Tuple2_2671 _arr [8];
};

static  struct Tuple2_2671 *   cast_dash_ptr2674 (    struct Array_2673 *  p398 ) {
    return ( (struct Tuple2_2671 * ) (  p398 ) );
}

static  struct Slice_2670   from_dash_listlike2672 (    struct Array_2673 *  arr2200 ) {
    return ( (struct Slice_2670) { .f_ptr = ( (  cast_dash_ptr2674 ) ( (  arr2200 ) ) ) , .f_count = ( (  i32_dash_size349 ) ( ( 8 ) ) ) } );
}

struct env2676 {
    struct Slice_2670  bf_dash_chars4097;
    ;
    ;
    ;
    ;
};

struct envunion2677 {
    bool  (*fun) (  struct env2676*  ,    struct Char_101  );
    struct env2676 env;
};

struct SliceIter_2681 {
    struct Slice_2670  f_slice;
    size_t  f_current_dash_offset;
};

struct Map_2680 {
    struct SliceIter_2681  field0;
    struct Char_101 (*  field1 )(    struct Tuple2_2671  );
};

static struct Map_2680 Map_2680_Map (  struct SliceIter_2681  field0 ,  struct Char_101 (*  field1 )(    struct Tuple2_2671  ) ) {
    return ( struct Map_2680 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2682 {
    struct Char_101  c4099;
    ;
};

struct envunion2683 {
    bool  (*fun) (  struct env2682*  ,    struct Char_101  );
    struct env2682 env;
};

struct env2685 {
    struct envunion2683  fun1160;
};

struct envunion2686 {
    bool  (*fun) (  struct env2685*  ,    struct Char_101  ,    bool  );
    struct env2685 env;
};

static  struct Map_2680   into_dash_iter2687 (    struct Map_2680  self804 ) {
    return (  self804 );
}

struct Maybe_2689 {
    enum {
        Maybe_2689_None_t,
        Maybe_2689_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2671  field0;
        } Maybe_2689_Just_s;
    } stuff;
};

static struct Maybe_2689 Maybe_2689_Just (  struct Tuple2_2671  field0 ) {
    return ( struct Maybe_2689 ) { .tag = Maybe_2689_Just_t, .stuff = { .Maybe_2689_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_2671 *   offset_dash_ptr2691 (    struct Tuple2_2671 *  x377 ,    int64_t  count379 ) {
    struct Tuple2_2671  temp2692;
    return ( (struct Tuple2_2671 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul416 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp2692 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2689   next2690 (    struct SliceIter_2681 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp371 ( (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2689) { .tag = Maybe_2689_None_t } );
    }
    struct Tuple2_2671  elem2258 = ( * ( (  offset_dash_ptr2691 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2689_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_420   next2688 (    struct Map_2680 *  dref806 ) {
    struct Maybe_2689  dref809 = ( (  next2690 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_2689_None_t ) {
        return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_2689_Just_t ) {
            return ( ( Maybe_420_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_2689_Just_s .field0 ) ) ) ) );
        }
    }
}

static  bool   reduce2684 (    struct Map_2680  iterable1118 ,    bool  base1120 ,   struct envunion2686  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct Map_2680  it1124 = ( (  into_dash_iter2687 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_420  dref1125 = ( (  next2688 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_420_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_420_Just_t ) {
                struct envunion2686  temp2693 = (  fun1122 );
                x1123 = ( temp2693.fun ( &temp2693.env ,  ( dref1125 .stuff .Maybe_420_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2694 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2694);
    abort ( );
    ( Unit_10_Unit );
    bool  temp2695;
    return (  temp2695 );
}

static  bool   lam2696 (   struct env2685* env ,    struct Char_101  e1162 ,    bool  x1164 ) {
    struct envunion2683  temp2697 = ( env->fun1160 );
    return ( ( temp2697.fun ( &temp2697.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2679 (    struct Map_2680  it1158 ,   struct envunion2683  fun1160 ) {
    struct env2685 envinst2685 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2684 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2686){ .fun = (  bool  (*) (  struct env2685*  ,    struct Char_101  ,    bool  ) )lam2696 , .env =  envinst2685 } ) ) );
}

static  struct SliceIter_2681   into_dash_iter2699 (    struct Slice_2670  self2250 ) {
    return ( (struct SliceIter_2681) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Map_2680   map2698 (    struct Slice_2670  iterable813 ,    struct Char_101 (*  fun815 )(    struct Tuple2_2671  ) ) {
    struct SliceIter_2681  it816 = ( (  into_dash_iter2699 ) ( (  iterable813 ) ) );
    return ( ( Map_2680_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct Char_101   fst2700 (    struct Tuple2_2671  dref1563 ) {
    return ( dref1563 .field0 );
}

static  bool   lam2701 (   struct env2682* env ,    struct Char_101  eq4101 ) {
    return (  eq429 ( (  eq4101 ) , ( env->c4099 ) ) );
}

static  bool   lam2678 (   struct env2676* env ,    struct Char_101  c4099 ) {
    struct env2682 envinst2682 = {
        .c4099 =  c4099 ,
    };
    return ( (  any2679 ) ( ( (  map2698 ) ( ( env->bf_dash_chars4097 ) ,  (  fst2700 ) ) ) ,  ( (struct envunion2683){ .fun = (  bool  (*) (  struct env2682*  ,    struct Char_101  ) )lam2701 , .env =  envinst2682 } ) ) );
}

struct env2703 {
    struct Slice_2670  bf_dash_chars4097;
    ;
    ;
    ;
    ;
};

struct envunion2704 {
    bool  (*fun) (  struct env2703*  ,    struct Char_101  );
    struct env2703 env;
};

static  struct Maybe_420   char_dash_satisfies_prime_2702 (    struct Scanner_1377 *  sc3560 ,   struct envunion2704  condition3562 ) {
    struct Maybe_420  dref3563 = ( (  head1684 ) ( ( ( * (  sc3560 ) ) .f_s ) ) );
    if ( dref3563.tag == Maybe_420_Just_t ) {
        struct envunion2704  temp2705 = (  condition3562 );
        if ( ( temp2705.fun ( &temp2705.env ,  ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1405 ) ( (  sc3560 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_420_Just ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
    else {
        if ( dref3563.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

struct env2708 {
    struct Char_101  c4105;
    ;
};

struct envunion2709 {
    bool  (*fun) (  struct env2708*  ,    struct Char_101  );
    struct env2708 env;
};

struct env2711 {
    struct envunion2709  fun1160;
};

struct envunion2712 {
    bool  (*fun) (  struct env2711*  ,    struct Char_101  ,    bool  );
    struct env2711 env;
};

static  bool   reduce2710 (    struct Map_2680  iterable1118 ,    bool  base1120 ,   struct envunion2712  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct Map_2680  it1124 = ( (  into_dash_iter2687 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_420  dref1125 = ( (  next2688 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_420_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_420_Just_t ) {
                struct envunion2712  temp2713 = (  fun1122 );
                x1123 = ( temp2713.fun ( &temp2713.env ,  ( dref1125 .stuff .Maybe_420_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2714 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2714);
    abort ( );
    ( Unit_10_Unit );
    bool  temp2715;
    return (  temp2715 );
}

static  bool   lam2716 (   struct env2711* env ,    struct Char_101  e1162 ,    bool  x1164 ) {
    struct envunion2709  temp2717 = ( env->fun1160 );
    return ( ( temp2717.fun ( &temp2717.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2707 (    struct Map_2680  it1158 ,   struct envunion2709  fun1160 ) {
    struct env2711 envinst2711 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2710 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2712){ .fun = (  bool  (*) (  struct env2711*  ,    struct Char_101  ,    bool  ) )lam2716 , .env =  envinst2711 } ) ) );
}

static  bool   lam2718 (   struct env2708* env ,    struct Char_101  ec4107 ) {
    return (  eq429 ( (  ec4107 ) , ( env->c4105 ) ) );
}

static  bool   lam2706 (   struct env2703* env ,    struct Char_101  c4105 ) {
    struct env2708 envinst2708 = {
        .c4105 =  c4105 ,
    };
    return ( (  any2707 ) ( ( (  map2698 ) ( ( env->bf_dash_chars4097 ) ,  (  fst2700 ) ) ) ,  ( (struct envunion2709){ .fun = (  bool  (*) (  struct env2708*  ,    struct Char_101  ) )lam2718 , .env =  envinst2708 } ) ) );
}

static  enum HighlightType_34   snd2719 (    struct Tuple2_2671  dref1566 ) {
    return ( dref1566 .field1 );
}

static  struct Tuple2_2671   undefined2721 (  ) {
    struct Tuple2_2671  temp2722;
    return (  temp2722 );
}

static  struct Tuple2_2671   or_dash_fail2720 (    struct Maybe_2689  x1353 ,    struct StrView_18  errmsg1355 ) {
    struct Maybe_2689  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_2689_None_t ) {
        ( (  panic1139 ) ( (  errmsg1355 ) ) );
        return ( (  undefined2721 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_2689_Just_t ) {
            return ( dref1356 .stuff .Maybe_2689_Just_s .field0 );
        }
    }
}

struct env2725 {
    ;
    struct Char_101  cc4109;
};

struct envunion2726 {
    bool  (*fun) (  struct env2725*  ,    struct Tuple2_2671  );
    struct env2725 env;
};

struct Filter_2724 {
    struct SliceIter_2681  f_og;
    struct envunion2726  f_fun;
};

static  struct Maybe_2689   next2727 (    struct Filter_2724 *  self841 ) {
    while ( ( true ) ) {
        struct Maybe_2689  dref842 = ( (  next2690 ) ( ( & ( ( * (  self841 ) ) .f_og ) ) ) );
        if ( dref842.tag == Maybe_2689_None_t ) {
            return ( (struct Maybe_2689) { .tag = Maybe_2689_None_t } );
        }
        else {
            if ( dref842.tag == Maybe_2689_Just_t ) {
                struct envunion2726  temp2728 = ( ( * (  self841 ) ) .f_fun );
                if ( ( temp2728.fun ( &temp2728.env ,  ( dref842 .stuff .Maybe_2689_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2689_Just ) ( ( dref842 .stuff .Maybe_2689_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2689  temp2729;
    return (  temp2729 );
}

static  struct Filter_2724   into_dash_iter2731 (    struct Filter_2724  self838 ) {
    return (  self838 );
}

static  struct Maybe_2689   head2723 (    struct Filter_2724  it1167 ) {
    struct Filter_2724  temp2730 = ( (  into_dash_iter2731 ) ( (  it1167 ) ) );
    return ( (  next2727 ) ( ( &temp2730 ) ) );
}

static  struct Filter_2724   filter2732 (    struct Slice_2670  iterable846 ,   struct envunion2726  fun848 ) {
    struct SliceIter_2681  it849 = ( (  into_dash_iter2699 ) ( (  iterable846 ) ) );
    return ( (struct Filter_2724) { .f_og = (  it849 ) , .f_fun = (  fun848 ) } );
}

static  bool   lam2733 (   struct env2725* env ,    struct Tuple2_2671  dref4110 ) {
    return (  eq429 ( ( dref4110 .field0 ) , ( env->cc4109 ) ) );
}

struct env2736 {
    struct envunion2677  is_dash_bf_dash_char4102;
};

struct envunion2737 {
    bool  (*fun) (  struct env2736*  ,    struct Char_101  );
    struct env2736 env;
};

static  struct Maybe_420   char_dash_satisfies_prime_2739 (    struct Scanner_1377 *  sc3560 ,   struct envunion2737  condition3562 ) {
    struct Maybe_420  dref3563 = ( (  head1684 ) ( ( ( * (  sc3560 ) ) .f_s ) ) );
    if ( dref3563.tag == Maybe_420_Just_t ) {
        struct envunion2737  temp2740 = (  condition3562 );
        if ( ( temp2740.fun ( &temp2740.env ,  ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1405 ) ( (  sc3560 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_420_Just ) ( ( dref3563 .stuff .Maybe_420_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
    else {
        if ( dref3563.tag == Maybe_420_None_t ) {
            return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2738 (    struct Scanner_1377 *  sc3567 ,   struct envunion2737  condition3569 ) {
    return ( (  is_dash_just2421 ) ( ( (  char_dash_satisfies_prime_2739 ) ( (  sc3567 ) ,  (  condition3569 ) ) ) ) );
}

static  enum Unit_10   skip_dash_while2735 (    struct Scanner_1377 *  sc3583 ,   struct envunion2737  condition3585 ) {
    while ( ( (  char_dash_satisfies2738 ) ( (  sc3583 ) ,  (  condition3585 ) ) ) ) {
    }
    return ( Unit_10_Unit );
}

static  bool   lam2741 (   struct env2736* env ,    struct Char_101  c4116 ) {
    struct envunion2677  temp2742 = ( env->is_dash_bf_dash_char4102 );
    return ( ! ( temp2742.fun ( &temp2742.env ,  (  c4116 ) ) ) );
}

struct envunion2744 {
    enum Unit_10  (*fun) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  );
    struct env48 env;
};

static  enum Unit_10   brainfuck2668 (   struct env156* env ,    struct List_31 *  hls4093 ,    struct StrView_18  line_dash_sv4095 ) {
    struct Scanner_1377  temp2669 = ( (  mk_dash_from_dash_str1379 ) ( (  line_dash_sv4095 ) ) );
    struct Scanner_1377 *  sc4096 = ( &temp2669 );
    ( (  skip_dash_while2634 ) ( (  sc4096 ) ,  (  is_dash_whitespace484 ) ) );
    struct Array_2673  temp2675 = ( (struct Array_2673) { ._arr = { ( ( Tuple2_2671_Tuple2 ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ,  ( HighlightType_34_Special1 ) ) ) , ( ( Tuple2_2671_Tuple2 ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) ,  ( HighlightType_34_Special1 ) ) ) , ( ( Tuple2_2671_Tuple2 ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"+" ) ,  ( 1 ) ) ) ,  ( HighlightType_34_Special2 ) ) ) , ( ( Tuple2_2671_Tuple2 ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ,  ( HighlightType_34_Special2 ) ) ) , ( ( Tuple2_2671_Tuple2 ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ,  ( HighlightType_34_Special3 ) ) ) , ( ( Tuple2_2671_Tuple2 ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)">" ) ,  ( 1 ) ) ) ,  ( HighlightType_34_Special3 ) ) ) , ( ( Tuple2_2671_Tuple2 ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"," ) ,  ( 1 ) ) ) ,  ( HighlightType_34_Keyword1 ) ) ) , ( ( Tuple2_2671_Tuple2 ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ,  ( HighlightType_34_Keyword2 ) ) ) } } );
    struct Slice_2670  bf_dash_chars4097 = ( ( (  from_dash_listlike2672 ) ( ( &temp2675 ) ) ) );
    struct env2676 envinst2676 = {
        .bf_dash_chars4097 =  bf_dash_chars4097 ,
    };
    struct envunion2677  is_dash_bf_dash_char4102 = ( (struct envunion2677){ .fun = (  bool  (*) (  struct env2676*  ,    struct Char_101  ) )lam2678 , .env =  envinst2676 } );
    while ( ( ! ( (  null2413 ) ( (  sc4096 ) ) ) ) ) {
        while ( ( true ) ) {
            int32_t  from_dash_off4103 = ( (  size_dash_i32380 ) ( ( ( * (  sc4096 ) ) .f_byte_dash_offset ) ) );
            struct env2703 envinst2703 = {
                .bf_dash_chars4097 =  bf_dash_chars4097 ,
            };
            struct Maybe_420  dref4108 = ( (  char_dash_satisfies_prime_2702 ) ( (  sc4096 ) ,  ( (struct envunion2704){ .fun = (  bool  (*) (  struct env2703*  ,    struct Char_101  ) )lam2706 , .env =  envinst2703 } ) ) );
            if ( dref4108.tag == Maybe_420_Just_t ) {
                struct env2725 envinst2725 = {
                    .cc4109 = dref4108 .stuff .Maybe_420_Just_s .field0 ,
                };
                enum HighlightType_34  hl4112 = ( (  snd2719 ) ( ( (  or_dash_fail2720 ) ( ( (  head2723 ) ( ( (  filter2732 ) ( (  bf_dash_chars4097 ) ,  ( (struct envunion2726){ .fun = (  bool  (*) (  struct env2725*  ,    struct Tuple2_2671  ) )lam2733 , .env =  envinst2725 } ) ) ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"could not find matched char (it should not happen)" ) ,  ( 50 ) ) ) ) ) ) );
                int32_t  to_dash_off4113 = ( (  size_dash_i32380 ) ( ( ( * (  sc4096 ) ) .f_byte_dash_offset ) ) );
                struct envunion157  temp2734 = ( (struct envunion157){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
                ( temp2734.fun ( &temp2734.env ,  (  hls4093 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4103 ) , .f_to = (  to_dash_off4113 ) , .f_type = (  hl4112 ) } ) ) );
            }
            else {
                if ( dref4108.tag == Maybe_420_None_t ) {
                    break;
                }
            }
        }
        int32_t  from_dash_off4114 = ( (  size_dash_i32380 ) ( ( ( * (  sc4096 ) ) .f_byte_dash_offset ) ) );
        struct env2736 envinst2736 = {
            .is_dash_bf_dash_char4102 =  is_dash_bf_dash_char4102 ,
        };
        ( (  skip_dash_while2735 ) ( (  sc4096 ) ,  ( (struct envunion2737){ .fun = (  bool  (*) (  struct env2736*  ,    struct Char_101  ) )lam2741 , .env =  envinst2736 } ) ) );
        int32_t  to_dash_off4117 = ( (  size_dash_i32380 ) ( ( ( * (  sc4096 ) ) .f_byte_dash_offset ) ) );
        if ( (  cmp222 ( (  to_dash_off4117 ) , (  from_dash_off4114 ) ) == 2 ) ) {
            struct envunion2744  temp2743 = ( (struct envunion2744){ .fun = (  enum Unit_10  (*) (  struct env48*  ,    struct List_31 *  ,    struct Highlight_33  ) )add2426 , .env =  env->envinst48 } );
            ( temp2743.fun ( &temp2743.env ,  (  hls4093 ) ,  ( (struct Highlight_33) { .f_from = (  from_dash_off4114 ) , .f_to = (  to_dash_off4117 ) , .f_type = ( HighlightType_34_Comment ) } ) ) );
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   recompute_dash_highlights_dash_at_dash_line2408 (   struct env196* env ,    struct TextBuf_164 *  self4385 ,    struct Line_30 *  line4387 ) {
    if ( ( ! ( ( * (  line4387 ) ) .f_invalidated ) ) ) {
        return ( Unit_10_Unit );
    }
    struct List_31 *  hls4388 = ( & ( ( * (  line4387 ) ) .f_highlights ) );
    ( (  trim2409 ) ( (  hls4388 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    struct StrView_18  line_dash_sv4389 = ( (  from_dash_bytes367 ) ( ( (  to_dash_slice368 ) ( ( ( * (  line4387 ) ) .f_line ) ) ) ) );
    enum Filetype_167  dref4390 = ( ( * (  self4385 ) ) .f_filetype );
    switch (  dref4390 ) {
        case Filetype_167_Text : {
            break;
        }
        case Filetype_167_KC : {
            struct envunion200  temp2410 = ( (struct envunion200){ .fun = (  enum Unit_10  (*) (  struct env150*  ,    struct List_31 *  ,    struct StrView_18  ) )kc2411 , .env =  env->envinst150 } );
            ( temp2410.fun ( &temp2410.env ,  (  hls4388 ) ,  (  line_dash_sv4389 ) ) );
            break;
        }
        case Filetype_167_Markdown : {
            struct envunion198  temp2627 = ( (struct envunion198){ .fun = (  enum Unit_10  (*) (  struct env152*  ,    struct List_31 *  ,    struct StrView_18  ) )markdown2628 , .env =  env->envinst152 } );
            ( temp2627.fun ( &temp2627.env ,  (  hls4388 ) ,  (  line_dash_sv4389 ) ) );
            break;
        }
        case Filetype_167_GCode : {
            struct envunion199  temp2644 = ( (struct envunion199){ .fun = (  enum Unit_10  (*) (  struct env154*  ,    struct List_31 *  ,    struct StrView_18  ) )gcode2645 , .env =  env->envinst154 } );
            ( temp2644.fun ( &temp2644.env ,  (  hls4388 ) ,  (  line_dash_sv4389 ) ) );
            break;
        }
        case Filetype_167_Brainfuck : {
            struct envunion197  temp2667 = ( (struct envunion197){ .fun = (  enum Unit_10  (*) (  struct env156*  ,    struct List_31 *  ,    struct StrView_18  ) )brainfuck2668 , .env =  env->envinst156 } );
            ( temp2667.fun ( &temp2667.env ,  (  hls4388 ) ,  (  line_dash_sv4389 ) ) );
            break;
        }
    }
    (*  line4387 ) .f_invalidated = ( false );
    return ( Unit_10_Unit );
}

static  struct Slice_32   subslice2747 (    struct Slice_32  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Highlight_33 *  begin_dash_ptr2209 = ( (  offset_dash_ptr2440 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp371 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp371 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_32) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub580 ( ( (  min956 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_32) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct SliceIter_2444   into_dash_iter2746 (    struct List_31  self2433 ) {
    return ( (  into_dash_iter2453 ) ( ( (  subslice2747 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

static  bool   between2749 (    int32_t  c1377 ,    int32_t  l1379 ,    int32_t  r1381 ) {
    int32_t  from1382 = ( (  min1083 ) ( (  l1379 ) ,  (  r1381 ) ) );
    int32_t  to1383 = ( (  max443 ) ( (  l1379 ) ,  (  r1381 ) ) );
    return ( (  cmp222 ( (  from1382 ) , (  c1377 ) ) != 2 ) && (  cmp222 ( (  c1377 ) , (  to1383 ) ) != 2 ) );
}

static  struct Maybe_273   highlight_dash_at2406 (   struct env201* env ,    struct TextBuf_164 *  self4393 ,    struct Pos_40  pos4395 ) {
    struct Line_30 *  line4396 = ( (  get_dash_ptr370 ) ( ( & ( ( * (  self4393 ) ) .f_buf ) ) ,  ( (  i32_dash_size349 ) ( ( (  pos4395 ) .f_line ) ) ) ) );
    struct envunion202  temp2407 = ( (struct envunion202){ .fun = (  enum Unit_10  (*) (  struct env196*  ,    struct TextBuf_164 *  ,    struct Line_30 *  ) )recompute_dash_highlights_dash_at_dash_line2408 , .env =  env->envinst196 } );
    ( temp2407.fun ( &temp2407.env ,  (  self4393 ) ,  (  line4396 ) ) );
    struct SliceIter_2444  temp2745 =  into_dash_iter2746 ( ( ( * (  line4396 ) ) .f_highlights ) );
    while (true) {
        struct Maybe_2449  __cond2748 =  next2450 (&temp2745);
        if (  __cond2748 .tag == 0 ) {
            break;
        }
        struct Highlight_33  hl4398 =  __cond2748 .stuff .Maybe_2449_Just_s .field0;
        if ( ( (  between2749 ) ( ( (  pos4395 ) .f_bi ) ,  ( (  hl4398 ) .f_from ) ,  (  op_dash_sub229 ( ( (  hl4398 ) .f_to ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) ) {
            return ( ( Maybe_273_Just ) ( ( (  hl4398 ) .f_type ) ) );
        }
        if ( (  cmp222 ( ( (  pos4395 ) .f_bi ) , ( (  hl4398 ) .f_from ) ) == 0 ) ) {
            return ( (struct Maybe_273) { .tag = Maybe_273_None_t } );
        }
    }
    return ( (struct Maybe_273) { .tag = Maybe_273_None_t } );
}

struct Maybe_2753 {
    enum {
        Maybe_2753_None_t,
        Maybe_2753_Just_t,
    } tag;
    union {
        struct {
            struct HighlightColors_240  field0;
        } Maybe_2753_Just_s;
    } stuff;
};

static struct Maybe_2753 Maybe_2753_Just (  struct HighlightColors_240  field0 ) {
    return ( struct Maybe_2753 ) { .tag = Maybe_2753_Just_t, .stuff = { .Maybe_2753_Just_s = { .field0 = field0 } } };
};

struct env2754 {
    ;
    struct Theme_237 *  theme4452;
};

struct envunion2755 {
    struct Colors_238  (*fun) (  struct env2754*  ,    struct HighlightColors_240  );
    struct env2754 env;
};

static  struct Colors_238   maybe2752 (    struct Maybe_2753  x1592 ,   struct envunion2755  fun1594 ,    struct Colors_238  default1596 ) {
    struct envunion2755  temp2756 = (  fun1594 );
    return ( {  struct Maybe_2753  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_2753_Just_t ? ( temp2756.fun ( &temp2756.env ,  ( dref1597 .stuff .Maybe_2753_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

struct SliceIter_2759 {
    struct Slice_239  f_slice;
    size_t  f_current_dash_offset;
};

struct env2760 {
    enum HighlightType_34  hltype4454;
    ;
};

struct envunion2761 {
    bool  (*fun) (  struct env2760*  ,    struct HighlightColors_240  );
    struct env2760 env;
};

struct Filter_2758 {
    struct SliceIter_2759  f_og;
    struct envunion2761  f_fun;
};

static  struct HighlightColors_240 *   offset_dash_ptr2764 (    struct HighlightColors_240 *  x377 ,    int64_t  count379 ) {
    struct HighlightColors_240  temp2765;
    return ( (struct HighlightColors_240 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul416 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp2765 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2753   next2763 (    struct SliceIter_2759 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp371 ( (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2753) { .tag = Maybe_2753_None_t } );
    }
    struct HighlightColors_240  elem2258 = ( * ( (  offset_dash_ptr2764 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2753_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_2753   next2762 (    struct Filter_2758 *  self841 ) {
    while ( ( true ) ) {
        struct Maybe_2753  dref842 = ( (  next2763 ) ( ( & ( ( * (  self841 ) ) .f_og ) ) ) );
        if ( dref842.tag == Maybe_2753_None_t ) {
            return ( (struct Maybe_2753) { .tag = Maybe_2753_None_t } );
        }
        else {
            if ( dref842.tag == Maybe_2753_Just_t ) {
                struct envunion2761  temp2766 = ( ( * (  self841 ) ) .f_fun );
                if ( ( temp2766.fun ( &temp2766.env ,  ( dref842 .stuff .Maybe_2753_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2753_Just ) ( ( dref842 .stuff .Maybe_2753_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2753  temp2767;
    return (  temp2767 );
}

static  struct Filter_2758   into_dash_iter2769 (    struct Filter_2758  self838 ) {
    return (  self838 );
}

static  struct Maybe_2753   head2757 (    struct Filter_2758  it1167 ) {
    struct Filter_2758  temp2768 = ( (  into_dash_iter2769 ) ( (  it1167 ) ) );
    return ( (  next2762 ) ( ( &temp2768 ) ) );
}

static  struct SliceIter_2759   into_dash_iter2771 (    struct Slice_239  self2250 ) {
    return ( (struct SliceIter_2759) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_2758   filter2770 (    struct Slice_239  iterable846 ,   struct envunion2761  fun848 ) {
    struct SliceIter_2759  it849 = ( (  into_dash_iter2771 ) ( (  iterable846 ) ) );
    return ( (struct Filter_2758) { .f_og = (  it849 ) , .f_fun = (  fun848 ) } );
}

static  bool   eq2774 (    uint32_t  l120 ,    uint32_t  r122 ) {
    return ( (  l120 ) == (  r122 ) );
}

static  enum HighlightType_34 *   cast2777 (    uint32_t *  x395 ) {
    return ( (enum HighlightType_34 * ) (  x395 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed2775 (    enum HighlightType_34  x645 ) {
    uint32_t  temp2776 = ( (  zeroed1233 ) ( ) );
    uint32_t *  y646 = ( &temp2776 );
    enum HighlightType_34 *  yp647 = ( (  cast2777 ) ( (  y646 ) ) );
    (*  yp647 ) = (  x645 );
    return ( * (  y646 ) );
}

static  bool   eq2773 (    enum HighlightType_34  l4004 ,    enum HighlightType_34  r4006 ) {
    return (  eq2774 ( ( ( (  cast_dash_on_dash_zeroed2775 ) ( (  l4004 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2775 ) ( (  r4006 ) ) ) ) );
}

static  bool   lam2772 (   struct env2760* env ,    struct HighlightColors_240  hlc4456 ) {
    return (  eq2773 ( ( (  hlc4456 ) .f_type ) , ( env->hltype4454 ) ) );
}

static  struct Color_203   or_dash_else2779 (    struct Maybe_241  self1360 ,    struct Color_203  alt1362 ) {
    struct Maybe_241  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_241_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_241_Just_t ) {
            return ( dref1363 .stuff .Maybe_241_Just_s .field0 );
        }
    }
}

static  struct Colors_238   lam2778 (   struct env2754* env ,    struct HighlightColors_240  hlc4458 ) {
    return ( (struct Colors_238) { .f_fg = ( (  hlc4458 ) .f_fg ) , .f_bg = ( (  or_dash_else2779 ) ( ( (  hlc4458 ) .f_bg ) ,  ( ( ( * ( env->theme4452 ) ) .f_default ) .f_bg ) ) ) } );
}

static  struct Colors_238   find_dash_colors_dash_for_dash_highlight2751 (    struct Theme_237 *  theme4452 ,    enum HighlightType_34  hltype4454 ) {
    struct env2760 envinst2760 = {
        .hltype4454 =  hltype4454 ,
    };
    struct env2754 envinst2754 = {
        .theme4452 =  theme4452 ,
    };
    return ( (  maybe2752 ) ( ( (  head2757 ) ( ( (  filter2770 ) ( ( ( * (  theme4452 ) ) .f_highlights ) ,  ( (struct envunion2761){ .fun = (  bool  (*) (  struct env2760*  ,    struct HighlightColors_240  ) )lam2772 , .env =  envinst2760 } ) ) ) ) ) ,  ( (struct envunion2755){ .fun = (  struct Colors_238  (*) (  struct env2754*  ,    struct HighlightColors_240  ) )lam2778 , .env =  envinst2754 } ) ,  ( ( * (  theme4452 ) ) .f_default ) ) );
}

static  enum Unit_10   lam2750 (   struct env2402* env ,    enum HighlightType_34  type4585 ) {
    ( (  set_dash_colors2367 ) ( ( env->screen4555 ) ,  ( (  find_dash_colors_dash_for_dash_highlight2751 ) ( ( env->theme4562 ) ,  (  type4585 ) ) ) ) );
    return ( Unit_10_Unit );
}

static  struct StrView_18   todo2783 (  ) {
    ( (  println1687 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined2043 ) ( ) );
}

static  struct StrView_18   short_dash_mode_dash_name2782 (    enum Mode_290  mode4473 ) {
    return ( {  enum Mode_290  dref4474 = (  mode4473 ) ;  dref4474 == Mode_290_Normal ? ( (  from_dash_string269 ) ( ( (uint8_t*)"NOR" ) ,  ( 3 ) ) ) :  dref4474 == Mode_290_Insert ? ( (  from_dash_string269 ) ( ( (uint8_t*)"INS" ) ,  ( 3 ) ) ) :  dref4474 == Mode_290_Select ? ( (  from_dash_string269 ) ( ( (uint8_t*)"SEL" ) ,  ( 3 ) ) ) : ( (  todo2783 ) ( ) ) ; } );
}

struct StrConcat_2786 {
    struct Char_101  field0;
    struct StrView_18  field1;
};

static struct StrConcat_2786 StrConcat_2786_StrConcat (  struct Char_101  field0 ,  struct StrView_18  field1 ) {
    return ( struct StrConcat_2786 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2785 {
    struct StrConcat_2786  field0;
    struct Char_101  field1;
};

static struct StrConcat_2785 StrConcat_2785_StrConcat (  struct StrConcat_2786  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_2785 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2789 {
    struct AppendIter_755  f_left;
    struct StrViewIter_362  f_right;
};

struct StrConcatIter_2788 {
    struct StrConcatIter_2789  f_left;
    struct AppendIter_755  f_right;
};

static  struct StrConcatIter_2788   into_dash_iter2790 (    struct StrConcatIter_2788  self1290 ) {
    return (  self1290 );
}

static  struct StrConcatIter_2789   into_dash_iter2794 (    struct StrConcat_2786  dref1297 ) {
    return ( (struct StrConcatIter_2789) { .f_left = ( (  chars762 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars364 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2789   chars2793 (    struct StrConcat_2786  self1308 ) {
    return ( (  into_dash_iter2794 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2788   into_dash_iter2792 (    struct StrConcat_2785  dref1297 ) {
    return ( (struct StrConcatIter_2788) { .f_left = ( (  chars2793 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars762 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2788   chars2791 (    struct StrConcat_2785  self1308 ) {
    return ( (  into_dash_iter2792 ) ( (  self1308 ) ) );
}

static  struct Maybe_420   next2797 (    struct StrConcatIter_2789 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next771 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next421 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_420   next2796 (    struct StrConcatIter_2788 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next2797 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next771 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_10   draw_dash_str2784 (    struct Screen_836 *  screen3921 ,    struct StrConcat_2785  s3923 ,    int32_t  x3925 ,    int32_t  y3927 ) {
    int32_t  w3928 = ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3921 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp222 ( (  y3927 ) , (  from_dash_integral92 ( 0 ) ) ) == 0 ) || (  cmp222 ( (  y3927 ) , ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3921 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_10_Unit );
    }
    int32_t  i3929 = (  op_dash_add224 ( (  op_dash_mul1866 ( (  y3927 ) , (  w3928 ) ) ) , (  x3925 ) ) );
    int32_t  x3930 = ( (  min1083 ) ( (  x3925 ) ,  (  w3928 ) ) );
    size_t  max_dash_len3931 = ( (  i32_dash_size349 ) ( (  op_dash_sub229 ( (  w3928 ) , (  x3930 ) ) ) ) );
    int32_t  xx3932 = (  from_dash_integral92 ( 0 ) );
    struct StrConcatIter_2788  temp2787 =  into_dash_iter2790 ( ( (  chars2791 ) ( (  s3923 ) ) ) );
    while (true) {
        struct Maybe_420  __cond2795 =  next2796 (&temp2787);
        if (  __cond2795 .tag == 0 ) {
            break;
        }
        struct Char_101  c3934 =  __cond2795 .stuff .Maybe_420_Just_s .field0;
        ( (  put_dash_char2383 ) ( (  screen3921 ) ,  (  c3934 ) ,  (  op_dash_add224 ( (  x3930 ) , (  xx3932 ) ) ) ,  (  y3927 ) ) );
        xx3932 = (  op_dash_add224 ( (  xx3932 ) , ( (  rendered_dash_wcwidth442 ) ( (  c3934 ) ) ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   render2341 (   struct env271* env ,    struct Screen_836 *  screen4555 ,    struct Pane_289 *  pane4557 ,    struct ScreenDims_839  sd4559 ,    struct Config_341 *  cfg4561 ) {
    struct Theme_237 *  theme4562 = ( ( * (  cfg4561 ) ) .f_theme );
    bool  display_dash_line_dash_numbers4563 = ( ( * (  cfg4561 ) ) .f_display_dash_line_dash_numbers );
    bool  relative_dash_line_dash_numbers4564 = ( ( * (  cfg4561 ) ) .f_relative_dash_line_dash_numbers );
    int32_t  max_dash_line_dash_num_dash_chars4565 = ( (  size_dash_i32380 ) ( ( (  count2342 ) ( ( (  chars2358 ) ( ( (  num_dash_lines489 ) ( ( ( * (  pane4557 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin4566 = (  from_dash_integral92 ( 2 ) );
    int32_t  num_dash_back_dash_margin4567 = (  from_dash_integral92 ( 2 ) );
    int32_t  total_dash_margin4568 = ( (  display_dash_line_dash_numbers4563 ) ? (  op_dash_add224 ( (  op_dash_add224 ( (  max_dash_line_dash_num_dash_chars4565 ) , (  num_dash_front_dash_margin4566 ) ) ) , (  num_dash_back_dash_margin4567 ) ) ) : (  from_dash_integral92 ( 0 ) ) );
    struct ScreenDims_839  temp2364 = (  sd4559 );
    temp2364 .  f_from_dash_sx = (  op_dash_add224 ( ( (  sd4559 ) .f_from_dash_sx ) , (  total_dash_margin4568 ) ) );
    ( (  update_dash_screen_dash_offset2361 ) ( (  pane4557 ) ,  ( temp2364 ) ) );
    struct ScreenCursorOffset_291  sc_dash_off4569 = ( ( * (  pane4557 ) ) .f_sc_dash_off );
    struct RangeIter_218  temp2365 =  into_dash_iter219 ( ( (  to228 ) ( (  op_dash_add224 ( ( (  sc_dash_off4569 ) .f_screen_dash_top ) , (  from_dash_integral92 ( 1 ) ) ) ) ,  ( (  min1083 ) ( ( (  num_dash_lines489 ) ( ( ( * (  pane4557 ) ) .f_buf ) ) ) ,  (  op_dash_add224 ( ( (  sc_dash_off4569 ) .f_screen_dash_top ) , ( (  screen_dash_height2363 ) ( (  sd4559 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_220  __cond2366 =  next221 (&temp2365);
        if (  __cond2366 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num4571 =  __cond2366 .stuff .Maybe_220_Just_s .field0;
        int32_t  ybi4572 = (  op_dash_sub229 ( (  line_dash_num4571 ) , (  from_dash_integral92 ( 1 ) ) ) );
        int32_t  xbi4573 = ( (  vi_dash_bi1509 ) ( ( ( * (  pane4557 ) ) .f_buf ) ,  (  ybi4572 ) ,  ( (  sc_dash_off4569 ) .f_screen_dash_left ) ) );
        struct StrView_18  line_dash_content4574 = ( (  line366 ) ( ( ( * (  pane4557 ) ) .f_buf ) ,  (  ybi4572 ) ) );
        int32_t  ys4575 = (  op_dash_sub229 ( (  op_dash_sub229 ( (  op_dash_add224 ( ( (  sd4559 ) .f_from_dash_sy ) , (  line_dash_num4571 ) ) ) , ( (  sc_dash_off4569 ) .f_screen_dash_top ) ) ) , (  from_dash_integral92 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers4563 ) ) {
            if ( (  eq660 ( ( ( ( * (  pane4557 ) ) .f_cursor ) .f_line ) , (  ybi4572 ) ) ) ) {
                ( (  set_dash_colors2367 ) ( (  screen4555 ) ,  ( ( * (  theme4562 ) ) .f_line_dash_num_dash_hl ) ) );
            } else {
                ( (  set_dash_colors2367 ) ( (  screen4555 ) ,  ( ( * (  theme4562 ) ) .f_line_dash_num ) ) );
            }
            int32_t  line_dash_display4576 = ( ( ( ! (  relative_dash_line_dash_numbers4564 ) ) || (  eq660 ( ( ( ( * (  pane4557 ) ) .f_cursor ) .f_line ) , (  ybi4572 ) ) ) ) ? (  line_dash_num4571 ) : ( (  abs2369 ) ( (  op_dash_sub229 ( ( ( ( * (  pane4557 ) ) .f_cursor ) .f_line ) , (  ybi4572 ) ) ) ) ) );
            ( (  draw_dash_str_dash_right2370 ) ( (  screen4555 ) ,  (  line_dash_display4576 ) ,  (  op_dash_add224 ( (  op_dash_sub229 ( (  op_dash_sub229 ( ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen4555 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd4559 ) .f_from_dash_sx ) ) ) , (  total_dash_margin4568 ) ) ) , (  num_dash_back_dash_margin4567 ) ) ) ,  (  ys4575 ) ) );
            ( (  set_dash_colors2367 ) ( (  screen4555 ) ,  ( ( * (  theme4562 ) ) .f_default ) ) );
        }
        int32_t  vx4577 = (  op_dash_sub229 ( ( (  pos_dash_vi360 ) ( ( ( * (  pane4557 ) ) .f_buf ) ,  ( (  mk1118 ) ( (  ybi4572 ) ,  (  xbi4573 ) ) ) ) ) , ( (  sc_dash_off4569 ) .f_screen_dash_left ) ) );
        ( (  assert2386 ) ( (  cmp222 ( (  vx4577 ) , (  from_dash_integral92 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_2387_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx4577 ) ) ) ) );
        int32_t  left_dash_offset4578 = (  op_dash_add224 ( ( (  sd4559 ) .f_from_dash_sx ) , (  total_dash_margin4568 ) ) );
        struct AppendIter_2394  temp2393 =  into_dash_iter2395 ( ( (  append2396 ) ( ( (  chars364 ) ( ( (  byte_dash_substr_dash_from953 ) ( (  line_dash_content4574 ) ,  ( (  i32_dash_size349 ) ( (  xbi4573 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_420  __cond2397 =  next2398 (&temp2393);
            if (  __cond2397 .tag == 0 ) {
                break;
            }
            struct Char_101  c4580 =  __cond2397 .stuff .Maybe_420_Just_s .field0;
            if ( (  cmp222 ( (  vx4577 ) , ( (  sd4559 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_40  curpos4581 = ( (  mk1118 ) ( (  ybi4572 ) ,  (  xbi4573 ) ) );
            bool  is_dash_cursor4582 = (  eq1006 ( (  curpos4581 ) , ( ( * (  pane4557 ) ) .f_cursor ) ) );
            bool  in_dash_selection4583 = ( (  is_dash_in_dash_selection2399 ) ( (  pane4557 ) ,  ( (  mk1118 ) ( (  ybi4572 ) ,  (  xbi4573 ) ) ) ) );
            if ( (  is_dash_cursor4582 ) ) {
                ( (  set_dash_colors2367 ) ( (  screen4555 ) ,  ( ( * (  theme4562 ) ) .f_cursor ) ) );
            } else {
                if ( (  in_dash_selection4583 ) ) {
                    ( (  set_dash_colors2367 ) ( (  screen4555 ) ,  ( ( * (  theme4562 ) ) .f_selection ) ) );
                } else {
                    struct envunion272  temp2405 = ( (struct envunion272){ .fun = (  struct Maybe_273  (*) (  struct env201*  ,    struct TextBuf_164 *  ,    struct Pos_40  ) )highlight_dash_at2406 , .env =  env->envinst201 } );
                    struct env2402 envinst2402 = {
                        .theme4562 =  theme4562 ,
                        .screen4555 =  screen4555 ,
                    };
                    ( (  if_dash_just2401 ) ( ( temp2405.fun ( &temp2405.env ,  ( ( * (  pane4557 ) ) .f_buf ) ,  (  curpos4581 ) ) ) ,  ( (struct envunion2403){ .fun = (  enum Unit_10  (*) (  struct env2402*  ,    enum HighlightType_34  ) )lam2750 , .env =  envinst2402 } ) ) );
                }
            }
            struct Maybe_125  dref4586 = ( (  char_dash_replacement428 ) ( (  c4580 ) ) );
            if ( dref4586.tag == Maybe_125_None_t ) {
                if ( ( ! ( (  cmp222 ( (  vx4577 ) , (  from_dash_integral92 ( 0 ) ) ) == 0 ) || (  cmp222 ( (  op_dash_sub229 ( (  op_dash_add224 ( (  vx4577 ) , ( (  char_dash_screen_dash_width426 ) ( (  c4580 ) ) ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) , ( (  sd4559 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char2383 ) ( (  screen4555 ) ,  (  c4580 ) ,  (  op_dash_add224 ( (  left_dash_offset4578 ) , (  vx4577 ) ) ) ,  (  ys4575 ) ) );
                }
                vx4577 = (  op_dash_add224 ( (  vx4577 ) , ( (  char_dash_screen_dash_width426 ) ( (  c4580 ) ) ) ) );
            }
            else {
                if ( dref4586.tag == Maybe_125_Just_t ) {
                    struct StrViewIter_362  temp2780 =  into_dash_iter363 ( ( (  chars364 ) ( ( dref4586 .stuff .Maybe_125_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_420  __cond2781 =  next421 (&temp2780);
                        if (  __cond2781 .tag == 0 ) {
                            break;
                        }
                        struct Char_101  c4589 =  __cond2781 .stuff .Maybe_420_Just_s .field0;
                        if ( (  cmp222 ( (  vx4577 ) , (  from_dash_integral92 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char2383 ) ( (  screen4555 ) ,  (  c4589 ) ,  (  op_dash_add224 ( (  left_dash_offset4578 ) , (  vx4577 ) ) ) ,  (  ys4575 ) ) );
                        }
                        vx4577 = (  op_dash_add224 ( (  vx4577 ) , ( (  char_dash_screen_dash_width426 ) ( (  c4589 ) ) ) ) );
                    }
                }
            }
            ( (  set_dash_colors2367 ) ( (  screen4555 ) ,  ( ( * (  theme4562 ) ) .f_default ) ) );
            xbi4573 = (  op_dash_add224 ( (  xbi4573 ) , ( (  size_dash_i32380 ) ( ( (  c4580 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    ( (  set_dash_colors2367 ) ( (  screen4555 ) ,  ( ( * (  theme4562 ) ) .f_overlay ) ) );
    struct StrView_18  modename4590 = ( (  short_dash_mode_dash_name2782 ) ( ( ( * (  pane4557 ) ) .f_mode ) ) );
    ( (  draw_dash_str2784 ) ( (  screen4555 ) ,  ( ( StrConcat_2785_StrConcat ) ( ( ( StrConcat_2786_StrConcat ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  modename4590 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  ( (  sd4559 ) .f_from_dash_sx ) ,  ( (  sd4559 ) .f_to_dash_sy ) ) );
    return ( Unit_10_Unit );
}

struct env2799 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct Screen_836 *  screen5171;
    ;
    ;
    ;
};

struct envunion2800 {
    enum Unit_10  (*fun) (  struct env2799*  ,    struct StrView_18  );
    struct env2799 env;
};

static  enum Unit_10   if_dash_just2798 (    struct Maybe_125  x1601 ,   struct envunion2800  fun1603 ) {
    struct Maybe_125  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_125_Just_t ) {
        struct envunion2800  temp2801 = (  fun1603 );
        ( temp2801.fun ( &temp2801.env ,  ( dref1604 .stuff .Maybe_125_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_125_None_t ) {
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   lam2802 (   struct env2799* env ,    struct StrView_18  msg5176 ) {
    int32_t  num_dash_chars5177 = ( (  size_dash_i32380 ) ( ( (  count437 ) ( ( (  chars364 ) ( (  msg5176 ) ) ) ) ) ) );
    ( (  draw_dash_str2784 ) ( ( env->screen5171 ) ,  ( ( StrConcat_2785_StrConcat ) ( ( ( StrConcat_2786_StrConcat ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  msg5176 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  (  op_dash_div1865 ( (  op_dash_sub229 ( ( (  u32_dash_i322327 ) ( ( ( * ( ( * ( env->screen5171 ) ) .f_tui ) ) .f_width ) ) ) , (  num_dash_chars5177 ) ) ) , (  from_dash_integral92 ( 2 ) ) ) ) ,  (  op_dash_sub229 ( ( (  u32_dash_i322327 ) ( ( ( * ( ( * ( env->screen5171 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) ) );
    return ( Unit_10_Unit );
}

struct StrConcat_2805 {
    struct StrView_18  field0;
    struct StrBuilder_98  field1;
};

static struct StrConcat_2805 StrConcat_2805_StrConcat (  struct StrView_18  field0 ,  struct StrBuilder_98  field1 ) {
    return ( struct StrConcat_2805 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2804 {
    struct StrConcat_2805  field0;
    struct StrView_18  field1;
};

static struct StrConcat_2804 StrConcat_2804_StrConcat (  struct StrConcat_2805  field0 ,  struct StrView_18  field1 ) {
    return ( struct StrConcat_2804 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2803 {
    struct StrConcat_2804  field0;
    struct Char_101  field1;
};

static struct StrConcat_2803 StrConcat_2803_StrConcat (  struct StrConcat_2804  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_2803 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2808 {
    struct StrConcatIter_2080  f_left;
    struct StrViewIter_362  f_right;
};

struct StrConcatIter_2807 {
    struct StrConcatIter_2808  f_left;
    struct AppendIter_755  f_right;
};

static  struct StrConcatIter_2807   into_dash_iter2810 (    struct StrConcatIter_2807  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_420   next2812 (    struct StrConcatIter_2808 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next2088 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next421 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_420   next2811 (    struct StrConcatIter_2807 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next2812 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next771 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2809 (    struct StrConcatIter_2807  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_101  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct StrConcatIter_2807  it1124 = ( (  into_dash_iter2810 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_420  dref1125 = ( (  next2811 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_420_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_420_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_420_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2813 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2813);
    abort ( );
    ( Unit_10_Unit );
    size_t  temp2814;
    return (  temp2814 );
}

static  size_t   lam2815 (    struct Char_101  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add425 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2806 (    struct StrConcatIter_2807  it1129 ) {
    return ( (  reduce2809 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2815 ) ) );
}

static  struct StrConcatIter_2080   into_dash_iter2821 (    struct StrConcat_2805  dref1297 ) {
    return ( (struct StrConcatIter_2080) { .f_left = ( (  chars364 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2047 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2080   chars2820 (    struct StrConcat_2805  self1308 ) {
    return ( (  into_dash_iter2821 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2808   into_dash_iter2819 (    struct StrConcat_2804  dref1297 ) {
    return ( (struct StrConcatIter_2808) { .f_left = ( (  chars2820 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars364 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2808   chars2818 (    struct StrConcat_2804  self1308 ) {
    return ( (  into_dash_iter2819 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2807   into_dash_iter2817 (    struct StrConcat_2803  dref1297 ) {
    return ( (struct StrConcatIter_2807) { .f_left = ( (  chars2818 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars762 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2807   chars2816 (    struct StrConcat_2803  self1308 ) {
    return ( (  into_dash_iter2817 ) ( (  self1308 ) ) );
}

static  enum Unit_10   draw_dash_str2822 (    struct Screen_836 *  screen3921 ,    struct StrConcat_2803  s3923 ,    int32_t  x3925 ,    int32_t  y3927 ) {
    int32_t  w3928 = ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3921 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp222 ( (  y3927 ) , (  from_dash_integral92 ( 0 ) ) ) == 0 ) || (  cmp222 ( (  y3927 ) , ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3921 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_10_Unit );
    }
    int32_t  i3929 = (  op_dash_add224 ( (  op_dash_mul1866 ( (  y3927 ) , (  w3928 ) ) ) , (  x3925 ) ) );
    int32_t  x3930 = ( (  min1083 ) ( (  x3925 ) ,  (  w3928 ) ) );
    size_t  max_dash_len3931 = ( (  i32_dash_size349 ) ( (  op_dash_sub229 ( (  w3928 ) , (  x3930 ) ) ) ) );
    int32_t  xx3932 = (  from_dash_integral92 ( 0 ) );
    struct StrConcatIter_2807  temp2823 =  into_dash_iter2810 ( ( (  chars2816 ) ( (  s3923 ) ) ) );
    while (true) {
        struct Maybe_420  __cond2824 =  next2811 (&temp2823);
        if (  __cond2824 .tag == 0 ) {
            break;
        }
        struct Char_101  c3934 =  __cond2824 .stuff .Maybe_420_Just_s .field0;
        ( (  put_dash_char2383 ) ( (  screen3921 ) ,  (  c3934 ) ,  (  op_dash_add224 ( (  x3930 ) , (  xx3932 ) ) ) ,  (  y3927 ) ) );
        xx3932 = (  op_dash_add224 ( (  xx3932 ) , ( (  rendered_dash_wcwidth442 ) ( (  c3934 ) ) ) ) );
    }
    return ( Unit_10_Unit );
}

struct StrConcat_2825 {
    struct StrConcat_2804  field0;
    struct StrView_18  field1;
};

static struct StrConcat_2825 StrConcat_2825_StrConcat (  struct StrConcat_2804  field0 ,  struct StrView_18  field1 ) {
    return ( struct StrConcat_2825 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2827 {
    struct StrConcatIter_2808  f_left;
    struct StrViewIter_362  f_right;
};

static  struct StrConcatIter_2827   into_dash_iter2829 (    struct StrConcatIter_2827  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_420   next2830 (    struct StrConcatIter_2827 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next2812 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next421 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2828 (    struct StrConcatIter_2827  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_101  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct StrConcatIter_2827  it1124 = ( (  into_dash_iter2829 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_420  dref1125 = ( (  next2830 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_420_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_420_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_420_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2831 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2831);
    abort ( );
    ( Unit_10_Unit );
    size_t  temp2832;
    return (  temp2832 );
}

static  size_t   lam2833 (    struct Char_101  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add425 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2826 (    struct StrConcatIter_2827  it1129 ) {
    return ( (  reduce2828 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2833 ) ) );
}

static  struct StrConcatIter_2827   into_dash_iter2835 (    struct StrConcat_2825  dref1297 ) {
    return ( (struct StrConcatIter_2827) { .f_left = ( (  chars2818 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars364 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2827   chars2834 (    struct StrConcat_2825  self1308 ) {
    return ( (  into_dash_iter2835 ) ( (  self1308 ) ) );
}

static  enum Unit_10   draw_dash_str2836 (    struct Screen_836 *  screen3921 ,    struct StrConcat_2825  s3923 ,    int32_t  x3925 ,    int32_t  y3927 ) {
    int32_t  w3928 = ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3921 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp222 ( (  y3927 ) , (  from_dash_integral92 ( 0 ) ) ) == 0 ) || (  cmp222 ( (  y3927 ) , ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3921 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_10_Unit );
    }
    int32_t  i3929 = (  op_dash_add224 ( (  op_dash_mul1866 ( (  y3927 ) , (  w3928 ) ) ) , (  x3925 ) ) );
    int32_t  x3930 = ( (  min1083 ) ( (  x3925 ) ,  (  w3928 ) ) );
    size_t  max_dash_len3931 = ( (  i32_dash_size349 ) ( (  op_dash_sub229 ( (  w3928 ) , (  x3930 ) ) ) ) );
    int32_t  xx3932 = (  from_dash_integral92 ( 0 ) );
    struct StrConcatIter_2827  temp2837 =  into_dash_iter2829 ( ( (  chars2834 ) ( (  s3923 ) ) ) );
    while (true) {
        struct Maybe_420  __cond2838 =  next2830 (&temp2837);
        if (  __cond2838 .tag == 0 ) {
            break;
        }
        struct Char_101  c3934 =  __cond2838 .stuff .Maybe_420_Just_s .field0;
        ( (  put_dash_char2383 ) ( (  screen3921 ) ,  (  c3934 ) ,  (  op_dash_add224 ( (  x3930 ) , (  xx3932 ) ) ) ,  (  y3927 ) ) );
        xx3932 = (  op_dash_add224 ( (  xx3932 ) , ( (  rendered_dash_wcwidth442 ) ( (  c3934 ) ) ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   draw_dash_str2839 (    struct Screen_836 *  screen3921 ,    struct StrView_18  s3923 ,    int32_t  x3925 ,    int32_t  y3927 ) {
    int32_t  w3928 = ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3921 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp222 ( (  y3927 ) , (  from_dash_integral92 ( 0 ) ) ) == 0 ) || (  cmp222 ( (  y3927 ) , ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3921 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_10_Unit );
    }
    int32_t  i3929 = (  op_dash_add224 ( (  op_dash_mul1866 ( (  y3927 ) , (  w3928 ) ) ) , (  x3925 ) ) );
    int32_t  x3930 = ( (  min1083 ) ( (  x3925 ) ,  (  w3928 ) ) );
    size_t  max_dash_len3931 = ( (  i32_dash_size349 ) ( (  op_dash_sub229 ( (  w3928 ) , (  x3930 ) ) ) ) );
    int32_t  xx3932 = (  from_dash_integral92 ( 0 ) );
    struct StrViewIter_362  temp2840 =  into_dash_iter363 ( ( (  chars364 ) ( (  s3923 ) ) ) );
    while (true) {
        struct Maybe_420  __cond2841 =  next421 (&temp2840);
        if (  __cond2841 .tag == 0 ) {
            break;
        }
        struct Char_101  c3934 =  __cond2841 .stuff .Maybe_420_Just_s .field0;
        ( (  put_dash_char2383 ) ( (  screen3921 ) ,  (  c3934 ) ,  (  op_dash_add224 ( (  x3930 ) , (  xx3932 ) ) ) ,  (  y3927 ) ) );
        xx3932 = (  op_dash_add224 ( (  xx3932 ) , ( (  rendered_dash_wcwidth442 ) ( (  c3934 ) ) ) ) );
    }
    return ( Unit_10_Unit );
}

struct Zip_2843 {
    struct SliceIter_2230  f_left_dash_it;
    struct FromIter_564  f_right_dash_it;
};

static  struct Zip_2843   into_dash_iter2844 (    struct Zip_2843  self936 ) {
    return (  self936 );
}

static  struct Zip_2843   zip2845 (    struct Slice_332  left947 ,    struct FromIter_564  right949 ) {
    struct SliceIter_2230  left_dash_it950 = ( (  into_dash_iter2231 ) ( (  left947 ) ) );
    struct FromIter_564  right_dash_it951 = ( (  into_dash_iter572 ) ( (  right949 ) ) );
    return ( (struct Zip_2843) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

struct Tuple2_2848 {
    struct MenuItem_333  field0;
    int32_t  field1;
};

static struct Tuple2_2848 Tuple2_2848_Tuple2 (  struct MenuItem_333  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2848 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_2847 {
    enum {
        Maybe_2847_None_t,
        Maybe_2847_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2848  field0;
        } Maybe_2847_Just_s;
    } stuff;
};

static struct Maybe_2847 Maybe_2847_Just (  struct Tuple2_2848  field0 ) {
    return ( struct Maybe_2847 ) { .tag = Maybe_2847_Just_t, .stuff = { .Maybe_2847_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2847   next2849 (    struct Zip_2843 *  self939 ) {
    struct Zip_2843  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_2233  dref941 = ( (  next2234 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_2233_None_t ) {
            return ( (struct Maybe_2847) { .tag = Maybe_2847_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_2233_Just_t ) {
                struct Maybe_220  dref943 = ( (  next569 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_220_None_t ) {
                    return ( (struct Maybe_2847) { .tag = Maybe_2847_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_220_Just_t ) {
                        ( (  next2234 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next569 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2847_Just ) ( ( ( Tuple2_2848_Tuple2 ) ( ( dref941 .stuff .Maybe_2233_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_220_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct StrConcat_2852 {
    char  field0;
    struct Char_101  field1;
};

static struct StrConcat_2852 StrConcat_2852_StrConcat (  char  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_2852 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2851 {
    struct StrConcat_2852  field0;
    struct StrView_18  field1;
};

static struct StrConcat_2851 StrConcat_2851_StrConcat (  struct StrConcat_2852  field0 ,  struct StrView_18  field1 ) {
    return ( struct StrConcat_2851 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2855 {
    struct AppendIter_755  f_left;
    struct AppendIter_755  f_right;
};

struct StrConcatIter_2854 {
    struct StrConcatIter_2855  f_left;
    struct StrViewIter_362  f_right;
};

static  struct StrConcatIter_2854   into_dash_iter2856 (    struct StrConcatIter_2854  self1290 ) {
    return (  self1290 );
}

static  struct AppendIter_755   chars2861 (    char  self1658 ) {
    return ( (  single763 ) ( ( (  ascii_dash_char2135 ) ( (  self1658 ) ) ) ) );
}

static  struct StrConcatIter_2855   into_dash_iter2860 (    struct StrConcat_2852  dref1297 ) {
    return ( (struct StrConcatIter_2855) { .f_left = ( (  chars2861 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars762 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2855   chars2859 (    struct StrConcat_2852  self1308 ) {
    return ( (  into_dash_iter2860 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2854   into_dash_iter2858 (    struct StrConcat_2851  dref1297 ) {
    return ( (struct StrConcatIter_2854) { .f_left = ( (  chars2859 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars364 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2854   chars2857 (    struct StrConcat_2851  self1308 ) {
    return ( (  into_dash_iter2858 ) ( (  self1308 ) ) );
}

static  struct Maybe_420   next2864 (    struct StrConcatIter_2855 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next771 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next771 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_420   next2863 (    struct StrConcatIter_2854 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next2864 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next421 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_10   draw_dash_str2850 (    struct Screen_836 *  screen3921 ,    struct StrConcat_2851  s3923 ,    int32_t  x3925 ,    int32_t  y3927 ) {
    int32_t  w3928 = ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3921 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp222 ( (  y3927 ) , (  from_dash_integral92 ( 0 ) ) ) == 0 ) || (  cmp222 ( (  y3927 ) , ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3921 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_10_Unit );
    }
    int32_t  i3929 = (  op_dash_add224 ( (  op_dash_mul1866 ( (  y3927 ) , (  w3928 ) ) ) , (  x3925 ) ) );
    int32_t  x3930 = ( (  min1083 ) ( (  x3925 ) ,  (  w3928 ) ) );
    size_t  max_dash_len3931 = ( (  i32_dash_size349 ) ( (  op_dash_sub229 ( (  w3928 ) , (  x3930 ) ) ) ) );
    int32_t  xx3932 = (  from_dash_integral92 ( 0 ) );
    struct StrConcatIter_2854  temp2853 =  into_dash_iter2856 ( ( (  chars2857 ) ( (  s3923 ) ) ) );
    while (true) {
        struct Maybe_420  __cond2862 =  next2863 (&temp2853);
        if (  __cond2862 .tag == 0 ) {
            break;
        }
        struct Char_101  c3934 =  __cond2862 .stuff .Maybe_420_Just_s .field0;
        ( (  put_dash_char2383 ) ( (  screen3921 ) ,  (  c3934 ) ,  (  op_dash_add224 ( (  x3930 ) , (  xx3932 ) ) ) ,  (  y3927 ) ) );
        xx3932 = (  op_dash_add224 ( (  xx3932 ) , ( (  rendered_dash_wcwidth442 ) ( (  c3934 ) ) ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   draw_dash_rect2866 (    struct Screen_836 *  screen4927 ,    int32_t  from_dash_x4929 ,    int32_t  from_dash_y4931 ,    int32_t  to_dash_x4933 ,    int32_t  to_dash_y4935 ,    struct Color_203  color4937 ) {
    ( (  set_dash_screen_dash_bg2324 ) ( (  screen4927 ) ,  (  color4937 ) ) );
    struct RangeIter_218  temp2867 =  into_dash_iter219 ( ( (  to228 ) ( (  from_dash_x4929 ) ,  (  to_dash_x4933 ) ) ) );
    while (true) {
        struct Maybe_220  __cond2868 =  next221 (&temp2867);
        if (  __cond2868 .tag == 0 ) {
            break;
        }
        int32_t  x4939 =  __cond2868 .stuff .Maybe_220_Just_s .field0;
        ( (  put_dash_char2383 ) ( (  screen4927 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  x4939 ) ,  (  from_dash_y4931 ) ) );
        ( (  put_dash_char2383 ) ( (  screen4927 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  x4939 ) ,  (  to_dash_y4935 ) ) );
    }
    struct RangeIter_218  temp2869 =  into_dash_iter219 ( ( (  to228 ) ( (  op_dash_add224 ( (  from_dash_y4931 ) , (  from_dash_integral92 ( 1 ) ) ) ) ,  (  op_dash_sub229 ( (  to_dash_y4935 ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_220  __cond2870 =  next221 (&temp2869);
        if (  __cond2870 .tag == 0 ) {
            break;
        }
        int32_t  y4941 =  __cond2870 .stuff .Maybe_220_Just_s .field0;
        ( (  put_dash_char2383 ) ( (  screen4927 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  from_dash_x4929 ) ,  (  y4941 ) ) );
        ( (  put_dash_char2383 ) ( (  screen4927 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  to_dash_x4933 ) ,  (  y4941 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   fill_dash_rect2871 (    struct Screen_836 *  screen4910 ,    int32_t  from_dash_x4912 ,    int32_t  from_dash_y4914 ,    int32_t  to_dash_x4916 ,    int32_t  to_dash_y4918 ,    struct Color_203  color4920 ) {
    ( (  set_dash_screen_dash_bg2324 ) ( (  screen4910 ) ,  (  color4920 ) ) );
    struct RangeIter_218  temp2872 =  into_dash_iter219 ( ( (  to228 ) ( (  from_dash_y4914 ) ,  (  to_dash_y4918 ) ) ) );
    while (true) {
        struct Maybe_220  __cond2873 =  next221 (&temp2872);
        if (  __cond2873 .tag == 0 ) {
            break;
        }
        int32_t  y4922 =  __cond2873 .stuff .Maybe_220_Just_s .field0;
        struct RangeIter_218  temp2874 =  into_dash_iter219 ( ( (  to228 ) ( (  from_dash_x4912 ) ,  (  to_dash_x4916 ) ) ) );
        while (true) {
            struct Maybe_220  __cond2875 =  next221 (&temp2874);
            if (  __cond2875 .tag == 0 ) {
                break;
            }
            int32_t  x4924 =  __cond2875 .stuff .Maybe_220_Just_s .field0;
            ( (  put_dash_char2383 ) ( (  screen4910 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  x4924 ) ,  (  y4922 ) ) );
        }
    }
    return ( Unit_10_Unit );
}

struct WCWidthTrimmer_2877 {
    struct StrViewIter_362  f_s;
    int32_t  f_limit;
    int32_t  f_wcw_dash_sum;
};

static  struct WCWidthTrimmer_2877   into_dash_iter2879 (    struct WCWidthTrimmer_2877  self2751 ) {
    return (  self2751 );
}

static  struct WCWidthTrimmer_2877   chars2880 (    struct WCWidthTrimmer_2877  self2760 ) {
    return ( (  into_dash_iter2879 ) ( (  self2760 ) ) );
}

static  struct Maybe_420   next2882 (    struct WCWidthTrimmer_2877 *  self2754 ) {
    if ( (  cmp222 ( ( ( * (  self2754 ) ) .f_wcw_dash_sum ) , ( ( * (  self2754 ) ) .f_limit ) ) == 2 ) ) {
        return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
    }
    struct Maybe_420  dref2755 = ( (  next421 ) ( ( & ( ( * (  self2754 ) ) .f_s ) ) ) );
    if ( dref2755.tag == Maybe_420_None_t ) {
        return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
    }
    else {
        if ( dref2755.tag == Maybe_420_Just_t ) {
            int32_t  wcw2757 = ( (  rendered_dash_wcwidth442 ) ( ( dref2755 .stuff .Maybe_420_Just_s .field0 ) ) );
            (*  self2754 ) .f_wcw_dash_sum = (  op_dash_add224 ( ( ( * (  self2754 ) ) .f_wcw_dash_sum ) , (  wcw2757 ) ) );
            if ( (  cmp222 ( ( ( * (  self2754 ) ) .f_wcw_dash_sum ) , ( ( * (  self2754 ) ) .f_limit ) ) == 2 ) ) {
                return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
            } else {
                return ( ( Maybe_420_Just ) ( ( dref2755 .stuff .Maybe_420_Just_s .field0 ) ) );
            }
        }
    }
}

static  enum Unit_10   draw_dash_str2876 (    struct Screen_836 *  screen3921 ,    struct WCWidthTrimmer_2877  s3923 ,    int32_t  x3925 ,    int32_t  y3927 ) {
    int32_t  w3928 = ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3921 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp222 ( (  y3927 ) , (  from_dash_integral92 ( 0 ) ) ) == 0 ) || (  cmp222 ( (  y3927 ) , ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3921 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_10_Unit );
    }
    int32_t  i3929 = (  op_dash_add224 ( (  op_dash_mul1866 ( (  y3927 ) , (  w3928 ) ) ) , (  x3925 ) ) );
    int32_t  x3930 = ( (  min1083 ) ( (  x3925 ) ,  (  w3928 ) ) );
    size_t  max_dash_len3931 = ( (  i32_dash_size349 ) ( (  op_dash_sub229 ( (  w3928 ) , (  x3930 ) ) ) ) );
    int32_t  xx3932 = (  from_dash_integral92 ( 0 ) );
    struct WCWidthTrimmer_2877  temp2878 =  into_dash_iter2879 ( ( (  chars2880 ) ( (  s3923 ) ) ) );
    while (true) {
        struct Maybe_420  __cond2881 =  next2882 (&temp2878);
        if (  __cond2881 .tag == 0 ) {
            break;
        }
        struct Char_101  c3934 =  __cond2881 .stuff .Maybe_420_Just_s .field0;
        ( (  put_dash_char2383 ) ( (  screen3921 ) ,  (  c3934 ) ,  (  op_dash_add224 ( (  x3930 ) , (  xx3932 ) ) ) ,  (  y3927 ) ) );
        xx3932 = (  op_dash_add224 ( (  xx3932 ) , ( (  rendered_dash_wcwidth442 ) ( (  c3934 ) ) ) ) );
    }
    return ( Unit_10_Unit );
}

static  struct WCWidthTrimmer_2877   trim_dash_to_dash_wcwidth2883 (    struct StrBuilder_98  s2766 ,    int32_t  limit2768 ) {
    return ( (struct WCWidthTrimmer_2877) { .f_s = ( (  chars2047 ) ( (  s2766 ) ) ) , .f_wcw_dash_sum = (  from_dash_integral92 ( 0 ) ) , .f_limit = (  limit2768 ) } );
}

static  enum Unit_10   draw_dash_hline2884 (    struct Screen_836 *  screen4944 ,    int32_t  from_dash_x4946 ,    int32_t  to_dash_x4948 ,    int32_t  y4950 ,    struct Color_203  color4952 ) {
    ( (  set_dash_screen_dash_bg2324 ) ( (  screen4944 ) ,  (  color4952 ) ) );
    struct RangeIter_218  temp2885 =  into_dash_iter219 ( ( (  to228 ) ( (  from_dash_x4946 ) ,  (  to_dash_x4948 ) ) ) );
    while (true) {
        struct Maybe_220  __cond2886 =  next221 (&temp2885);
        if (  __cond2886 .tag == 0 ) {
            break;
        }
        int32_t  x4954 =  __cond2886 .stuff .Maybe_220_Just_s .field0;
        ( (  put_dash_char2383 ) ( (  screen4944 ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  x4954 ) ,  (  y4950 ) ) );
    }
    return ( Unit_10_Unit );
}

static  struct Slice_337   subslice2888 (    struct Slice_337  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Tuple2_338 *  begin_dash_ptr2209 = ( (  offset_dash_ptr805 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp371 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp371 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_337) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub580 ( ( (  min956 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_337) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct Slice_337   from2887 (    struct Slice_337  slice2213 ,    size_t  from2215 ) {
    return ( (  subslice2888 ) ( (  slice2213 ) ,  (  from2215 ) ,  ( (  slice2213 ) .f_count ) ) );
}

struct Map_2891 {
    struct StrViewIter_362  field0;
    int32_t (*  field1 )(    struct Char_101  );
};

static struct Map_2891 Map_2891_Map (  struct StrViewIter_362  field0 ,  int32_t (*  field1 )(    struct Char_101  ) ) {
    return ( struct Map_2891 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2891   into_dash_iter2893 (    struct Map_2891  self804 ) {
    return (  self804 );
}

static  struct Maybe_220   next2894 (    struct Map_2891 *  dref806 ) {
    struct Maybe_420  dref809 = ( (  next421 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_420_None_t ) {
        return ( (struct Maybe_220) { .tag = Maybe_220_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_420_Just_t ) {
            return ( ( Maybe_220_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_420_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2892 (    struct Map_2891  iterable1118 ,    int32_t  base1120 ,    int32_t (*  fun1122 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1123 = (  base1120 );
    struct Map_2891  it1124 = ( (  into_dash_iter2893 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_220  dref1125 = ( (  next2894 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_220_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_220_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_220_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2895 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2895);
    abort ( );
    ( Unit_10_Unit );
    int32_t  temp2896;
    return (  temp2896 );
}

static  int32_t   lam2897 (    int32_t  v1137 ,    int32_t  s1139 ) {
    return (  op_dash_add224 ( (  v1137 ) , (  s1139 ) ) );
}

static  int32_t   sum2890 (    struct Map_2891  it1135 ) {
    return ( (  reduce2892 ) ( (  it1135 ) ,  (  from_dash_integral92 ( 0 ) ) ,  (  lam2897 ) ) );
}

static  struct Map_2891   map2898 (    struct StrViewIter_362  iterable813 ,    int32_t (*  fun815 )(    struct Char_101  ) ) {
    struct StrViewIter_362  it816 = ( (  into_dash_iter363 ) ( (  iterable813 ) ) );
    return ( ( Map_2891_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  int32_t   rendered_dash_str_dash_width2889 (    struct StrView_18  s2738 ) {
    return ( (  sum2890 ) ( ( (  map2898 ) ( ( (  chars364 ) ( (  s2738 ) ) ) ,  (  rendered_dash_wcwidth442 ) ) ) ) );
}

struct SliceIter_2902 {
    struct Slice_337  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2901 {
    struct SliceIter_2902  f_left_dash_it;
    struct FromIter_564  f_right_dash_it;
};

struct Zip_2900 {
    struct Zip_2901  f_left_dash_it;
    struct RangeIter_218  f_right_dash_it;
};

static  struct Zip_2900   into_dash_iter2903 (    struct Zip_2900  self936 ) {
    return (  self936 );
}

static  struct Zip_2901   into_dash_iter2905 (    struct Zip_2901  self936 ) {
    return (  self936 );
}

static  struct Zip_2900   zip2904 (    struct Zip_2901  left947 ,    struct Range_215  right949 ) {
    struct Zip_2901  left_dash_it950 = ( (  into_dash_iter2905 ) ( (  left947 ) ) );
    struct RangeIter_218  right_dash_it951 = ( (  into_dash_iter219 ) ( (  right949 ) ) );
    return ( (struct Zip_2900) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  struct SliceIter_2902   into_dash_iter2907 (    struct Slice_337  self2250 ) {
    return ( (struct SliceIter_2902) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2901   zip2906 (    struct Slice_337  left947 ,    struct FromIter_564  right949 ) {
    struct SliceIter_2902  left_dash_it950 = ( (  into_dash_iter2907 ) ( (  left947 ) ) );
    struct FromIter_564  right_dash_it951 = ( (  into_dash_iter572 ) ( (  right949 ) ) );
    return ( (struct Zip_2901) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

struct Tuple2_2911 {
    struct Tuple2_338  field0;
    int32_t  field1;
};

static struct Tuple2_2911 Tuple2_2911_Tuple2 (  struct Tuple2_338  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2911 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Tuple2_2910 {
    struct Tuple2_2911  field0;
    int32_t  field1;
};

static struct Tuple2_2910 Tuple2_2910_Tuple2 (  struct Tuple2_2911  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2910 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_2909 {
    enum {
        Maybe_2909_None_t,
        Maybe_2909_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2910  field0;
        } Maybe_2909_Just_s;
    } stuff;
};

static struct Maybe_2909 Maybe_2909_Just (  struct Tuple2_2910  field0 ) {
    return ( struct Maybe_2909 ) { .tag = Maybe_2909_Just_t, .stuff = { .Maybe_2909_Just_s = { .field0 = field0 } } };
};

struct Maybe_2913 {
    enum {
        Maybe_2913_None_t,
        Maybe_2913_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2911  field0;
        } Maybe_2913_Just_s;
    } stuff;
};

static struct Maybe_2913 Maybe_2913_Just (  struct Tuple2_2911  field0 ) {
    return ( struct Maybe_2913 ) { .tag = Maybe_2913_Just_t, .stuff = { .Maybe_2913_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2244   next2915 (    struct SliceIter_2902 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp371 ( (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2244) { .tag = Maybe_2244_None_t } );
    }
    struct Tuple2_338  elem2258 = ( * ( (  offset_dash_ptr805 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2244_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_2913   next2914 (    struct Zip_2901 *  self939 ) {
    struct Zip_2901  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_2244  dref941 = ( (  next2915 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_2244_None_t ) {
            return ( (struct Maybe_2913) { .tag = Maybe_2913_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_2244_Just_t ) {
                struct Maybe_220  dref943 = ( (  next569 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_220_None_t ) {
                    return ( (struct Maybe_2913) { .tag = Maybe_2913_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_220_Just_t ) {
                        ( (  next2915 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next569 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2913_Just ) ( ( ( Tuple2_2911_Tuple2 ) ( ( dref941 .stuff .Maybe_2244_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_220_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  struct Maybe_2909   next2912 (    struct Zip_2900 *  self939 ) {
    struct Zip_2900  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_2913  dref941 = ( (  next2914 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_2913_None_t ) {
            return ( (struct Maybe_2909) { .tag = Maybe_2909_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_2913_Just_t ) {
                struct Maybe_220  dref943 = ( (  next221 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_220_None_t ) {
                    return ( (struct Maybe_2909) { .tag = Maybe_2909_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_220_Just_t ) {
                        ( (  next2914 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next221 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2909_Just ) ( ( ( Tuple2_2910_Tuple2 ) ( ( dref941 .stuff .Maybe_2913_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_220_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  struct Map_2891   map2918 (    struct StrView_18  iterable813 ,    int32_t (*  fun815 )(    struct Char_101  ) ) {
    struct StrViewIter_362  it816 = ( (  into_dash_iter365 ) ( (  iterable813 ) ) );
    return ( ( Map_2891_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct StrView_18   trim_dash_strview_dash_to_dash_wcwidth2916 (    struct StrView_18  s2741 ,    int32_t  width_dash_to_dash_trim_dash_to2743 ) {
    size_t  i2744 = (  from_dash_integral0 ( 0 ) );
    int32_t  wcsum2745 = (  from_dash_integral92 ( 0 ) );
    struct Map_2891  temp2917 =  into_dash_iter2893 ( ( (  map2918 ) ( (  s2741 ) ,  (  rendered_dash_wcwidth442 ) ) ) );
    while (true) {
        struct Maybe_220  __cond2919 =  next2894 (&temp2917);
        if (  __cond2919 .tag == 0 ) {
            break;
        }
        int32_t  wcw2747 =  __cond2919 .stuff .Maybe_220_Just_s .field0;
        wcsum2745 = (  op_dash_add224 ( (  wcsum2745 ) , (  wcw2747 ) ) );
        if ( (  cmp222 ( (  wcsum2745 ) , (  width_dash_to_dash_trim_dash_to2743 ) ) == 2 ) ) {
            break;
        }
        i2744 = (  op_dash_add425 ( (  i2744 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  substr1380 ) ( (  s2741 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  i2744 ) ) );
}

static  enum Unit_10   render2865 (    struct Screen_836 *  screen4957 ,    struct FilePicker_336  p4959 ) {
    int32_t  width4960 = (  op_dash_sub229 ( ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen4957 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral92 ( 1 ) ) ) );
    int32_t  height4961 = (  op_dash_sub229 ( ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen4957 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral92 ( 1 ) ) ) );
    ( (  draw_dash_rect2866 ) ( (  screen4957 ) ,  (  from_dash_integral92 ( 0 ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  (  width4960 ) ,  (  height4961 ) ,  ( ( Color_203_Color16 ) ( ( Color16_205_Red16 ) ) ) ) );
    ( (  fill_dash_rect2871 ) ( (  screen4957 ) ,  (  from_dash_integral92 ( 1 ) ) ,  (  from_dash_integral92 ( 1 ) ) ,  (  op_dash_sub229 ( (  width4960 ) , (  from_dash_integral92 ( 1 ) ) ) ) ,  (  op_dash_sub229 ( (  height4961 ) , (  from_dash_integral92 ( 1 ) ) ) ) ,  ( ( Color_203_Color16 ) ( ( Color16_205_Black16 ) ) ) ) );
    int32_t  left_dash_off4962 = (  from_dash_integral92 ( 1 ) );
    int32_t  max_dash_width4963 = (  op_dash_sub229 ( (  op_dash_sub229 ( (  op_dash_sub229 ( (  width4960 ) , (  left_dash_off4962 ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) , (  from_dash_integral92 ( 1 ) ) ) );
    int32_t  searchbar_dash_y_dash_size4964 = (  from_dash_integral92 ( 2 ) );
    ( (  draw_dash_str2876 ) ( (  screen4957 ) ,  ( (  trim_dash_to_dash_wcwidth2883 ) ( ( (  p4959 ) .f_query ) ,  (  max_dash_width4963 ) ) ) ,  (  from_dash_integral92 ( 2 ) ) ,  (  from_dash_integral92 ( 1 ) ) ) );
    ( (  draw_dash_hline2884 ) ( (  screen4957 ) ,  (  from_dash_integral92 ( 1 ) ) ,  (  op_dash_sub229 ( (  width4960 ) , (  from_dash_integral92 ( 1 ) ) ) ) ,  (  from_dash_integral92 ( 2 ) ) ,  ( ( Color_203_Color16 ) ( ( Color16_205_Red16 ) ) ) ) );
    ( (  set_dash_screen_dash_bg2324 ) ( (  screen4957 ) ,  ( ( Color_203_Color16 ) ( ( Color16_205_Black16 ) ) ) ) );
    int32_t  num_dash_files_dash_to_dash_display4965 = (  op_dash_sub229 ( (  op_dash_sub229 ( (  height4961 ) , (  from_dash_integral92 ( 2 ) ) ) ) , (  searchbar_dash_y_dash_size4964 ) ) );
    if ( (  cmp222 ( (  num_dash_files_dash_to_dash_display4965 ) , (  from_dash_integral92 ( 0 ) ) ) != 2 ) ) {
        return ( Unit_10_Unit );
    }
    size_t  page4966 = (  op_dash_div396 ( ( (  p4959 ) .f_sel ) , ( (  i32_dash_size349 ) ( (  op_dash_add224 ( (  num_dash_files_dash_to_dash_display4965 ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) ) );
    size_t  start_dash_i4967 = (  op_dash_mul555 ( (  page4966 ) , ( (  i32_dash_size349 ) ( (  op_dash_add224 ( (  num_dash_files_dash_to_dash_display4965 ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) ) );
    struct Slice_337  files4968 = ( (  from2887 ) ( ( (  p4959 ) .f_rendered_dash_files ) ,  (  start_dash_i4967 ) ) );
    size_t  sel_dash_size4969 = ( (  p4959 ) .f_sel_dash_size );
    struct Color_203  sel_dash_color4970 = ( ( Color_203_Color16 ) ( ( Color16_205_Cyan16 ) ) );
    struct StrView_18  sel_dash_cursor4971 = ( (  from_dash_string269 ) ( ( (uint8_t*)" > " ) ,  ( 3 ) ) );
    int32_t  sel_dash_cursor_dash_off4972 = ( (  rendered_dash_str_dash_width2889 ) ( (  sel_dash_cursor4971 ) ) );
    struct Zip_2900  temp2899 =  into_dash_iter2903 ( ( (  zip2904 ) ( ( (  zip2906 ) ( (  files4968 ) ,  ( (  from573 ) ( ( (  size_dash_i32380 ) ( (  start_dash_i4967 ) ) ) ) ) ) ) ,  ( (  to228 ) ( (  op_dash_add224 ( (  from_dash_integral92 ( 1 ) ) , (  searchbar_dash_y_dash_size4964 ) ) ) ,  (  op_dash_sub229 ( (  height4961 ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_2909  __cond2908 =  next2912 (&temp2899);
        if (  __cond2908 .tag == 0 ) {
            break;
        }
        struct Tuple2_2910  dref4973 =  __cond2908 .stuff .Maybe_2909_Just_s .field0;
        struct Color_203  text_dash_color4978 = ( ( Color_203_Color16 ) ( ( Color16_205_White16 ) ) );
        if ( (  eq660 ( ( dref4973 .field0 .field1 ) , ( (  size_dash_i32380 ) ( ( (  p4959 ) .f_sel ) ) ) ) ) ) {
            text_dash_color4978 = ( ( Color_203_Color16 ) ( ( Color16_205_Yellow16 ) ) );
            ( (  set_dash_screen_dash_fg2323 ) ( (  screen4957 ) ,  (  text_dash_color4978 ) ) );
            ( (  draw_dash_str2839 ) ( (  screen4957 ) ,  (  sel_dash_cursor4971 ) ,  (  left_dash_off4962 ) ,  ( dref4973 .field1 ) ) );
        }
        struct StrView_18  filename4979 = ( (  trim_dash_strview_dash_to_dash_wcwidth2916 ) ( ( dref4973 .field0 .field0 .field0 ) ,  (  op_dash_sub229 ( (  max_dash_width4963 ) , (  sel_dash_cursor_dash_off4972 ) ) ) ) );
        struct StrView_18  before_dash_sel4980 = ( (  byte_dash_substr965 ) ( (  filename4979 ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( dref4973 .field0 .field0 .field1 ) ) );
        struct StrView_18  in_dash_sel4981 = ( (  byte_dash_substr965 ) ( (  filename4979 ) ,  ( dref4973 .field0 .field0 .field1 ) ,  (  op_dash_add425 ( ( dref4973 .field0 .field0 .field1 ) , (  sel_dash_size4969 ) ) ) ) );
        struct StrView_18  after_dash_sel4982 = ( (  byte_dash_substr_dash_from953 ) ( (  filename4979 ) ,  (  op_dash_add425 ( ( dref4973 .field0 .field0 .field1 ) , (  sel_dash_size4969 ) ) ) ) );
        int32_t  text_dash_from_dash_x4983 = (  op_dash_add224 ( (  left_dash_off4962 ) , (  sel_dash_cursor_dash_off4972 ) ) );
        ( (  set_dash_screen_dash_fg2323 ) ( (  screen4957 ) ,  (  text_dash_color4978 ) ) );
        ( (  draw_dash_str2839 ) ( (  screen4957 ) ,  (  before_dash_sel4980 ) ,  (  text_dash_from_dash_x4983 ) ,  ( dref4973 .field1 ) ) );
        ( (  set_dash_screen_dash_fg2323 ) ( (  screen4957 ) ,  (  sel_dash_color4970 ) ) );
        ( (  draw_dash_str2839 ) ( (  screen4957 ) ,  (  in_dash_sel4981 ) ,  (  op_dash_add224 ( (  text_dash_from_dash_x4983 ) , ( (  size_dash_i32380 ) ( ( dref4973 .field0 .field0 .field1 ) ) ) ) ) ,  ( dref4973 .field1 ) ) );
        ( (  set_dash_screen_dash_fg2323 ) ( (  screen4957 ) ,  (  text_dash_color4978 ) ) );
        ( (  draw_dash_str2839 ) ( (  screen4957 ) ,  (  after_dash_sel4982 ) ,  (  op_dash_add224 ( (  text_dash_from_dash_x4983 ) , ( (  size_dash_i32380 ) ( (  op_dash_add425 ( ( dref4973 .field0 .field0 .field1 ) , (  sel_dash_size4969 ) ) ) ) ) ) ) ,  ( dref4973 .field1 ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   render_dash_editor2339 (   struct env834* env ,    struct Screen_836 *  screen5171 ,    struct Editor_329 *  ed5173 ) {
    struct ScreenDims_839  screen_dash_dims5174 = ( (struct ScreenDims_839) { .f_from_dash_sx = (  from_dash_integral92 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub229 ( ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen5171 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral92 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub229 ( ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen5171 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral92 ( 1 ) ) ) ) } );
    struct envunion835  temp2340 = ( (struct envunion835){ .fun = (  enum Unit_10  (*) (  struct env271*  ,    struct Screen_836 *  ,    struct Pane_289 *  ,    struct ScreenDims_839  ,    struct Config_341 *  ) )render2341 , .env =  env->envinst271 } );
    ( temp2340.fun ( &temp2340.env ,  (  screen5171 ) ,  ( (  pane466 ) ( (  ed5173 ) ) ) ,  (  screen_dash_dims5174 ) ,  ( ( * (  ed5173 ) ) .f_cfg ) ) );
    struct env2799 envinst2799 = {
        .screen5171 =  screen5171 ,
    };
    ( (  if_dash_just2798 ) ( ( ( * (  ed5173 ) ) .f_msg ) ,  ( (struct envunion2800){ .fun = (  enum Unit_10  (*) (  struct env2799*  ,    struct StrView_18  ) )lam2802 , .env =  envinst2799 } ) ) );
    struct EditorMode_330  dref5178 = ( ( * (  ed5173 ) ) .f_mode );
    if ( dref5178.tag == EditorMode_330_Normal_t ) {
    }
    else {
        if ( dref5178.tag == EditorMode_330_Cmd_t ) {
            int32_t  num_dash_chars5180 = ( (  size_dash_i32380 ) ( ( (  count437 ) ( ( (  chars2047 ) ( ( dref5178 .stuff .EditorMode_330_Cmd_s .field1 ) ) ) ) ) ) );
            struct StrView_18  pad5181 = ( (  eq660 ( ( (  mod1864 ) ( (  num_dash_chars5180 ) ,  (  from_dash_integral92 ( 2 ) ) ) ) , (  from_dash_integral92 ( 0 ) ) ) ) ? ( (  from_dash_string269 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike699 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) );
            int32_t  num_dash_chars5182 = (  op_dash_add224 ( (  num_dash_chars5180 ) , ( (  mod1864 ) ( (  num_dash_chars5180 ) ,  (  from_dash_integral92 ( 2 ) ) ) ) ) );
            struct StrConcat_2803  full_dash_str5183 = ( ( StrConcat_2803_StrConcat ) ( ( ( StrConcat_2804_StrConcat ) ( ( ( StrConcat_2805_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)" ⌨️ " ) ,  ( 8 ) ) ) ,  ( dref5178 .stuff .EditorMode_330_Cmd_s .field1 ) ) ) ,  (  pad5181 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) );
            int32_t  full_dash_chars5184 = ( (  size_dash_i32380 ) ( ( (  count2806 ) ( ( (  chars2816 ) ( (  full_dash_str5183 ) ) ) ) ) ) );
            ( (  draw_dash_str2822 ) ( (  screen5171 ) ,  (  full_dash_str5183 ) ,  (  op_dash_div1865 ( (  op_dash_sub229 ( ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen5171 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars5184 ) ) ) , (  from_dash_integral92 ( 2 ) ) ) ) ,  (  from_dash_integral92 ( 1 ) ) ) );
        }
        else {
            if ( dref5178.tag == EditorMode_330_Search_t ) {
                int32_t  num_dash_chars5186 = ( (  size_dash_i32380 ) ( ( (  count437 ) ( ( (  chars2047 ) ( ( dref5178 .stuff .EditorMode_330_Search_s .field1 ) ) ) ) ) ) );
                struct StrView_18  pad5187 = ( (  eq660 ( ( (  mod1864 ) ( (  num_dash_chars5186 ) ,  (  from_dash_integral92 ( 2 ) ) ) ) , (  from_dash_integral92 ( 0 ) ) ) ) ? ( (  from_dash_string269 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike699 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) );
                int32_t  num_dash_chars5188 = (  op_dash_add224 ( (  num_dash_chars5186 ) , ( (  mod1864 ) ( (  num_dash_chars5186 ) ,  (  from_dash_integral92 ( 2 ) ) ) ) ) );
                struct StrConcat_2825  full_dash_str5189 = ( ( StrConcat_2825_StrConcat ) ( ( ( StrConcat_2804_StrConcat ) ( ( ( StrConcat_2805_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)" 🔎  " ) ,  ( 7 ) ) ) ,  ( dref5178 .stuff .EditorMode_330_Search_s .field1 ) ) ) ,  (  pad5187 ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"  " ) ,  ( 2 ) ) ) ) );
                int32_t  full_dash_chars5190 = ( (  size_dash_i32380 ) ( ( (  count2826 ) ( ( (  chars2834 ) ( (  full_dash_str5189 ) ) ) ) ) ) );
                ( (  draw_dash_str2836 ) ( (  screen5171 ) ,  (  full_dash_str5189 ) ,  (  op_dash_div1865 ( (  op_dash_sub229 ( ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen5171 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars5190 ) ) ) , (  from_dash_integral92 ( 2 ) ) ) ) ,  (  from_dash_integral92 ( 1 ) ) ) );
            }
            else {
                if ( dref5178.tag == EditorMode_330_Menu_t ) {
                    ( (  draw_dash_str2839 ) ( (  screen5171 ) ,  ( ( dref5178 .stuff .EditorMode_330_Menu_s .field0 ) .f_name ) ,  (  from_dash_integral92 ( 0 ) ) ,  (  from_dash_integral92 ( 0 ) ) ) );
                    struct Zip_2843  temp2842 =  into_dash_iter2844 ( ( (  zip2845 ) ( ( ( dref5178 .stuff .EditorMode_330_Menu_s .field0 ) .f_items ) ,  ( (  from573 ) ( (  from_dash_integral92 ( 1 ) ) ) ) ) ) );
                    while (true) {
                        struct Maybe_2847  __cond2846 =  next2849 (&temp2842);
                        if (  __cond2846 .tag == 0 ) {
                            break;
                        }
                        struct Tuple2_2848  dref5192 =  __cond2846 .stuff .Maybe_2847_Just_s .field0;
                        ( (  draw_dash_str2850 ) ( (  screen5171 ) ,  ( ( StrConcat_2851_StrConcat ) ( ( ( StrConcat_2852_StrConcat ) ( ( ( dref5192 .field0 ) .f_key ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  ( ( dref5192 .field0 ) .f_description ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( dref5192 .field1 ) ) );
                    }
                }
                else {
                    if ( dref5178.tag == EditorMode_330_Picker_t ) {
                        ( (  render2865 ) ( (  screen5171 ) ,  ( dref5178 .stuff .EditorMode_330_Picker_s .field0 ) ) );
                    }
                    else {
                        if ( true ) {
                            ( (  todo2105 ) ( ) );
                        }
                    }
                }
            }
        }
    }
    int32_t  temp2920 = (  from_dash_integral92 ( 0 ) );
    int32_t *  curline5196 = ( &temp2920 );
    return ( Unit_10_Unit );
}

struct RenderState_2922 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_203  f_fg;
    struct Color_203  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2929 {
    struct StrView_18  field0;
    uint32_t  field1;
};

static struct StrConcat_2929 StrConcat_2929_StrConcat (  struct StrView_18  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2929 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2928 {
    struct StrConcat_2929  field0;
    struct Char_101  field1;
};

static struct StrConcat_2928 StrConcat_2928_StrConcat (  struct StrConcat_2929  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_2928 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2927 {
    struct StrConcat_2928  field0;
    uint32_t  field1;
};

static struct StrConcat_2927 StrConcat_2927_StrConcat (  struct StrConcat_2928  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2927 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2926 {
    struct StrConcat_2927  field0;
    struct Char_101  field1;
};

static struct StrConcat_2926 StrConcat_2926_StrConcat (  struct StrConcat_2927  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_2926 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2935 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2934 {
    struct StrViewIter_362  f_left;
    struct IntStrIter_2935  f_right;
};

struct StrConcatIter_2933 {
    struct StrConcatIter_2934  f_left;
    struct AppendIter_755  f_right;
};

struct StrConcatIter_2932 {
    struct StrConcatIter_2933  f_left;
    struct IntStrIter_2935  f_right;
};

struct StrConcatIter_2931 {
    struct StrConcatIter_2932  f_left;
    struct AppendIter_755  f_right;
};

static  struct StrConcatIter_2931   into_dash_iter2937 (    struct StrConcatIter_2931  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_420   next2942 (    struct IntStrIter_2935 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_420_Just ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp222 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral92 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
    }
    uint32_t  trim_dash_down1400 = ( (  pow213 ) ( (  from_dash_integral230 ( 10 ) ) ,  (  op_dash_sub229 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral92 ( 1 ) ) ) ) ) );
    uint32_t  upper1401 = (  op_dash_div212 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    uint32_t  upper_dash_mask1402 = (  op_dash_mul232 ( (  op_dash_div212 ( (  upper1401 ) , (  from_dash_integral230 ( 10 ) ) ) ) , (  from_dash_integral230 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast210 ) ( (  op_dash_sub234 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub229 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral92 ( 1 ) ) ) );
    struct Char_101  digit_dash_char1404 = ( (  char_dash_from_dash_u81463 ) ( (  op_dash_add1355 ( (  digit1403 ) , (  from_dash_integral397 ( 48 ) ) ) ) ) );
    return ( ( Maybe_420_Just ) ( (  digit_dash_char1404 ) ) );
}

static  struct Maybe_420   next2941 (    struct StrConcatIter_2934 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next421 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next2942 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_420   next2940 (    struct StrConcatIter_2933 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next2941 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next771 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_420   next2939 (    struct StrConcatIter_2932 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next2940 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next2942 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_420   next2938 (    struct StrConcatIter_2931 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next2939 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next771 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_10   for_dash_each2930 (    struct StrConcatIter_2931  iterable1099 ,    enum Unit_10 (*  fun1101 )(    struct Char_101  ) ) {
    struct StrConcatIter_2931  temp2936 = ( (  into_dash_iter2937 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_2931 *  it1102 = ( &temp2936 );
    while ( ( true ) ) {
        struct Maybe_420  dref1103 = ( (  next2938 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_420_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_420_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_420_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  int32_t   count_dash_digits2953 (    uint32_t  self1407 ) {
    if ( (  eq2774 ( (  self1407 ) , (  from_dash_integral230 ( 0 ) ) ) ) ) {
        return (  from_dash_integral92 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral92 ( 0 ) );
    while ( (  cmp235 ( (  self1407 ) , (  from_dash_integral230 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div212 ( (  self1407 ) , (  from_dash_integral230 ( 10 ) ) ) );
        digits1408 = (  op_dash_add224 ( (  digits1408 ) , (  from_dash_integral92 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_2935   uint_dash_iter2952 (    uint32_t  int1414 ) {
    return ( (struct IntStrIter_2935) { .f_int = (  int1414 ) , .f_len = ( (  count_dash_digits2953 ) ( (  int1414 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2935   chars2951 (    uint32_t  self1796 ) {
    return ( (  uint_dash_iter2952 ) ( (  self1796 ) ) );
}

static  struct StrConcatIter_2934   into_dash_iter2950 (    struct StrConcat_2929  dref1297 ) {
    return ( (struct StrConcatIter_2934) { .f_left = ( (  chars364 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2951 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2934   chars2949 (    struct StrConcat_2929  self1308 ) {
    return ( (  into_dash_iter2950 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2933   into_dash_iter2948 (    struct StrConcat_2928  dref1297 ) {
    return ( (struct StrConcatIter_2933) { .f_left = ( (  chars2949 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars762 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2933   chars2947 (    struct StrConcat_2928  self1308 ) {
    return ( (  into_dash_iter2948 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2932   into_dash_iter2946 (    struct StrConcat_2927  dref1297 ) {
    return ( (struct StrConcatIter_2932) { .f_left = ( (  chars2947 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2951 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2932   chars2945 (    struct StrConcat_2927  self1308 ) {
    return ( (  into_dash_iter2946 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2931   into_dash_iter2944 (    struct StrConcat_2926  dref1297 ) {
    return ( (struct StrConcatIter_2931) { .f_left = ( (  chars2945 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars762 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2931   chars2943 (    struct StrConcat_2926  self1308 ) {
    return ( (  into_dash_iter2944 ) ( (  self1308 ) ) );
}

static  enum Unit_10   print2925 (    struct StrConcat_2926  s1335 ) {
    ( (  for_dash_each2930 ) ( ( (  chars2943 ) ( (  s1335 ) ) ) ,  (  printf_dash_char387 ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   move_dash_cursor_dash_to2924 (    uint32_t  x2773 ,    uint32_t  y2775 ) {
    uint32_t  x2776 = (  op_dash_add236 ( (  x2773 ) , (  from_dash_integral230 ( 1 ) ) ) );
    uint32_t  y2777 = (  op_dash_add236 ( (  y2775 ) , (  from_dash_integral230 ( 1 ) ) ) );
    ( (  print2925 ) ( ( ( StrConcat_2926_StrConcat ) ( ( ( StrConcat_2927_StrConcat ) ( ( ( StrConcat_2928_StrConcat ) ( ( ( StrConcat_2929_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[" ) ,  ( 2 ) ) ) ,  (  y2777 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  (  x2776 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_10_Unit );
}

static  struct Slice_837   subslice2956 (    struct Slice_837  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Cell_838 *  begin_dash_ptr2209 = ( (  offset_dash_ptr1276 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp371 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp371 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_837) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub580 ( ( (  min956 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_837) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

struct SliceIter_2959 {
    struct Slice_837  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2958 {
    struct SliceIter_2959  f_left_dash_it;
    struct SliceIter_2959  f_right_dash_it;
};

struct Tuple2_2960 {
    struct Cell_838  field0;
    struct Cell_838  field1;
};

static struct Tuple2_2960 Tuple2_2960_Tuple2 (  struct Cell_838  field0 ,  struct Cell_838  field1 ) {
    return ( struct Tuple2_2960 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2962 {
    bool (*  fun1160 )(    struct Tuple2_2960  );
};

struct envunion2963 {
    bool  (*fun) (  struct env2962*  ,    struct Tuple2_2960  ,    bool  );
    struct env2962 env;
};

static  struct Zip_2958   into_dash_iter2964 (    struct Zip_2958  self936 ) {
    return (  self936 );
}

struct Maybe_2965 {
    enum {
        Maybe_2965_None_t,
        Maybe_2965_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2960  field0;
        } Maybe_2965_Just_s;
    } stuff;
};

static struct Maybe_2965 Maybe_2965_Just (  struct Tuple2_2960  field0 ) {
    return ( struct Maybe_2965 ) { .tag = Maybe_2965_Just_t, .stuff = { .Maybe_2965_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1281   next2967 (    struct SliceIter_2959 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp371 ( (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1281) { .tag = Maybe_1281_None_t } );
    }
    struct Cell_838  elem2258 = ( * ( (  offset_dash_ptr1276 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64418 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add425 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1281_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_2965   next2966 (    struct Zip_2958 *  self939 ) {
    struct Zip_2958  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_1281  dref941 = ( (  next2967 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_1281_None_t ) {
            return ( (struct Maybe_2965) { .tag = Maybe_2965_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_1281_Just_t ) {
                struct Maybe_1281  dref943 = ( (  next2967 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_1281_None_t ) {
                    return ( (struct Maybe_2965) { .tag = Maybe_2965_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_1281_Just_t ) {
                        ( (  next2967 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2967 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2965_Just ) ( ( ( Tuple2_2960_Tuple2 ) ( ( dref941 .stuff .Maybe_1281_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_1281_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2961 (    struct Zip_2958  iterable1118 ,    bool  base1120 ,   struct envunion2963  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct Zip_2958  it1124 = ( (  into_dash_iter2964 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_2965  dref1125 = ( (  next2966 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_2965_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_2965_Just_t ) {
                struct envunion2963  temp2968 = (  fun1122 );
                x1123 = ( temp2968.fun ( &temp2968.env ,  ( dref1125 .stuff .Maybe_2965_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2969 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2969);
    abort ( );
    ( Unit_10_Unit );
    bool  temp2970;
    return (  temp2970 );
}

static  bool   lam2971 (   struct env2962* env ,    struct Tuple2_2960  e1162 ,    bool  x1164 ) {
    return ( ( ( env->fun1160 ) ( (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2957 (    struct Zip_2958  it1158 ,    bool (*  fun1160 )(    struct Tuple2_2960  ) ) {
    struct env2962 envinst2962 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2961 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2963){ .fun = (  bool  (*) (  struct env2962*  ,    struct Tuple2_2960  ,    bool  ) )lam2971 , .env =  envinst2962 } ) ) );
}

static  struct SliceIter_2959   into_dash_iter2973 (    struct Slice_837  self2250 ) {
    return ( (struct SliceIter_2959) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2958   zip2972 (    struct Slice_837  left947 ,    struct Slice_837  right949 ) {
    struct SliceIter_2959  left_dash_it950 = ( (  into_dash_iter2973 ) ( (  left947 ) ) );
    struct SliceIter_2959  right_dash_it951 = ( (  into_dash_iter2973 ) ( (  right949 ) ) );
    return ( (struct Zip_2958) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

struct Tuple2_2977 {
    struct Color_203  field0;
    struct Color_203  field1;
};

static struct Tuple2_2977 Tuple2_2977_Tuple2 (  struct Color_203  field0 ,  struct Color_203  field1 ) {
    return ( struct Tuple2_2977 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_204 *   cast2981 (    int32_t *  x395 ) {
    return ( (enum Color8_204 * ) (  x395 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2979 (    enum Color8_204  x645 ) {
    int32_t  temp2980 = ( (  zeroed1427 ) ( ) );
    int32_t *  y646 = ( &temp2980 );
    enum Color8_204 *  yp647 = ( (  cast2981 ) ( (  y646 ) ) );
    (*  yp647 ) = (  x645 );
    return ( * (  y646 ) );
}

static  bool   eq2978 (    enum Color8_204  l2803 ,    enum Color8_204  r2805 ) {
    return (  eq660 ( ( ( (  cast_dash_on_dash_zeroed2979 ) ( (  l2803 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2979 ) ( (  r2805 ) ) ) ) );
}

static  enum Color16_205 *   cast2985 (    int32_t *  x395 ) {
    return ( (enum Color16_205 * ) (  x395 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2983 (    enum Color16_205  x645 ) {
    int32_t  temp2984 = ( (  zeroed1427 ) ( ) );
    int32_t *  y646 = ( &temp2984 );
    enum Color16_205 *  yp647 = ( (  cast2985 ) ( (  y646 ) ) );
    (*  yp647 ) = (  x645 );
    return ( * (  y646 ) );
}

static  bool   eq2982 (    enum Color16_205  l2809 ,    enum Color16_205  r2811 ) {
    return (  eq660 ( ( ( (  cast_dash_on_dash_zeroed2983 ) ( (  l2809 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2983 ) ( (  r2811 ) ) ) ) );
}

static  bool   eq2986 (    struct RGB_206  l2839 ,    struct RGB_206  r2841 ) {
    return ( ( (  eq393 ( ( (  l2839 ) .f_r ) , ( (  r2841 ) .f_r ) ) ) && (  eq393 ( ( (  l2839 ) .f_g ) , ( (  r2841 ) .f_g ) ) ) ) && (  eq393 ( ( (  l2839 ) .f_b ) , ( (  r2841 ) .f_b ) ) ) );
}

static  bool   eq2976 (    struct Color_203  l2861 ,    struct Color_203  r2863 ) {
    return ( {  struct Tuple2_2977  dref2864 = ( ( Tuple2_2977_Tuple2 ) ( (  l2861 ) ,  (  r2863 ) ) ) ; dref2864 .field0.tag == Color_203_ColorDefault_t && dref2864 .field1.tag == Color_203_ColorDefault_t ? ( true ) : dref2864 .field0.tag == Color_203_Color8_t && dref2864 .field1.tag == Color_203_Color8_t ? (  eq2978 ( ( dref2864 .field0 .stuff .Color_203_Color8_s .field0 ) , ( dref2864 .field1 .stuff .Color_203_Color8_s .field0 ) ) ) : dref2864 .field0.tag == Color_203_Color16_t && dref2864 .field1.tag == Color_203_Color16_t ? (  eq2982 ( ( dref2864 .field0 .stuff .Color_203_Color16_s .field0 ) , ( dref2864 .field1 .stuff .Color_203_Color16_s .field0 ) ) ) : dref2864 .field0.tag == Color_203_Color256_t && dref2864 .field1.tag == Color_203_Color256_t ? (  eq393 ( ( dref2864 .field0 .stuff .Color_203_Color256_s .field0 ) , ( dref2864 .field1 .stuff .Color_203_Color256_s .field0 ) ) ) : dref2864 .field0.tag == Color_203_ColorRGB_t && dref2864 .field1.tag == Color_203_ColorRGB_t ? (  eq2986 ( ( dref2864 .field0 .stuff .Color_203_ColorRGB_s .field0 ) , ( dref2864 .field1 .stuff .Color_203_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2975 (    struct Cell_838  l3797 ,    struct Cell_838  r3799 ) {
    if ( ( !  eq429 ( ( (  l3797 ) .f_c ) , ( (  r3799 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2976 ( ( (  l3797 ) .f_fg ) , ( (  r3799 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2976 ( ( (  l3797 ) .f_bg ) , ( (  r3799 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2974 (    struct Tuple2_2960  dref3850 ) {
    return ( !  eq2975 ( ( dref3850 .field0 ) , ( dref3850 .field1 ) ) );
}

static  enum Unit_10   set_dash_default_dash_fg2989 (  ) {
    ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   set_dash_fg82990 (    enum Color8_204  color2814 ) {
    enum Color8_204  dref2815 = (  color2814 );
    switch (  dref2815 ) {
        case Color8_204_Black8 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_204_Red8 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_204_Green8 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_204_Yellow8 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_204_Blue8 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_204_Magenta8 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_204_Cyan8 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_204_White8 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   set_dash_fg162991 (    enum Color16_205  color2818 ) {
    enum Color16_205  dref2819 = (  color2818 );
    switch (  dref2819 ) {
        case Color16_205_Black16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_Red16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_Green16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_Yellow16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_Blue16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_Magenta16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_Cyan16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_White16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_BrightBlack16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_BrightRed16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_BrightGreen16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_BrightYellow16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_BrightBlue16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_BrightMagenta16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_BrightCyan16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_BrightWhite16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_10_Unit );
}

struct StrConcat_2995 {
    struct StrView_18  field0;
    uint8_t  field1;
};

static struct StrConcat_2995 StrConcat_2995_StrConcat (  struct StrView_18  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2995 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2994 {
    struct StrConcat_2995  field0;
    struct Char_101  field1;
};

static struct StrConcat_2994 StrConcat_2994_StrConcat (  struct StrConcat_2995  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_2994 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2999 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2998 {
    struct StrViewIter_362  f_left;
    struct IntStrIter_2999  f_right;
};

struct StrConcatIter_2997 {
    struct StrConcatIter_2998  f_left;
    struct AppendIter_755  f_right;
};

static  struct StrConcatIter_2997   into_dash_iter3001 (    struct StrConcatIter_2997  self1290 ) {
    return (  self1290 );
}

struct env3007 {
    uint8_t  base1386;
    ;
};

struct envunion3008 {
    uint8_t  (*fun) (  struct env3007*  ,    int32_t  ,    uint8_t  );
    struct env3007 env;
};

static  uint8_t   reduce3006 (    struct Range_215  iterable1118 ,    uint8_t  base1120 ,   struct envunion3008  fun1122 ) {
    uint8_t  x1123 = (  base1120 );
    struct RangeIter_218  it1124 = ( (  into_dash_iter219 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_220  dref1125 = ( (  next221 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_220_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_220_Just_t ) {
                struct envunion3008  temp3009 = (  fun1122 );
                x1123 = ( temp3009.fun ( &temp3009.env ,  ( dref1125 .stuff .Maybe_220_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp3010 = ( (  from_dash_string93 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp3010);
    abort ( );
    ( Unit_10_Unit );
    uint8_t  temp3011;
    return (  temp3011 );
}

static  uint8_t   op_dash_mul3013 (    uint8_t  l279 ,    uint8_t  r281 ) {
    return ( (  l279 ) * (  r281 ) );
}

static  uint8_t   lam3012 (   struct env3007* env ,    int32_t  item1390 ,    uint8_t  x1392 ) {
    return (  op_dash_mul3013 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  uint8_t   pow3005 (    uint8_t  base1386 ,    int32_t  p1388 ) {
    struct env3007 envinst3007 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce3006 ) ( ( (  to228 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  op_dash_sub229 ( (  p1388 ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral397 ( 1 ) ) ,  ( (struct envunion3008){ .fun = (  uint8_t  (*) (  struct env3007*  ,    int32_t  ,    uint8_t  ) )lam3012 , .env =  envinst3007 } ) ) );
}

static  uint8_t   op_dash_div3014 (    uint8_t  l284 ,    uint8_t  r286 ) {
    return ( (  l284 ) / (  r286 ) );
}

static  uint8_t   cast3015 (    uint8_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  struct Maybe_420   next3004 (    struct IntStrIter_2999 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_420_Just ) ( ( (  from_dash_charlike407 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp222 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral92 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_420) { .tag = Maybe_420_None_t } );
    }
    uint8_t  trim_dash_down1400 = ( (  pow3005 ) ( (  from_dash_integral397 ( 10 ) ) ,  (  op_dash_sub229 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral92 ( 1 ) ) ) ) ) );
    uint8_t  upper1401 = (  op_dash_div3014 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    uint8_t  upper_dash_mask1402 = (  op_dash_mul3013 ( (  op_dash_div3014 ( (  upper1401 ) , (  from_dash_integral397 ( 10 ) ) ) ) , (  from_dash_integral397 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast3015 ) ( (  op_dash_sub1354 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub229 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral92 ( 1 ) ) ) );
    struct Char_101  digit_dash_char1404 = ( (  char_dash_from_dash_u81463 ) ( (  op_dash_add1355 ( (  digit1403 ) , (  from_dash_integral397 ( 48 ) ) ) ) ) );
    return ( ( Maybe_420_Just ) ( (  digit_dash_char1404 ) ) );
}

static  struct Maybe_420   next3003 (    struct StrConcatIter_2998 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next421 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next3004 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_420   next3002 (    struct StrConcatIter_2997 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next3003 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next771 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_10   for_dash_each2996 (    struct StrConcatIter_2997  iterable1099 ,    enum Unit_10 (*  fun1101 )(    struct Char_101  ) ) {
    struct StrConcatIter_2997  temp3000 = ( (  into_dash_iter3001 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_2997 *  it1102 = ( &temp3000 );
    while ( ( true ) ) {
        struct Maybe_420  dref1103 = ( (  next3002 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_420_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_420_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_420_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  int32_t   count_dash_digits3022 (    uint8_t  self1407 ) {
    if ( (  eq393 ( (  self1407 ) , (  from_dash_integral397 ( 0 ) ) ) ) ) {
        return (  from_dash_integral92 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral92 ( 0 ) );
    while ( (  cmp410 ( (  self1407 ) , (  from_dash_integral397 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div3014 ( (  self1407 ) , (  from_dash_integral397 ( 10 ) ) ) );
        digits1408 = (  op_dash_add224 ( (  digits1408 ) , (  from_dash_integral92 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_2999   uint_dash_iter3021 (    uint8_t  int1414 ) {
    return ( (struct IntStrIter_2999) { .f_int = (  int1414 ) , .f_len = ( (  count_dash_digits3022 ) ( (  int1414 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2999   chars3020 (    uint8_t  self1802 ) {
    return ( (  uint_dash_iter3021 ) ( (  self1802 ) ) );
}

static  struct StrConcatIter_2998   into_dash_iter3019 (    struct StrConcat_2995  dref1297 ) {
    return ( (struct StrConcatIter_2998) { .f_left = ( (  chars364 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars3020 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2998   chars3018 (    struct StrConcat_2995  self1308 ) {
    return ( (  into_dash_iter3019 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2997   into_dash_iter3017 (    struct StrConcat_2994  dref1297 ) {
    return ( (struct StrConcatIter_2997) { .f_left = ( (  chars3018 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars762 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2997   chars3016 (    struct StrConcat_2994  self1308 ) {
    return ( (  into_dash_iter3017 ) ( (  self1308 ) ) );
}

static  enum Unit_10   print2993 (    struct StrConcat_2994  s1335 ) {
    ( (  for_dash_each2996 ) ( ( (  chars3016 ) ( (  s1335 ) ) ) ,  (  printf_dash_char387 ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   set_dash_fg2562992 (    uint8_t  color2832 ) {
    ( (  print2993 ) ( ( ( StrConcat_2994_StrConcat ) ( ( ( StrConcat_2995_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2832 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_10_Unit );
}

struct StrConcat_3028 {
    struct StrConcat_2994  field0;
    uint8_t  field1;
};

static struct StrConcat_3028 StrConcat_3028_StrConcat (  struct StrConcat_2994  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_3028 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_3027 {
    struct StrConcat_3028  field0;
    struct Char_101  field1;
};

static struct StrConcat_3027 StrConcat_3027_StrConcat (  struct StrConcat_3028  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_3027 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_3026 {
    struct StrConcat_3027  field0;
    uint8_t  field1;
};

static struct StrConcat_3026 StrConcat_3026_StrConcat (  struct StrConcat_3027  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_3026 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_3025 {
    struct StrConcat_3026  field0;
    struct Char_101  field1;
};

static struct StrConcat_3025 StrConcat_3025_StrConcat (  struct StrConcat_3026  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_3025 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_3033 {
    struct StrConcatIter_2997  f_left;
    struct IntStrIter_2999  f_right;
};

struct StrConcatIter_3032 {
    struct StrConcatIter_3033  f_left;
    struct AppendIter_755  f_right;
};

struct StrConcatIter_3031 {
    struct StrConcatIter_3032  f_left;
    struct IntStrIter_2999  f_right;
};

struct StrConcatIter_3030 {
    struct StrConcatIter_3031  f_left;
    struct AppendIter_755  f_right;
};

static  struct StrConcatIter_3030   into_dash_iter3035 (    struct StrConcatIter_3030  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_420   next3039 (    struct StrConcatIter_3033 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next3002 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next3004 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_420   next3038 (    struct StrConcatIter_3032 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next3039 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next771 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_420   next3037 (    struct StrConcatIter_3031 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next3038 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next3004 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_420   next3036 (    struct StrConcatIter_3030 *  self1293 ) {
    struct Maybe_420  dref1294 = ( (  next3037 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_420_Just_t ) {
        return ( ( Maybe_420_Just ) ( ( dref1294 .stuff .Maybe_420_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_420_None_t ) {
            return ( (  next771 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_10   for_dash_each3029 (    struct StrConcatIter_3030  iterable1099 ,    enum Unit_10 (*  fun1101 )(    struct Char_101  ) ) {
    struct StrConcatIter_3030  temp3034 = ( (  into_dash_iter3035 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_3030 *  it1102 = ( &temp3034 );
    while ( ( true ) ) {
        struct Maybe_420  dref1103 = ( (  next3036 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_420_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_420_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_420_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  struct StrConcatIter_3033   into_dash_iter3047 (    struct StrConcat_3028  dref1297 ) {
    return ( (struct StrConcatIter_3033) { .f_left = ( (  chars3016 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars3020 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_3033   chars3046 (    struct StrConcat_3028  self1308 ) {
    return ( (  into_dash_iter3047 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_3032   into_dash_iter3045 (    struct StrConcat_3027  dref1297 ) {
    return ( (struct StrConcatIter_3032) { .f_left = ( (  chars3046 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars762 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_3032   chars3044 (    struct StrConcat_3027  self1308 ) {
    return ( (  into_dash_iter3045 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_3031   into_dash_iter3043 (    struct StrConcat_3026  dref1297 ) {
    return ( (struct StrConcatIter_3031) { .f_left = ( (  chars3044 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars3020 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_3031   chars3042 (    struct StrConcat_3026  self1308 ) {
    return ( (  into_dash_iter3043 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_3030   into_dash_iter3041 (    struct StrConcat_3025  dref1297 ) {
    return ( (struct StrConcatIter_3030) { .f_left = ( (  chars3042 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars762 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_3030   chars3040 (    struct StrConcat_3025  self1308 ) {
    return ( (  into_dash_iter3041 ) ( (  self1308 ) ) );
}

static  enum Unit_10   print3024 (    struct StrConcat_3025  s1335 ) {
    ( (  for_dash_each3029 ) ( ( (  chars3040 ) ( (  s1335 ) ) ) ,  (  printf_dash_char387 ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   set_dash_fg_dash_rgb3023 (    struct RGB_206  c2854 ) {
    ( (  print3024 ) ( ( ( StrConcat_3025_StrConcat ) ( ( ( StrConcat_3026_StrConcat ) ( ( ( StrConcat_3027_StrConcat ) ( ( ( StrConcat_3028_StrConcat ) ( ( ( StrConcat_2994_StrConcat ) ( ( ( StrConcat_2995_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2854 ) .f_r ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2854 ) .f_g ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2854 ) .f_b ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   set_dash_fg2988 (    struct Color_203  c2875 ) {
    struct Color_203  dref2876 = (  c2875 );
    if ( dref2876.tag == Color_203_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2989 ) ( ) );
    }
    else {
        if ( dref2876.tag == Color_203_Color8_t ) {
            ( (  set_dash_fg82990 ) ( ( dref2876 .stuff .Color_203_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2876.tag == Color_203_Color16_t ) {
                ( (  set_dash_fg162991 ) ( ( dref2876 .stuff .Color_203_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2876.tag == Color_203_Color256_t ) {
                    ( (  set_dash_fg2562992 ) ( ( dref2876 .stuff .Color_203_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2876.tag == Color_203_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb3023 ) ( ( dref2876 .stuff .Color_203_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   set_dash_default_dash_bg3049 (  ) {
    ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   set_dash_bg83050 (    enum Color8_204  color2822 ) {
    enum Color8_204  dref2823 = (  color2822 );
    switch (  dref2823 ) {
        case Color8_204_Black8 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_204_Red8 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_204_Green8 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_204_Yellow8 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_204_Blue8 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_204_Magenta8 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_204_Cyan8 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_204_White8 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   set_dash_bg163051 (    enum Color16_205  color2826 ) {
    enum Color16_205  dref2827 = (  color2826 );
    switch (  dref2827 ) {
        case Color16_205_Black16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_Red16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_Green16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_Yellow16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_Blue16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_Magenta16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_Cyan16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_White16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_205_BrightBlack16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_205_BrightRed16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_205_BrightGreen16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_205_BrightYellow16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_205_BrightBlue16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_205_BrightMagenta16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_205_BrightCyan16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_205_BrightWhite16 : {
            ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   set_dash_bg2563052 (    uint8_t  color2835 ) {
    ( (  print2993 ) ( ( ( StrConcat_2994_StrConcat ) ( ( ( StrConcat_2995_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2835 ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   set_dash_bg_dash_rgb3053 (    struct RGB_206  c2857 ) {
    ( (  print3024 ) ( ( ( StrConcat_3025_StrConcat ) ( ( ( StrConcat_3026_StrConcat ) ( ( ( StrConcat_3027_StrConcat ) ( ( ( StrConcat_3028_StrConcat ) ( ( ( StrConcat_2994_StrConcat ) ( ( ( StrConcat_2995_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2857 ) .f_r ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2857 ) .f_g ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2857 ) .f_b ) ) ) ,  ( (  from_dash_charlike407 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   set_dash_bg3048 (    struct Color_203  c2883 ) {
    struct Color_203  dref2884 = (  c2883 );
    if ( dref2884.tag == Color_203_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg3049 ) ( ) );
    }
    else {
        if ( dref2884.tag == Color_203_Color8_t ) {
            ( (  set_dash_bg83050 ) ( ( dref2884 .stuff .Color_203_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2884.tag == Color_203_Color16_t ) {
                ( (  set_dash_bg163051 ) ( ( dref2884 .stuff .Color_203_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2884.tag == Color_203_Color256_t ) {
                    ( (  set_dash_bg2563052 ) ( ( dref2884 .stuff .Color_203_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2884.tag == Color_203_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb3053 ) ( ( dref2884 .stuff .Color_203_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_10_Unit );
}

static  uint32_t   i32_dash_u323054 (    int32_t  x675 ) {
    return ( (uint32_t ) (  x675 ) );
}

static  enum Unit_10   emit_dash_cell2987 (    struct RenderState_2922 *  rs3826 ,    struct Cell_838 *  c3828 ,    uint32_t  x3830 ,    uint32_t  y3832 ) {
    if ( ( ( !  eq2774 ( (  x3830 ) , ( ( * (  rs3826 ) ) .f_x ) ) ) || ( !  eq2774 ( (  y3832 ) , ( ( * (  rs3826 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2924 ) ( (  x3830 ) ,  (  y3832 ) ) );
        (*  rs3826 ) .f_x = (  x3830 );
        (*  rs3826 ) .f_y = (  y3832 );
    }
    struct Char_101  char3833 = ( ( * (  c3828 ) ) .f_c );
    struct Color_203  bg3834 = ( ( * (  c3828 ) ) .f_bg );
    if ( (  eq660 ( ( ( * (  c3828 ) ) .f_char_dash_width ) , (  op_dash_neg1138 ( (  from_dash_integral92 ( 1 ) ) ) ) ) ) ) {
        char3833 = ( (  from_dash_charlike407 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) );
        bg3834 = ( ( Color_203_Color8 ) ( ( Color8_204_Red8 ) ) );
    }
    if ( ( !  eq2976 ( ( ( * (  rs3826 ) ) .f_fg ) , ( ( * (  c3828 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2988 ) ( ( ( * (  c3828 ) ) .f_fg ) ) );
        (*  rs3826 ) .f_fg = ( ( * (  c3828 ) ) .f_fg );
    }
    if ( ( !  eq2976 ( ( ( * (  rs3826 ) ) .f_bg ) , (  bg3834 ) ) ) ) {
        ( (  set_dash_bg3048 ) ( (  bg3834 ) ) );
        (*  rs3826 ) .f_bg = (  bg3834 );
    }
    ( (  print_dash_str386 ) ( (  char3833 ) ) );
    uint32_t  char_dash_width3835 = ( (  i32_dash_u323054 ) ( ( (  max443 ) ( ( ( * (  c3828 ) ) .f_char_dash_width ) ,  (  from_dash_integral92 ( 1 ) ) ) ) ) );
    (*  rs3826 ) .f_x = (  op_dash_add236 ( ( ( * (  rs3826 ) ) .f_x ) , (  char_dash_width3835 ) ) );
    return ( Unit_10_Unit );
}

struct Zip_3057 {
    struct SliceIter_2959  f_left_dash_it;
    struct FromIter_564  f_right_dash_it;
};

struct env3058 {
    struct Slice_837  dest2281;
    ;
    ;
};

struct Tuple2_3060 {
    struct Cell_838  field0;
    int32_t  field1;
};

static struct Tuple2_3060 Tuple2_3060_Tuple2 (  struct Cell_838  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_3060 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion3059 {
    enum Unit_10  (*fun) (  struct env3058*  ,    struct Tuple2_3060  );
    struct env3058 env;
};

static  struct Zip_3057   into_dash_iter3062 (    struct Zip_3057  self936 ) {
    return (  self936 );
}

struct Maybe_3063 {
    enum {
        Maybe_3063_None_t,
        Maybe_3063_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_3060  field0;
        } Maybe_3063_Just_s;
    } stuff;
};

static struct Maybe_3063 Maybe_3063_Just (  struct Tuple2_3060  field0 ) {
    return ( struct Maybe_3063 ) { .tag = Maybe_3063_Just_t, .stuff = { .Maybe_3063_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_3063   next3064 (    struct Zip_3057 *  self939 ) {
    struct Zip_3057  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_1281  dref941 = ( (  next2967 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_1281_None_t ) {
            return ( (struct Maybe_3063) { .tag = Maybe_3063_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_1281_Just_t ) {
                struct Maybe_220  dref943 = ( (  next569 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_220_None_t ) {
                    return ( (struct Maybe_3063) { .tag = Maybe_3063_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_220_Just_t ) {
                        ( (  next2967 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next569 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_3063_Just ) ( ( ( Tuple2_3060_Tuple2 ) ( ( dref941 .stuff .Maybe_1281_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_220_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_10   for_dash_each3056 (    struct Zip_3057  iterable1099 ,   struct envunion3059  fun1101 ) {
    struct Zip_3057  temp3061 = ( (  into_dash_iter3062 ) ( (  iterable1099 ) ) );
    struct Zip_3057 *  it1102 = ( &temp3061 );
    while ( ( true ) ) {
        struct Maybe_3063  dref1103 = ( (  next3064 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_3063_None_t ) {
            return ( Unit_10_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_3063_Just_t ) {
                struct envunion3059  temp3065 = (  fun1101 );
                ( temp3065.fun ( &temp3065.env ,  ( dref1103 .stuff .Maybe_3063_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_10_Unit );
}

static  struct Zip_3057   zip3066 (    struct Slice_837  left947 ,    struct FromIter_564  right949 ) {
    struct SliceIter_2959  left_dash_it950 = ( (  into_dash_iter2973 ) ( (  left947 ) ) );
    struct FromIter_564  right_dash_it951 = ( (  into_dash_iter572 ) ( (  right949 ) ) );
    return ( (struct Zip_3057) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  enum Unit_10   lam3067 (   struct env3058* env ,    struct Tuple2_3060  dref2282 ) {
    return ( (  set1274 ) ( ( env->dest2281 ) ,  ( (  i32_dash_size349 ) ( ( dref2282 .field1 ) ) ) ,  ( dref2282 .field0 ) ) );
}

static  enum Unit_10   copy_dash_to3055 (    struct Slice_837  src2279 ,    struct Slice_837  dest2281 ) {
    if ( (  cmp371 ( ( (  src2279 ) .f_count ) , ( (  dest2281 ) .f_count ) ) == 2 ) ) {
        ( (  panic732 ) ( ( ( StrConcat_733_StrConcat ) ( ( ( StrConcat_374_StrConcat ) ( ( ( StrConcat_118_StrConcat ) ( ( ( StrConcat_119_StrConcat ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2279 ) .f_count ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2281 ) .f_count ) ) ) ,  ( (  from_dash_string269 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env3058 envinst3058 = {
        .dest2281 =  dest2281 ,
    };
    ( (  for_dash_each3056 ) ( ( (  zip3066 ) ( (  src2279 ) ,  ( (  from573 ) ( (  from_dash_integral92 ( 0 ) ) ) ) ) ) ,  ( (struct envunion3059){ .fun = (  enum Unit_10  (*) (  struct env3058*  ,    struct Tuple2_3060  ) )lam3067 , .env =  envinst3058 } ) ) );
    return ( Unit_10_Unit );
}

static  uint32_t   render_dash_screen2921 (    struct Screen_836 *  screen3838 ) {
    int32_t  w3839 = ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3838 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3840 = ( (  u32_dash_i322327 ) ( ( ( * ( ( * (  screen3838 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2922  temp2923 = ( (struct RenderState_2922) { .f_x = (  from_dash_integral230 ( 0 ) ) , .f_y = (  from_dash_integral230 ( 0 ) ) , .f_fg = ( (struct Color_203) { .tag = Color_203_ColorDefault_t } ) , .f_bg = ( (struct Color_203) { .tag = Color_203_ColorDefault_t } ) , .f_changes = (  from_dash_integral230 ( 0 ) ) } );
    struct RenderState_2922 *  rs3841 = ( &temp2923 );
    ( (  move_dash_cursor_dash_to2924 ) ( (  from_dash_integral230 ( 0 ) ) ,  (  from_dash_integral230 ( 0 ) ) ) );
    struct RangeIter_218  temp2954 =  into_dash_iter219 ( ( (  to228 ) ( (  from_dash_integral92 ( 0 ) ) ,  (  op_dash_sub229 ( (  h3840 ) , (  from_dash_integral92 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_220  __cond2955 =  next221 (&temp2954);
        if (  __cond2955 .tag == 0 ) {
            break;
        }
        int32_t  y3843 =  __cond2955 .stuff .Maybe_220_Just_s .field0;
        int32_t  x_dash_v3844 = (  from_dash_integral92 ( 0 ) );
        while ( (  cmp222 ( (  x_dash_v3844 ) , (  w3839 ) ) == 0 ) ) {
            size_t  i3845 = ( (  i32_dash_size349 ) ( (  op_dash_add224 ( (  op_dash_mul1866 ( (  y3843 ) , (  w3839 ) ) ) , (  x_dash_v3844 ) ) ) ) );
            struct Cell_838 *  cur3846 = ( (  get_dash_ptr1275 ) ( ( ( * (  screen3838 ) ) .f_current ) ,  (  i3845 ) ) );
            int32_t  char_dash_width3847 = ( (  max443 ) ( ( ( * (  cur3846 ) ) .f_char_dash_width ) ,  (  from_dash_integral92 ( 1 ) ) ) );
            struct Slice_837  curs3848 = ( (  subslice2956 ) ( ( ( * (  screen3838 ) ) .f_current ) ,  (  i3845 ) ,  (  op_dash_add425 ( (  i3845 ) , ( (  i32_dash_size349 ) ( (  char_dash_width3847 ) ) ) ) ) ) );
            struct Slice_837  prevs3849 = ( (  subslice2956 ) ( ( ( * (  screen3838 ) ) .f_previous ) ,  (  i3845 ) ,  (  op_dash_add425 ( (  i3845 ) , ( (  i32_dash_size349 ) ( (  char_dash_width3847 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3838 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2957 ) ( ( (  zip2972 ) ( (  curs3848 ) ,  (  prevs3849 ) ) ) ,  (  lam2974 ) ) ) ) ) {
                (*  rs3841 ) .f_changes = (  op_dash_add236 ( ( ( * (  rs3841 ) ) .f_changes ) , (  from_dash_integral230 ( 1 ) ) ) );
                ( (  emit_dash_cell2987 ) ( (  rs3841 ) ,  (  cur3846 ) ,  ( (  i32_dash_u323054 ) ( (  x_dash_v3844 ) ) ) ,  ( (  i32_dash_u323054 ) ( (  y3843 ) ) ) ) );
                ( (  copy_dash_to3055 ) ( (  curs3848 ) ,  (  prevs3849 ) ) );
            }
            x_dash_v3844 = (  op_dash_add224 ( (  x_dash_v3844 ) , (  char_dash_width3847 ) ) );
        }
    }
    (*  screen3838 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors1203 ) ( ) );
    ( (  flush_dash_stdout1206 ) ( ) );
    return ( ( * (  rs3841 ) ) .f_changes );
}

static  void *   cast_dash_ptr3074 (    struct timespec * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of3075 (    struct timespec *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct timespec *   zeroed3072 (  ) {
    struct timespec *  temp3073;
    struct timespec *  x642 = (  temp3073 );
    ( ( memset ) ( ( (  cast_dash_ptr3074 ) ( ( & (  x642 ) ) ) ) ,  (  from_dash_integral92 ( 0 ) ) ,  ( (  size_dash_of3075 ) ( (  x642 ) ) ) ) );
    return (  x642 );
}

static  struct timespec *   null_dash_ptr3071 (  ) {
    return ( (  zeroed3072 ) ( ) );
}

static  enum Unit_10   sync3068 (    struct Tui_146 *  tui3712 ) {
    if ( (  eq2774 ( ( ( * (  tui3712 ) ) .f_target_dash_fps ) , (  from_dash_integral230 ( 0 ) ) ) ) ) {
        return ( Unit_10_Unit );
    }
    int64_t  frame_dash_ns3713 = (  op_dash_div1460 ( (  from_dash_integral434 ( 1000000000 ) ) , ( (  size_dash_i64418 ) ( ( (  u32_dash_size1259 ) ( ( ( * (  tui3712 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp3069 = ( (  undefined1239 ) ( ) );
    struct timespec *  now3714 = ( &temp3069 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic1241 ) ( ) ) ,  (  now3714 ) ) );
    int64_t  elapsed_dash_ns3715 = (  op_dash_add435 ( (  op_dash_mul416 ( (  op_dash_sub1462 ( ( ( * (  now3714 ) ) .tv_sec ) , ( ( ( * (  tui3712 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral434 ( 1000000000 ) ) ) ) , (  op_dash_sub1462 ( ( ( * (  now3714 ) ) .tv_nsec ) , ( ( ( * (  tui3712 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3716 = (  op_dash_sub1462 ( (  frame_dash_ns3713 ) , (  elapsed_dash_ns3715 ) ) );
    if ( (  cmp1474 ( (  sleep_dash_ns3716 ) , (  from_dash_integral434 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp3070 = ( (struct timespec) { .tv_sec = (  from_dash_integral434 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3716 ) } );
        struct timespec *  ts3717 = ( &temp3070 );
        ( ( nanosleep ) ( (  ts3717 ) ,  ( (  null_dash_ptr3071 ) ( ) ) ) );
    }
    struct timespec  temp3076 = ( (  undefined1239 ) ( ) );
    struct timespec *  last_dash_sync3718 = ( &temp3076 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic1241 ) ( ) ) ,  (  last_dash_sync3718 ) ) );
    (*  tui3712 ) .f_last_dash_sync = ( * (  last_dash_sync3718 ) );
    (*  tui3712 ) .f_fps_dash_count = (  op_dash_add236 ( ( ( * (  tui3712 ) ) .f_fps_dash_count ) , (  from_dash_integral230 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3719 = (  op_dash_add435 ( (  op_dash_mul416 ( (  op_dash_sub1462 ( ( ( ( * (  tui3712 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3712 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral434 ( 1000 ) ) ) ) , (  op_dash_div1460 ( (  op_dash_sub1462 ( ( ( ( * (  tui3712 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3712 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral434 ( 1000000 ) ) ) ) ) );
    if ( (  cmp1474 ( (  fps_dash_elapsed_dash_ms3719 ) , (  from_dash_integral434 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3712 ) .f_actual_dash_fps = ( ( * (  tui3712 ) ) .f_fps_dash_count );
        (*  tui3712 ) .f_fps_dash_count = (  from_dash_integral230 ( 0 ) );
        (*  tui3712 ) .f_fps_dash_ts = ( ( * (  tui3712 ) ) .f_last_dash_sync );
    }
    return ( Unit_10_Unit );
}

static  void *   cast_dash_ptr3079 (    struct Cell_838 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_10   free3078 (    enum CAllocator_12  dref2373 ,    struct Slice_837  slice2375 ) {
    if (!(  dref2373 == CAllocator_12_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr3079 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   free_dash_screen3077 (    struct Screen_836 *  screen3817 ) {
    enum CAllocator_12  al3818 = ( ( * (  screen3817 ) ) .f_al );
    ( (  free3078 ) ( (  al3818 ) ,  ( ( * (  screen3817 ) ) .f_current ) ) );
    ( (  free3078 ) ( (  al3818 ) ,  ( ( * (  screen3817 ) ) .f_previous ) ) );
    return ( Unit_10_Unit );
}

struct envunion3081 {
    enum Unit_10  (*fun) (  struct env142*  ,    struct Tui_146 *  );
    struct env142 env;
};

static  enum Unit_10   disable_dash_mouse3083 (  ) {
    ( (  print_dash_str379 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   disable_dash_raw_dash_mode3084 (    struct Termios_136 *  orig_dash_termios3690 ) {
    if ( (  eq660 ( ( ( tcsetattr ) ( ( (  stdin_dash_fileno1136 ) ( ) ) ,  ( (  tcsa_dash_flush1201 ) ( ) ) ,  ( (  cast_dash_ptr1137 ) ( (  orig_dash_termios3690 ) ) ) ) ) , (  op_dash_neg1138 ( (  from_dash_integral92 ( 1 ) ) ) ) ) ) ) {
        ( (  panic1139 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"tcsetattr" ) ,  ( 9 ) ) ) ) );
    }
    return ( Unit_10_Unit );
}

static  enum Unit_10   show_dash_cursor3085 (  ) {
    ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   reset_dash_cursor_dash_position3086 (  ) {
    ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   disable_dash_alternative_dash_screen_dash_buffer3087 (  ) {
    ( (  print1131 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"\x1b[?1049l" ) ,  ( 8 ) ) ) ) );
    return ( Unit_10_Unit );
}

static  enum Unit_10   deinit3082 (   struct env142* env ,    struct Tui_146 *  tui3722 ) {
    ( (  disable_dash_mouse3083 ) ( ) );
    ( (  disable_dash_raw_dash_mode3084 ) ( ( & ( ( * ( env->tui_dash_global_dash_state3703 ) ) .f_orig_dash_termios ) ) ) );
    ( (  show_dash_cursor3085 ) ( ) );
    ( (  reset_dash_colors1203 ) ( ) );
    ( (  clear_dash_screen1204 ) ( ) );
    ( (  reset_dash_cursor_dash_position3086 ) ( ) );
    ( (  disable_dash_alternative_dash_screen_dash_buffer3087 ) ( ) );
    ( (  flush_dash_stdout1206 ) ( ) );
    return ( Unit_10_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2447 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2448 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2449 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .growth_dash_factor2448 =  growth_dash_factor2448 ,
        .starting_dash_size2447 =  starting_dash_size2447 ,
    };
    struct env2 envinst2 = {
        .growth_dash_factor2448 =  growth_dash_factor2448 ,
        .starting_dash_size2447 =  starting_dash_size2447 ,
    };
    struct env3 envinst3 = {
        .growth_dash_factor2448 =  growth_dash_factor2448 ,
        .starting_dash_size2447 =  starting_dash_size2447 ,
    };
    struct env4 envinst4 = {
        .growth_dash_factor2448 =  growth_dash_factor2448 ,
        .starting_dash_size2447 =  starting_dash_size2447 ,
    };
    struct env5 envinst5 = {
        .growth_dash_factor2448 =  growth_dash_factor2448 ,
        .starting_dash_size2447 =  starting_dash_size2447 ,
    };
    struct env6 envinst6 = {
        .growth_dash_factor2448 =  growth_dash_factor2448 ,
        .starting_dash_size2447 =  starting_dash_size2447 ,
    };
    struct env7 envinst7 = {
        .growth_dash_factor2448 =  growth_dash_factor2448 ,
        .starting_dash_size2447 =  starting_dash_size2447 ,
    };
    struct env8 envinst8 = {
        .envinst1 = envinst1 ,
    };
    struct env14 envinst14 = {
        .envinst2 = envinst2 ,
    };
    struct env19 envinst19 = {
        .envinst3 = envinst3 ,
    };
    struct env26 envinst26 = {
        .envinst4 = envinst4 ,
    };
    struct env35 envinst35 = {
        .envinst5 = envinst5 ,
    };
    struct env41 envinst41 = {
        .envinst6 = envinst6 ,
    };
    struct env48 envinst48 = {
        .envinst7 = envinst7 ,
    };
    struct env50 envinst50 = {
        .envinst26 = envinst26 ,
        .envinst4 = envinst4 ,
    };
    struct env53 envinst53 = {
        .shrink_dash_factor2449 =  shrink_dash_factor2449 ,
    };
    struct env54 envinst54 = {
        .shrink_dash_factor2449 =  shrink_dash_factor2449 ,
    };
    struct env55 envinst55 = {
        .envinst53 = envinst53 ,
    };
    struct env57 envinst57 = {
        .envinst55 = envinst55 ,
    };
    struct env59 envinst59 = {
        .envinst8 = envinst8 ,
    };
    struct env61 envinst61 = {
        .envinst19 = envinst19 ,
    };
    struct env63 envinst63 = {
        .envinst26 = envinst26 ,
    };
    struct env65 envinst65 = {
        .envinst61 = envinst61 ,
    };
    struct env80 envinst80 = {
        .envinst63 = envinst63 ,
    };
    struct env83 envinst83 = {
        .envinst59 = envinst59 ,
    };
    struct env85 envinst85 = {
        .envinst59 = envinst59 ,
        .envinst8 = envinst8 ,
    };
    struct env71 envinst71 = {
        .envinst8 = envinst8 ,
        .envinst59 = envinst59 ,
    };
    struct env86 envinst86 = {
        .envinst8 = envinst8 ,
        .envinst59 = envinst59 ,
    };
    struct env70 envinst70 = {
        .envinst71 = envinst71 ,
    };
    struct env87 envinst87 = {
        .envinst86 = envinst86 ,
    };
    struct env89 envinst89 = {
        .envinst87 = envinst87 ,
    };
    ( ( setlocale ) ( ( (  lc_dash_ctype91 ) ( ) ) ,  ( (  from_dash_string93 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
    struct env94 envinst94 = {
        .envinst59 = envinst59 ,
    };
    struct env96 envinst96 = {
        .envinst94 = envinst94 ,
    };
    struct env99 envinst99 = {
        .envinst96 = envinst96 ,
    };
    struct env102 envinst102 = {
        .envinst96 = envinst96 ,
    };
    struct env103 envinst103 = {
        .envinst96 = envinst96 ,
    };
    struct env104 envinst104 = {
        .envinst96 = envinst96 ,
    };
    struct env105 envinst105 = {
        .envinst96 = envinst96 ,
    };
    struct env106 envinst106 = {
        .envinst105 = envinst105 ,
    };
    struct env109 envinst109 = {
        .envinst57 = envinst57 ,
    };
    struct env112 envinst112 = {
        .envinst96 = envinst96 ,
        .envinst99 = envinst99 ,
    };
    struct env116 envinst116 = {
        .envinst96 = envinst96 ,
        .envinst102 = envinst102 ,
    };
    struct env120 envinst120 = {
        .envinst96 = envinst96 ,
        .envinst103 = envinst103 ,
    };
    struct env122 envinst122 = {
        .envinst96 = envinst96 ,
        .envinst104 = envinst104 ,
    };
    struct env126 envinst126 = {
        .envinst89 = envinst89 ,
    };
    struct env128 envinst128 = {
        .envinst65 = envinst65 ,
        .envinst70 = envinst70 ,
    };
    struct env130 envinst130 = {
        .envinst128 = envinst128 ,
        .envinst126 = envinst126 ,
    };
    struct anon_135  temp138 = ( (struct anon_135) { .f_orig_dash_termios = ( (  undefined139 ) ( ) ) , .f_should_dash_resize = ( false ) } );
    struct anon_135 *  tui_dash_global_dash_state3703 = ( &temp138 );
    struct env141 envinst141 = {
        .tui_dash_global_dash_state3703 =  tui_dash_global_dash_state3703 ,
    };
    struct env142 envinst142 = {
        .tui_dash_global_dash_state3703 =  tui_dash_global_dash_state3703 ,
    };
    struct env143 envinst143 = {
        .tui_dash_global_dash_state3703 =  tui_dash_global_dash_state3703 ,
    };
    struct env144 envinst144 = {
        .envinst143 = envinst143 ,
    };
    struct env148 envinst148 = {
        .envinst143 = envinst143 ,
    };
    struct env150 envinst150 = {
        .envinst48 = envinst48 ,
    };
    struct env152 envinst152 = {
        .envinst48 = envinst48 ,
    };
    struct env154 envinst154 = {
        .envinst48 = envinst48 ,
    };
    struct env156 envinst156 = {
        .envinst48 = envinst48 ,
    };
    struct env158 envinst158 = {
        .envinst83 = envinst83 ,
        .envinst50 = envinst50 ,
        .envinst59 = envinst59 ,
    };
    struct env162 envinst162 = {
        .envinst158 = envinst158 ,
        .envinst26 = envinst26 ,
        .envinst59 = envinst59 ,
        .envinst53 = envinst53 ,
        .envinst54 = envinst54 ,
    };
    struct env172 envinst172 = {
        .envinst106 = envinst106 ,
    };
    struct env174 envinst174 = {
        .envinst80 = envinst80 ,
    };
    struct env176 envinst176 = {
        .envinst174 = envinst174 ,
        .envinst162 = envinst162 ,
    };
    struct env179 envinst179 = {
        .envinst162 = envinst162 ,
    };
    struct env181 envinst181 = {
        .envinst162 = envinst162 ,
    };
    struct env183 envinst183 = {
        .envinst179 = envinst179 ,
    };
    struct env185 envinst185 = {
        .envinst181 = envinst181 ,
    };
    struct env187 envinst187 = {
        .envinst59 = envinst59 ,
    };
    struct env189 envinst189 = {
        .envinst187 = envinst187 ,
        .envinst35 = envinst35 ,
        .envinst41 = envinst41 ,
        .envinst181 = envinst181 ,
    };
    struct env194 envinst194 = {
        .envinst41 = envinst41 ,
    };
    struct env196 envinst196 = {
        .envinst156 = envinst156 ,
        .envinst152 = envinst152 ,
        .envinst154 = envinst154 ,
        .envinst150 = envinst150 ,
    };
    struct env201 envinst201 = {
        .envinst196 = envinst196 ,
    };
    struct Color_203  camel4410 = ( (  rgb207 ) ( (  from_dash_integral230 ( 11766360 ) ) ) );
    struct Color_203  olive4411 = ( (  rgb207 ) ( (  from_dash_integral230 ( 7303983 ) ) ) );
    struct Color_203  tea_dash_green4412 = ( (  rgb207 ) ( (  from_dash_integral230 ( 14875064 ) ) ) );
    struct Color_203  chocolate4413 = ( (  rgb207 ) ( (  from_dash_integral230 ( 13721620 ) ) ) );
    struct Color_203  muted_dash_olive4414 = ( (  rgb207 ) ( (  from_dash_integral230 ( 12308106 ) ) ) );
    struct Color_203  palm_dash_leaf4415 = ( (  rgb207 ) ( (  from_dash_integral230 ( 9674588 ) ) ) );
    struct Color_203  lime_dash_green4416 = ( (  rgb207 ) ( (  from_dash_integral230 ( 3263232 ) ) ) );
    struct Color_203  forest_dash_green4417 = ( (  rgb207 ) ( (  from_dash_integral230 ( 1153058 ) ) ) );
    struct Color_203  green4418 = ( (  rgb207 ) ( (  from_dash_integral230 ( 2781729 ) ) ) );
    struct Color_203  dark_dash_spruce4419 = ( (  rgb207 ) ( (  from_dash_integral230 ( 1983518 ) ) ) );
    struct Color_203  evergreen4420 = ( (  rgb207 ) ( (  from_dash_integral230 ( 1386004 ) ) ) );
    struct Array_244  temp248 = ( (struct Array_244) { ._arr = { ( (  hlt249 ) ( ( HighlightType_34_Number ) ,  (  green4418 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_String ) ,  (  camel4410 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Comment ) ,  (  dark_dash_spruce4419 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Ident1 ) ,  (  lime_dash_green4416 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Ident2 ) ,  (  muted_dash_olive4414 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Ident3 ) ,  (  tea_dash_green4412 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Ident4 ) ,  (  palm_dash_leaf4415 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Keyword1 ) ,  (  tea_dash_green4412 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Keyword2 ) ,  (  chocolate4413 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Special1 ) ,  (  olive4411 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Special2 ) ,  (  forest_dash_green4417 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Special3 ) ,  (  camel4410 ) ) ) , ( (struct HighlightColors_240) { .f_type = ( HighlightType_34_Invalid ) , .f_fg = (  evergreen4420 ) , .f_bg = ( ( Maybe_241_Just ) ( ( ( Color_203_Color8 ) ( ( Color8_204_Red8 ) ) ) ) ) } ) } } );
    struct Array_244  temp246 = ( (  from_dash_listlike247 ) ( ( &temp248 ) ) );
    struct Theme_237  temp242 = ( (struct Theme_237) { .f_default = ( (struct Colors_238) { .f_bg = (  evergreen4420 ) , .f_fg = (  lime_dash_green4416 ) } ) , .f_cursor = ( (struct Colors_238) { .f_bg = (  lime_dash_green4416 ) , .f_fg = (  evergreen4420 ) } ) , .f_selection = ( (struct Colors_238) { .f_bg = (  forest_dash_green4417 ) , .f_fg = (  evergreen4420 ) } ) , .f_line_dash_num = ( (struct Colors_238) { .f_bg = (  evergreen4420 ) , .f_fg = (  forest_dash_green4417 ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_238) { .f_bg = (  evergreen4420 ) , .f_fg = (  tea_dash_green4412 ) } ) , .f_overlay = ( (struct Colors_238) { .f_bg = (  dark_dash_spruce4419 ) , .f_fg = (  lime_dash_green4416 ) } ) , .f_highlights = ( (  as_dash_slice243 ) ( ( &temp246 ) ) ) } );
    struct Theme_237 *  goblin_dash_ultra4421 = ( &temp242 );
    struct Color_203  gb_dash_fg4422 = ( (  rgb207 ) ( (  from_dash_integral230 ( 15457202 ) ) ) );
    struct Color_203  gb_dash_bg4423 = ( (  rgb207 ) ( (  from_dash_integral230 ( 2631720 ) ) ) );
    struct Color_203  gb_dash_cfg4424 = ( (  rgb207 ) ( (  from_dash_integral230 ( 3946550 ) ) ) );
    struct Color_203  gb_dash_cbg4425 = ( (  rgb207 ) ( (  from_dash_integral230 ( 12430995 ) ) ) );
    struct Color_203  gb_dash_sfg4426 = (  gb_dash_fg4422 );
    struct Color_203  gb_dash_sbg4427 = ( (  rgb207 ) ( (  from_dash_integral230 ( 5261637 ) ) ) );
    struct Color_203  gb_dash_lnfg4428 = ( (  rgb207 ) ( (  from_dash_integral230 ( 6708308 ) ) ) );
    struct Color_203  gb_dash_lnhlfg4429 = ( (  rgb207 ) ( (  from_dash_integral230 ( 16432431 ) ) ) );
    struct Color_203  gb_dash_ofg4430 = (  gb_dash_fg4422 );
    struct Color_203  gb_dash_obg4431 = (  gb_dash_cfg4424 );
    struct Color_203  gb_dash_gray4432 = ( (  rgb207 ) ( (  from_dash_integral230 ( 9601908 ) ) ) );
    struct Color_203  gb_dash_green14433 = ( (  rgb207 ) ( (  from_dash_integral230 ( 12106534 ) ) ) );
    struct Color_203  gb_dash_purple04434 = ( (  rgb207 ) ( (  from_dash_integral230 ( 11625094 ) ) ) );
    struct Color_203  gb_dash_purple14435 = ( (  rgb207 ) ( (  from_dash_integral230 ( 13862555 ) ) ) );
    struct Color_203  gb_dash_yellow14436 = ( (  rgb207 ) ( (  from_dash_integral230 ( 16432431 ) ) ) );
    struct Color_203  gb_dash_red14437 = ( (  rgb207 ) ( (  from_dash_integral230 ( 16468276 ) ) ) );
    struct Color_203  gb_dash_aqua14438 = ( (  rgb207 ) ( (  from_dash_integral230 ( 9355388 ) ) ) );
    struct Array_244  temp252 = ( (struct Array_244) { ._arr = { ( (  hlt249 ) ( ( HighlightType_34_Number ) ,  (  gb_dash_purple14435 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_String ) ,  (  gb_dash_green14433 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Comment ) ,  (  gb_dash_gray4432 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Ident1 ) ,  (  gb_dash_fg4422 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Ident2 ) ,  (  gb_dash_yellow14436 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Ident3 ) ,  (  gb_dash_purple04434 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Ident4 ) ,  (  gb_dash_green14433 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Keyword1 ) ,  (  gb_dash_aqua14438 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Keyword2 ) ,  (  gb_dash_red14437 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Special1 ) ,  (  gb_dash_purple14435 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Special2 ) ,  (  gb_dash_purple14435 ) ) ) , ( (  hlt249 ) ( ( HighlightType_34_Special3 ) ,  (  gb_dash_aqua14438 ) ) ) , ( (struct HighlightColors_240) { .f_type = ( HighlightType_34_Invalid ) , .f_fg = (  evergreen4420 ) , .f_bg = ( ( Maybe_241_Just ) ( ( ( Color_203_Color8 ) ( ( Color8_204_Red8 ) ) ) ) ) } ) } } );
    struct Array_244  temp251 = ( (  from_dash_listlike247 ) ( ( &temp252 ) ) );
    struct Theme_237  temp250 = ( (struct Theme_237) { .f_default = ( (struct Colors_238) { .f_bg = (  gb_dash_bg4423 ) , .f_fg = (  gb_dash_fg4422 ) } ) , .f_cursor = ( (struct Colors_238) { .f_bg = (  gb_dash_cbg4425 ) , .f_fg = (  gb_dash_cfg4424 ) } ) , .f_selection = ( (struct Colors_238) { .f_bg = (  gb_dash_sbg4427 ) , .f_fg = (  gb_dash_sfg4426 ) } ) , .f_line_dash_num = ( (struct Colors_238) { .f_bg = (  gb_dash_bg4423 ) , .f_fg = (  gb_dash_lnfg4428 ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_238) { .f_bg = (  gb_dash_bg4423 ) , .f_fg = (  gb_dash_lnhlfg4429 ) } ) , .f_overlay = ( (struct Colors_238) { .f_bg = (  gb_dash_obg4431 ) , .f_fg = (  gb_dash_ofg4430 ) } ) , .f_highlights = ( (  as_dash_slice243 ) ( ( &temp251 ) ) ) } );
    struct Theme_237 *  gruvbox4439 = ( &temp250 );
    struct Theme_237  temp253 = ( (struct Theme_237) { .f_default = ( (struct Colors_238) { .f_bg = ( ( Color_203_Color8 ) ( ( Color8_204_Black8 ) ) ) , .f_fg = ( ( Color_203_Color8 ) ( ( Color8_204_White8 ) ) ) } ) , .f_cursor = ( (struct Colors_238) { .f_bg = ( ( Color_203_Color8 ) ( ( Color8_204_White8 ) ) ) , .f_fg = ( ( Color_203_Color8 ) ( ( Color8_204_Black8 ) ) ) } ) , .f_selection = ( (struct Colors_238) { .f_bg = ( ( Color_203_Color16 ) ( ( Color16_205_BrightWhite16 ) ) ) , .f_fg = ( ( Color_203_Color16 ) ( ( Color16_205_Black16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_238) { .f_bg = ( ( Color_203_Color8 ) ( ( Color8_204_Black8 ) ) ) , .f_fg = ( ( Color_203_Color8 ) ( ( Color8_204_White8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_238) { .f_bg = ( ( Color_203_Color8 ) ( ( Color8_204_White8 ) ) ) , .f_fg = ( ( Color_203_Color8 ) ( ( Color8_204_Black8 ) ) ) } ) , .f_overlay = ( (struct Colors_238) { .f_bg = ( ( Color_203_Color8 ) ( ( Color8_204_White8 ) ) ) , .f_fg = ( ( Color_203_Color8 ) ( ( Color8_204_Black8 ) ) ) } ) , .f_highlights = ( (  empty254 ) ( ) ) } );
    struct Theme_237 *  dark_dash_theme4440 = ( &temp253 );
    struct Theme_237  temp260 = ( (struct Theme_237) { .f_default = ( (struct Colors_238) { .f_bg = ( ( Color_203_Color16 ) ( ( Color16_205_BrightWhite16 ) ) ) , .f_fg = ( ( Color_203_Color8 ) ( ( Color8_204_Black8 ) ) ) } ) , .f_cursor = ( (struct Colors_238) { .f_bg = ( ( Color_203_Color8 ) ( ( Color8_204_Black8 ) ) ) , .f_fg = ( ( Color_203_Color16 ) ( ( Color16_205_BrightWhite16 ) ) ) } ) , .f_selection = ( (struct Colors_238) { .f_bg = ( ( Color_203_Color16 ) ( ( Color16_205_White16 ) ) ) , .f_fg = ( ( Color_203_Color16 ) ( ( Color16_205_BrightWhite16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_238) { .f_bg = ( ( Color_203_Color16 ) ( ( Color16_205_BrightWhite16 ) ) ) , .f_fg = ( ( Color_203_Color8 ) ( ( Color8_204_Black8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_238) { .f_bg = ( ( Color_203_Color8 ) ( ( Color8_204_Black8 ) ) ) , .f_fg = ( ( Color_203_Color16 ) ( ( Color16_205_BrightWhite16 ) ) ) } ) , .f_overlay = ( (struct Colors_238) { .f_bg = ( ( Color_203_Color8 ) ( ( Color8_204_Black8 ) ) ) , .f_fg = ( ( Color_203_Color16 ) ( ( Color16_205_BrightWhite16 ) ) ) } ) , .f_highlights = ( (  empty254 ) ( ) ) } );
    struct Theme_237 *  light_dash_theme4441 = ( &temp260 );
    struct Theme_237 *  default4442 = (  gruvbox4439 );
    struct Array_264  temp268 = ( (struct Array_264) { ._arr = { ( ( Tuple2_262_Tuple2 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"default" ) ,  ( 7 ) ) ) ,  (  default4442 ) ) ) , ( ( Tuple2_262_Tuple2 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"goblin-ultra" ) ,  ( 12 ) ) ) ,  (  goblin_dash_ultra4421 ) ) ) , ( ( Tuple2_262_Tuple2 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"gruvbox" ) ,  ( 7 ) ) ) ,  (  gruvbox4439 ) ) ) , ( ( Tuple2_262_Tuple2 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"dark-mono" ) ,  ( 9 ) ) ) ,  (  dark_dash_theme4440 ) ) ) , ( ( Tuple2_262_Tuple2 ) ( ( (  from_dash_string269 ) ( ( (uint8_t*)"light-mono" ) ,  ( 10 ) ) ) ,  (  light_dash_theme4441 ) ) ) } } );
    struct Array_264  temp266 = ( (  from_dash_listlike267 ) ( ( &temp268 ) ) );
    struct Slice_261  all_dash_themes4443 = ( (  as_dash_slice263 ) ( ( &temp266 ) ) );
    struct env270 envinst270 = {
        .all_dash_themes4443 =  all_dash_themes4443 ,
    };
    struct env271 envinst271 = {
        .envinst201 = envinst201 ,
    };
    struct env274 envinst274 = {
        .envinst189 = envinst189 ,
    };
    struct env277 envinst277 = {
        .envinst189 = envinst189 ,
    };
    struct env279 envinst279 = {
        .envinst183 = envinst183 ,
    };
    struct env281 envinst281 = {
        .envinst185 = envinst185 ,
    };
    struct env283 envinst283 = {
        .envinst189 = envinst189 ,
    };
    struct env285 envinst285 = {
        .envinst189 = envinst189 ,
    };
    struct env287 envinst287 = {
        .envinst285 = envinst285 ,
        .envinst194 = envinst194 ,
    };
    struct env293 envinst293 = {
        .envinst194 = envinst194 ,
        .envinst189 = envinst189 ,
    };
    struct env296 envinst296 = {
        .envinst285 = envinst285 ,
    };
    struct env298 envinst298 = {
        .envinst274 = envinst274 ,
        .envinst283 = envinst283 ,
        .envinst194 = envinst194 ,
    };
    struct env303 envinst303 = {
        .envinst130 = envinst130 ,
        .envinst14 = envinst14 ,
        .envinst85 = envinst85 ,
    };
    struct env309 envinst309 = {
        .envinst303 = envinst303 ,
    };
    struct env311 envinst311 = {
        .envinst96 = envinst96 ,
        .envinst109 = envinst109 ,
    };
    struct env314 envinst314 = {
        .envinst187 = envinst187 ,
    };
    struct env316 envinst316 = {
        .envinst112 = envinst112 ,
    };
    struct env318 envinst318 = {
        .envinst116 = envinst116 ,
    };
    struct env320 envinst320 = {
        .envinst120 = envinst120 ,
    };
    struct env322 envinst322 = {
        .envinst122 = envinst122 ,
    };
    struct env324 envinst324 = {
        .envinst270 = envinst270 ,
    };
    struct env327 envinst327 = {
        .envinst320 = envinst320 ,
        .envinst322 = envinst322 ,
        .envinst318 = envinst318 ,
        .envinst172 = envinst172 ,
    };
    struct Array_347  temp350 = ( (struct Array_347) { ._arr = { ( (struct MenuItem_333) { .f_key = ( (  from_dash_charlike351 ) ( ( (uint8_t*)"l" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string269 ) ( ( (uint8_t*)"move to end of line" ) ,  ( 19 ) ) ) , .f_action = ( (struct envunion339){ .fun = (  enum Unit_10  (*) (  struct env334*  ,    struct Editor_329 *  ) )lam354 } ) } ) , ( (struct MenuItem_333) { .f_key = ( (  from_dash_charlike351 ) ( ( (uint8_t*)"h" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string269 ) ( ( (uint8_t*)"move to beginning of line" ) ,  ( 25 ) ) ) , .f_action = ( (struct envunion339){ .fun = (  enum Unit_10  (*) (  struct env334*  ,    struct Editor_329 *  ) )lam467 } ) } ) , ( (struct MenuItem_333) { .f_key = ( (  from_dash_charlike351 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string269 ) ( ( (uint8_t*)"move up yah" ) ,  ( 11 ) ) ) , .f_action = ( (struct envunion339){ .fun = (  enum Unit_10  (*) (  struct env334*  ,    struct Editor_329 *  ) )lam487 } ) } ) , ( (struct MenuItem_333) { .f_key = ( (  from_dash_charlike351 ) ( ( (uint8_t*)"e" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string269 ) ( ( (uint8_t*)"move dauwn" ) ,  ( 10 ) ) ) , .f_action = ( (struct envunion339){ .fun = (  enum Unit_10  (*) (  struct env334*  ,    struct Editor_329 *  ) )lam488 } ) } ) } } );
    struct Menu_331  goto_dash_menu5103 = ( ( (struct Menu_331) { .f_name = ( (  from_dash_string269 ) ( ( (uint8_t*)"goto" ) ,  ( 4 ) ) ) , .f_items = ( (  from_dash_listlike346 ) ( ( &temp350 ) ) ) } ) );
    struct env334 envinst334 = {
        .envinst309 = envinst309 ,
    };
    struct Array_492  temp494 = ( (struct Array_492) { ._arr = { ( (struct MenuItem_333) { .f_key = ( (  from_dash_charlike351 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string269 ) ( ( (uint8_t*)"open dir bruh" ) ,  ( 13 ) ) ) , .f_action = ( (struct envunion339){ .fun = (  enum Unit_10  (*) (  struct env334*  ,    struct Editor_329 *  ) )lam495 } ) } ) , ( (struct MenuItem_333) { .f_key = ( (  from_dash_charlike351 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string269 ) ( ( (uint8_t*)"open dir at cwd" ) ,  ( 15 ) ) ) , .f_action = ( (struct envunion339){ .fun = (  enum Unit_10  (*) (  struct env334*  ,    struct Editor_329 *  ) )lam496 , .env =  envinst334 } ) } ) , ( (struct MenuItem_333) { .f_key = ( (  from_dash_charlike351 ) ( ( (uint8_t*)"y" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string269 ) ( ( (uint8_t*)"copy to system clipboard" ) ,  ( 24 ) ) ) , .f_action = ( (struct envunion339){ .fun = (  enum Unit_10  (*) (  struct env334*  ,    struct Editor_329 *  ) )lam808 } ) } ) } } );
    struct Menu_331  space_dash_menu5110 = ( ( (struct Menu_331) { .f_name = ( (  from_dash_string269 ) ( ( (uint8_t*)"space" ) ,  ( 5 ) ) ) , .f_items = ( (  from_dash_listlike491 ) ( ( &temp494 ) ) ) } ) );
    struct env809 envinst809 = {
        .envinst274 = envinst274 ,
        .envinst287 = envinst287 ,
        .envinst318 = envinst318 ,
        .envinst279 = envinst279 ,
        .goto_dash_menu5103 =  goto_dash_menu5103 ,
        .envinst281 = envinst281 ,
        .envinst296 = envinst296 ,
        .space_dash_menu5110 =  space_dash_menu5110 ,
        .envinst298 = envinst298 ,
        .envinst283 = envinst283 ,
        .envinst293 = envinst293 ,
        .envinst314 = envinst314 ,
    };
    struct env820 envinst820 = {
        .envinst296 = envinst296 ,
        .envinst324 = envinst324 ,
        .envinst274 = envinst274 ,
        .envinst96 = envinst96 ,
        .envinst109 = envinst109 ,
        .envinst277 = envinst277 ,
        .envinst316 = envinst316 ,
        .envinst809 = envinst809 ,
        .envinst327 = envinst327 ,
        .envinst311 = envinst311 ,
    };
    struct env834 envinst834 = {
        .envinst271 = envinst271 ,
    };
    enum CAllocator_12  al5200 = ( (  idc840 ) ( ) );
    struct TextBuf_164  temp842;
    struct TextBuf_164  temp841 = (  temp842 );
    struct TextBuf_164 *  tb5201 = ( &temp841 );
    struct Slice_843  args5204 = ( (  get844 ) ( ) );
    struct Maybe_125  initial_dash_message5205 = ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    if ( (  cmp371 ( ( (  args5204 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct StrView_18  fname5206 = ( (  from_dash_const_dash_str847 ) ( (  elem_dash_get854 ( (  args5204 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) );
        struct envunion863  temp862 = ( (struct envunion863){ .fun = (  struct Maybe_861  (*) (  struct env176*  ,    enum CAllocator_12  ,    struct StrView_18  ) )mk_dash_from_dash_file864 , .env =  envinst176 } );
        struct Maybe_861  dref5207 = ( temp862.fun ( &temp862.env ,  (  al5200 ) ,  (  fname5206 ) ) );
        if ( dref5207.tag == Maybe_861_None_t ) {
            struct envunion1120  temp1119 = ( (struct envunion1120){ .fun = (  struct TextBuf_164  (*) (  struct env174*  ,    enum CAllocator_12  ) )mk867 , .env =  envinst174 } );
            (*  tb5201 ) = ( temp1119.fun ( &temp1119.env ,  (  al5200 ) ) );
            (*  tb5201 ) .f_filename = ( ( Maybe_125_Just ) ( ( (  clone_dash_0730 ) ( (  fname5206 ) ,  (  al5200 ) ) ) ) );
        }
        else {
            if ( dref5207.tag == Maybe_861_Just_t ) {
                (*  tb5201 ) = ( dref5207 .stuff .Maybe_861_Just_s .field0 );
            }
        }
    } else {
        struct envunion1122  temp1121 = ( (struct envunion1122){ .fun = (  struct TextBuf_164  (*) (  struct env174*  ,    enum CAllocator_12  ) )mk867 , .env =  envinst174 } );
        (*  tb5201 ) = ( temp1121.fun ( &temp1121.env ,  (  al5200 ) ) );
    }
    struct Config_341  temp1123 = ( (struct Config_341) { .f_theme = (  default4442 ) , .f_display_dash_line_dash_numbers = ( true ) , .f_relative_dash_line_dash_numbers = ( false ) } );
    struct Config_341 *  cfg5209 = ( &temp1123 );
    struct Editor_329  temp1124 = ( (struct Editor_329) { .f_running = ( true ) , .f_al = (  al5200 ) , .f_pane = ( (  mk1125 ) ( (  al5200 ) ,  (  tb5201 ) ) ) , .f_clipboard = ( (struct Maybe_125) { .tag = Maybe_125_None_t } ) , .f_search_dash_term = ( (struct Maybe_125) { .tag = Maybe_125_None_t } ) , .f_mode = ( (struct EditorMode_330) { .tag = EditorMode_330_Normal_t } ) , .f_next_dash_mode = ( (struct Maybe_340) { .tag = Maybe_340_None_t } ) , .f_msg = (  initial_dash_message5205 ) , .f_cfg = (  cfg5209 ) , .f_og_dash_theme = (  default4442 ) } );
    struct Editor_329 *  ed5210 = ( &temp1124 );
    struct envunion1128  temp1127 = ( (struct envunion1128){ .fun = (  struct Tui_146  (*) (  struct env141*  ) )mk1129 , .env =  envinst141 } );
    struct Tui_146  temp1126 = ( temp1127.fun ( &temp1127.env ) );
    struct Tui_146 *  tui5211 = ( &temp1126 );
    struct Screen_836  temp1252 = ( (  mk_dash_screen1253 ) ( (  tui5211 ) ,  (  al5200 ) ) );
    struct Screen_836 *  screen5212 = ( &temp1252 );
    uint32_t  last_dash_redraw_dash_changes5213 = (  from_dash_integral230 ( 0 ) );
    while ( ( ( * (  ed5210 ) ) .f_running ) ) {
        struct env1297 envinst1297 = {
            .tui5211 =  tui5211 ,
            .envinst144 = envinst144 ,
        };
        struct FunIter_1296  temp1295 =  into_dash_iter1304 ( ( (  from_dash_function1305 ) ( ( (struct envunion1303){ .fun = (  struct Maybe_1299  (*) (  struct env1297*  ) )lam1306 , .env =  envinst1297 } ) ) ) );
        while (true) {
            struct Maybe_1299  __cond1487 =  next1488 (&temp1295);
            if (  __cond1487 .tag == 0 ) {
                break;
            }
            struct InputEvent_1300  ev5215 =  __cond1487 .stuff .Maybe_1299_Just_s .field0;
            struct InputEvent_1300  dref5216 = (  ev5215 );
            if ( dref5216.tag == InputEvent_1300_Key_t ) {
                ( (  reset_dash_msg1490 ) ( (  ed5210 ) ) );
                struct envunion1497  temp1496 = ( (struct envunion1497){ .fun = (  enum Unit_10  (*) (  struct env820*  ,    struct Editor_329 *  ,    struct Key_829  ) )handle_dash_key1498 , .env =  envinst820 } );
                ( temp1496.fun ( &temp1496.env ,  (  ed5210 ) ,  ( dref5216 .stuff .InputEvent_1300_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion2310  temp2309 = ( (struct envunion2310){ .fun = (  bool  (*) (  struct env148*  ,    struct Screen_836 *  ) )resize_dash_screen_dash_if_dash_needed2311 , .env =  envinst148 } );
        ( temp2309.fun ( &temp2309.env ,  (  screen5212 ) ) );
        if ( ( (  should_dash_redraw2313 ) ( (  tui5211 ) ) ) ) {
            (*  screen5212 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen2314 ) ( (  screen5212 ) ) );
            struct Theme_237 *  theme5218 = ( ( * ( ( * (  ed5210 ) ) .f_cfg ) ) .f_theme );
            ( (  set_dash_screen_dash_fg2323 ) ( (  screen5212 ) ,  ( ( ( * (  theme5218 ) ) .f_default ) .f_fg ) ) );
            ( (  set_dash_screen_dash_bg2324 ) ( (  screen5212 ) ,  ( ( ( * (  theme5218 ) ) .f_default ) .f_bg ) ) );
            ( (  fill_dash_default2325 ) ( (  screen5212 ) ) );
            struct envunion2338  temp2337 = ( (struct envunion2338){ .fun = (  enum Unit_10  (*) (  struct env834*  ,    struct Screen_836 *  ,    struct Editor_329 *  ) )render_dash_editor2339 , .env =  envinst834 } );
            ( temp2337.fun ( &temp2337.env ,  (  screen5212 ) ,  (  ed5210 ) ) );
            last_dash_redraw_dash_changes5213 = ( (  render_dash_screen2921 ) ( (  screen5212 ) ) );
        }
        ( (  sync3068 ) ( (  tui5211 ) ) );
    }
    ( (  free_dash_screen3077 ) ( (  screen5212 ) ) );
    struct envunion3081  temp3080 = ( (struct envunion3081){ .fun = (  enum Unit_10  (*) (  struct env142*  ,    struct Tui_146 *  ) )deinit3082 , .env =  envinst142 } );
    ( temp3080.fun ( &temp3080.env ,  (  tui5211 ) ) );
}
