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
    size_t  starting_dash_size2011;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2012;
    ;
};

struct env2 {
    ;
    size_t  starting_dash_size2011;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2012;
    ;
};

struct env3 {
    ;
    size_t  starting_dash_size2011;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2012;
    ;
};

enum Unit_6 {
    Unit_6_Unit,
};

enum CAllocator_8 {
    CAllocator_8_CAllocator,
};

struct Slice_11 {
    uint8_t *  f_ptr;
    size_t  f_count;
};

struct List_10 {
    enum CAllocator_8  f_al;
    struct Slice_11  f_elements;
    size_t  f_count;
};

struct Slice_9 {
    struct List_10 *  f_ptr;
    size_t  f_count;
};

struct List_7 {
    enum CAllocator_8  f_al;
    struct Slice_9  f_elements;
    size_t  f_count;
};

struct envunion5 {
    enum Unit_6  (*fun) (  struct env1*  ,    struct List_7 *  );
    struct env1 env;
};

struct env4 {
    struct env1 envinst1;
    ;
    ;
    ;
    ;
    ;
};

struct envunion13 {
    enum Unit_6  (*fun) (  struct env2*  ,    struct List_10 *  );
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

struct Pos_19 {
    int32_t  f_line;
    int32_t  f_bi;
};

struct StrView_20 {
    struct Slice_11  f_contents;
};

struct Maybe_22 {
    enum {
        Maybe_22_None_t,
        Maybe_22_Just_t,
    } tag;
    union {
        struct {
            struct Pos_19  field0;
        } Maybe_22_Just_s;
    } stuff;
};

static struct Maybe_22 Maybe_22_Just (  struct Pos_19  field0 ) {
    return ( struct Maybe_22 ) { .tag = Maybe_22_Just_t, .stuff = { .Maybe_22_Just_s = { .field0 = field0 } } };
};

struct Cursors_21 {
    struct Pos_19  f_cur;
    struct Maybe_22  f_sel;
};

struct Action_18 {
    struct Pos_19  f_from;
    struct StrView_20  f_fwd;
    struct Pos_19  f_to_dash_fwd;
    struct StrView_20  f_bwd;
    struct Pos_19  f_to_dash_bwd;
    struct Cursors_21  f_before_dash_cursors;
};

struct Slice_17 {
    struct Action_18 *  f_ptr;
    size_t  f_count;
};

struct List_16 {
    enum CAllocator_8  f_al;
    struct Slice_17  f_elements;
    size_t  f_count;
};

struct envunion15 {
    enum Unit_6  (*fun) (  struct env3*  ,    struct List_16 *  );
    struct env3 env;
};

struct env14 {
    struct env3 envinst3;
    ;
    ;
    ;
    ;
    ;
};

struct envunion24 {
    enum Unit_6  (*fun) (  struct env4*  ,    struct List_7 *  ,    struct List_10  );
    struct env4 env;
};

struct envunion25 {
    enum Unit_6  (*fun) (  struct env1*  ,    struct List_7 *  );
    struct env1 env;
};

struct env23 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env4 envinst4;
    ;
    ;
    ;
    ;
    struct env1 envinst1;
    ;
    ;
};

struct env26 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor2013;
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

struct env27 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor2013;
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

struct envunion29 {
    enum Unit_6  (*fun) (  struct env4*  ,    struct List_7 *  ,    struct List_10  );
    struct env4 env;
};

struct env28 {
    ;
    ;
    struct env4 envinst4;
    ;
    ;
    ;
};

struct envunion31 {
    enum Unit_6  (*fun) (  struct env12*  ,    struct List_10 *  ,    uint8_t  );
    struct env12 env;
};

struct env30 {
    ;
    struct env12 envinst12;
    ;
    ;
    ;
    ;
};

struct Array_34 {
    struct List_10 _arr [1];
};

struct envunion33 {
    enum Unit_6  (*fun) (  struct env28*  ,    struct List_7 *  ,    struct Array_34  );
    struct env28 env;
};

struct env32 {
    ;
    ;
    ;
    struct env28 envinst28;
    ;
    ;
};

struct envunion36 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct env35 {
    ;
    ;
    ;
    ;
    struct env30 envinst30;
    ;
};

static  int32_t   from_dash_integral38 (    int64_t  x49 ) {
    return ( (int32_t ) (  x49 ) );
}

static  int32_t   lc_dash_ctype37 (  ) {
    return (  from_dash_integral38 ( 0 ) );
}

static  const char*   from_dash_string39 (    uint8_t *  ptr82 ,    size_t  dref83 ) {
    return ( ( (const char* ) (  ptr82 ) ) );
}

struct envunion41 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct env40 {
    ;
    struct env30 envinst30;
    ;
};

struct StrBuilder_44 {
    struct List_10  f_chars;
};

struct envunion43 {
    enum Unit_6  (*fun) (  struct env40*  ,    struct StrBuilder_44 *  ,    struct Slice_11  );
    struct env40 env;
};

struct env42 {
    struct env40 envinst40;
    ;
    ;
    ;
};

struct Char_47 {
    uint8_t *  f_ptr;
    size_t  f_num_dash_bytes;
};

struct envunion46 {
    enum Unit_6  (*fun) (  struct env42*  ,    struct StrBuilder_44 *  ,    struct Char_47  );
    struct env42 env;
};

struct env45 {
    ;
    struct env42 envinst42;
    ;
    ;
    ;
    ;
    ;
};

struct StrConcat_51 {
    struct StrView_20  field0;
    size_t  field1;
};

static struct StrConcat_51 StrConcat_51_StrConcat (  struct StrView_20  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_51 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_50 {
    struct StrConcat_51  field0;
    struct StrView_20  field1;
};

static struct StrConcat_50 StrConcat_50_StrConcat (  struct StrConcat_51  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_50 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion49 {
    enum Unit_6  (*fun) (  struct env45*  ,    struct StrBuilder_44 *  ,    struct StrConcat_50  );
    struct env45 env;
};

struct envunion52 {
    enum Unit_6  (*fun) (  struct env42*  ,    struct StrBuilder_44 *  ,    struct Char_47  );
    struct env42 env;
};

struct env48 {
    ;
    struct env45 envinst45;
    ;
    ;
    ;
    struct env42 envinst42;
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
    bool *  should_dash_resize3254;
    ;
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

struct env55 {
    ;
    ;
    ;
    bool *  should_dash_resize3254;
};

enum ColorPalette_59 {
    ColorPalette_59_Palette8,
    ColorPalette_59_Palette16,
    ColorPalette_59_Palette256,
    ColorPalette_59_PaletteRGB,
};

struct Array_61 {
    uint8_t _arr [32];
};

struct Termios_60 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_61  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

struct Tui_58 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_59  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_60  f_orig_dash_termios;
    bool  f_should_dash_redraw;
};

struct envunion57 {
    bool  (*fun) (  struct env55*  ,    struct Tui_58 *  );
    struct env55 env;
};

struct env56 {
    struct env55 envinst55;
    ;
};

struct envunion63 {
    bool  (*fun) (  struct env55*  ,    struct Tui_58 *  );
    struct env55 env;
};

struct env62 {
    ;
    struct env55 envinst55;
    ;
    ;
    ;
    ;
};

struct envunion65 {
    struct List_7  (*fun) (  struct env32*  ,    struct Array_34  ,    enum CAllocator_8  );
    struct env32 env;
};

struct env64 {
    ;
    ;
    ;
    ;
    ;
    struct env32 envinst32;
};

struct envunion67 {
    enum Unit_6  (*fun) (  struct env23*  ,    struct List_7 *  ,    size_t  ,    struct List_10  );
    struct env23 env;
};

struct envunion68 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct envunion69 {
    struct List_10  (*fun) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  );
    struct env35 env;
};

struct env66 {
    ;
    struct env23 envinst23;
    ;
    struct env30 envinst30;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
};

struct envunion71 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct Actions_74 {
    struct List_16  f_list;
    size_t  f_cur;
};

struct TextBuf_73 {
    struct List_7  f_buf;
    struct Actions_74  f_actions;
};

struct envunion72 {
    int32_t  (*fun) (  struct env66*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct StrView_20  );
    struct env66 env;
};

struct envunion75 {
    enum Unit_6  (*fun) (  struct env26*  ,    struct List_10 *  ,    size_t  ,    size_t  );
    struct env26 env;
};

struct envunion76 {
    enum Unit_6  (*fun) (  struct env27*  ,    struct List_7 *  ,    size_t  ,    size_t  );
    struct env27 env;
};

struct envunion77 {
    enum Unit_6  (*fun) (  struct env4*  ,    struct List_7 *  ,    struct List_10  );
    struct env4 env;
};

struct env70 {
    ;
    ;
    struct env30 envinst30;
    ;
    ;
    ;
    ;
    struct env66 envinst66;
    ;
    ;
    ;
    struct env26 envinst26;
    struct env27 envinst27;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env4 envinst4;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion79 {
    enum Unit_6  (*fun) (  struct env70*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  );
    struct env70 env;
};

struct env78 {
    ;
    struct env70 envinst70;
    ;
    ;
    ;
};

struct envunion81 {
    enum Unit_6  (*fun) (  struct env70*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  );
    struct env70 env;
};

struct env80 {
    ;
    struct env70 envinst70;
    ;
    ;
    ;
};

struct envunion83 {
    struct Pos_19  (*fun) (  struct env78*  ,    struct TextBuf_73 *  ,    struct Action_18  );
    struct env78 env;
};

struct env82 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env78 envinst78;
};

struct envunion85 {
    struct Pos_19  (*fun) (  struct env80*  ,    struct TextBuf_73 *  ,    struct Action_18  );
    struct env80 env;
};

struct env84 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env80 envinst80;
    ;
    ;
    ;
};

struct envunion87 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct env86 {
    ;
    ;
    ;
    ;
    ;
    struct env30 envinst30;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct Maybe_90 {
    enum {
        Maybe_90_None_t,
        Maybe_90_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_21  field0;
        } Maybe_90_Just_s;
    } stuff;
};

static struct Maybe_90 Maybe_90_Just (  struct Cursors_21  field0 ) {
    return ( struct Maybe_90 ) { .tag = Maybe_90_Just_t, .stuff = { .Maybe_90_Just_s = { .field0 = field0 } } };
};

struct envunion89 {
    struct Maybe_90  (*fun) (  struct env84*  ,    struct TextBuf_73 *  );
    struct env84 env;
};

struct envunion91 {
    enum Unit_6  (*fun) (  struct env14*  ,    struct List_16 *  ,    struct Action_18  );
    struct env14 env;
};

struct envunion92 {
    struct StrView_20  (*fun) (  struct env86*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct Pos_19  );
    struct env86 env;
};

struct env88 {
    ;
    ;
    ;
    ;
    ;
    struct env84 envinst84;
    ;
    ;
    ;
    struct env14 envinst14;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env86 envinst86;
};

struct envunion94 {
    struct Maybe_90  (*fun) (  struct env88*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_90  );
    struct env88 env;
};

struct env93 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env88 envinst88;
};

struct envunion96 {
    struct Maybe_90  (*fun) (  struct env88*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_90  );
    struct env88 env;
};

struct env95 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env88 envinst88;
};

struct envunion98 {
    struct Maybe_90  (*fun) (  struct env82*  ,    struct TextBuf_73 *  );
    struct env82 env;
};

struct env97 {
    ;
    ;
    ;
    ;
    ;
    struct env82 envinst82;
    ;
    ;
};

struct envunion100 {
    struct Maybe_90  (*fun) (  struct env84*  ,    struct TextBuf_73 *  );
    struct env84 env;
};

struct env99 {
    ;
    ;
    ;
    ;
    ;
    struct env84 envinst84;
    ;
    ;
};

struct envunion102 {
    struct Maybe_90  (*fun) (  struct env88*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_90  );
    struct env88 env;
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
    struct env88 envinst88;
};

struct envunion104 {
    struct StrView_20  (*fun) (  struct env86*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct Pos_19  );
    struct env86 env;
};

struct env103 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env86 envinst86;
};

struct envunion106 {
    struct StrView_20  (*fun) (  struct env48*  ,    struct StrConcat_50  ,    enum CAllocator_8  );
    struct env48 env;
};

struct env105 {
    ;
    ;
    ;
    struct env48 envinst48;
    ;
    ;
    ;
};

enum Mode_111 {
    Mode_111_Normal,
    Mode_111_Insert,
    Mode_111_Select,
};

struct Pane_110 {
    struct TextBuf_73 *  f_buf;
    struct Pos_19  f_cursor;
    int32_t  f_vi;
    struct Maybe_22  f_sel;
    enum Mode_111  f_mode;
};

struct Maybe_112 {
    enum {
        Maybe_112_None_t,
        Maybe_112_Just_t,
    } tag;
    union {
        struct {
            struct StrView_20  field0;
        } Maybe_112_Just_s;
    } stuff;
};

static struct Maybe_112 Maybe_112_Just (  struct StrView_20  field0 ) {
    return ( struct Maybe_112 ) { .tag = Maybe_112_Just_t, .stuff = { .Maybe_112_Just_s = { .field0 = field0 } } };
};

struct EditorMode_113 {
    enum {
        EditorMode_113_Normal_t,
        EditorMode_113_Cmd_t,
    } tag;
    union {
        struct {
            struct StrBuilder_44  field0;
        } EditorMode_113_Cmd_s;
    } stuff;
};

static struct EditorMode_113 EditorMode_113_Cmd (  struct StrBuilder_44  field0 ) {
    return ( struct EditorMode_113 ) { .tag = EditorMode_113_Cmd_t, .stuff = { .EditorMode_113_Cmd_s = { .field0 = field0 } } };
};

struct Editor_109 {
    enum CAllocator_8  f_al;
    bool  f_running;
    struct Pane_110  f_pane;
    struct Maybe_112  f_clipboard;
    struct EditorMode_113  f_mode;
    struct Maybe_112  f_msg;
};

struct envunion108 {
    enum Unit_6  (*fun) (  struct env105*  ,    struct Editor_109 *  ,    struct StrConcat_50  );
    struct env105 env;
};

struct envunion114 {
    enum Unit_6  (*fun) (  struct env103*  ,    struct Editor_109 *  );
    struct env103 env;
};

struct Tuple2_116 {
    struct Pos_19  field0;
    struct Pos_19  field1;
};

static struct Tuple2_116 Tuple2_116_Tuple2 (  struct Pos_19  field0 ,  struct Pos_19  field1 ) {
    return ( struct Tuple2_116 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion115 {
    enum Unit_6  (*fun) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_116  ,    struct StrView_20  );
    struct env101 env;
};

struct envunion117 {
    enum Unit_6  (*fun) (  struct env97*  ,    struct Pane_110 *  );
    struct env97 env;
};

struct envunion118 {
    enum Unit_6  (*fun) (  struct env99*  ,    struct Pane_110 *  );
    struct env99 env;
};

struct env107 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env105 envinst105;
    ;
    ;
    struct env103 envinst103;
    struct env101 envinst101;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env97 envinst97;
    ;
    ;
    ;
    ;
    struct env99 envinst99;
    ;
};

struct Key_121 {
    enum {
        Key_121_Escape_t,
        Key_121_Enter_t,
        Key_121_Tab_t,
        Key_121_Backspace_t,
        Key_121_Char_t,
        Key_121_Ctrl_t,
        Key_121_Up_t,
        Key_121_Down_t,
        Key_121_Left_t,
        Key_121_Right_t,
        Key_121_Home_t,
        Key_121_End_t,
        Key_121_PageUp_t,
        Key_121_PageDown_t,
        Key_121_Delete_t,
        Key_121_Insert_t,
        Key_121_F1_t,
        Key_121_F2_t,
        Key_121_F3_t,
        Key_121_F4_t,
        Key_121_F5_t,
        Key_121_F6_t,
        Key_121_F7_t,
        Key_121_F8_t,
        Key_121_F9_t,
        Key_121_F10_t,
        Key_121_F11_t,
        Key_121_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_121_Char_s;
        struct {
            char  field0;
        } Key_121_Ctrl_s;
    } stuff;
};

static struct Key_121 Key_121_Char (  char  field0 ) {
    return ( struct Key_121 ) { .tag = Key_121_Char_t, .stuff = { .Key_121_Char_s = { .field0 = field0 } } };
};

static struct Key_121 Key_121_Ctrl (  char  field0 ) {
    return ( struct Key_121 ) { .tag = Key_121_Ctrl_t, .stuff = { .Key_121_Ctrl_s = { .field0 = field0 } } };
};

struct envunion120 {
    enum Unit_6  (*fun) (  struct env107*  ,    struct Editor_109 *  ,    struct Key_121  );
    struct env107 env;
};

struct envunion122 {
    enum Unit_6  (*fun) (  struct env93*  ,    struct Pane_110 *  ,    struct StrView_20  );
    struct env93 env;
};

struct envunion123 {
    enum Unit_6  (*fun) (  struct env42*  ,    struct StrBuilder_44 *  ,    struct Char_47  );
    struct env42 env;
};

struct envunion124 {
    enum Unit_6  (*fun) (  struct env95*  ,    struct Pane_110 *  );
    struct env95 env;
};

struct env119 {
    ;
    ;
    ;
    struct env107 envinst107;
    ;
    ;
    ;
    struct env93 envinst93;
    ;
    struct env42 envinst42;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env95 envinst95;
};

static  enum CAllocator_8   idc125 (  ) {
    return ( CAllocator_8_CAllocator );
}

struct envunion128 {
    struct TextBuf_73  (*fun) (  struct env64*  ,    enum CAllocator_8  );
    struct env64 env;
};

static  void *   cast_dash_ptr138 (    struct List_10 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of139 (    struct List_10 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct List_10 *   zeroed136 (  ) {
    struct List_10 *  temp137;
    struct List_10 *  x570 = (  temp137 );
    ( ( memset ) ( ( (  cast_dash_ptr138 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of139 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct List_10 *   null_dash_ptr135 (  ) {
    return ( (  zeroed136 ) ( ) );
}

static  struct Slice_9   empty134 (  ) {
    return ( (struct Slice_9) { .f_ptr = ( (  null_dash_ptr135 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_7   mk133 (    enum CAllocator_8  al2006 ) {
    struct Slice_9  elements2007 = ( (  empty134 ) ( ) );
    return ( (struct List_7) { .f_al = (  al2006 ) , .f_elements = (  elements2007 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env143 {
    struct List_7 *  list2073;
    struct env4 envinst4;
};

struct envunion144 {
    enum Unit_6  (*fun) (  struct env143*  ,    struct List_10  );
    struct env143 env;
};

struct ArrayIter_145 {
    struct Array_34  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_145   into_dash_iter147 (    struct Array_34  self2291 ) {
    return ( (struct ArrayIter_145) { .f_backing = (  self2291 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_148 {
    enum {
        Maybe_148_None_t,
        Maybe_148_Just_t,
    } tag;
    union {
        struct {
            struct List_10  field0;
        } Maybe_148_Just_s;
    } stuff;
};

static struct Maybe_148 Maybe_148_Just (  struct List_10  field0 ) {
    return ( struct Maybe_148 ) { .tag = Maybe_148_Just_t, .stuff = { .Maybe_148_Just_s = { .field0 = field0 } } };
};

enum Ordering_151 {
    Ordering_151_LT,
    Ordering_151_EQ,
    Ordering_151_GT,
};

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_151   cmp150 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

struct StrConcat_156 {
    struct StrConcat_50  field0;
    int32_t  field1;
};

static struct StrConcat_156 StrConcat_156_StrConcat (  struct StrConcat_50  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_156 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_155 {
    struct StrConcat_156  field0;
    struct Char_47  field1;
};

static struct StrConcat_155 StrConcat_155_StrConcat (  struct StrConcat_156  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_155 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_159 {
    struct StrView_20  field0;
    struct StrConcat_155  field1;
};

static struct StrConcat_159 StrConcat_159_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_155  field1 ) {
    return ( struct StrConcat_159 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_158 {
    struct StrConcat_159  field0;
    struct Char_47  field1;
};

static struct StrConcat_158 StrConcat_158_StrConcat (  struct StrConcat_159  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_158 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32162 (    size_t  x630 ) {
    return ( (int32_t ) (  x630 ) );
}

static  enum Unit_6   print_dash_str161 (    struct StrView_20  self1360 ) {
    ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32162 ) ( ( ( (  self1360 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1360 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str167 (    size_t  self1445 ) {
    ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1445 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str166 (    struct StrConcat_51  self1484 ) {
    struct StrConcat_51  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str161 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str167 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str165 (    struct StrConcat_50  self1484 ) {
    struct StrConcat_50  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str166 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str161 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str168 (    int32_t  self1421 ) {
    ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1421 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str164 (    struct StrConcat_156  self1484 ) {
    struct StrConcat_156  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str165 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str168 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

struct CharDestructured_171 {
    enum {
        CharDestructured_171_Ref_t,
        CharDestructured_171_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_47  field0;
        } CharDestructured_171_Ref_s;
        struct {
            uint32_t  field0;
        } CharDestructured_171_Scalar_s;
    } stuff;
};

static struct CharDestructured_171 CharDestructured_171_Ref (  struct Char_47  field0 ) {
    return ( struct CharDestructured_171 ) { .tag = CharDestructured_171_Ref_t, .stuff = { .CharDestructured_171_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_171 CharDestructured_171_Scalar (  uint32_t  field0 ) {
    return ( struct CharDestructured_171 ) { .tag = CharDestructured_171_Scalar_t, .stuff = { .CharDestructured_171_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq173 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint8_t   size_dash_u8175 (    size_t  x639 ) {
    return ( (uint8_t ) (  x639 ) );
}

static  size_t   op_dash_div176 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer174 (    uint8_t *  ptr678 ) {
    return ( (  size_dash_u8175 ) ( (  op_dash_div176 ( ( ( (size_t ) (  ptr678 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral177 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  uint32_t   size_dash_u32178 (    size_t  x633 ) {
    return ( (uint32_t ) (  x633 ) );
}

static  size_t   cast179 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_171   destructure172 (    struct Char_47  c715 ) {
    if ( (  eq173 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer174 ) ( ( (  c715 ) .f_ptr ) ) ) , (  from_dash_integral177 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_171_Scalar ) ( ( (  size_dash_u32178 ) ( ( ( (  cast179 ) ( ( (  c715 ) .f_ptr ) ) ) ) ) ) ) );
    } else {
        return ( ( CharDestructured_171_Ref ) ( (  c715 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_151   cmp180 (    uint32_t  l164 ,    uint32_t  r166 ) {
    return ( builtin_uint32_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint32_t   from_dash_integral181 (    int64_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint8_t   cast184 (    uint32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  uint8_t   u32_dash_u8183 (    uint32_t  x657 ) {
    return ( (  cast184 ) ( (  x657 ) ) );
}

static  enum Unit_6   printf_dash_char170 (    struct Char_47  c756 ) {
    struct CharDestructured_171  dref757 = ( (  destructure172 ) ( (  c756 ) ) );
    if ( dref757.tag == CharDestructured_171_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32162 ) ( ( ( dref757 .stuff .CharDestructured_171_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref757 .stuff .CharDestructured_171_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref757.tag == CharDestructured_171_Scalar_t ) {
            if ( (  cmp180 ( ( dref757 .stuff .CharDestructured_171_Scalar_s .field0 ) , (  from_dash_integral181 ( 127 ) ) ) == 2 ) ) {
                const char*  temp182 = ( (  from_dash_string39 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp182);
                exit ( 1 );
                ( Unit_6_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8183 ) ( ( dref757 .stuff .CharDestructured_171_Scalar_s .field0 ) ) ) ) );
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str169 (    struct Char_47  self1385 ) {
    ( (  printf_dash_char170 ) ( (  self1385 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str163 (    struct StrConcat_155  self1484 ) {
    struct StrConcat_155  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str164 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str160 (    struct StrConcat_159  self1484 ) {
    struct StrConcat_159  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str161 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str163 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str157 (    struct StrConcat_158  self1484 ) {
    struct StrConcat_158  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str160 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  struct StrView_20   from_dash_string185 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_20) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

static  uint8_t *   cast187 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_151   cmp190 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  uint8_t   op_dash_add191 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  size_t   next_dash_char189 (    uint8_t *  p688 ) {
    uint8_t  pb689 = ( * (  p688 ) );
    if ( (  cmp190 ( (  pb689 ) , (  from_dash_integral177 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp190 ( (  pb689 ) , (  op_dash_add191 ( (  op_dash_add191 ( (  op_dash_add191 ( (  from_dash_integral177 ( 128 ) ) , (  from_dash_integral177 ( 64 ) ) ) ) , (  from_dash_integral177 ( 32 ) ) ) ) , (  from_dash_integral177 ( 16 ) ) ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp190 ( (  pb689 ) , (  op_dash_add191 ( (  op_dash_add191 ( (  from_dash_integral177 ( 128 ) ) , (  from_dash_integral177 ( 64 ) ) ) ) , (  from_dash_integral177 ( 32 ) ) ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp190 ( (  pb689 ) , (  op_dash_add191 ( (  from_dash_integral177 ( 128 ) ) , (  from_dash_integral177 ( 64 ) ) ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp192 = ( (  from_dash_string39 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp192);
                    exit ( 1 );
                    ( Unit_6_Unit );
                }
            }
        }
    }
}

static  struct Char_47   scan_dash_from_dash_mem188 (    uint8_t *  p700 ) {
    size_t  clen701 = ( (  next_dash_char189 ) ( (  p700 ) ) );
    if ( (  cmp150 ( (  clen701 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp193 = ( (  from_dash_string39 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp193);
        exit ( 1 );
        ( Unit_6_Unit );
    }
    return ( (struct Char_47) { .f_ptr = (  p700 ) , .f_num_dash_bytes = (  clen701 ) } );
}

static  struct Char_47   from_dash_charlike186 (    uint8_t *  ptr704 ,    size_t  num_dash_bytes706 ) {
    uint8_t *  ptr707 = ( ( (  cast187 ) ( (  ptr704 ) ) ) );
    return ( (  scan_dash_from_dash_mem188 ) ( (  ptr707 ) ) );
}

static  enum Unit_6   panic154 (    struct StrConcat_155  errmsg1693 ) {
    ( (  print_dash_str157 ) ( ( ( StrConcat_158_StrConcat ) ( ( ( StrConcat_159_StrConcat ) ( ( (  from_dash_string185 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1693 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  struct List_10 *   cast_dash_ptr194 (    struct Array_34 *  p359 ) {
    return ( (struct List_10 * ) (  p359 ) );
}

static  int64_t   op_dash_mul196 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  struct List_10 *   offset_dash_ptr195 (    struct List_10 *  x338 ,    int64_t  count340 ) {
    struct List_10  temp197;
    return ( (struct List_10 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul196 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp197 ) ) ) ) ) ) ) ) );
}

static  struct List_10 *   get_dash_ptr153 (    struct Array_34 *  arr2219 ,    size_t  i2222 ) {
    if ( ( (  cmp150 ( (  i2222 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i2222 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic154 ) ( ( ( StrConcat_155_StrConcat ) ( ( ( StrConcat_156_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2222 ) ) ) ,  ( (  from_dash_string185 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_10 *  p2223 = ( ( (  cast_dash_ptr194 ) ( (  arr2219 ) ) ) );
    return ( (  offset_dash_ptr195 ) ( (  p2223 ) ,  ( (int64_t ) (  i2222 ) ) ) );
}

static  struct List_10   get152 (    struct Array_34 *  arr2226 ,    size_t  i2229 ) {
    return ( * ( (  get_dash_ptr153 ) ( (  arr2226 ) ,  (  i2229 ) ) ) );
}

static  size_t   op_dash_add198 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  struct Maybe_148   next149 (    struct ArrayIter_145 *  self2298 ) {
    if ( (  cmp150 ( ( ( * (  self2298 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_148) { .tag = Maybe_148_None_t } );
    }
    struct List_10  e2300 = ( (  get152 ) ( ( & ( ( * (  self2298 ) ) .f_backing ) ) ,  ( ( * (  self2298 ) ) .f_cur ) ) );
    (*  self2298 ) .f_cur = (  op_dash_add198 ( ( ( * (  self2298 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_148_Just ) ( (  e2300 ) ) );
}

static  enum Unit_6   for_dash_each142 (    struct Array_34  iterable1055 ,   struct envunion144  fun1057 ) {
    struct ArrayIter_145  temp146 = ( (  into_dash_iter147 ) ( (  iterable1055 ) ) );
    struct ArrayIter_145 *  it1058 = ( &temp146 );
    while ( ( true ) ) {
        struct Maybe_148  dref1059 = ( (  next149 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_148_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_148_Just_t ) {
                struct envunion144  temp199 = (  fun1057 );
                ( temp199.fun ( &temp199.env ,  ( dref1059 .stuff .Maybe_148_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  bool   eq205 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

struct TypeSize_208 {
    size_t  f_size;
};

static  struct TypeSize_208   get_dash_typesize207 (  ) {
    struct List_10  temp209;
    return ( (struct TypeSize_208) { .f_size = ( sizeof( ( (  temp209 ) ) ) ) } );
}

static  struct List_10 *   cast_dash_ptr210 (    void *  p359 ) {
    return ( (struct List_10 * ) (  p359 ) );
}

static  size_t   op_dash_mul211 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  struct Slice_9   allocate206 (    enum CAllocator_8  dref1928 ,    size_t  count1930 ) {
    if (!(  dref1928 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1931 = ( ( ( (  get_dash_typesize207 ) ( ) ) ) .f_size );
    struct List_10 *  ptr1932 = ( (  cast_dash_ptr210 ) ( ( ( malloc ) ( (  op_dash_mul211 ( (  size1931 ) , (  count1930 ) ) ) ) ) ) );
    return ( (struct Slice_9) { .f_ptr = (  ptr1932 ) , .f_count = (  count1930 ) } );
}

struct env212 {
    struct Slice_9  new_dash_slice2017;
    ;
    ;
};

struct Tuple2_214 {
    struct List_10  field0;
    int32_t  field1;
};

static struct Tuple2_214 Tuple2_214_Tuple2 (  struct List_10  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_214 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion213 {
    enum Unit_6  (*fun) (  struct env212*  ,    struct Tuple2_214  );
    struct env212 env;
};

struct StrConcat_220 {
    struct StrConcat_50  field0;
    size_t  field1;
};

static struct StrConcat_220 StrConcat_220_StrConcat (  struct StrConcat_50  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_220 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_219 {
    struct StrConcat_220  field0;
    struct Char_47  field1;
};

static struct StrConcat_219 StrConcat_219_StrConcat (  struct StrConcat_220  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_219 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_223 {
    struct StrView_20  field0;
    struct StrConcat_219  field1;
};

static struct StrConcat_223 StrConcat_223_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_219  field1 ) {
    return ( struct StrConcat_223 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_222 {
    struct StrConcat_223  field0;
    struct Char_47  field1;
};

static struct StrConcat_222 StrConcat_222_StrConcat (  struct StrConcat_223  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_222 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str226 (    struct StrConcat_220  self1484 ) {
    struct StrConcat_220  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str165 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str167 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str225 (    struct StrConcat_219  self1484 ) {
    struct StrConcat_219  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str226 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str224 (    struct StrConcat_223  self1484 ) {
    struct StrConcat_223  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str161 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str225 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str221 (    struct StrConcat_222  self1484 ) {
    struct StrConcat_222  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str224 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic218 (    struct StrConcat_219  errmsg1693 ) {
    ( (  print_dash_str221 ) ( ( ( StrConcat_222_StrConcat ) ( ( ( StrConcat_223_StrConcat ) ( ( (  from_dash_string185 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1693 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  int64_t   size_dash_i64227 (    size_t  x594 ) {
    return ( (int64_t ) (  x594 ) );
}

static  struct List_10 *   get_dash_ptr217 (    struct Slice_9  slice1738 ,    size_t  i1740 ) {
    if ( ( (  cmp150 ( (  i1740 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i1740 ) , ( (  slice1738 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic218 ) ( ( ( StrConcat_219_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1740 ) ) ) ,  ( (  from_dash_string185 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1738 ) .f_count ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_10 *  elem_dash_ptr1741 = ( (  offset_dash_ptr195 ) ( ( (  slice1738 ) .f_ptr ) ,  ( (  size_dash_i64227 ) ( (  i1740 ) ) ) ) );
    return (  elem_dash_ptr1741 );
}

static  enum Unit_6   set216 (    struct Slice_9  slice1755 ,    size_t  i1757 ,    struct List_10  x1759 ) {
    struct List_10 *  ep1760 = ( (  get_dash_ptr217 ) ( (  slice1755 ) ,  (  i1757 ) ) );
    (*  ep1760 ) = (  x1759 );
    return ( Unit_6_Unit );
}

static  size_t   i32_dash_size228 (    int32_t  x609 ) {
    return ( (size_t ) ( (int64_t ) (  x609 ) ) );
}

static  enum Unit_6   lam215 (   struct env212* env ,    struct Tuple2_214  dref2018 ) {
    return ( (  set216 ) ( ( env->new_dash_slice2017 ) ,  ( (  i32_dash_size228 ) ( ( dref2018 .field1 ) ) ) ,  ( dref2018 .field0 ) ) );
}

struct SliceIter_231 {
    struct Slice_9  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_232 {
    int32_t  f_from;
};

struct Zip_230 {
    struct SliceIter_231  f_left_dash_it;
    struct FromIter_232  f_right_dash_it;
};

static  struct Zip_230   into_dash_iter234 (    struct Zip_230  self905 ) {
    return (  self905 );
}

struct Maybe_235 {
    enum {
        Maybe_235_None_t,
        Maybe_235_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_214  field0;
        } Maybe_235_Just_s;
    } stuff;
};

static struct Maybe_235 Maybe_235_Just (  struct Tuple2_214  field0 ) {
    return ( struct Maybe_235 ) { .tag = Maybe_235_Just_t, .stuff = { .Maybe_235_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_148   next237 (    struct SliceIter_231 *  self1809 ) {
    size_t  off1810 = ( ( * (  self1809 ) ) .f_current_dash_offset );
    if ( (  cmp150 ( (  op_dash_add198 ( (  off1810 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1809 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_148) { .tag = Maybe_148_None_t } );
    }
    struct List_10  elem1811 = ( * ( (  offset_dash_ptr195 ) ( ( ( ( * (  self1809 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64227 ) ( (  off1810 ) ) ) ) ) );
    (*  self1809 ) .f_current_dash_offset = (  op_dash_add198 ( (  off1810 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_148_Just ) ( (  elem1811 ) ) );
}

struct Maybe_238 {
    enum {
        Maybe_238_None_t,
        Maybe_238_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_238_Just_s;
    } stuff;
};

static struct Maybe_238 Maybe_238_Just (  int32_t  field0 ) {
    return ( struct Maybe_238 ) { .tag = Maybe_238_Just_t, .stuff = { .Maybe_238_Just_s = { .field0 = field0 } } };
};

static  int32_t   op_dash_add240 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) + (  r209 ) );
}

static  struct Maybe_238   next239 (    struct FromIter_232 *  dref899 ) {
    int32_t  v901 = ( ( (* dref899 ) ) .f_from );
    (* dref899 ) .f_from = (  op_dash_add240 ( ( ( (* dref899 ) ) .f_from ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( ( Maybe_238_Just ) ( (  v901 ) ) );
}

static  struct Maybe_235   next236 (    struct Zip_230 *  self908 ) {
    struct Zip_230  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_148  dref910 = ( (  next237 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_148_None_t ) {
            return ( (struct Maybe_235) { .tag = Maybe_235_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_148_Just_t ) {
                struct Maybe_238  dref912 = ( (  next239 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_238_None_t ) {
                    return ( (struct Maybe_235) { .tag = Maybe_235_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_238_Just_t ) {
                        ( (  next237 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next239 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_235_Just ) ( ( ( Tuple2_214_Tuple2 ) ( ( dref910 .stuff .Maybe_148_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_238_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each229 (    struct Zip_230  iterable1055 ,   struct envunion213  fun1057 ) {
    struct Zip_230  temp233 = ( (  into_dash_iter234 ) ( (  iterable1055 ) ) );
    struct Zip_230 *  it1058 = ( &temp233 );
    while ( ( true ) ) {
        struct Maybe_235  dref1059 = ( (  next236 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_235_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_235_Just_t ) {
                struct envunion213  temp241 = (  fun1057 );
                ( temp241.fun ( &temp241.env ,  ( dref1059 .stuff .Maybe_235_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct SliceIter_231   into_dash_iter243 (    struct Slice_9  self1803 ) {
    return ( (struct SliceIter_231) { .f_slice = (  self1803 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_232   into_dash_iter244 (    struct FromIter_232  it897 ) {
    return (  it897 );
}

static  struct Zip_230   zip242 (    struct Slice_9  left916 ,    struct FromIter_232  right918 ) {
    struct SliceIter_231  left_dash_it919 = ( (  into_dash_iter243 ) ( (  left916 ) ) );
    struct FromIter_232  right_dash_it920 = ( (  into_dash_iter244 ) ( (  right918 ) ) );
    return ( (struct Zip_230) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  struct FromIter_232   from245 (    int32_t  f894 ) {
    return ( (struct FromIter_232) { .f_from = (  f894 ) } );
}

static  void *   cast_dash_ptr247 (    struct List_10 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free246 (    enum CAllocator_8  dref1934 ,    struct Slice_9  slice1936 ) {
    if (!(  dref1934 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr247 ) ( ( (  slice1936 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   grow_dash_if_dash_full204 (   struct env1* env ,    struct List_7 *  list2016 ) {
    if ( (  eq205 ( ( ( * (  list2016 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2016 ) .f_elements = ( (  allocate206 ) ( ( ( * (  list2016 ) ) .f_al ) ,  ( env->starting_dash_size2011 ) ) );
    } else {
        if ( (  eq205 ( ( ( * (  list2016 ) ) .f_count ) , ( ( ( * (  list2016 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_9  new_dash_slice2017 = ( (  allocate206 ) ( ( ( * (  list2016 ) ) .f_al ) ,  (  op_dash_mul211 ( ( ( * (  list2016 ) ) .f_count ) , ( env->growth_dash_factor2012 ) ) ) ) );
            struct env212 envinst212 = {
                .new_dash_slice2017 =  new_dash_slice2017 ,
            };
            struct envunion213  fun2021 = ( (struct envunion213){ .fun = (  enum Unit_6  (*) (  struct env212*  ,    struct Tuple2_214  ) )lam215 , .env =  envinst212 } );
            ( (  for_dash_each229 ) ( ( (  zip242 ) ( ( ( * (  list2016 ) ) .f_elements ) ,  ( (  from245 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  fun2021 ) ) );
            ( (  free246 ) ( ( ( * (  list2016 ) ) .f_al ) ,  ( ( * (  list2016 ) ) .f_elements ) ) );
            (*  list2016 ) .f_elements = (  new_dash_slice2017 );
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   add202 (   struct env4* env ,    struct List_7 *  list2024 ,    struct List_10  elem2026 ) {
    struct envunion5  temp203 = ( (struct envunion5){ .fun = (  enum Unit_6  (*) (  struct env1*  ,    struct List_7 *  ) )grow_dash_if_dash_full204 , .env =  env->envinst1 } );
    ( temp203.fun ( &temp203.env ,  (  list2024 ) ) );
    ( (  set216 ) ( ( ( * (  list2024 ) ) .f_elements ) ,  ( ( * (  list2024 ) ) .f_count ) ,  (  elem2026 ) ) );
    (*  list2024 ) .f_count = (  op_dash_add198 ( ( ( * (  list2024 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam200 (   struct env143* env ,    struct List_10  x2077 ) {
    struct envunion29  temp201 = ( (struct envunion29){ .fun = (  enum Unit_6  (*) (  struct env4*  ,    struct List_7 *  ,    struct List_10  ) )add202 , .env =  env->envinst4 } );
    return ( temp201.fun ( &temp201.env ,  ( env->list2073 ) ,  (  x2077 ) ) );
}

static  enum Unit_6   add_dash_all141 (   struct env28* env ,    struct List_7 *  list2073 ,    struct Array_34  it2075 ) {
    struct env143 envinst143 = {
        .list2073 =  list2073 ,
        .envinst4 = env->envinst4 ,
    };
    ( (  for_dash_each142 ) ( (  it2075 ) ,  ( (struct envunion144){ .fun = (  enum Unit_6  (*) (  struct env143*  ,    struct List_10  ) )lam200 , .env =  envinst143 } ) ) );
    return ( Unit_6_Unit );
}

static  struct List_7   from_dash_iter131 (   struct env32* env ,    struct Array_34  iter2111 ,    enum CAllocator_8  al2113 ) {
    struct List_7  temp132 = ( (  mk133 ) ( (  al2113 ) ) );
    struct List_7 *  list2114 = ( &temp132 );
    struct envunion33  temp140 = ( (struct envunion33){ .fun = (  enum Unit_6  (*) (  struct env28*  ,    struct List_7 *  ,    struct Array_34  ) )add_dash_all141 , .env =  env->envinst28 } );
    ( temp140.fun ( &temp140.env ,  (  list2114 ) ,  (  iter2111 ) ) );
    return ( * (  list2114 ) );
}

static  struct Array_34   from_dash_listlike248 (    struct Array_34  self330 ) {
    return (  self330 );
}

static  void *   cast_dash_ptr254 (    uint8_t * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of255 (    uint8_t *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint8_t *   zeroed252 (  ) {
    uint8_t *  temp253;
    uint8_t *  x570 = (  temp253 );
    ( ( memset ) ( ( (  cast_dash_ptr254 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of255 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   null_dash_ptr251 (  ) {
    return ( (  zeroed252 ) ( ) );
}

static  struct Slice_11   empty250 (  ) {
    return ( (struct Slice_11) { .f_ptr = ( (  null_dash_ptr251 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_10   mk249 (    enum CAllocator_8  al2006 ) {
    struct Slice_11  elements2007 = ( (  empty250 ) ( ) );
    return ( (struct List_10) { .f_al = (  al2006 ) , .f_elements = (  elements2007 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr262 (    struct Action_18 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of263 (    struct Action_18 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Action_18 *   zeroed260 (  ) {
    struct Action_18 *  temp261;
    struct Action_18 *  x570 = (  temp261 );
    ( ( memset ) ( ( (  cast_dash_ptr262 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of263 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Action_18 *   null_dash_ptr259 (  ) {
    return ( (  zeroed260 ) ( ) );
}

static  struct Slice_17   empty258 (  ) {
    return ( (struct Slice_17) { .f_ptr = ( (  null_dash_ptr259 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_16   mk257 (    enum CAllocator_8  al2006 ) {
    struct Slice_17  elements2007 = ( (  empty258 ) ( ) );
    return ( (struct List_16) { .f_al = (  al2006 ) , .f_elements = (  elements2007 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_74   mk_dash_actions256 (    enum CAllocator_8  al3540 ) {
    return ( (struct Actions_74) { .f_list = ( (  mk257 ) ( (  al3540 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct TextBuf_73   mk129 (   struct env64* env ,    enum CAllocator_8  al3544 ) {
    struct envunion65  temp130 = ( (struct envunion65){ .fun = (  struct List_7  (*) (  struct env32*  ,    struct Array_34  ,    enum CAllocator_8  ) )from_dash_iter131 , .env =  env->envinst32 } );
    return ( (struct TextBuf_73) { .f_buf = ( temp130.fun ( &temp130.env ,  ( (  from_dash_listlike248 ) ( ( (struct Array_34) { ._arr = { ( (  mk249 ) ( (  al3544 ) ) ) } } ) ) ) ,  (  al3544 ) ) ) , .f_actions = ( (  mk_dash_actions256 ) ( (  al3544 ) ) ) } );
}

struct Slice_264 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  const char* *   offset_dash_ptr266 (    const char* *  x338 ,    int64_t  count340 ) {
    const char*  temp267;
    return ( (const char* * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul196 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp267 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral268 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub269 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  struct Slice_264   get265 (  ) {
    return ( (struct Slice_264) { .f_ptr = ( (  offset_dash_ptr266 ) ( ( _global_argv ) ,  (  from_dash_integral268 ( 1 ) ) ) ) , .f_count = (  op_dash_sub269 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct Maybe_273 {
    enum {
        Maybe_273_None_t,
        Maybe_273_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_273_Just_s;
    } stuff;
};

static struct Maybe_273 Maybe_273_Just (  const char*  field0 ) {
    return ( struct Maybe_273 ) { .tag = Maybe_273_Just_t, .stuff = { .Maybe_273_Just_s = { .field0 = field0 } } };
};

static  const char*   undefined274 (  ) {
    const char*  temp275;
    return (  temp275 );
}

static  const char*   or_dash_fail272 (    struct Maybe_273  x1706 ,    struct StrConcat_219  errmsg1708 ) {
    struct Maybe_273  dref1709 = (  x1706 );
    if ( dref1709.tag == Maybe_273_None_t ) {
        ( (  panic218 ) ( (  errmsg1708 ) ) );
        return ( (  undefined274 ) ( ) );
    }
    else {
        if ( dref1709.tag == Maybe_273_Just_t ) {
            return ( dref1709 .stuff .Maybe_273_Just_s .field0 );
        }
    }
}

static  struct Maybe_273   try_dash_get276 (    struct Slice_264  slice1744 ,    size_t  i1746 ) {
    if ( ( (  cmp150 ( (  i1746 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i1746 ) , ( (  slice1744 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_273) { .tag = Maybe_273_None_t } );
    }
    const char* *  elem_dash_ptr1747 = ( (  offset_dash_ptr266 ) ( ( (  slice1744 ) .f_ptr ) ,  ( (  size_dash_i64227 ) ( (  i1746 ) ) ) ) );
    return ( ( Maybe_273_Just ) ( ( * (  elem_dash_ptr1747 ) ) ) );
}

static  const char*   get271 (    struct Slice_264  slice1750 ,    size_t  i1752 ) {
    return ( (  or_dash_fail272 ) ( ( (  try_dash_get276 ) ( (  slice1750 ) ,  (  i1752 ) ) ) ,  ( ( StrConcat_219_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1752 ) ) ) ,  ( (  from_dash_string185 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1750 ) .f_count ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get270 (    struct Slice_264  self1848 ,    size_t  idx1850 ) {
    return ( (  get271 ) ( (  self1848 ) ,  (  idx1850 ) ) );
}

struct envunion278 {
    enum Unit_6  (*fun) (  struct env70*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  );
    struct env70 env;
};

static  bool   eq281 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq280 (    struct Pos_19  l3509 ,    struct Pos_19  r3511 ) {
    return ( (  eq281 ( ( (  l3509 ) .f_line ) , ( (  r3511 ) .f_line ) ) ) && (  eq281 ( ( (  l3509 ) .f_bi ) , ( (  r3511 ) .f_bi ) ) ) );
}

static  size_t   size282 (    struct List_7 *  l2108 ) {
    return ( ( * (  l2108 ) ) .f_count );
}

static  struct List_10 *   get_dash_ptr287 (    struct List_7 *  list1976 ,    size_t  i1978 ) {
    if ( ( (  cmp150 ( (  i1978 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i1978 ) , ( ( * (  list1976 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic218 ) ( ( ( StrConcat_219_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i1978 ) ) ) ,  ( (  from_dash_string185 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list1976 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr217 ) ( ( ( * (  list1976 ) ) .f_elements ) ,  (  i1978 ) ) );
}

static  struct List_10   get286 (    struct List_7 *  list1986 ,    size_t  i1988 ) {
    return ( * ( (  get_dash_ptr287 ) ( (  list1986 ) ,  (  i1988 ) ) ) );
}

static  uint8_t *   offset_dash_ptr290 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp291;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul196 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp291 ) ) ) ) ) ) ) ) );
}

static  size_t   min292 (    size_t  l1217 ,    size_t  r1219 ) {
    if ( (  cmp150 ( (  l1217 ) , (  r1219 ) ) == 0 ) ) {
        return (  l1217 );
    } else {
        return (  r1219 );
    }
}

static  struct Slice_11   subslice289 (    struct Slice_11  slice1763 ,    size_t  from1765 ,    size_t  to1767 ) {
    uint8_t *  begin_dash_ptr1768 = ( (  offset_dash_ptr290 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64227 ) ( (  from1765 ) ) ) ) );
    if ( ( (  cmp150 ( (  from1765 ) , (  to1767 ) ) != 0 ) || (  cmp150 ( (  from1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1768 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1769 = (  op_dash_sub269 ( ( (  min292 ) ( (  to1767 ) ,  ( (  slice1763 ) .f_count ) ) ) , (  from1765 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1768 ) , .f_count = (  count1769 ) } );
}

static  struct Slice_11   from288 (    struct Slice_11  slice1772 ,    size_t  from1774 ) {
    return ( (  subslice289 ) ( (  slice1772 ) ,  (  from1774 ) ,  ( (  slice1772 ) .f_count ) ) );
}

static  struct Slice_11   to_dash_slice293 (    struct List_10  l2101 ) {
    uint8_t *  ptr2102 = ( ( (  l2101 ) .f_elements ) .f_ptr );
    return ( (struct Slice_11) { .f_ptr = (  ptr2102 ) , .f_count = ( (  l2101 ) .f_count ) } );
}

static  enum Unit_6   set294 (    struct List_7 *  list1996 ,    size_t  i1998 ,    struct List_10  elem2000 ) {
    if ( ( (  cmp150 ( (  i1998 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i1998 ) , ( ( * (  list1996 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic218 ) ( ( ( StrConcat_219_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i1998 ) ) ) ,  ( (  from_dash_string185 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list1996 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set216 ) ( ( ( * (  list1996 ) ) .f_elements ) ,  (  i1998 ) ,  (  elem2000 ) ) );
    return ( Unit_6_Unit );
}

struct env301 {
    struct List_10 *  list2073;
    struct env12 envinst12;
};

struct envunion302 {
    enum Unit_6  (*fun) (  struct env301*  ,    uint8_t  );
    struct env301 env;
};

struct SliceIter_303 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_303   into_dash_iter305 (    struct Slice_11  self1803 ) {
    return ( (struct SliceIter_303) { .f_slice = (  self1803 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_306 {
    enum {
        Maybe_306_None_t,
        Maybe_306_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_306_Just_s;
    } stuff;
};

static struct Maybe_306 Maybe_306_Just (  uint8_t  field0 ) {
    return ( struct Maybe_306 ) { .tag = Maybe_306_Just_t, .stuff = { .Maybe_306_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_306   next307 (    struct SliceIter_303 *  self1809 ) {
    size_t  off1810 = ( ( * (  self1809 ) ) .f_current_dash_offset );
    if ( (  cmp150 ( (  op_dash_add198 ( (  off1810 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1809 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
    }
    uint8_t  elem1811 = ( * ( (  offset_dash_ptr290 ) ( ( ( ( * (  self1809 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64227 ) ( (  off1810 ) ) ) ) ) );
    (*  self1809 ) .f_current_dash_offset = (  op_dash_add198 ( (  off1810 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_306_Just ) ( (  elem1811 ) ) );
}

static  enum Unit_6   for_dash_each300 (    struct Slice_11  iterable1055 ,   struct envunion302  fun1057 ) {
    struct SliceIter_303  temp304 = ( (  into_dash_iter305 ) ( (  iterable1055 ) ) );
    struct SliceIter_303 *  it1058 = ( &temp304 );
    while ( ( true ) ) {
        struct Maybe_306  dref1059 = ( (  next307 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_306_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_306_Just_t ) {
                struct envunion302  temp308 = (  fun1057 );
                ( temp308.fun ( &temp308.env ,  ( dref1059 .stuff .Maybe_306_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

struct TypeSize_316 {
    size_t  f_size;
};

static  struct TypeSize_316   get_dash_typesize315 (  ) {
    uint8_t  temp317;
    return ( (struct TypeSize_316) { .f_size = ( sizeof( ( (  temp317 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr318 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   allocate314 (    enum CAllocator_8  dref1928 ,    size_t  count1930 ) {
    if (!(  dref1928 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1931 = ( ( ( (  get_dash_typesize315 ) ( ) ) ) .f_size );
    uint8_t *  ptr1932 = ( (  cast_dash_ptr318 ) ( ( ( malloc ) ( (  op_dash_mul211 ( (  size1931 ) , (  count1930 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr1932 ) , .f_count = (  count1930 ) } );
}

struct env319 {
    struct Slice_11  new_dash_slice2017;
    ;
    ;
};

struct Tuple2_321 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_321 Tuple2_321_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_321 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion320 {
    enum Unit_6  (*fun) (  struct env319*  ,    struct Tuple2_321  );
    struct env319 env;
};

static  uint8_t *   get_dash_ptr324 (    struct Slice_11  slice1738 ,    size_t  i1740 ) {
    if ( ( (  cmp150 ( (  i1740 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i1740 ) , ( (  slice1738 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic218 ) ( ( ( StrConcat_219_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1740 ) ) ) ,  ( (  from_dash_string185 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1738 ) .f_count ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1741 = ( (  offset_dash_ptr290 ) ( ( (  slice1738 ) .f_ptr ) ,  ( (  size_dash_i64227 ) ( (  i1740 ) ) ) ) );
    return (  elem_dash_ptr1741 );
}

static  enum Unit_6   set323 (    struct Slice_11  slice1755 ,    size_t  i1757 ,    uint8_t  x1759 ) {
    uint8_t *  ep1760 = ( (  get_dash_ptr324 ) ( (  slice1755 ) ,  (  i1757 ) ) );
    (*  ep1760 ) = (  x1759 );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam322 (   struct env319* env ,    struct Tuple2_321  dref2018 ) {
    return ( (  set323 ) ( ( env->new_dash_slice2017 ) ,  ( (  i32_dash_size228 ) ( ( dref2018 .field1 ) ) ) ,  ( dref2018 .field0 ) ) );
}

struct Zip_326 {
    struct SliceIter_303  f_left_dash_it;
    struct FromIter_232  f_right_dash_it;
};

static  struct Zip_326   into_dash_iter328 (    struct Zip_326  self905 ) {
    return (  self905 );
}

struct Maybe_329 {
    enum {
        Maybe_329_None_t,
        Maybe_329_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_321  field0;
        } Maybe_329_Just_s;
    } stuff;
};

static struct Maybe_329 Maybe_329_Just (  struct Tuple2_321  field0 ) {
    return ( struct Maybe_329 ) { .tag = Maybe_329_Just_t, .stuff = { .Maybe_329_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_329   next330 (    struct Zip_326 *  self908 ) {
    struct Zip_326  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_306  dref910 = ( (  next307 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_306_None_t ) {
            return ( (struct Maybe_329) { .tag = Maybe_329_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_306_Just_t ) {
                struct Maybe_238  dref912 = ( (  next239 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_238_None_t ) {
                    return ( (struct Maybe_329) { .tag = Maybe_329_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_238_Just_t ) {
                        ( (  next307 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next239 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_329_Just ) ( ( ( Tuple2_321_Tuple2 ) ( ( dref910 .stuff .Maybe_306_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_238_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each325 (    struct Zip_326  iterable1055 ,   struct envunion320  fun1057 ) {
    struct Zip_326  temp327 = ( (  into_dash_iter328 ) ( (  iterable1055 ) ) );
    struct Zip_326 *  it1058 = ( &temp327 );
    while ( ( true ) ) {
        struct Maybe_329  dref1059 = ( (  next330 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_329_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_329_Just_t ) {
                struct envunion320  temp331 = (  fun1057 );
                ( temp331.fun ( &temp331.env ,  ( dref1059 .stuff .Maybe_329_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_326   zip332 (    struct Slice_11  left916 ,    struct FromIter_232  right918 ) {
    struct SliceIter_303  left_dash_it919 = ( (  into_dash_iter305 ) ( (  left916 ) ) );
    struct FromIter_232  right_dash_it920 = ( (  into_dash_iter244 ) ( (  right918 ) ) );
    return ( (struct Zip_326) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  void *   cast_dash_ptr334 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free333 (    enum CAllocator_8  dref1934 ,    struct Slice_11  slice1936 ) {
    if (!(  dref1934 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr334 ) ( ( (  slice1936 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   grow_dash_if_dash_full313 (   struct env2* env ,    struct List_10 *  list2016 ) {
    if ( (  eq205 ( ( ( * (  list2016 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2016 ) .f_elements = ( (  allocate314 ) ( ( ( * (  list2016 ) ) .f_al ) ,  ( env->starting_dash_size2011 ) ) );
    } else {
        if ( (  eq205 ( ( ( * (  list2016 ) ) .f_count ) , ( ( ( * (  list2016 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2017 = ( (  allocate314 ) ( ( ( * (  list2016 ) ) .f_al ) ,  (  op_dash_mul211 ( ( ( * (  list2016 ) ) .f_count ) , ( env->growth_dash_factor2012 ) ) ) ) );
            struct env319 envinst319 = {
                .new_dash_slice2017 =  new_dash_slice2017 ,
            };
            struct envunion320  fun2021 = ( (struct envunion320){ .fun = (  enum Unit_6  (*) (  struct env319*  ,    struct Tuple2_321  ) )lam322 , .env =  envinst319 } );
            ( (  for_dash_each325 ) ( ( (  zip332 ) ( ( ( * (  list2016 ) ) .f_elements ) ,  ( (  from245 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  fun2021 ) ) );
            ( (  free333 ) ( ( ( * (  list2016 ) ) .f_al ) ,  ( ( * (  list2016 ) ) .f_elements ) ) );
            (*  list2016 ) .f_elements = (  new_dash_slice2017 );
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   add311 (   struct env12* env ,    struct List_10 *  list2024 ,    uint8_t  elem2026 ) {
    struct envunion13  temp312 = ( (struct envunion13){ .fun = (  enum Unit_6  (*) (  struct env2*  ,    struct List_10 *  ) )grow_dash_if_dash_full313 , .env =  env->envinst2 } );
    ( temp312.fun ( &temp312.env ,  (  list2024 ) ) );
    ( (  set323 ) ( ( ( * (  list2024 ) ) .f_elements ) ,  ( ( * (  list2024 ) ) .f_count ) ,  (  elem2026 ) ) );
    (*  list2024 ) .f_count = (  op_dash_add198 ( ( ( * (  list2024 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam309 (   struct env301* env ,    uint8_t  x2077 ) {
    struct envunion31  temp310 = ( (struct envunion31){ .fun = (  enum Unit_6  (*) (  struct env12*  ,    struct List_10 *  ,    uint8_t  ) )add311 , .env =  env->envinst12 } );
    return ( temp310.fun ( &temp310.env ,  ( env->list2073 ) ,  (  x2077 ) ) );
}

static  enum Unit_6   add_dash_all299 (   struct env30* env ,    struct List_10 *  list2073 ,    struct Slice_11  it2075 ) {
    struct env301 envinst301 = {
        .list2073 =  list2073 ,
        .envinst12 = env->envinst12 ,
    };
    ( (  for_dash_each300 ) ( (  it2075 ) ,  ( (struct envunion302){ .fun = (  enum Unit_6  (*) (  struct env301*  ,    uint8_t  ) )lam309 , .env =  envinst301 } ) ) );
    return ( Unit_6_Unit );
}

static  struct List_10   from_dash_iter296 (   struct env35* env ,    struct Slice_11  iter2111 ,    enum CAllocator_8  al2113 ) {
    struct List_10  temp297 = ( (  mk249 ) ( (  al2113 ) ) );
    struct List_10 *  list2114 = ( &temp297 );
    struct envunion36  temp298 = ( (struct envunion36){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all299 , .env =  env->envinst30 } );
    ( temp298.fun ( &temp298.env ,  (  list2114 ) ,  (  iter2111 ) ) );
    return ( * (  list2114 ) );
}

static  struct StrView_20   or_dash_else336 (    struct Maybe_112  self1713 ,    struct StrView_20  alt1715 ) {
    struct Maybe_112  dref1716 = (  self1713 );
    if ( dref1716.tag == Maybe_112_None_t ) {
        return (  alt1715 );
    }
    else {
        if ( dref1716.tag == Maybe_112_Just_t ) {
            return ( dref1716 .stuff .Maybe_112_Just_s .field0 );
        }
    }
}

struct LineIter_338 {
    struct StrView_20  f_og;
    size_t  f_last;
};

static  uint8_t   undefined342 (  ) {
    uint8_t  temp343;
    return (  temp343 );
}

static  uint8_t   or_dash_fail341 (    struct Maybe_306  x1706 ,    struct StrConcat_219  errmsg1708 ) {
    struct Maybe_306  dref1709 = (  x1706 );
    if ( dref1709.tag == Maybe_306_None_t ) {
        ( (  panic218 ) ( (  errmsg1708 ) ) );
        return ( (  undefined342 ) ( ) );
    }
    else {
        if ( dref1709.tag == Maybe_306_Just_t ) {
            return ( dref1709 .stuff .Maybe_306_Just_s .field0 );
        }
    }
}

static  struct Maybe_306   try_dash_get344 (    struct Slice_11  slice1744 ,    size_t  i1746 ) {
    if ( ( (  cmp150 ( (  i1746 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i1746 ) , ( (  slice1744 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
    }
    uint8_t *  elem_dash_ptr1747 = ( (  offset_dash_ptr290 ) ( ( (  slice1744 ) .f_ptr ) ,  ( (  size_dash_i64227 ) ( (  i1746 ) ) ) ) );
    return ( ( Maybe_306_Just ) ( ( * (  elem_dash_ptr1747 ) ) ) );
}

static  uint8_t   get340 (    struct Slice_11  slice1750 ,    size_t  i1752 ) {
    return ( (  or_dash_fail341 ) ( ( (  try_dash_get344 ) ( (  slice1750 ) ,  (  i1752 ) ) ) ,  ( ( StrConcat_219_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1752 ) ) ) ,  ( (  from_dash_string185 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1750 ) .f_count ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   char_dash_u8345 (    struct Char_47  c721 ) {
    struct CharDestructured_171  dref722 = ( (  destructure172 ) ( (  c721 ) ) );
    if ( dref722.tag == CharDestructured_171_Ref_t ) {
        return ( * ( ( dref722 .stuff .CharDestructured_171_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref722.tag == CharDestructured_171_Scalar_t ) {
            return ( (  u32_dash_u8183 ) ( ( dref722 .stuff .CharDestructured_171_Scalar_s .field0 ) ) );
        }
    }
}

static  struct StrView_20   byte_dash_substr346 (    struct StrView_20  s2155 ,    size_t  from2157 ,    size_t  to2159 ) {
    return ( (struct StrView_20) { .f_contents = ( (  subslice289 ) ( ( (  s2155 ) .f_contents ) ,  (  from2157 ) ,  (  to2159 ) ) ) } );
}

static  struct Maybe_112   next339 (    struct LineIter_338 *  self2373 ) {
    if ( (  cmp150 ( ( ( * (  self2373 ) ) .f_last ) , ( ( ( ( * (  self2373 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_112) { .tag = Maybe_112_None_t } );
    }
    size_t  i2374 = ( ( * (  self2373 ) ) .f_last );
    while ( ( (  cmp150 ( (  i2374 ) , ( ( ( ( * (  self2373 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq173 ( ( (  get340 ) ( ( ( ( * (  self2373 ) ) .f_og ) .f_contents ) ,  (  i2374 ) ) ) , ( (  char_dash_u8345 ) ( ( (  from_dash_charlike186 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2374 = (  op_dash_add198 ( (  i2374 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_20  line2375 = ( (  byte_dash_substr346 ) ( ( ( * (  self2373 ) ) .f_og ) ,  ( ( * (  self2373 ) ) .f_last ) ,  (  i2374 ) ) );
    if ( (  cmp150 ( (  i2374 ) , ( ( ( ( * (  self2373 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2374 = (  op_dash_add198 ( (  i2374 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2373 ) .f_last = (  i2374 );
    return ( ( Maybe_112_Just ) ( (  line2375 ) ) );
}

static  struct LineIter_338   into_dash_iter348 (    struct LineIter_338  self2370 ) {
    return (  self2370 );
}

static  struct Maybe_112   head337 (    struct LineIter_338  it1123 ) {
    struct LineIter_338  temp347 = ( (  into_dash_iter348 ) ( (  it1123 ) ) );
    return ( (  next339 ) ( ( &temp347 ) ) );
}

static  struct LineIter_338   lines349 (    struct StrView_20  s2367 ) {
    return ( (struct LineIter_338) { .f_og = (  s2367 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env354 {
    struct Char_47  c2191;
    ;
};

struct envunion355 {
    bool  (*fun) (  struct env354*  ,    struct Char_47  );
    struct env354 env;
};

struct SplitIter_353 {
    struct StrView_20  f_og;
    size_t  f_last;
    struct envunion355  f_fun;
};

struct Drop_352 {
    struct SplitIter_353  field0;
    size_t  field1;
};

static struct Drop_352 Drop_352_Drop (  struct SplitIter_353  field0 ,  size_t  field1 ) {
    return ( struct Drop_352 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_351 {
    struct Drop_352  f_left_dash_it;
    struct FromIter_232  f_right_dash_it;
};

static  struct Zip_351   into_dash_iter356 (    struct Zip_351  self905 ) {
    return (  self905 );
}

static  struct Drop_352   into_dash_iter358 (    struct Drop_352  self839 ) {
    return (  self839 );
}

static  struct Zip_351   zip357 (    struct Drop_352  left916 ,    struct FromIter_232  right918 ) {
    struct Drop_352  left_dash_it919 = ( (  into_dash_iter358 ) ( (  left916 ) ) );
    struct FromIter_232  right_dash_it920 = ( (  into_dash_iter244 ) ( (  right918 ) ) );
    return ( (struct Zip_351) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  struct SplitIter_353   into_dash_iter360 (    struct SplitIter_353  self2196 ) {
    return (  self2196 );
}

static  struct Drop_352   drop359 (    struct SplitIter_353  iterable846 ,    size_t  i848 ) {
    struct SplitIter_353  it849 = ( (  into_dash_iter360 ) ( (  iterable846 ) ) );
    return ( ( Drop_352_Drop ) ( (  it849 ) ,  (  i848 ) ) );
}

static  struct SplitIter_353   split_dash_by_dash_filter362 (    struct StrView_20  s2184 ,   struct envunion355  fun2186 ) {
    return ( (struct SplitIter_353) { .f_og = (  s2184 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2186 ) } );
}

struct Tuple2_365 {
    struct CharDestructured_171  field0;
    struct CharDestructured_171  field1;
};

static struct Tuple2_365 Tuple2_365_Tuple2 (  struct CharDestructured_171  field0 ,  struct CharDestructured_171  field1 ) {
    return ( struct Tuple2_365 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq366 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq364 (    struct Char_47  l727 ,    struct Char_47  r729 ) {
    if ( ( !  eq205 ( ( (  l727 ) .f_num_dash_bytes ) , ( (  r729 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_365  dref730 = ( ( Tuple2_365_Tuple2 ) ( ( (  destructure172 ) ( (  l727 ) ) ) ,  ( (  destructure172 ) ( (  r729 ) ) ) ) );
    if ( dref730 .field0.tag == CharDestructured_171_Ref_t && dref730 .field1.tag == CharDestructured_171_Ref_t ) {
        size_t  i733 = (  from_dash_integral0 ( 0 ) );
        while ( (  cmp150 ( (  i733 ) , ( ( dref730 .field0 .stuff .CharDestructured_171_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq173 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref730 .field0 .stuff .CharDestructured_171_Ref_s .field0 ) .f_ptr ) ) + ( (int64_t ) (  i733 ) ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref730 .field1 .stuff .CharDestructured_171_Ref_s .field0 ) .f_ptr ) ) + ( (int64_t ) (  i733 ) ) ) ) ) ) ) ) {
                return ( false );
            }
            i733 = (  op_dash_add198 ( (  i733 ) , (  from_dash_integral0 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref730 .field0.tag == CharDestructured_171_Scalar_t && dref730 .field1.tag == CharDestructured_171_Scalar_t ) {
            return (  eq366 ( ( dref730 .field0 .stuff .CharDestructured_171_Scalar_s .field0 ) , ( dref730 .field1 .stuff .CharDestructured_171_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref730 .field0.tag == CharDestructured_171_Scalar_t && dref730 .field1.tag == CharDestructured_171_Ref_t ) {
                return (  eq173 ( ( (  u32_dash_u8183 ) ( ( dref730 .field0 .stuff .CharDestructured_171_Scalar_s .field0 ) ) ) , ( * ( ( dref730 .field1 .stuff .CharDestructured_171_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref730 .field0.tag == CharDestructured_171_Ref_t && dref730 .field1.tag == CharDestructured_171_Scalar_t ) {
                    return (  eq173 ( ( (  u32_dash_u8183 ) ( ( dref730 .field1 .stuff .CharDestructured_171_Scalar_s .field0 ) ) ) , ( * ( ( dref730 .field0 .stuff .CharDestructured_171_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

static  bool   lam363 (   struct env354* env ,    struct Char_47  cc2193 ) {
    return (  eq364 ( (  cc2193 ) , ( env->c2191 ) ) );
}

static  struct SplitIter_353   split_dash_by_dash_each361 (    struct StrView_20  s2189 ,    struct Char_47  c2191 ) {
    struct env354 envinst354 = {
        .c2191 =  c2191 ,
    };
    return ( (  split_dash_by_dash_filter362 ) ( (  s2189 ) ,  ( (struct envunion355){ .fun = (  bool  (*) (  struct env354*  ,    struct Char_47  ) )lam363 , .env =  envinst354 } ) ) );
}

struct Tuple2_369 {
    struct StrView_20  field0;
    int32_t  field1;
};

static struct Tuple2_369 Tuple2_369_Tuple2 (  struct StrView_20  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_369 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_368 {
    enum {
        Maybe_368_None_t,
        Maybe_368_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_369  field0;
        } Maybe_368_Just_s;
    } stuff;
};

static struct Maybe_368 Maybe_368_Just (  struct Tuple2_369  field0 ) {
    return ( struct Maybe_368 ) { .tag = Maybe_368_Just_t, .stuff = { .Maybe_368_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_112   next372 (    struct SplitIter_353 *  self2199 ) {
    if ( (  cmp150 ( ( ( * (  self2199 ) ) .f_last ) , ( ( ( ( * (  self2199 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_112) { .tag = Maybe_112_None_t } );
    }
    size_t  i2200 = ( ( * (  self2199 ) ) .f_last );
    while ( (  cmp150 ( (  i2200 ) , ( ( ( ( * (  self2199 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2201 = ( (  get_dash_ptr324 ) ( ( ( ( * (  self2199 ) ) .f_og ) .f_contents ) ,  (  i2200 ) ) );
        struct Char_47  c2202 = ( (  scan_dash_from_dash_mem188 ) ( (  ptr2201 ) ) );
        struct envunion355  temp373 = ( ( * (  self2199 ) ) .f_fun );
        if ( ( temp373.fun ( &temp373.env ,  (  c2202 ) ) ) ) {
            break;
        }
        i2200 = (  op_dash_add198 ( (  i2200 ) , ( (  next_dash_char189 ) ( (  ptr2201 ) ) ) ) );
    }
    struct StrView_20  line2203 = ( (  byte_dash_substr346 ) ( ( ( * (  self2199 ) ) .f_og ) ,  ( ( * (  self2199 ) ) .f_last ) ,  (  i2200 ) ) );
    i2200 = (  op_dash_add198 ( (  i2200 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2199 ) .f_last = (  i2200 );
    return ( ( Maybe_112_Just ) ( (  line2203 ) ) );
}

static  struct Maybe_112   next371 (    struct Drop_352 *  dref841 ) {
    while ( (  cmp150 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next372 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
        (* dref841 ) .field1 = (  op_dash_sub269 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next372 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
}

static  struct Maybe_368   next370 (    struct Zip_351 *  self908 ) {
    struct Zip_351  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_112  dref910 = ( (  next371 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_112_None_t ) {
            return ( (struct Maybe_368) { .tag = Maybe_368_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_112_Just_t ) {
                struct Maybe_238  dref912 = ( (  next239 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_238_None_t ) {
                    return ( (struct Maybe_368) { .tag = Maybe_368_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_238_Just_t ) {
                        ( (  next371 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next239 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_368_Just ) ( ( ( Tuple2_369_Tuple2 ) ( ( dref910 .stuff .Maybe_112_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_238_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion376 {
    struct List_10  (*fun) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  );
    struct env35 env;
};

static  enum Unit_6   insert378 (   struct env23* env ,    struct List_7 *  list2029 ,    size_t  i2031 ,    struct List_10  elem2033 ) {
    if ( ( (  cmp150 ( (  i2031 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i2031 ) , ( ( * (  list2029 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic218 ) ( ( ( StrConcat_219_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2031 ) ) ) ,  ( (  from_dash_string185 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2029 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq205 ( ( ( * (  list2029 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion24  temp379 = ( (struct envunion24){ .fun = (  enum Unit_6  (*) (  struct env4*  ,    struct List_7 *  ,    struct List_10  ) )add202 , .env =  env->envinst4 } );
        ( temp379.fun ( &temp379.env ,  (  list2029 ) ,  (  elem2033 ) ) );
        return ( Unit_6_Unit );
    }
    struct envunion25  temp380 = ( (struct envunion25){ .fun = (  enum Unit_6  (*) (  struct env1*  ,    struct List_7 *  ) )grow_dash_if_dash_full204 , .env =  env->envinst1 } );
    ( temp380.fun ( &temp380.env ,  (  list2029 ) ) );
    size_t  ii2034 = (  op_dash_sub269 ( ( ( * (  list2029 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp150 ( (  ii2034 ) , (  i2031 ) ) != 0 ) ) {
        ( (  set216 ) ( ( ( * (  list2029 ) ) .f_elements ) ,  (  op_dash_add198 ( (  ii2034 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get286 ) ( (  list2029 ) ,  (  ii2034 ) ) ) ) );
        if ( (  eq205 ( (  ii2034 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2034 = (  op_dash_sub269 ( (  ii2034 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set216 ) ( ( ( * (  list2029 ) ) .f_elements ) ,  (  i2031 ) ,  (  elem2033 ) ) );
    (*  list2029 ) .f_count = (  op_dash_add198 ( ( ( * (  list2029 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct envunion382 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

static  enum Unit_6   free383 (    struct List_10 *  list2010 ) {
    ( (  free333 ) ( ( ( * (  list2010 ) ) .f_al ) ,  ( ( * (  list2010 ) ) .f_elements ) ) );
    return ( Unit_6_Unit );
}

static  int32_t   add_dash_to_dash_spot285 (   struct env66* env ,    struct TextBuf_73 *  self3571 ,    struct Pos_19  p3573 ,    struct StrView_20  bytes3575 ) {
    enum CAllocator_8  al3576 = ( ( ( * (  self3571 ) ) .f_buf ) .f_al );
    struct List_7 *  buf3577 = ( & ( ( * (  self3571 ) ) .f_buf ) );
    struct List_10  extracted_dash_line_dash_buf3578 = ( (  get286 ) ( (  buf3577 ) ,  ( (  i32_dash_size228 ) ( ( (  p3573 ) .f_line ) ) ) ) );
    struct Slice_11  remaining3579 = ( (  from288 ) ( ( (  to_dash_slice293 ) ( (  extracted_dash_line_dash_buf3578 ) ) ) ,  ( (  i32_dash_size228 ) ( ( (  p3573 ) .f_bi ) ) ) ) );
    struct envunion69  temp295 = ( (struct envunion69){ .fun = (  struct List_10  (*) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  ) )from_dash_iter296 , .env =  env->envinst35 } );
    ( (  set294 ) ( (  buf3577 ) ,  ( (  i32_dash_size228 ) ( ( (  p3573 ) .f_line ) ) ) ,  ( temp295.fun ( &temp295.env ,  ( (  subslice289 ) ( ( (  to_dash_slice293 ) ( (  extracted_dash_line_dash_buf3578 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size228 ) ( ( (  p3573 ) .f_bi ) ) ) ) ) ,  (  al3576 ) ) ) ) );
    struct List_10 *  last_dash_line3580 = ( (  get_dash_ptr287 ) ( (  buf3577 ) ,  ( (  i32_dash_size228 ) ( ( (  p3573 ) .f_line ) ) ) ) );
    struct envunion68  temp335 = ( (struct envunion68){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all299 , .env =  env->envinst30 } );
    ( temp335.fun ( &temp335.env ,  (  last_dash_line3580 ) ,  ( ( (  or_dash_else336 ) ( ( (  head337 ) ( ( (  lines349 ) ( (  bytes3575 ) ) ) ) ) ,  ( (  from_dash_string185 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3581 = (  from_dash_integral38 ( 0 ) );
    struct Zip_351  temp350 =  into_dash_iter356 ( ( (  zip357 ) ( ( (  drop359 ) ( ( (  split_dash_by_dash_each361 ) ( (  bytes3575 ) ,  ( (  from_dash_charlike186 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from245 ) ( (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_368  __cond367 =  next370 (&temp350);
        if (  __cond367 .tag == 0 ) {
            break;
        }
        struct Tuple2_369  dref3582 =  __cond367 .stuff .Maybe_368_Just_s .field0;
        struct envunion376  temp375 = ( (struct envunion376){ .fun = (  struct List_10  (*) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  ) )from_dash_iter296 , .env =  env->envinst35 } );
        struct List_10  temp374 = ( temp375.fun ( &temp375.env ,  ( ( dref3582 .field0 ) .f_contents ) ,  (  al3576 ) ) );
        struct List_10 *  nuline3585 = ( &temp374 );
        size_t  next_dash_line3586 = ( (  i32_dash_size228 ) ( (  op_dash_add240 ( ( (  p3573 ) .f_line ) , ( dref3582 .field1 ) ) ) ) );
        struct envunion67  temp377 = ( (struct envunion67){ .fun = (  enum Unit_6  (*) (  struct env23*  ,    struct List_7 *  ,    size_t  ,    struct List_10  ) )insert378 , .env =  env->envinst23 } );
        ( temp377.fun ( &temp377.env ,  (  buf3577 ) ,  (  next_dash_line3586 ) ,  ( * (  nuline3585 ) ) ) );
        last_dash_line3580 = ( (  get_dash_ptr287 ) ( (  buf3577 ) ,  (  next_dash_line3586 ) ) );
        lines_dash_added3581 = (  op_dash_add240 ( (  lines_dash_added3581 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    struct envunion382  temp381 = ( (struct envunion382){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all299 , .env =  env->envinst30 } );
    ( temp381.fun ( &temp381.env ,  (  last_dash_line3580 ) ,  (  remaining3579 ) ) );
    ( (  free383 ) ( ( & (  extracted_dash_line_dash_buf3578 ) ) ) );
    return (  lines_dash_added3581 );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_151   cmp386 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  enum Ordering_151   cmp385 (    struct Pos_19  l3514 ,    struct Pos_19  r3516 ) {
    enum Ordering_151  dref3517 = ( (  cmp386 ) ( ( (  l3514 ) .f_line ) ,  ( (  r3516 ) .f_line ) ) );
    switch (  dref3517 ) {
        case Ordering_151_EQ : {
            return ( (  cmp386 ) ( ( (  l3514 ) .f_bi ) ,  ( (  r3516 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_151  els3518 =  dref3517;
            return (  els3518 );
            break;
        }
    }
}

static  struct Pos_19   min384 (    struct Pos_19  l1217 ,    struct Pos_19  r1219 ) {
    if ( (  cmp385 ( (  l1217 ) , (  r1219 ) ) == 0 ) ) {
        return (  l1217 );
    } else {
        return (  r1219 );
    }
}

static  struct Pos_19   max387 (    struct Pos_19  l1296 ,    struct Pos_19  r1298 ) {
    if ( (  cmp385 ( (  l1296 ) , (  r1298 ) ) == 2 ) ) {
        return (  l1296 );
    } else {
        return (  r1298 );
    }
}

static  size_t   size388 (    struct List_10 *  l2108 ) {
    return ( ( * (  l2108 ) ) .f_count );
}

struct StrConcat_394 {
    struct StrConcat_51  field0;
    struct Char_47  field1;
};

static struct StrConcat_394 StrConcat_394_StrConcat (  struct StrConcat_51  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_394 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_393 {
    struct StrConcat_394  field0;
    size_t  field1;
};

static struct StrConcat_393 StrConcat_393_StrConcat (  struct StrConcat_394  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_393 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_392 {
    struct StrConcat_393  field0;
    struct Char_47  field1;
};

static struct StrConcat_392 StrConcat_392_StrConcat (  struct StrConcat_393  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_392 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_397 {
    struct StrView_20  field0;
    struct StrConcat_392  field1;
};

static struct StrConcat_397 StrConcat_397_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_392  field1 ) {
    return ( struct StrConcat_397 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_396 {
    struct StrConcat_397  field0;
    struct Char_47  field1;
};

static struct StrConcat_396 StrConcat_396_StrConcat (  struct StrConcat_397  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_396 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str401 (    struct StrConcat_394  self1484 ) {
    struct StrConcat_394  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str166 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str400 (    struct StrConcat_393  self1484 ) {
    struct StrConcat_393  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str401 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str167 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str399 (    struct StrConcat_392  self1484 ) {
    struct StrConcat_392  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str400 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str398 (    struct StrConcat_397  self1484 ) {
    struct StrConcat_397  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str161 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str399 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str395 (    struct StrConcat_396  self1484 ) {
    struct StrConcat_396  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str398 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic391 (    struct StrConcat_392  errmsg1693 ) {
    ( (  print_dash_str395 ) ( ( ( StrConcat_396_StrConcat ) ( ( ( StrConcat_397_StrConcat ) ( ( (  from_dash_string185 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1693 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct Drop_403 {
    struct Zip_326  field0;
    size_t  field1;
};

static struct Drop_403 Drop_403_Drop (  struct Zip_326  field0 ,  size_t  field1 ) {
    return ( struct Drop_403 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env404 {
    size_t  num_dash_elems2042;
    ;
    struct List_10 *  list2037;
    ;
    ;
};

struct envunion405 {
    enum Unit_6  (*fun) (  struct env404*  ,    struct Tuple2_321  );
    struct env404 env;
};

static  struct Drop_403   into_dash_iter407 (    struct Drop_403  self839 ) {
    return (  self839 );
}

static  struct Maybe_329   next408 (    struct Drop_403 *  dref841 ) {
    while ( (  cmp150 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next330 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
        (* dref841 ) .field1 = (  op_dash_sub269 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next330 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
}

static  enum Unit_6   for_dash_each402 (    struct Drop_403  iterable1055 ,   struct envunion405  fun1057 ) {
    struct Drop_403  temp406 = ( (  into_dash_iter407 ) ( (  iterable1055 ) ) );
    struct Drop_403 *  it1058 = ( &temp406 );
    while ( ( true ) ) {
        struct Maybe_329  dref1059 = ( (  next408 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_329_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_329_Just_t ) {
                struct envunion405  temp409 = (  fun1057 );
                ( temp409.fun ( &temp409.env ,  ( dref1059 .stuff .Maybe_329_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Drop_403   drop410 (    struct Zip_326  iterable846 ,    size_t  i848 ) {
    struct Zip_326  it849 = ( (  into_dash_iter328 ) ( (  iterable846 ) ) );
    return ( ( Drop_403_Drop ) ( (  it849 ) ,  (  i848 ) ) );
}

static  struct SliceIter_303   into_dash_iter412 (    struct List_10  self2003 ) {
    return ( (  into_dash_iter305 ) ( ( (  subslice289 ) ( ( (  self2003 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2003 ) .f_count ) ) ) ) );
}

static  struct Zip_326   zip411 (    struct List_10  left916 ,    struct FromIter_232  right918 ) {
    struct SliceIter_303  left_dash_it919 = ( (  into_dash_iter412 ) ( (  left916 ) ) );
    struct FromIter_232  right_dash_it920 = ( (  into_dash_iter244 ) ( (  right918 ) ) );
    return ( (struct Zip_326) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  enum Unit_6   set414 (    struct List_10 *  list1996 ,    size_t  i1998 ,    uint8_t  elem2000 ) {
    if ( ( (  cmp150 ( (  i1998 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i1998 ) , ( ( * (  list1996 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic218 ) ( ( ( StrConcat_219_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i1998 ) ) ) ,  ( (  from_dash_string185 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list1996 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set323 ) ( ( ( * (  list1996 ) ) .f_elements ) ,  (  i1998 ) ,  (  elem2000 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam413 (   struct env404* env ,    struct Tuple2_321  dref2043 ) {
    return ( (  set414 ) ( ( env->list2037 ) ,  (  op_dash_sub269 ( ( (  i32_dash_size228 ) ( ( dref2043 .field1 ) ) ) , ( env->num_dash_elems2042 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct StrConcat_417 {
    struct StrConcat_220  field0;
    struct StrView_20  field1;
};

static struct StrConcat_417 StrConcat_417_StrConcat (  struct StrConcat_220  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_417 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_420 {
    struct StrView_20  field0;
    struct StrConcat_417  field1;
};

static struct StrConcat_420 StrConcat_420_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_417  field1 ) {
    return ( struct StrConcat_420 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_419 {
    struct StrConcat_420  field0;
    struct Char_47  field1;
};

static struct StrConcat_419 StrConcat_419_StrConcat (  struct StrConcat_420  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_419 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str422 (    struct StrConcat_417  self1484 ) {
    struct StrConcat_417  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str226 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str161 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str421 (    struct StrConcat_420  self1484 ) {
    struct StrConcat_420  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str161 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str422 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str418 (    struct StrConcat_419  self1484 ) {
    struct StrConcat_419  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str421 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic416 (    struct StrConcat_417  errmsg1693 ) {
    ( (  print_dash_str418 ) ( ( ( StrConcat_419_StrConcat ) ( ( ( StrConcat_420_StrConcat ) ( ( (  from_dash_string185 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1693 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct env424 {
    struct Slice_11  dest1834;
    ;
    ;
};

struct envunion425 {
    enum Unit_6  (*fun) (  struct env424*  ,    struct Tuple2_321  );
    struct env424 env;
};

static  enum Unit_6   for_dash_each423 (    struct Zip_326  iterable1055 ,   struct envunion425  fun1057 ) {
    struct Zip_326  temp426 = ( (  into_dash_iter328 ) ( (  iterable1055 ) ) );
    struct Zip_326 *  it1058 = ( &temp426 );
    while ( ( true ) ) {
        struct Maybe_329  dref1059 = ( (  next330 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_329_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_329_Just_t ) {
                struct envunion425  temp427 = (  fun1057 );
                ( temp427.fun ( &temp427.env ,  ( dref1059 .stuff .Maybe_329_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam428 (   struct env424* env ,    struct Tuple2_321  dref1835 ) {
    return ( (  set323 ) ( ( env->dest1834 ) ,  ( (  i32_dash_size228 ) ( ( dref1835 .field1 ) ) ) ,  ( dref1835 .field0 ) ) );
}

static  enum Unit_6   copy_dash_to415 (    struct Slice_11  src1832 ,    struct Slice_11  dest1834 ) {
    if ( (  cmp150 ( ( (  src1832 ) .f_count ) , ( (  dest1834 ) .f_count ) ) == 2 ) ) {
        ( (  panic416 ) ( ( ( StrConcat_417_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1832 ) .f_count ) ) ) ,  ( (  from_dash_string185 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1834 ) .f_count ) ) ) ,  ( (  from_dash_string185 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env424 envinst424 = {
        .dest1834 =  dest1834 ,
    };
    ( (  for_dash_each423 ) ( ( (  zip332 ) ( (  src1832 ) ,  ( (  from245 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion425){ .fun = (  enum Unit_6  (*) (  struct env424*  ,    struct Tuple2_321  ) )lam428 , .env =  envinst424 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   remove_dash_range390 (   struct env26* env ,    struct List_10 *  list2037 ,    size_t  from2039 ,    size_t  to_dash_excl2041 ) {
    if ( (  cmp150 ( (  to_dash_excl2041 ) , (  from2039 ) ) == 0 ) ) {
        ( (  panic391 ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_393_StrConcat ) ( ( ( StrConcat_394_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2039 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2041 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp150 ( (  from2039 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic218 ) ( ( ( StrConcat_219_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2039 ) ) ) ,  ( (  from_dash_string185 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2037 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp150 ( (  to_dash_excl2041 ) , ( ( * (  list2037 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic218 ) ( ( ( StrConcat_219_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2041 ) ) ) ,  ( (  from_dash_string185 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2037 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2042 = (  op_dash_sub269 ( (  to_dash_excl2041 ) , (  from2039 ) ) );
    struct env404 envinst404 = {
        .num_dash_elems2042 =  num_dash_elems2042 ,
        .list2037 =  list2037 ,
    };
    ( (  for_dash_each402 ) ( ( (  drop410 ) ( ( (  zip411 ) ( ( * (  list2037 ) ) ,  ( (  from245 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  op_dash_add198 ( (  from2039 ) , (  num_dash_elems2042 ) ) ) ) ) ,  ( (struct envunion405){ .fun = (  enum Unit_6  (*) (  struct env404*  ,    struct Tuple2_321  ) )lam413 , .env =  envinst404 } ) ) );
    (*  list2037 ) .f_count = (  op_dash_sub269 ( ( ( * (  list2037 ) ) .f_count ) , (  num_dash_elems2042 ) ) );
    size_t  capacity2046 = ( ( ( * (  list2037 ) ) .f_elements ) .f_count );
    if ( (  cmp150 ( (  op_dash_mul211 ( ( ( * (  list2037 ) ) .f_count ) , ( env->shrink_dash_factor2013 ) ) ) , (  capacity2046 ) ) == 0 ) ) {
        if ( (  eq205 ( ( ( * (  list2037 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free333 ) ( ( ( * (  list2037 ) ) .f_al ) ,  ( ( * (  list2037 ) ) .f_elements ) ) );
            (*  list2037 ) .f_elements = ( (  empty250 ) ( ) );
            return ( Unit_6_Unit );
        }
        size_t  new_dash_size2047 = (  op_dash_mul211 ( (  op_dash_add198 ( (  op_dash_div176 ( ( ( * (  list2037 ) ) .f_count ) , ( env->shrink_dash_factor2013 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2013 ) ) );
        struct Slice_11  new_dash_slice2048 = ( (  allocate314 ) ( ( ( * (  list2037 ) ) .f_al ) ,  (  new_dash_size2047 ) ) );
        ( (  copy_dash_to415 ) ( ( (  subslice289 ) ( ( ( * (  list2037 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2037 ) ) .f_count ) ) ) ,  (  new_dash_slice2048 ) ) );
        ( (  free333 ) ( ( ( * (  list2037 ) ) .f_al ) ,  ( ( * (  list2037 ) ) .f_elements ) ) );
        (*  list2037 ) .f_elements = (  new_dash_slice2048 );
    }
    return ( Unit_6_Unit );
}

struct envunion430 {
    int32_t  (*fun) (  struct env66*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct StrView_20  );
    struct env66 env;
};

static  enum Unit_6   trim431 (    struct List_10 *  l2090 ,    size_t  new_dash_count2092 ) {
    (*  l2090 ) .f_count = ( (  min292 ) ( (  new_dash_count2092 ) ,  ( ( * (  l2090 ) ) .f_count ) ) );
    return ( Unit_6_Unit );
}

static  int32_t   min432 (    int32_t  l1217 ,    int32_t  r1219 ) {
    if ( (  cmp386 ( (  l1217 ) , (  r1219 ) ) == 0 ) ) {
        return (  l1217 );
    } else {
        return (  r1219 );
    }
}

struct envunion434 {
    int32_t  (*fun) (  struct env66*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct StrView_20  );
    struct env66 env;
};

struct Maybe_436 {
    enum {
        Maybe_436_None_t,
        Maybe_436_Just_t,
    } tag;
    union {
        struct {
            struct Slice_11  field0;
        } Maybe_436_Just_s;
    } stuff;
};

static struct Maybe_436 Maybe_436_Just (  struct Slice_11  field0 ) {
    return ( struct Maybe_436 ) { .tag = Maybe_436_Just_t, .stuff = { .Maybe_436_Just_s = { .field0 = field0 } } };
};

static  struct Slice_11   or_dash_else435 (    struct Maybe_436  self1713 ,    struct Slice_11  alt1715 ) {
    struct Maybe_436  dref1716 = (  self1713 );
    if ( dref1716.tag == Maybe_436_None_t ) {
        return (  alt1715 );
    }
    else {
        if ( dref1716.tag == Maybe_436_Just_t ) {
            return ( dref1716 .stuff .Maybe_436_Just_s .field0 );
        }
    }
}

static  struct Maybe_436   fmap_dash_maybe437 (    struct Maybe_148  x1256 ,    struct Slice_11 (*  fun1258 )(    struct List_10  ) ) {
    struct Maybe_148  dref1259 = (  x1256 );
    if ( dref1259.tag == Maybe_148_None_t ) {
        return ( (struct Maybe_436) { .tag = Maybe_436_None_t } );
    }
    else {
        if ( dref1259.tag == Maybe_148_Just_t ) {
            return ( ( Maybe_436_Just ) ( ( (  fun1258 ) ( ( dref1259 .stuff .Maybe_148_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_148   try_dash_get438 (    struct List_7 *  list1991 ,    size_t  i1993 ) {
    if ( (  cmp150 ( (  i1993 ) , ( ( * (  list1991 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_148) { .tag = Maybe_148_None_t } );
    }
    return ( ( Maybe_148_Just ) ( ( (  get286 ) ( (  list1991 ) ,  (  i1993 ) ) ) ) );
}

struct StrConcat_443 {
    struct StrView_20  field0;
    struct StrView_20  field1;
};

static struct StrConcat_443 StrConcat_443_StrConcat (  struct StrView_20  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_443 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_442 {
    struct StrConcat_443  field0;
    struct Char_47  field1;
};

static struct StrConcat_442 StrConcat_442_StrConcat (  struct StrConcat_443  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_442 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str444 (    struct StrConcat_443  self1484 ) {
    struct StrConcat_443  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str161 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str161 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str441 (    struct StrConcat_442  self1484 ) {
    struct StrConcat_442  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str444 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   assert440 (    bool  cond1699 ,    struct StrView_20  msg1701 ) {
    if ( ( ! (  cond1699 ) ) ) {
        ( (  print_dash_str441 ) ( ( ( StrConcat_442_StrConcat ) ( ( ( StrConcat_443_StrConcat ) ( ( (  from_dash_string185 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1701 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    }
    return ( Unit_6_Unit );
}

struct Drop_448 {
    struct Zip_230  field0;
    size_t  field1;
};

static struct Drop_448 Drop_448_Drop (  struct Zip_230  field0 ,  size_t  field1 ) {
    return ( struct Drop_448 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env449 {
    size_t  num_dash_elems2042;
    ;
    struct List_7 *  list2037;
    ;
    ;
};

struct envunion450 {
    enum Unit_6  (*fun) (  struct env449*  ,    struct Tuple2_214  );
    struct env449 env;
};

static  struct Drop_448   into_dash_iter452 (    struct Drop_448  self839 ) {
    return (  self839 );
}

static  struct Maybe_235   next453 (    struct Drop_448 *  dref841 ) {
    while ( (  cmp150 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next236 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
        (* dref841 ) .field1 = (  op_dash_sub269 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next236 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
}

static  enum Unit_6   for_dash_each447 (    struct Drop_448  iterable1055 ,   struct envunion450  fun1057 ) {
    struct Drop_448  temp451 = ( (  into_dash_iter452 ) ( (  iterable1055 ) ) );
    struct Drop_448 *  it1058 = ( &temp451 );
    while ( ( true ) ) {
        struct Maybe_235  dref1059 = ( (  next453 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_235_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_235_Just_t ) {
                struct envunion450  temp454 = (  fun1057 );
                ( temp454.fun ( &temp454.env ,  ( dref1059 .stuff .Maybe_235_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Drop_448   drop455 (    struct Zip_230  iterable846 ,    size_t  i848 ) {
    struct Zip_230  it849 = ( (  into_dash_iter234 ) ( (  iterable846 ) ) );
    return ( ( Drop_448_Drop ) ( (  it849 ) ,  (  i848 ) ) );
}

static  struct Slice_9   subslice458 (    struct Slice_9  slice1763 ,    size_t  from1765 ,    size_t  to1767 ) {
    struct List_10 *  begin_dash_ptr1768 = ( (  offset_dash_ptr195 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64227 ) ( (  from1765 ) ) ) ) );
    if ( ( (  cmp150 ( (  from1765 ) , (  to1767 ) ) != 0 ) || (  cmp150 ( (  from1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_9) { .f_ptr = (  begin_dash_ptr1768 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1769 = (  op_dash_sub269 ( ( (  min292 ) ( (  to1767 ) ,  ( (  slice1763 ) .f_count ) ) ) , (  from1765 ) ) );
    return ( (struct Slice_9) { .f_ptr = (  begin_dash_ptr1768 ) , .f_count = (  count1769 ) } );
}

static  struct SliceIter_231   into_dash_iter457 (    struct List_7  self2003 ) {
    return ( (  into_dash_iter243 ) ( ( (  subslice458 ) ( ( (  self2003 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2003 ) .f_count ) ) ) ) );
}

static  struct Zip_230   zip456 (    struct List_7  left916 ,    struct FromIter_232  right918 ) {
    struct SliceIter_231  left_dash_it919 = ( (  into_dash_iter457 ) ( (  left916 ) ) );
    struct FromIter_232  right_dash_it920 = ( (  into_dash_iter244 ) ( (  right918 ) ) );
    return ( (struct Zip_230) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  enum Unit_6   lam459 (   struct env449* env ,    struct Tuple2_214  dref2043 ) {
    return ( (  set294 ) ( ( env->list2037 ) ,  (  op_dash_sub269 ( ( (  i32_dash_size228 ) ( ( dref2043 .field1 ) ) ) , ( env->num_dash_elems2042 ) ) ) ,  ( dref2043 .field0 ) ) );
}

struct env462 {
    struct Slice_9  dest1834;
    ;
    ;
};

struct envunion463 {
    enum Unit_6  (*fun) (  struct env462*  ,    struct Tuple2_214  );
    struct env462 env;
};

static  enum Unit_6   for_dash_each461 (    struct Zip_230  iterable1055 ,   struct envunion463  fun1057 ) {
    struct Zip_230  temp464 = ( (  into_dash_iter234 ) ( (  iterable1055 ) ) );
    struct Zip_230 *  it1058 = ( &temp464 );
    while ( ( true ) ) {
        struct Maybe_235  dref1059 = ( (  next236 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_235_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_235_Just_t ) {
                struct envunion463  temp465 = (  fun1057 );
                ( temp465.fun ( &temp465.env ,  ( dref1059 .stuff .Maybe_235_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam466 (   struct env462* env ,    struct Tuple2_214  dref1835 ) {
    return ( (  set216 ) ( ( env->dest1834 ) ,  ( (  i32_dash_size228 ) ( ( dref1835 .field1 ) ) ) ,  ( dref1835 .field0 ) ) );
}

static  enum Unit_6   copy_dash_to460 (    struct Slice_9  src1832 ,    struct Slice_9  dest1834 ) {
    if ( (  cmp150 ( ( (  src1832 ) .f_count ) , ( (  dest1834 ) .f_count ) ) == 2 ) ) {
        ( (  panic416 ) ( ( ( StrConcat_417_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1832 ) .f_count ) ) ) ,  ( (  from_dash_string185 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1834 ) .f_count ) ) ) ,  ( (  from_dash_string185 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env462 envinst462 = {
        .dest1834 =  dest1834 ,
    };
    ( (  for_dash_each461 ) ( ( (  zip242 ) ( (  src1832 ) ,  ( (  from245 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion463){ .fun = (  enum Unit_6  (*) (  struct env462*  ,    struct Tuple2_214  ) )lam466 , .env =  envinst462 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   remove_dash_range446 (   struct env27* env ,    struct List_7 *  list2037 ,    size_t  from2039 ,    size_t  to_dash_excl2041 ) {
    if ( (  cmp150 ( (  to_dash_excl2041 ) , (  from2039 ) ) == 0 ) ) {
        ( (  panic391 ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_393_StrConcat ) ( ( ( StrConcat_394_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2039 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2041 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp150 ( (  from2039 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic218 ) ( ( ( StrConcat_219_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2039 ) ) ) ,  ( (  from_dash_string185 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2037 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp150 ( (  to_dash_excl2041 ) , ( ( * (  list2037 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic218 ) ( ( ( StrConcat_219_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2041 ) ) ) ,  ( (  from_dash_string185 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2037 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2042 = (  op_dash_sub269 ( (  to_dash_excl2041 ) , (  from2039 ) ) );
    struct env449 envinst449 = {
        .num_dash_elems2042 =  num_dash_elems2042 ,
        .list2037 =  list2037 ,
    };
    ( (  for_dash_each447 ) ( ( (  drop455 ) ( ( (  zip456 ) ( ( * (  list2037 ) ) ,  ( (  from245 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  op_dash_add198 ( (  from2039 ) , (  num_dash_elems2042 ) ) ) ) ) ,  ( (struct envunion450){ .fun = (  enum Unit_6  (*) (  struct env449*  ,    struct Tuple2_214  ) )lam459 , .env =  envinst449 } ) ) );
    (*  list2037 ) .f_count = (  op_dash_sub269 ( ( ( * (  list2037 ) ) .f_count ) , (  num_dash_elems2042 ) ) );
    size_t  capacity2046 = ( ( ( * (  list2037 ) ) .f_elements ) .f_count );
    if ( (  cmp150 ( (  op_dash_mul211 ( ( ( * (  list2037 ) ) .f_count ) , ( env->shrink_dash_factor2013 ) ) ) , (  capacity2046 ) ) == 0 ) ) {
        if ( (  eq205 ( ( ( * (  list2037 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free246 ) ( ( ( * (  list2037 ) ) .f_al ) ,  ( ( * (  list2037 ) ) .f_elements ) ) );
            (*  list2037 ) .f_elements = ( (  empty134 ) ( ) );
            return ( Unit_6_Unit );
        }
        size_t  new_dash_size2047 = (  op_dash_mul211 ( (  op_dash_add198 ( (  op_dash_div176 ( ( ( * (  list2037 ) ) .f_count ) , ( env->shrink_dash_factor2013 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2013 ) ) );
        struct Slice_9  new_dash_slice2048 = ( (  allocate206 ) ( ( ( * (  list2037 ) ) .f_al ) ,  (  new_dash_size2047 ) ) );
        ( (  copy_dash_to460 ) ( ( (  subslice458 ) ( ( ( * (  list2037 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2037 ) ) .f_count ) ) ) ,  (  new_dash_slice2048 ) ) );
        ( (  free246 ) ( ( ( * (  list2037 ) ) .f_al ) ,  ( ( * (  list2037 ) ) .f_elements ) ) );
        (*  list2037 ) .f_elements = (  new_dash_slice2048 );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   change_dash_no_dash_action279 (   struct env70* env ,    struct TextBuf_73 *  self3589 ,    struct Pos_19  from3591 ,    struct Pos_19  to3593 ,    struct StrView_20  bytes3595 ) {
    if ( (  eq280 ( (  to3593 ) , (  from3591 ) ) ) ) {
        enum CAllocator_8  al3596 = ( ( ( * (  self3589 ) ) .f_buf ) .f_al );
        if ( ( (  eq205 ( ( (  size282 ) ( ( & ( ( * (  self3589 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size228 ) ( ( (  from3591 ) .f_line ) ) ) ) ) && (  eq281 ( ( (  from3591 ) .f_bi ) , (  from_dash_integral38 ( 0 ) ) ) ) ) ) {
            struct envunion77  temp283 = ( (struct envunion77){ .fun = (  enum Unit_6  (*) (  struct env4*  ,    struct List_7 *  ,    struct List_10  ) )add202 , .env =  env->envinst4 } );
            ( temp283.fun ( &temp283.env ,  ( & ( ( * (  self3589 ) ) .f_buf ) ) ,  ( (  mk249 ) ( (  al3596 ) ) ) ) );
        }
        struct envunion72  temp284 = ( (struct envunion72){ .fun = (  int32_t  (*) (  struct env66*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct StrView_20  ) )add_dash_to_dash_spot285 , .env =  env->envinst66 } );
        ( temp284.fun ( &temp284.env ,  (  self3589 ) ,  (  from3591 ) ,  (  bytes3595 ) ) );
    } else {
        struct Pos_19  from3597 = ( (  min384 ) ( (  from3591 ) ,  (  to3593 ) ) );
        struct Pos_19  to3598 = ( (  max387 ) ( (  from3597 ) ,  (  to3593 ) ) );
        struct List_7 *  lines_dash_buf3599 = ( & ( ( * (  self3589 ) ) .f_buf ) );
        struct List_10 *  first_dash_line3600 = ( (  get_dash_ptr287 ) ( (  lines_dash_buf3599 ) ,  ( (  i32_dash_size228 ) ( ( (  from3597 ) .f_line ) ) ) ) );
        if ( ( (  eq281 ( ( (  from3597 ) .f_line ) , ( (  to3598 ) .f_line ) ) ) && (  cmp386 ( ( (  to3598 ) .f_bi ) , (  op_dash_add240 ( ( (  size_dash_i32162 ) ( ( (  size388 ) ( (  first_dash_line3600 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion75  temp389 = ( (struct envunion75){ .fun = (  enum Unit_6  (*) (  struct env26*  ,    struct List_10 *  ,    size_t  ,    size_t  ) )remove_dash_range390 , .env =  env->envinst26 } );
            ( temp389.fun ( &temp389.env ,  (  first_dash_line3600 ) ,  ( (  i32_dash_size228 ) ( ( (  from3597 ) .f_bi ) ) ) ,  ( (  i32_dash_size228 ) ( ( (  to3598 ) .f_bi ) ) ) ) );
            struct envunion430  temp429 = ( (struct envunion430){ .fun = (  int32_t  (*) (  struct env66*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct StrView_20  ) )add_dash_to_dash_spot285 , .env =  env->envinst66 } );
            ( temp429.fun ( &temp429.env ,  (  self3589 ) ,  (  from3597 ) ,  (  bytes3595 ) ) );
        } else {
            ( (  trim431 ) ( (  first_dash_line3600 ) ,  ( (  i32_dash_size228 ) ( ( (  from3597 ) .f_bi ) ) ) ) );
            struct List_10 *  last_dash_line3601 = ( (  get_dash_ptr287 ) ( (  lines_dash_buf3599 ) ,  ( (  i32_dash_size228 ) ( ( (  to3598 ) .f_line ) ) ) ) );
            to3598 .f_bi = ( (  min432 ) ( ( (  to3598 ) .f_bi ) ,  (  op_dash_add240 ( ( (  size_dash_i32162 ) ( ( (  size388 ) ( (  last_dash_line3601 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
            if ( (  eq281 ( ( (  to3598 ) .f_bi ) , (  op_dash_add240 ( ( (  size_dash_i32162 ) ( ( (  size388 ) ( (  last_dash_line3601 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) {
                to3598 .f_line = (  op_dash_add240 ( ( (  to3598 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) );
                to3598 .f_bi = (  from_dash_integral38 ( 0 ) );
            }
            struct envunion434  temp433 = ( (struct envunion434){ .fun = (  int32_t  (*) (  struct env66*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct StrView_20  ) )add_dash_to_dash_spot285 , .env =  env->envinst66 } );
            int32_t  lines_dash_added3602 = ( temp433.fun ( &temp433.env ,  (  self3589 ) ,  (  from3597 ) ,  (  bytes3595 ) ) );
            to3598 .f_line = (  op_dash_add240 ( ( (  to3598 ) .f_line ) , (  lines_dash_added3602 ) ) );
            from3597 .f_line = (  op_dash_add240 ( ( (  from3597 ) .f_line ) , (  lines_dash_added3602 ) ) );
            struct Slice_11  last_dash_line3603 = ( (  or_dash_else435 ) ( ( (  fmap_dash_maybe437 ) ( ( (  try_dash_get438 ) ( (  lines_dash_buf3599 ) ,  ( (  i32_dash_size228 ) ( ( (  to3598 ) .f_line ) ) ) ) ) ,  (  to_dash_slice293 ) ) ) ,  ( (  empty250 ) ( ) ) ) );
            struct envunion71  temp439 = ( (struct envunion71){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all299 , .env =  env->envinst30 } );
            ( temp439.fun ( &temp439.env ,  (  first_dash_line3600 ) ,  ( (  from288 ) ( (  last_dash_line3603 ) ,  ( (  i32_dash_size228 ) ( ( (  to3598 ) .f_bi ) ) ) ) ) ) );
            ( (  assert440 ) ( (  cmp386 ( ( (  to3598 ) .f_line ) , ( (  from3597 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string185 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion76  temp445 = ( (struct envunion76){ .fun = (  enum Unit_6  (*) (  struct env27*  ,    struct List_7 *  ,    size_t  ,    size_t  ) )remove_dash_range446 , .env =  env->envinst27 } );
            ( temp445.fun ( &temp445.env ,  ( & ( ( * (  self3589 ) ) .f_buf ) ) ,  ( (  i32_dash_size228 ) ( (  op_dash_add240 ( ( (  from3597 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  op_dash_add198 ( ( (  i32_dash_size228 ) ( ( (  to3598 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_6_Unit );
}

static  struct Pos_19   mk467 (    int32_t  line3521 ,    int32_t  bi3523 ) {
    return ( (struct Pos_19) { .f_line = (  line3521 ) , .f_bi = (  bi3523 ) } );
}

struct StrConcat_471 {
    struct StrView_20  field0;
    const char*  field1;
};

static struct StrConcat_471 StrConcat_471_StrConcat (  struct StrView_20  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_471 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_470 {
    struct StrConcat_471  field0;
    struct Char_47  field1;
};

static struct StrConcat_470 StrConcat_470_StrConcat (  struct StrConcat_471  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_470 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_475 {
    struct StrView_20  field0;
    struct StrConcat_470  field1;
};

static struct StrConcat_475 StrConcat_475_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_470  field1 ) {
    return ( struct StrConcat_475 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_474 {
    struct StrConcat_475  field0;
    struct Char_47  field1;
};

static struct StrConcat_474 StrConcat_474_StrConcat (  struct StrConcat_475  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_474 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str479 (    const char*  self1379 ) {
    ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%s" ) ,  ( 2 ) ) ) ,  (  self1379 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str478 (    struct StrConcat_471  self1484 ) {
    struct StrConcat_471  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str161 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str479 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str477 (    struct StrConcat_470  self1484 ) {
    struct StrConcat_470  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str478 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str476 (    struct StrConcat_475  self1484 ) {
    struct StrConcat_475  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str161 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str477 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str473 (    struct StrConcat_474  self1484 ) {
    struct StrConcat_474  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str476 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic472 (    struct StrConcat_470  errmsg1693 ) {
    ( (  print_dash_str473 ) ( ( ( StrConcat_474_StrConcat ) ( ( ( StrConcat_475_StrConcat ) ( ( (  from_dash_string185 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1693 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  struct StrView_20   undefined480 (  ) {
    struct StrView_20  temp481;
    return (  temp481 );
}

static  struct StrView_20   or_dash_fail469 (    struct Maybe_112  x1706 ,    struct StrConcat_470  errmsg1708 ) {
    struct Maybe_112  dref1709 = (  x1706 );
    if ( dref1709.tag == Maybe_112_None_t ) {
        ( (  panic472 ) ( (  errmsg1708 ) ) );
        return ( (  undefined480 ) ( ) );
    }
    else {
        if ( dref1709.tag == Maybe_112_Just_t ) {
            return ( dref1709 .stuff .Maybe_112_Just_s .field0 );
        }
    }
}

static  const char*   from_dash_charlike483 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr488 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of489 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed486 (  ) {
    FILE *  temp487;
    FILE *  x570 = (  temp487 );
    ( ( memset ) ( ( (  cast_dash_ptr488 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of489 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  FILE *   null_dash_ptr485 (  ) {
    return ( (  zeroed486 ) ( ) );
}

static  bool   is_dash_ptr_dash_null484 (    FILE *  p580 ) {
    return ( (  p580 ) == ( (  null_dash_ptr485 ) ( ) ) );
}

static  int32_t   seek_dash_end490 (  ) {
    return (  from_dash_integral38 ( 2 ) );
}

static  int32_t   seek_dash_set491 (  ) {
    return (  from_dash_integral38 ( 0 ) );
}

static  struct Char_47   nullchar492 (  ) {
    return ( (  from_dash_charlike186 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_112   try_dash_read_dash_contents482 (    const char*  filename2882 ,    enum CAllocator_8  al2884 ) {
    FILE *  file2885 = ( ( fopen ) ( (  filename2882 ) ,  ( (  from_dash_charlike483 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null484 ) ( (  file2885 ) ) ) ) {
        return ( (struct Maybe_112) { .tag = Maybe_112_None_t } );
    }
    ( ( fseek ) ( (  file2885 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  seek_dash_end490 ) ( ) ) ) );
    int32_t  file_dash_size2886 = ( ( ftell ) ( (  file2885 ) ) );
    ( ( fseek ) ( (  file2885 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  seek_dash_set491 ) ( ) ) ) );
    struct Slice_11  file_dash_buf2887 = ( ( (  allocate314 ) ( (  al2884 ) ,  (  op_dash_add198 ( ( (  i32_dash_size228 ) ( (  file_dash_size2886 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2887 ) .f_ptr ) ,  (  file_dash_size2886 ) ,  (  from_dash_integral38 ( 1 ) ) ,  (  file2885 ) ) );
    ( (  set323 ) ( (  file_dash_buf2887 ) ,  ( (  i32_dash_size228 ) ( (  file_dash_size2886 ) ) ) ,  ( (  char_dash_u8345 ) ( ( (  nullchar492 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2885 ) ) );
    struct StrView_20  str2888 = ( (struct StrView_20) { .f_contents = ( (  subslice289 ) ( (  file_dash_buf2887 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub269 ( ( (  file_dash_buf2887 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_112_Just ) ( (  str2888 ) ) );
}

static  struct StrView_20   read_dash_contents468 (    const char*  filename2891 ,    enum CAllocator_8  al2893 ) {
    return ( (  or_dash_fail469 ) ( ( (  try_dash_read_dash_contents482 ) ( (  filename2891 ) ,  (  al2893 ) ) ) ,  ( ( StrConcat_470_StrConcat ) ( ( ( StrConcat_471_StrConcat ) ( ( (  from_dash_string185 ) ( ( "could not open file " ) ,  ( 20 ) ) ) ,  (  filename2891 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "!" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Pane_110   mk494 (    enum CAllocator_8  al3704 ,    struct TextBuf_73 *  buf3706 ) {
    return ( (struct Pane_110) { .f_buf = (  buf3706 ) , .f_cursor = ( (  mk467 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral38 ( 0 ) ) , .f_sel = ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) , .f_mode = ( Mode_111_Normal ) } );
}

struct envunion497 {
    struct Tui_58  (*fun) (  struct env54*  );
    struct env54 env;
};

static  struct Termios_60   undefined501 (  ) {
    struct Termios_60  temp502;
    return (  temp502 );
}

static  int32_t   stdin_dash_fileno503 (  ) {
    return (  from_dash_integral38 ( 0 ) );
}

static  struct termios *   cast_dash_ptr504 (    struct Termios_60 *  p359 ) {
    return ( (struct termios * ) (  p359 ) );
}

static  uint32_t   u32_dash_and505 (    uint32_t  l2781 ,    uint32_t  r2783 ) {
    return ( (  l2781 ) & (  r2783 ) );
}

static  uint32_t   u32_dash_neg506 (    uint32_t  l2786 ) {
    return ( ~ (  l2786 ) );
}

struct Array_508 {
    uint32_t _arr [4];
};

struct ArrayIter_510 {
    struct Array_508  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_510   into_dash_iter511 (    struct Array_508  self2291 ) {
    return ( (struct ArrayIter_510) { .f_backing = (  self2291 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_512 {
    enum {
        Maybe_512_None_t,
        Maybe_512_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_512_Just_s;
    } stuff;
};

static struct Maybe_512 Maybe_512_Just (  uint32_t  field0 ) {
    return ( struct Maybe_512 ) { .tag = Maybe_512_Just_t, .stuff = { .Maybe_512_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr516 (    struct Array_508 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   offset_dash_ptr517 (    uint32_t *  x338 ,    int64_t  count340 ) {
    uint32_t  temp518;
    return ( (uint32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul196 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp518 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr515 (    struct Array_508 *  arr2219 ,    size_t  i2222 ) {
    if ( ( (  cmp150 ( (  i2222 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i2222 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic154 ) ( ( ( StrConcat_155_StrConcat ) ( ( ( StrConcat_156_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2222 ) ) ) ,  ( (  from_dash_string185 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2223 = ( ( (  cast_dash_ptr516 ) ( (  arr2219 ) ) ) );
    return ( (  offset_dash_ptr517 ) ( (  p2223 ) ,  ( (int64_t ) (  i2222 ) ) ) );
}

static  uint32_t   get514 (    struct Array_508 *  arr2226 ,    size_t  i2229 ) {
    return ( * ( (  get_dash_ptr515 ) ( (  arr2226 ) ,  (  i2229 ) ) ) );
}

static  struct Maybe_512   next513 (    struct ArrayIter_510 *  self2298 ) {
    if ( (  cmp150 ( ( ( * (  self2298 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_512) { .tag = Maybe_512_None_t } );
    }
    uint32_t  e2300 = ( (  get514 ) ( ( & ( ( * (  self2298 ) ) .f_backing ) ) ,  ( ( * (  self2298 ) ) .f_cur ) ) );
    (*  self2298 ) .f_cur = (  op_dash_add198 ( ( ( * (  self2298 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_512_Just ) ( (  e2300 ) ) );
}

static  uint32_t   reduce509 (    struct Array_508  iterable1074 ,    uint32_t  base1076 ,    uint32_t (*  fun1078 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1079 = (  base1076 );
    struct ArrayIter_510  it1080 = ( (  into_dash_iter511 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_512  dref1081 = ( (  next513 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_512_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_512_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_512_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp519 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp519);
    exit ( 1 );
    ( Unit_6_Unit );
    uint32_t  temp520;
    return (  temp520 );
}

static  uint32_t   u32_dash_or521 (    uint32_t  l2773 ,    uint32_t  r2775 ) {
    return ( (  l2773 ) | (  r2775 ) );
}

static  uint32_t   u32_dash_ors507 (    struct Array_508  vals2778 ) {
    return ( (  reduce509 ) ( (  vals2778 ) ,  (  from_dash_integral181 ( 0 ) ) ,  (  u32_dash_or521 ) ) );
}

static  struct Array_508   from_dash_listlike522 (    struct Array_508  self330 ) {
    return (  self330 );
}

static  uint32_t   echo523 (  ) {
    return (  from_dash_integral181 ( 8 ) );
}

static  uint32_t   icanon524 (  ) {
    return (  from_dash_integral181 ( 2 ) );
}

static  uint32_t   isig525 (  ) {
    return (  from_dash_integral181 ( 1 ) );
}

static  uint32_t   iexten526 (  ) {
    return (  from_dash_integral181 ( 32768 ) );
}

struct Array_528 {
    uint32_t _arr [5];
};

struct ArrayIter_530 {
    struct Array_528  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_530   into_dash_iter531 (    struct Array_528  self2291 ) {
    return ( (struct ArrayIter_530) { .f_backing = (  self2291 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr535 (    struct Array_528 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr534 (    struct Array_528 *  arr2219 ,    size_t  i2222 ) {
    if ( ( (  cmp150 ( (  i2222 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i2222 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic154 ) ( ( ( StrConcat_155_StrConcat ) ( ( ( StrConcat_156_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2222 ) ) ) ,  ( (  from_dash_string185 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2223 = ( ( (  cast_dash_ptr535 ) ( (  arr2219 ) ) ) );
    return ( (  offset_dash_ptr517 ) ( (  p2223 ) ,  ( (int64_t ) (  i2222 ) ) ) );
}

static  uint32_t   get533 (    struct Array_528 *  arr2226 ,    size_t  i2229 ) {
    return ( * ( (  get_dash_ptr534 ) ( (  arr2226 ) ,  (  i2229 ) ) ) );
}

static  struct Maybe_512   next532 (    struct ArrayIter_530 *  self2298 ) {
    if ( (  cmp150 ( ( ( * (  self2298 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_512) { .tag = Maybe_512_None_t } );
    }
    uint32_t  e2300 = ( (  get533 ) ( ( & ( ( * (  self2298 ) ) .f_backing ) ) ,  ( ( * (  self2298 ) ) .f_cur ) ) );
    (*  self2298 ) .f_cur = (  op_dash_add198 ( ( ( * (  self2298 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_512_Just ) ( (  e2300 ) ) );
}

static  uint32_t   reduce529 (    struct Array_528  iterable1074 ,    uint32_t  base1076 ,    uint32_t (*  fun1078 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1079 = (  base1076 );
    struct ArrayIter_530  it1080 = ( (  into_dash_iter531 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_512  dref1081 = ( (  next532 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_512_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_512_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_512_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp536 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp536);
    exit ( 1 );
    ( Unit_6_Unit );
    uint32_t  temp537;
    return (  temp537 );
}

static  uint32_t   u32_dash_ors527 (    struct Array_528  vals2778 ) {
    return ( (  reduce529 ) ( (  vals2778 ) ,  (  from_dash_integral181 ( 0 ) ) ,  (  u32_dash_or521 ) ) );
}

static  struct Array_528   from_dash_listlike538 (    struct Array_528  self330 ) {
    return (  self330 );
}

static  uint32_t   brkint539 (  ) {
    return (  from_dash_integral181 ( 2 ) );
}

static  uint32_t   icrnl540 (  ) {
    return (  from_dash_integral181 ( 256 ) );
}

static  uint32_t   inpck541 (  ) {
    return (  from_dash_integral181 ( 16 ) );
}

static  uint32_t   istrip542 (  ) {
    return (  from_dash_integral181 ( 32 ) );
}

static  uint32_t   ixon543 (  ) {
    return (  from_dash_integral181 ( 1024 ) );
}

struct Array_545 {
    uint32_t _arr [1];
};

struct ArrayIter_547 {
    struct Array_545  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_547   into_dash_iter548 (    struct Array_545  self2291 ) {
    return ( (struct ArrayIter_547) { .f_backing = (  self2291 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr552 (    struct Array_545 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr551 (    struct Array_545 *  arr2219 ,    size_t  i2222 ) {
    if ( ( (  cmp150 ( (  i2222 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i2222 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic154 ) ( ( ( StrConcat_155_StrConcat ) ( ( ( StrConcat_156_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2222 ) ) ) ,  ( (  from_dash_string185 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2223 = ( ( (  cast_dash_ptr552 ) ( (  arr2219 ) ) ) );
    return ( (  offset_dash_ptr517 ) ( (  p2223 ) ,  ( (int64_t ) (  i2222 ) ) ) );
}

static  uint32_t   get550 (    struct Array_545 *  arr2226 ,    size_t  i2229 ) {
    return ( * ( (  get_dash_ptr551 ) ( (  arr2226 ) ,  (  i2229 ) ) ) );
}

static  struct Maybe_512   next549 (    struct ArrayIter_547 *  self2298 ) {
    if ( (  cmp150 ( ( ( * (  self2298 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_512) { .tag = Maybe_512_None_t } );
    }
    uint32_t  e2300 = ( (  get550 ) ( ( & ( ( * (  self2298 ) ) .f_backing ) ) ,  ( ( * (  self2298 ) ) .f_cur ) ) );
    (*  self2298 ) .f_cur = (  op_dash_add198 ( ( ( * (  self2298 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_512_Just ) ( (  e2300 ) ) );
}

static  uint32_t   reduce546 (    struct Array_545  iterable1074 ,    uint32_t  base1076 ,    uint32_t (*  fun1078 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1079 = (  base1076 );
    struct ArrayIter_547  it1080 = ( (  into_dash_iter548 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_512  dref1081 = ( (  next549 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_512_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_512_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_512_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp553 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp553);
    exit ( 1 );
    ( Unit_6_Unit );
    uint32_t  temp554;
    return (  temp554 );
}

static  uint32_t   u32_dash_ors544 (    struct Array_545  vals2778 ) {
    return ( (  reduce546 ) ( (  vals2778 ) ,  (  from_dash_integral181 ( 0 ) ) ,  (  u32_dash_or521 ) ) );
}

static  struct Array_545   from_dash_listlike555 (    struct Array_545  self330 ) {
    return (  self330 );
}

static  uint32_t   opost556 (  ) {
    return (  from_dash_integral181 ( 1 ) );
}

static  uint32_t   cs8557 (  ) {
    return (  from_dash_integral181 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr560 (    struct Array_61 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  uint8_t *   get_dash_ptr559 (    struct Array_61 *  arr2219 ,    size_t  i2222 ) {
    if ( ( (  cmp150 ( (  i2222 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i2222 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic154 ) ( ( ( StrConcat_155_StrConcat ) ( ( ( StrConcat_156_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2222 ) ) ) ,  ( (  from_dash_string185 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2223 = ( ( (  cast_dash_ptr560 ) ( (  arr2219 ) ) ) );
    return ( (  offset_dash_ptr290 ) ( (  p2223 ) ,  ( (int64_t ) (  i2222 ) ) ) );
}

static  enum Unit_6   set558 (    struct Array_61 *  arr2232 ,    size_t  i2235 ,    uint8_t  e2237 ) {
    uint8_t *  p2238 = ( (  get_dash_ptr559 ) ( (  arr2232 ) ,  (  i2235 ) ) );
    (*  p2238 ) = (  e2237 );
    return ( Unit_6_Unit );
}

static  size_t   vmin561 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime562 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush563 (  ) {
    return (  from_dash_integral38 ( 2 ) );
}

static  struct Termios_60   enable_dash_raw_dash_mode499 (  ) {
    struct Termios_60  temp500 = ( (  undefined501 ) ( ) );
    struct Termios_60 *  orig_dash_termios3240 = ( &temp500 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno503 ) ( ) ) ,  ( (  cast_dash_ptr504 ) ( (  orig_dash_termios3240 ) ) ) ) );
    struct Termios_60  raw3241 = ( * (  orig_dash_termios3240 ) );
    raw3241 .f_c_dash_lflag = ( (  u32_dash_and505 ) ( ( (  raw3241 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg506 ) ( ( (  u32_dash_ors507 ) ( ( (  from_dash_listlike522 ) ( ( (struct Array_508) { ._arr = { ( (  echo523 ) ( ) ) , ( (  icanon524 ) ( ) ) , ( (  isig525 ) ( ) ) , ( ( (  iexten526 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3241 .f_c_dash_iflag = ( (  u32_dash_and505 ) ( ( (  raw3241 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg506 ) ( ( (  u32_dash_ors527 ) ( ( (  from_dash_listlike538 ) ( ( (struct Array_528) { ._arr = { ( (  brkint539 ) ( ) ) , ( (  icrnl540 ) ( ) ) , ( (  inpck541 ) ( ) ) , ( (  istrip542 ) ( ) ) , ( ( (  ixon543 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3241 .f_c_dash_oflag = ( (  u32_dash_and505 ) ( ( (  raw3241 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg506 ) ( ( (  u32_dash_ors544 ) ( ( (  from_dash_listlike555 ) ( ( (struct Array_545) { ._arr = { ( ( (  opost556 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3241 .f_c_dash_cflag = ( (  u32_dash_or521 ) ( ( (  raw3241 ) .f_c_dash_cflag ) ,  ( (  cs8557 ) ( ) ) ) );
    ( (  set558 ) ( ( & ( (  raw3241 ) .f_c_dash_cc ) ) ,  ( (  vmin561 ) ( ) ) ,  (  from_dash_integral177 ( 0 ) ) ) );
    ( (  set558 ) ( ( & ( (  raw3241 ) .f_c_dash_cc ) ) ,  ( (  vtime562 ) ( ) ) ,  (  from_dash_integral177 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno503 ) ( ) ) ,  ( (  tcsa_dash_flush563 ) ( ) ) ,  ( (  cast_dash_ptr504 ) ( ( & (  raw3241 ) ) ) ) ) );
    return ( * (  orig_dash_termios3240 ) );
}

struct StrViewIter_567 {
    struct StrView_20  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_567   into_dash_iter569 (    struct StrViewIter_567  self1352 ) {
    return (  self1352 );
}

struct Maybe_570 {
    enum {
        Maybe_570_None_t,
        Maybe_570_Just_t,
    } tag;
    union {
        struct {
            struct Char_47  field0;
        } Maybe_570_Just_s;
    } stuff;
};

static struct Maybe_570 Maybe_570_Just (  struct Char_47  field0 ) {
    return ( struct Maybe_570 ) { .tag = Maybe_570_Just_t, .stuff = { .Maybe_570_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_570   next571 (    struct StrViewIter_567 *  self1355 ) {
    if ( (  cmp150 ( ( ( * (  self1355 ) ) .f_i ) , ( ( ( ( * (  self1355 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_570) { .tag = Maybe_570_None_t } );
    }
    uint8_t *  char_dash_ptr1356 = ( ( (  offset_dash_ptr290 ) ( ( (  cast187 ) ( ( ( ( ( * (  self1355 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64227 ) ( ( ( * (  self1355 ) ) .f_i ) ) ) ) ) );
    struct Char_47  char1357 = ( (  scan_dash_from_dash_mem188 ) ( (  char_dash_ptr1356 ) ) );
    (*  self1355 ) .f_i = (  op_dash_add198 ( ( ( * (  self1355 ) ) .f_i ) , ( (  char1357 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_570_Just ) ( (  char1357 ) ) );
}

static  enum Unit_6   for_dash_each566 (    struct StrViewIter_567  iterable1055 ,    enum Unit_6 (*  fun1057 )(    struct Char_47  ) ) {
    struct StrViewIter_567  temp568 = ( (  into_dash_iter569 ) ( (  iterable1055 ) ) );
    struct StrViewIter_567 *  it1058 = ( &temp568 );
    while ( ( true ) ) {
        struct Maybe_570  dref1059 = ( (  next571 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_570_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_570_Just_t ) {
                ( (  fun1057 ) ( ( dref1059 .stuff .Maybe_570_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct StrViewIter_567   into_dash_iter573 (    struct StrView_20  self1349 ) {
    return ( (struct StrViewIter_567) { .f_ds = (  self1349 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_567   chars572 (    struct StrView_20  self1363 ) {
    return ( (  into_dash_iter573 ) ( (  self1363 ) ) );
}

static  enum Unit_6   print565 (    struct StrView_20  s2526 ) {
    ( (  for_dash_each566 ) ( ( (  chars572 ) ( (  s2526 ) ) ) ,  (  printf_dash_char170 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   hide_dash_cursor564 (  ) {
    ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   reset_dash_colors574 (  ) {
    ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   clear_dash_screen575 (  ) {
    ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   enable_dash_mouse576 (  ) {
    ( (  print_dash_str161 ) ( ( (  from_dash_string185 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   flush_dash_stdout577 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr485 ) ( ) ) ) );
    return ( Unit_6_Unit );
}

static  bool   ptr_dash_eq581 (    enum Unit_6 *  l586 ,    enum Unit_6 *  r588 ) {
    return ( (  l586 ) == (  r588 ) );
}

static  enum Unit_6 *   cast582 (    const char*  x356 ) {
    return ( (enum Unit_6 * ) (  x356 ) );
}

static  void *   cast_dash_ptr586 (    enum Unit_6 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of587 (    enum Unit_6 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  enum Unit_6 *   zeroed584 (  ) {
    enum Unit_6 *  temp585;
    enum Unit_6 *  x570 = (  temp585 );
    ( ( memset ) ( ( (  cast_dash_ptr586 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of587 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  enum Unit_6 *   null_dash_ptr583 (  ) {
    return ( (  zeroed584 ) ( ) );
}

static  struct Maybe_273   from_dash_nullable_dash_c_dash_str580 (    const char*  s591 ) {
    if ( ( (  ptr_dash_eq581 ) ( ( (  cast582 ) ( (  s591 ) ) ) ,  ( ( (  null_dash_ptr583 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_273) { .tag = Maybe_273_None_t } );
    } else {
        return ( ( Maybe_273_Just ) ( (  s591 ) ) );
    }
}

static  struct Maybe_273   get579 (    const char*  s2559 ) {
    return ( (  from_dash_nullable_dash_c_dash_str580 ) ( ( ( getenv ) ( (  s2559 ) ) ) ) );
}

static  bool   eq588 (    const char*  l1672 ,    const char*  r1674 ) {
    return (  eq281 ( ( ( strcmp ) ( (  l1672 ) ,  (  r1674 ) ) ) , (  from_dash_integral38 ( 0 ) ) ) );
}

static  enum ColorPalette_59   query_dash_palette578 (  ) {
    struct Maybe_273  colorterm2560 = ( (  get579 ) ( ( (  from_dash_string39 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_273  dref2561 = (  colorterm2560 );
    if ( dref2561.tag == Maybe_273_Just_t ) {
        if ( ( (  eq588 ( ( dref2561 .stuff .Maybe_273_Just_s .field0 ) , ( (  from_dash_string39 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq588 ( ( dref2561 .stuff .Maybe_273_Just_s .field0 ) , ( (  from_dash_string39 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_59_PaletteRGB );
        }
    }
    else {
        if ( dref2561.tag == Maybe_273_None_t ) {
        }
    }
    struct Maybe_273  dref2563 = ( (  get579 ) ( ( (  from_dash_string39 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2563.tag == Maybe_273_Just_t ) {
        if ( (  eq588 ( ( dref2563 .stuff .Maybe_273_Just_s .field0 ) , ( (  from_dash_string39 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_59_Palette8 );
        }
    }
    else {
        if ( dref2563.tag == Maybe_273_None_t ) {
        }
    }
    return ( ColorPalette_59_Palette16 );
}

struct Tuple2_589 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_589 Tuple2_589_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_589 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_591 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr595 (    struct Winsize_591 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of596 (    struct Winsize_591  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Winsize_591   zeroed593 (  ) {
    struct Winsize_591  temp594;
    struct Winsize_591  x570 = (  temp594 );
    ( ( memset ) ( ( (  cast_dash_ptr595 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of596 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  int32_t   stdout_dash_fileno597 (  ) {
    return (  from_dash_integral38 ( 1 ) );
}

static  uint64_t   from_dash_integral599 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz598 (  ) {
    return (  from_dash_integral599 ( 21523 ) );
}

static  int32_t   op_dash_neg600 (    int32_t  x227 ) {
    return ( (  from_dash_integral38 ( 0 ) ) - (  x227 ) );
}

static  bool   eq601 (    uint16_t  l121 ,    uint16_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

static  uint16_t   from_dash_integral602 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr608 (    uint32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of609 (    uint32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint32_t   zeroed606 (  ) {
    uint32_t  temp607;
    uint32_t  x570 = (  temp607 );
    ( ( memset ) ( ( (  cast_dash_ptr608 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of609 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint16_t *   cast610 (    uint32_t *  x356 ) {
    return ( (uint16_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed604 (    uint16_t  x573 ) {
    uint32_t  temp605 = ( (  zeroed606 ) ( ) );
    uint32_t *  y574 = ( &temp605 );
    uint16_t *  yp575 = ( (  cast610 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u16_dash_u32603 (    uint16_t  x645 ) {
    return ( (  cast_dash_on_dash_zeroed604 ) ( (  x645 ) ) );
}

static  struct Tuple2_589   get_dash_dimensions590 (  ) {
    struct Winsize_591  temp592 = ( ( (  zeroed593 ) ( ) ) );
    struct Winsize_591 *  ws2548 = ( &temp592 );
    if ( ( (  eq281 ( ( ( ioctl ) ( ( (  stdout_dash_fileno597 ) ( ) ) ,  ( (  tiocgwinsz598 ) ( ) ) ,  (  ws2548 ) ) ) , (  op_dash_neg600 ( (  from_dash_integral38 ( 1 ) ) ) ) ) ) || (  eq601 ( ( ( * (  ws2548 ) ) .f_ws_dash_col ) , (  from_dash_integral602 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_589_Tuple2 ) ( (  from_dash_integral181 ( 80 ) ) ,  (  from_dash_integral181 ( 24 ) ) ) );
    }
    return ( ( Tuple2_589_Tuple2 ) ( ( (  u16_dash_u32603 ) ( ( ( * (  ws2548 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32603 ) ( ( ( * (  ws2548 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined613 (  ) {
    struct timespec  temp614;
    return (  temp614 );
}

static  int32_t   clock_dash_monotonic615 (  ) {
    return (  from_dash_integral38 ( 1 ) );
}

static  struct timespec   now611 (  ) {
    struct timespec  temp612 = ( (  undefined613 ) ( ) );
    struct timespec *  t3202 = ( &temp612 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic615 ) ( ) ) ,  (  t3202 ) ) );
    return ( * (  t3202 ) );
}

struct env616 {
    bool *  should_dash_resize3254;
};

struct envunion617 {
    enum Unit_6  (*fun) (  struct env616*  ,    int32_t  );
    struct env616 env;
};

struct envunion617  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig618 ) {
    struct envunion617  temp619 = _intr_sigarr [  __intr__sig618 ];
    temp619.fun ( &temp619.env ,  __intr__sig618 );
}

static  enum Unit_6  _intr_register_signal (    int32_t  __intr__sig620 ,   struct envunion617  __intr__fun621 ) {
    _intr_sigarr [  __intr__sig620 ] =  __intr__fun621;
    signal(  __intr__sig620 , _intr_sighandle );
    return Unit_6_Unit;
}

static  enum Unit_6   lam622 (   struct env616* env ,    int32_t  dref3261 ) {
    (* env->should_dash_resize3254 ) = ( true );
    return ( Unit_6_Unit );
}

static  uint32_t   fst623 (    struct Tuple2_589  dref1234 ) {
    return ( dref1234 .field0 );
}

static  uint32_t   snd624 (    struct Tuple2_589  dref1237 ) {
    return ( dref1237 .field1 );
}

static  struct Tui_58   mk498 (   struct env54* env ) {
    struct Termios_60  og_dash_termios3256 = ( (  enable_dash_raw_dash_mode499 ) ( ) );
    ( (  hide_dash_cursor564 ) ( ) );
    ( (  reset_dash_colors574 ) ( ) );
    ( (  clear_dash_screen575 ) ( ) );
    ( (  enable_dash_mouse576 ) ( ) );
    ( (  flush_dash_stdout577 ) ( ) );
    enum ColorPalette_59  palette3257 = ( (  query_dash_palette578 ) ( ) );
    struct Tuple2_589  dims3258 = ( (  get_dash_dimensions590 ) ( ) );
    uint32_t  fps3259 = (  from_dash_integral181 ( 60 ) );
    struct timespec  last_dash_sync3260 = ( (  now611 ) ( ) );
    struct env616 envinst616 = {
        .should_dash_resize3254 = env->should_dash_resize3254 ,
    };
    ( _intr_register_signal ( (  from_dash_integral38 ( 28 ) ) , ( (struct envunion617){ .fun = (  enum Unit_6  (*) (  struct env616*  ,    int32_t  ) )lam622 , .env =  envinst616 } ) ) );
    return ( (struct Tui_58) { .f_width = ( (  fst623 ) ( (  dims3258 ) ) ) , .f_height = ( (  snd624 ) ( (  dims3258 ) ) ) , .f_target_dash_fps = (  fps3259 ) , .f_actual_dash_fps = (  from_dash_integral181 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3260 ) , .f_fps_dash_ts = (  last_dash_sync3260 ) , .f_fps_dash_count = (  from_dash_integral181 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3256 ) , .f_palette = (  palette3257 ) , .f_should_dash_redraw = ( true ) } );
}

enum Color8_629 {
    Color8_629_Black8,
    Color8_629_Red8,
    Color8_629_Green8,
    Color8_629_Yellow8,
    Color8_629_Blue8,
    Color8_629_Magenta8,
    Color8_629_Cyan8,
    Color8_629_White8,
};

enum Color16_630 {
    Color16_630_Black16,
    Color16_630_Red16,
    Color16_630_Green16,
    Color16_630_Yellow16,
    Color16_630_Blue16,
    Color16_630_Magenta16,
    Color16_630_Cyan16,
    Color16_630_White16,
    Color16_630_BrightBlack16,
    Color16_630_BrightRed16,
    Color16_630_BrightGreen16,
    Color16_630_BrightYellow16,
    Color16_630_BrightBlue16,
    Color16_630_BrightMagenta16,
    Color16_630_BrightCyan16,
    Color16_630_BrightWhite16,
};

struct RGB_631 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_628 {
    enum {
        Color_628_ColorDefault_t,
        Color_628_Color8_t,
        Color_628_Color16_t,
        Color_628_Color256_t,
        Color_628_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_629  field0;
        } Color_628_Color8_s;
        struct {
            enum Color16_630  field0;
        } Color_628_Color16_s;
        struct {
            uint8_t  field0;
        } Color_628_Color256_s;
        struct {
            struct RGB_631  field0;
        } Color_628_ColorRGB_s;
    } stuff;
};

static struct Color_628 Color_628_Color8 (  enum Color8_629  field0 ) {
    return ( struct Color_628 ) { .tag = Color_628_Color8_t, .stuff = { .Color_628_Color8_s = { .field0 = field0 } } };
};

static struct Color_628 Color_628_Color16 (  enum Color16_630  field0 ) {
    return ( struct Color_628 ) { .tag = Color_628_Color16_t, .stuff = { .Color_628_Color16_s = { .field0 = field0 } } };
};

static struct Color_628 Color_628_Color256 (  uint8_t  field0 ) {
    return ( struct Color_628 ) { .tag = Color_628_Color256_t, .stuff = { .Color_628_Color256_s = { .field0 = field0 } } };
};

static struct Color_628 Color_628_ColorRGB (  struct RGB_631  field0 ) {
    return ( struct Color_628 ) { .tag = Color_628_ColorRGB_t, .stuff = { .Color_628_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_627 {
    struct Char_47  f_c;
    struct Color_628  f_fg;
    struct Color_628  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_626 {
    struct Cell_627 *  f_ptr;
    size_t  f_count;
};

struct Screen_625 {
    enum CAllocator_8  f_al;
    struct Tui_58 *  f_tui;
    struct Slice_626  f_current;
    struct Slice_626  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_628  f_default_dash_fg;
    struct Color_628  f_default_dash_bg;
};

struct TypeSize_636 {
    size_t  f_size;
};

static  struct TypeSize_636   get_dash_typesize635 (  ) {
    struct Cell_627  temp637;
    return ( (struct TypeSize_636) { .f_size = ( sizeof( ( (  temp637 ) ) ) ) } );
}

static  struct Cell_627 *   cast_dash_ptr638 (    void *  p359 ) {
    return ( (struct Cell_627 * ) (  p359 ) );
}

static  struct Slice_626   allocate634 (    enum CAllocator_8  dref1928 ,    size_t  count1930 ) {
    if (!(  dref1928 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1931 = ( ( ( (  get_dash_typesize635 ) ( ) ) ) .f_size );
    struct Cell_627 *  ptr1932 = ( (  cast_dash_ptr638 ) ( ( ( malloc ) ( (  op_dash_mul211 ( (  size1931 ) , (  count1930 ) ) ) ) ) ) );
    return ( (struct Slice_626) { .f_ptr = (  ptr1932 ) , .f_count = (  count1930 ) } );
}

static  void *   cast_dash_ptr644 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of645 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed642 (  ) {
    size_t  temp643;
    size_t  x570 = (  temp643 );
    ( ( memset ) ( ( (  cast_dash_ptr644 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of645 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint32_t *   cast646 (    size_t *  x356 ) {
    return ( (uint32_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed640 (    uint32_t  x573 ) {
    size_t  temp641 = ( (  zeroed642 ) ( ) );
    size_t *  y574 = ( &temp641 );
    uint32_t *  yp575 = ( (  cast646 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u32_dash_size639 (    uint32_t  x651 ) {
    return ( (  cast_dash_on_dash_zeroed640 ) ( (  x651 ) ) );
}

static  uint32_t   op_dash_mul647 (    uint32_t  l240 ,    uint32_t  r242 ) {
    return ( (  l240 ) * (  r242 ) );
}

struct Range_650 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_650 Range_650_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_650 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env651 {
    struct Cell_627 (*  fun1888 )(    struct Cell_627  );
    ;
    ;
    ;
    struct Slice_626  s1886;
};

struct envunion652 {
    enum Unit_6  (*fun) (  struct env651*  ,    int32_t  );
    struct env651 env;
};

struct RangeIter_653 {
    struct Range_650  field0;
    int32_t  field1;
};

static struct RangeIter_653 RangeIter_653_RangeIter (  struct Range_650  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_653 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_653   into_dash_iter655 (    struct Range_650  dref877 ) {
    return ( ( RangeIter_653_RangeIter ) ( ( ( Range_650_Range ) ( ( dref877 .field0 ) ,  ( dref877 .field1 ) ) ) ,  ( dref877 .field0 ) ) );
}

static  struct Maybe_238   next656 (    struct RangeIter_653 *  self885 ) {
    struct RangeIter_653  dref886 = ( * (  self885 ) );
    if ( true ) {
        if ( (  cmp386 ( ( dref886 .field1 ) , ( dref886 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_238) { .tag = Maybe_238_None_t } );
        }
        struct Maybe_238  x890 = ( ( Maybe_238_Just ) ( ( dref886 .field1 ) ) );
        (*  self885 ) = ( ( RangeIter_653_RangeIter ) ( ( ( Range_650_Range ) ( ( dref886 .field0 .field0 ) ,  ( dref886 .field0 .field1 ) ) ) ,  (  op_dash_add240 ( ( dref886 .field1 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
        return (  x890 );
    }
}

static  enum Unit_6   for_dash_each649 (    struct Range_650  iterable1055 ,   struct envunion652  fun1057 ) {
    struct RangeIter_653  temp654 = ( (  into_dash_iter655 ) ( (  iterable1055 ) ) );
    struct RangeIter_653 *  it1058 = ( &temp654 );
    while ( ( true ) ) {
        struct Maybe_238  dref1059 = ( (  next656 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_238_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_238_Just_t ) {
                struct envunion652  temp657 = (  fun1057 );
                ( temp657.fun ( &temp657.env ,  ( dref1059 .stuff .Maybe_238_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Range_650   to658 (    int32_t  from868 ,    int32_t  to870 ) {
    return ( ( Range_650_Range ) ( (  from868 ) ,  (  to870 ) ) );
}

static  struct Cell_627 *   offset_dash_ptr662 (    struct Cell_627 *  x338 ,    int64_t  count340 ) {
    struct Cell_627  temp663;
    return ( (struct Cell_627 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul196 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp663 ) ) ) ) ) ) ) ) );
}

static  struct Cell_627 *   get_dash_ptr661 (    struct Slice_626  slice1738 ,    size_t  i1740 ) {
    if ( ( (  cmp150 ( (  i1740 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i1740 ) , ( (  slice1738 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic218 ) ( ( ( StrConcat_219_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1740 ) ) ) ,  ( (  from_dash_string185 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1738 ) .f_count ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_627 *  elem_dash_ptr1741 = ( (  offset_dash_ptr662 ) ( ( (  slice1738 ) .f_ptr ) ,  ( (  size_dash_i64227 ) ( (  i1740 ) ) ) ) );
    return (  elem_dash_ptr1741 );
}

static  enum Unit_6   set660 (    struct Slice_626  slice1755 ,    size_t  i1757 ,    struct Cell_627  x1759 ) {
    struct Cell_627 *  ep1760 = ( (  get_dash_ptr661 ) ( (  slice1755 ) ,  (  i1757 ) ) );
    (*  ep1760 ) = (  x1759 );
    return ( Unit_6_Unit );
}

struct Maybe_667 {
    enum {
        Maybe_667_None_t,
        Maybe_667_Just_t,
    } tag;
    union {
        struct {
            struct Cell_627  field0;
        } Maybe_667_Just_s;
    } stuff;
};

static struct Maybe_667 Maybe_667_Just (  struct Cell_627  field0 ) {
    return ( struct Maybe_667 ) { .tag = Maybe_667_Just_t, .stuff = { .Maybe_667_Just_s = { .field0 = field0 } } };
};

static  struct Cell_627   undefined668 (  ) {
    struct Cell_627  temp669;
    return (  temp669 );
}

static  struct Cell_627   or_dash_fail666 (    struct Maybe_667  x1706 ,    struct StrConcat_219  errmsg1708 ) {
    struct Maybe_667  dref1709 = (  x1706 );
    if ( dref1709.tag == Maybe_667_None_t ) {
        ( (  panic218 ) ( (  errmsg1708 ) ) );
        return ( (  undefined668 ) ( ) );
    }
    else {
        if ( dref1709.tag == Maybe_667_Just_t ) {
            return ( dref1709 .stuff .Maybe_667_Just_s .field0 );
        }
    }
}

static  struct Maybe_667   try_dash_get670 (    struct Slice_626  slice1744 ,    size_t  i1746 ) {
    if ( ( (  cmp150 ( (  i1746 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i1746 ) , ( (  slice1744 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_667) { .tag = Maybe_667_None_t } );
    }
    struct Cell_627 *  elem_dash_ptr1747 = ( (  offset_dash_ptr662 ) ( ( (  slice1744 ) .f_ptr ) ,  ( (  size_dash_i64227 ) ( (  i1746 ) ) ) ) );
    return ( ( Maybe_667_Just ) ( ( * (  elem_dash_ptr1747 ) ) ) );
}

static  struct Cell_627   get665 (    struct Slice_626  slice1750 ,    size_t  i1752 ) {
    return ( (  or_dash_fail666 ) ( ( (  try_dash_get670 ) ( (  slice1750 ) ,  (  i1752 ) ) ) ,  ( ( StrConcat_219_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1752 ) ) ) ,  ( (  from_dash_string185 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1750 ) .f_count ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_627   elem_dash_get664 (    struct Slice_626  self1848 ,    size_t  idx1850 ) {
    return ( (  get665 ) ( (  self1848 ) ,  (  idx1850 ) ) );
}

static  enum Unit_6   lam659 (   struct env651* env ,    int32_t  i1890 ) {
    return ( (  set660 ) ( ( env->s1886 ) ,  ( (  i32_dash_size228 ) ( (  i1890 ) ) ) ,  ( ( env->fun1888 ) ( (  elem_dash_get664 ( ( env->s1886 ) , ( (  i32_dash_size228 ) ( (  i1890 ) ) ) ) ) ) ) ) );
}

static  enum Unit_6   map648 (    struct Slice_626  s1886 ,    struct Cell_627 (*  fun1888 )(    struct Cell_627  ) ) {
    struct env651 envinst651 = {
        .fun1888 =  fun1888 ,
        .s1886 =  s1886 ,
    };
    ( (  for_dash_each649 ) ( ( (  to658 ) ( (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_i32162 ) ( (  op_dash_sub269 ( ( (  s1886 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion652){ .fun = (  enum Unit_6  (*) (  struct env651*  ,    int32_t  ) )lam659 , .env =  envinst651 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Cell_627   default_dash_cell672 (  ) {
    return ( (struct Cell_627) { .f_c = ( (  from_dash_charlike186 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_628) { .tag = Color_628_ColorDefault_t } ) , .f_bg = ( (struct Color_628) { .tag = Color_628_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral38 ( 1 ) ) } );
}

static  struct Cell_627   lam671 (    struct Cell_627  dref3364 ) {
    return ( (  default_dash_cell672 ) ( ) );
}

struct env675 {
    struct Cell_627 (*  fun1888 )(    struct Cell_627  );
    ;
    ;
    ;
    struct Slice_626  s1886;
};

struct envunion676 {
    enum Unit_6  (*fun) (  struct env675*  ,    int32_t  );
    struct env675 env;
};

static  enum Unit_6   for_dash_each674 (    struct Range_650  iterable1055 ,   struct envunion676  fun1057 ) {
    struct RangeIter_653  temp677 = ( (  into_dash_iter655 ) ( (  iterable1055 ) ) );
    struct RangeIter_653 *  it1058 = ( &temp677 );
    while ( ( true ) ) {
        struct Maybe_238  dref1059 = ( (  next656 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_238_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_238_Just_t ) {
                struct envunion676  temp678 = (  fun1057 );
                ( temp678.fun ( &temp678.env ,  ( dref1059 .stuff .Maybe_238_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam679 (   struct env675* env ,    int32_t  i1890 ) {
    return ( (  set660 ) ( ( env->s1886 ) ,  ( (  i32_dash_size228 ) ( (  i1890 ) ) ) ,  ( ( env->fun1888 ) ( (  elem_dash_get664 ( ( env->s1886 ) , ( (  i32_dash_size228 ) ( (  i1890 ) ) ) ) ) ) ) ) );
}

static  enum Unit_6   map673 (    struct Slice_626  s1886 ,    struct Cell_627 (*  fun1888 )(    struct Cell_627  ) ) {
    struct env675 envinst675 = {
        .fun1888 =  fun1888 ,
        .s1886 =  s1886 ,
    };
    ( (  for_dash_each674 ) ( ( (  to658 ) ( (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_i32162 ) ( (  op_dash_sub269 ( ( (  s1886 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion676){ .fun = (  enum Unit_6  (*) (  struct env675*  ,    int32_t  ) )lam679 , .env =  envinst675 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Cell_627   lam680 (    struct Cell_627  dref3366 ) {
    return ( (  default_dash_cell672 ) ( ) );
}

static  struct Screen_625   mk_dash_screen633 (    struct Tui_58 *  tui3360 ,    enum CAllocator_8  al3362 ) {
    struct Slice_626  cur3363 = ( (  allocate634 ) ( (  al3362 ) ,  ( (  u32_dash_size639 ) ( (  op_dash_mul647 ( ( ( * (  tui3360 ) ) .f_width ) , ( ( * (  tui3360 ) ) .f_height ) ) ) ) ) ) );
    ( (  map648 ) ( (  cur3363 ) ,  (  lam671 ) ) );
    struct Slice_626  prev3365 = ( (  allocate634 ) ( (  al3362 ) ,  ( (  u32_dash_size639 ) ( (  op_dash_mul647 ( ( ( * (  tui3360 ) ) .f_width ) , ( ( * (  tui3360 ) ) .f_height ) ) ) ) ) ) );
    ( (  map673 ) ( (  prev3365 ) ,  (  lam680 ) ) );
    return ( (struct Screen_625) { .f_current = (  cur3363 ) , .f_previous = (  prev3365 ) , .f_al = (  al3362 ) , .f_tui = (  tui3360 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_628) { .tag = Color_628_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_628) { .tag = Color_628_ColorDefault_t } ) } );
}

enum MouseButton_688 {
    MouseButton_688_MouseLeft,
    MouseButton_688_MouseMiddle,
    MouseButton_688_MouseRight,
    MouseButton_688_ScrollUp,
    MouseButton_688_ScrollDown,
};

struct MouseEvent_687 {
    enum MouseButton_688  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_686 {
    enum {
        InputEvent_686_Key_t,
        InputEvent_686_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_121  field0;
        } InputEvent_686_Key_s;
        struct {
            struct MouseEvent_687  field0;
        } InputEvent_686_Mouse_s;
    } stuff;
};

static struct InputEvent_686 InputEvent_686_Key (  struct Key_121  field0 ) {
    return ( struct InputEvent_686 ) { .tag = InputEvent_686_Key_t, .stuff = { .InputEvent_686_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_686 InputEvent_686_Mouse (  struct MouseEvent_687  field0 ) {
    return ( struct InputEvent_686 ) { .tag = InputEvent_686_Mouse_t, .stuff = { .InputEvent_686_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_685 {
    enum {
        Maybe_685_None_t,
        Maybe_685_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_686  field0;
        } Maybe_685_Just_s;
    } stuff;
};

static struct Maybe_685 Maybe_685_Just (  struct InputEvent_686  field0 ) {
    return ( struct Maybe_685 ) { .tag = Maybe_685_Just_t, .stuff = { .Maybe_685_Just_s = { .field0 = field0 } } };
};

struct envunion684 {
    struct Maybe_685  (*fun) (  struct env56*  ,    struct Tui_58 *  );
    struct env56 env;
};

struct env683 {
    struct Tui_58 *  tui3964;
    struct env56 envinst56;
};

struct envunion689 {
    struct Maybe_685  (*fun) (  struct env683*  );
    struct env683 env;
};

struct FunIter_682 {
    struct envunion689  f_fun;
    bool  f_finished;
};

static  struct FunIter_682   into_dash_iter690 (    struct FunIter_682  self1022 ) {
    return (  self1022 );
}

static  struct FunIter_682   from_dash_function691 (   struct envunion689  fun1030 ) {
    return ( (struct FunIter_682) { .f_fun = (  fun1030 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions696 (   struct env55* env ,    struct Tui_58 *  tui3326 ) {
    if ( ( ! ( * ( env->should_dash_resize3254 ) ) ) ) {
        return ( false );
    }
    (*  tui3326 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3254 ) = ( false );
    struct Tuple2_589  dim3327 = ( (  get_dash_dimensions590 ) ( ) );
    uint32_t  w3328 = ( (  fst623 ) ( (  dim3327 ) ) );
    uint32_t  h3329 = ( (  snd624 ) ( (  dim3327 ) ) );
    (*  tui3326 ) .f_width = (  w3328 );
    (*  tui3326 ) .f_height = (  h3329 );
    return ( true );
}

static  char   undefined699 (  ) {
    char  temp700;
    return (  temp700 );
}

struct Maybe_701 {
    enum {
        Maybe_701_None_t,
        Maybe_701_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_701_Just_s;
    } stuff;
};

static struct Maybe_701 Maybe_701_Just (  char  field0 ) {
    return ( struct Maybe_701 ) { .tag = Maybe_701_Just_t, .stuff = { .Maybe_701_Just_s = { .field0 = field0 } } };
};

struct Pollfd_703 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr704 (    struct Pollfd_703 *  p359 ) {
    return ( (struct pollfd * ) (  p359 ) );
}

static  void *   cast_dash_ptr707 (    char *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of708 (    char  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  char   zeroed705 (  ) {
    char  temp706;
    char  x570 = (  temp706 );
    ( ( memset ) ( ( (  cast_dash_ptr707 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of708 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Maybe_701   read_dash_byte702 (    int32_t  timeout_dash_ms3248 ) {
    struct Pollfd_703  pfd3249 = ( (struct Pollfd_703) { .f_fd = (  from_dash_integral38 ( 0 ) ) , .f_events = (  from_dash_integral602 ( 1 ) ) , .f_revents = (  from_dash_integral602 ( 0 ) ) } );
    if ( (  cmp386 ( ( ( poll ) ( ( (  cast_dash_ptr704 ) ( ( & (  pfd3249 ) ) ) ) ,  (  from_dash_integral38 ( 1 ) ) ,  (  timeout_dash_ms3248 ) ) ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_701) { .tag = Maybe_701_None_t } );
    }
    char  c3250 = ( ( (  zeroed705 ) ( ) ) );
    if ( (  cmp386 ( ( ( read ) ( ( (  stdin_dash_fileno503 ) ( ) ) ,  ( (  cast_dash_ptr707 ) ( ( & (  c3250 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_701) { .tag = Maybe_701_None_t } );
    }
    return ( ( Maybe_701_Just ) ( (  c3250 ) ) );
}

static  uint8_t   ascii_dash_u8709 (    char  c770 ) {
    return ( ( (uint8_t ) (  c770 ) ) );
}

static  char   u8_dash_ascii710 (    uint8_t  b773 ) {
    return ( ( (char ) (  b773 ) ) );
}

static  uint8_t *   cast714 (    uint32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed712 (    uint8_t  x573 ) {
    uint32_t  temp713 = ( (  zeroed606 ) ( ) );
    uint32_t *  y574 = ( &temp713 );
    uint8_t *  yp575 = ( (  cast714 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u8_dash_u32711 (    uint8_t  x672 ) {
    return ( (  cast_dash_on_dash_zeroed712 ) ( (  x672 ) ) );
}

struct Map_717 {
    struct StrViewIter_567  field0;
    uint32_t (*  field1 )(    struct Char_47  );
};

static struct Map_717 Map_717_Map (  struct StrViewIter_567  field0 ,  uint32_t (*  field1 )(    struct Char_47  ) ) {
    return ( struct Map_717 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_717   into_dash_iter718 (    struct Map_717  self790 ) {
    return (  self790 );
}

static  struct Maybe_512   next719 (    struct Map_717 *  dref792 ) {
    struct Maybe_570  dref795 = ( (  next571 ) ( ( & ( (* dref792 ) .field0 ) ) ) );
    if ( dref795.tag == Maybe_570_None_t ) {
        return ( (struct Maybe_512) { .tag = Maybe_512_None_t } );
    }
    else {
        if ( dref795.tag == Maybe_570_Just_t ) {
            return ( ( Maybe_512_Just ) ( ( ( (* dref792 ) .field1 ) ( ( dref795 .stuff .Maybe_570_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce716 (    struct Map_717  iterable1074 ,    uint32_t  base1076 ,    uint32_t (*  fun1078 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1079 = (  base1076 );
    struct Map_717  it1080 = ( (  into_dash_iter718 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_512  dref1081 = ( (  next719 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_512_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_512_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_512_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp720 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp720);
    exit ( 1 );
    ( Unit_6_Unit );
    uint32_t  temp721;
    return (  temp721 );
}

static  struct Map_717   map722 (    struct StrView_20  iterable799 ,    uint32_t (*  fun801 )(    struct Char_47  ) ) {
    struct StrViewIter_567  it802 = ( (  into_dash_iter573 ) ( (  iterable799 ) ) );
    return ( ( Map_717_Map ) ( (  it802 ) ,  (  fun801 ) ) );
}

static  void *   cast_dash_ptr729 (    int64_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of730 (    int64_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int64_t   zeroed727 (  ) {
    int64_t  temp728;
    int64_t  x570 = (  temp728 );
    ( ( memset ) ( ( (  cast_dash_ptr729 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of730 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast731 (    int64_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   cast_dash_on_dash_zeroed725 (    uint8_t  x573 ) {
    int64_t  temp726 = ( (  zeroed727 ) ( ) );
    int64_t *  y574 = ( &temp726 );
    uint8_t *  yp575 = ( (  cast731 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int64_t   u8_dash_i64724 (    uint8_t  x666 ) {
    return ( (  cast_dash_on_dash_zeroed725 ) ( (  x666 ) ) );
}

struct StrConcat_734 {
    struct Char_47  field0;
    struct Char_47  field1;
};

static struct StrConcat_734 StrConcat_734_StrConcat (  struct Char_47  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_734 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_733 {
    struct StrConcat_734  field0;
    struct StrView_20  field1;
};

static struct StrConcat_733 StrConcat_733_StrConcat (  struct StrConcat_734  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_733 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_738 {
    struct StrView_20  field0;
    struct StrConcat_733  field1;
};

static struct StrConcat_738 StrConcat_738_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_733  field1 ) {
    return ( struct StrConcat_738 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_737 {
    struct StrConcat_738  field0;
    struct Char_47  field1;
};

static struct StrConcat_737 StrConcat_737_StrConcat (  struct StrConcat_738  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_737 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str741 (    struct StrConcat_734  self1484 ) {
    struct StrConcat_734  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str169 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str740 (    struct StrConcat_733  self1484 ) {
    struct StrConcat_733  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str741 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str161 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str739 (    struct StrConcat_738  self1484 ) {
    struct StrConcat_738  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str161 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str740 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str736 (    struct StrConcat_737  self1484 ) {
    struct StrConcat_737  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str739 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic735 (    struct StrConcat_733  errmsg1693 ) {
    ( (  print_dash_str736 ) ( ( ( StrConcat_737_StrConcat ) ( ( ( StrConcat_738_StrConcat ) ( ( (  from_dash_string185 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1693 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  uint8_t   or_dash_fail732 (    struct Maybe_306  x1706 ,    struct StrConcat_733  errmsg1708 ) {
    struct Maybe_306  dref1709 = (  x1706 );
    if ( dref1709.tag == Maybe_306_None_t ) {
        ( (  panic735 ) ( (  errmsg1708 ) ) );
        return ( (  undefined342 ) ( ) );
    }
    else {
        if ( dref1709.tag == Maybe_306_Just_t ) {
            return ( dref1709 .stuff .Maybe_306_Just_s .field0 );
        }
    }
}

static  enum Ordering_151   cmp743 (    struct Char_47  l742 ,    struct Char_47  r744 ) {
    if ( ( ( !  eq205 ( ( (  l742 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq205 ( ( (  r744 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp744 = ( (  from_dash_string39 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp744);
        exit ( 1 );
        ( Unit_6_Unit );
    }
    return ( (  cmp190 ) ( ( (  char_dash_u8345 ) ( (  l742 ) ) ) ,  ( (  char_dash_u8345 ) ( (  r744 ) ) ) ) );
}

static  uint8_t   op_dash_sub745 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  struct Maybe_306   hex_dash_digit742 (    struct Char_47  c2508 ) {
    if ( ( (  cmp743 ( (  c2508 ) , ( (  from_dash_charlike186 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp743 ( (  c2508 ) , ( (  from_dash_charlike186 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_306_Just ) ( (  op_dash_sub745 ( ( (  char_dash_u8345 ) ( (  c2508 ) ) ) , ( (  char_dash_u8345 ) ( ( (  from_dash_charlike186 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp743 ( (  c2508 ) , ( (  from_dash_charlike186 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp743 ( (  c2508 ) , ( (  from_dash_charlike186 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_306_Just ) ( (  op_dash_add191 ( (  op_dash_sub745 ( ( (  char_dash_u8345 ) ( (  c2508 ) ) ) , ( (  char_dash_u8345 ) ( ( (  from_dash_charlike186 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral177 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp743 ( (  c2508 ) , ( (  from_dash_charlike186 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp743 ( (  c2508 ) , ( (  from_dash_charlike186 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_306_Just ) ( (  op_dash_add191 ( (  op_dash_sub745 ( ( (  char_dash_u8345 ) ( (  c2508 ) ) ) , ( (  char_dash_u8345 ) ( ( (  from_dash_charlike186 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral177 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
}

static  uint32_t   lam723 (    struct Char_47  c2513 ) {
    return ( (  from_dash_integral181 ) ( ( (  u8_dash_i64724 ) ( ( (  or_dash_fail732 ) ( ( (  hex_dash_digit742 ) ( (  c2513 ) ) ) ,  ( ( StrConcat_733_StrConcat ) ( ( ( StrConcat_734_StrConcat ) ( ( (  from_dash_charlike186 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2513 ) ) ) ,  ( (  from_dash_string185 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   op_dash_add747 (    uint32_t  l230 ,    uint32_t  r232 ) {
    return ( (  l230 ) + (  r232 ) );
}

static  uint32_t   lam746 (    uint32_t  elem2515 ,    uint32_t  b2517 ) {
    return (  op_dash_add747 ( (  op_dash_mul647 ( (  b2517 ) , (  from_dash_integral181 ( 16 ) ) ) ) , (  elem2515 ) ) );
}

static  uint32_t   from_dash_hex715 (    struct StrView_20  arr2511 ) {
    return ( (  reduce716 ) ( ( (  map722 ) ( (  arr2511 ) ,  (  lam723 ) ) ) ,  (  from_dash_integral181 ( 0 ) ) ,  (  lam746 ) ) );
}

static  bool   eq749 (    char  l374 ,    char  r376 ) {
    return ( (  l374 ) == (  r376 ) );
}

static  char   from_dash_charlike750 (    uint8_t *  ptr369 ,    size_t  num_dash_bytes371 ) {
    if ( ( !  eq205 ( (  num_dash_bytes371 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp751 = ( (  from_dash_string39 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp751);
        exit ( 1 );
        ( Unit_6_Unit );
    }
    return ( ( (char ) ( * (  ptr369 ) ) ) );
}

struct Array_752 {
    char _arr [32];
};

static  void *   cast_dash_ptr756 (    struct Array_752 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of757 (    struct Array_752  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_752   zeroed754 (  ) {
    struct Array_752  temp755;
    struct Array_752  x570 = (  temp755 );
    ( ( memset ) ( ( (  cast_dash_ptr756 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of757 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr761 (    struct Array_752 *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  char *   offset_dash_ptr762 (    char *  x338 ,    int64_t  count340 ) {
    char  temp763;
    return ( (char * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul196 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp763 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr760 (    struct Array_752 *  arr2219 ,    size_t  i2222 ) {
    if ( ( (  cmp150 ( (  i2222 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i2222 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic154 ) ( ( ( StrConcat_155_StrConcat ) ( ( ( StrConcat_156_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2222 ) ) ) ,  ( (  from_dash_string185 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2223 = ( ( (  cast_dash_ptr761 ) ( (  arr2219 ) ) ) );
    return ( (  offset_dash_ptr762 ) ( (  p2223 ) ,  ( (int64_t ) (  i2222 ) ) ) );
}

static  enum Unit_6   set759 (    struct Array_752 *  arr2232 ,    size_t  i2235 ,    char  e2237 ) {
    char *  p2238 = ( (  get_dash_ptr760 ) ( (  arr2232 ) ,  (  i2235 ) ) );
    (*  p2238 ) = (  e2237 );
    return ( Unit_6_Unit );
}

struct Slice_765 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail768 (    struct Maybe_701  x1706 ,    struct StrConcat_219  errmsg1708 ) {
    struct Maybe_701  dref1709 = (  x1706 );
    if ( dref1709.tag == Maybe_701_None_t ) {
        ( (  panic218 ) ( (  errmsg1708 ) ) );
        return ( (  undefined699 ) ( ) );
    }
    else {
        if ( dref1709.tag == Maybe_701_Just_t ) {
            return ( dref1709 .stuff .Maybe_701_Just_s .field0 );
        }
    }
}

static  struct Maybe_701   try_dash_get769 (    struct Slice_765  slice1744 ,    size_t  i1746 ) {
    if ( ( (  cmp150 ( (  i1746 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i1746 ) , ( (  slice1744 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_701) { .tag = Maybe_701_None_t } );
    }
    char *  elem_dash_ptr1747 = ( (  offset_dash_ptr762 ) ( ( (  slice1744 ) .f_ptr ) ,  ( (  size_dash_i64227 ) ( (  i1746 ) ) ) ) );
    return ( ( Maybe_701_Just ) ( ( * (  elem_dash_ptr1747 ) ) ) );
}

static  char   get767 (    struct Slice_765  slice1750 ,    size_t  i1752 ) {
    return ( (  or_dash_fail768 ) ( ( (  try_dash_get769 ) ( (  slice1750 ) ,  (  i1752 ) ) ) ,  ( ( StrConcat_219_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1752 ) ) ) ,  ( (  from_dash_string185 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1750 ) .f_count ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get766 (    struct Slice_765  self1848 ,    size_t  idx1850 ) {
    return ( (  get767 ) ( (  self1848 ) ,  (  idx1850 ) ) );
}

struct Scanner_770 {
    struct StrViewIter_567  f_s;
};

static  struct Scanner_770   mk_dash_from_dash_str772 (    struct StrView_20  s3121 ) {
    return ( (struct Scanner_770) { .f_s = ( (  chars572 ) ( (  s3121 ) ) ) } );
}

static  int32_t   op_dash_sub775 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) - (  r214 ) );
}

static  uint8_t *   offset_dash_ptr_prime_777 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr290 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_20   substr773 (    struct StrView_20  s2144 ,    size_t  from2146 ,    size_t  to2148 ) {
    size_t  from_dash_bs2149 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_653  temp774 =  into_dash_iter655 ( ( (  to658 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub775 ( ( (  size_dash_i32162 ) ( (  from2146 ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_238  __cond776 =  next656 (&temp774);
        if (  __cond776 .tag == 0 ) {
            break;
        }
        int32_t  dref2150 =  __cond776 .stuff .Maybe_238_Just_s .field0;
        if ( (  cmp150 ( (  from_dash_bs2149 ) , ( ( (  s2144 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2149 = (  op_dash_add198 ( (  from_dash_bs2149 ) , ( (  next_dash_char189 ) ( ( (  offset_dash_ptr_prime_777 ) ( ( ( (  s2144 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2149 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2151 = (  from_dash_bs2149 );
    struct RangeIter_653  temp778 =  into_dash_iter655 ( ( (  to658 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub775 ( (  op_dash_sub775 ( ( (  size_dash_i32162 ) ( (  to2148 ) ) ) , ( (  size_dash_i32162 ) ( (  from2146 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_238  __cond779 =  next656 (&temp778);
        if (  __cond779 .tag == 0 ) {
            break;
        }
        int32_t  dref2152 =  __cond779 .stuff .Maybe_238_Just_s .field0;
        if ( (  cmp150 ( (  to_dash_bs2151 ) , ( ( (  s2144 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2151 = (  op_dash_add198 ( (  to_dash_bs2151 ) , ( (  next_dash_char189 ) ( ( (  offset_dash_ptr_prime_777 ) ( ( ( (  s2144 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2151 ) ) ) ) ) ) );
    }
    return ( (struct StrView_20) { .f_contents = ( (  subslice289 ) ( ( (  s2144 ) .f_contents ) ,  (  from_dash_bs2149 ) ,  (  to_dash_bs2151 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr782 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice781 (    struct Slice_765  s1913 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr782 ) ( ( (  s1913 ) .f_ptr ) ) ) , .f_count = ( (  s1913 ) .f_count ) } );
}

static  struct StrView_20   from_dash_ascii_dash_slice780 (    struct Slice_765  sl2121 ) {
    return ( (struct StrView_20) { .f_contents = ( (  cast_dash_slice781 ) ( (  sl2121 ) ) ) } );
}

struct Maybe_783 {
    enum {
        Maybe_783_None_t,
        Maybe_783_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_783_Just_s;
    } stuff;
};

static struct Maybe_783 Maybe_783_Just (  int64_t  field0 ) {
    return ( struct Maybe_783 ) { .tag = Maybe_783_Just_t, .stuff = { .Maybe_783_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_785 {
    struct Scanner_770  f_it;
    bool (*  f_pred )(    struct Char_47  );
};

static  struct Scanner_770   into_dash_iter788 (    struct Scanner_770  self3112 ) {
    return (  self3112 );
}

static  struct Scanner_770   into_dash_iter787 (    struct Scanner_770 *  self779 ) {
    return ( (  into_dash_iter788 ) ( ( * (  self779 ) ) ) );
}

static  struct TakeWhile_785   take_dash_while786 (    struct Scanner_770 *  it964 ,    bool (*  pred966 )(    struct Char_47  ) ) {
    return ( (struct TakeWhile_785) { .f_it = ( (  into_dash_iter787 ) ( (  it964 ) ) ) , .f_pred = (  pred966 ) } );
}

static  bool   is_dash_digit789 (    struct Char_47  c2420 ) {
    return ( (  cmp190 ( ( (  char_dash_u8345 ) ( (  c2420 ) ) ) , ( (  char_dash_u8345 ) ( ( (  from_dash_charlike186 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp190 ( ( (  char_dash_u8345 ) ( (  c2420 ) ) ) , ( (  char_dash_u8345 ) ( ( (  from_dash_charlike186 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_570   next793 (    struct Scanner_770 *  self3109 ) {
    return ( (  next571 ) ( ( & ( ( * (  self3109 ) ) .f_s ) ) ) );
}

static  struct Maybe_570   next792 (    struct TakeWhile_785 *  self958 ) {
    struct Maybe_570  mx959 = ( (  next793 ) ( ( & ( ( * (  self958 ) ) .f_it ) ) ) );
    struct Maybe_570  dref960 = (  mx959 );
    if ( dref960.tag == Maybe_570_None_t ) {
        return ( (struct Maybe_570) { .tag = Maybe_570_None_t } );
    }
    else {
        if ( dref960.tag == Maybe_570_Just_t ) {
            if ( ( ( ( * (  self958 ) ) .f_pred ) ( ( dref960 .stuff .Maybe_570_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_570_Just ) ( ( dref960 .stuff .Maybe_570_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_570) { .tag = Maybe_570_None_t } );
            }
        }
    }
}

static  struct TakeWhile_785   into_dash_iter795 (    struct TakeWhile_785  self955 ) {
    return (  self955 );
}

static  struct Maybe_570   head791 (    struct TakeWhile_785  it1123 ) {
    struct TakeWhile_785  temp794 = ( (  into_dash_iter795 ) ( (  it1123 ) ) );
    return ( (  next792 ) ( ( &temp794 ) ) );
}

static  bool   null790 (    struct TakeWhile_785  it1132 ) {
    struct Maybe_570  dref1133 = ( (  head791 ) ( (  it1132 ) ) );
    if ( dref1133.tag == Maybe_570_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env798 {
    ;
    struct Scanner_770 *  it1167;
};

struct envunion799 {
    struct Maybe_570  (*fun) (  struct env798*  ,    int32_t  );
    struct env798 env;
};

static  enum Unit_6   for_dash_each797 (    struct Range_650  iterable1055 ,   struct envunion799  fun1057 ) {
    struct RangeIter_653  temp800 = ( (  into_dash_iter655 ) ( (  iterable1055 ) ) );
    struct RangeIter_653 *  it1058 = ( &temp800 );
    while ( ( true ) ) {
        struct Maybe_238  dref1059 = ( (  next656 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_238_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_238_Just_t ) {
                struct envunion799  temp801 = (  fun1057 );
                ( temp801.fun ( &temp801.env ,  ( dref1059 .stuff .Maybe_238_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Maybe_570   lam802 (   struct env798* env ,    int32_t  dref1170 ) {
    return ( (  next793 ) ( ( env->it1167 ) ) );
}

static  enum Unit_6   drop_prime_796 (    struct Scanner_770 *  it1167 ,    size_t  n1169 ) {
    struct env798 envinst798 = {
        .it1167 =  it1167 ,
    };
    ( (  for_dash_each797 ) ( ( (  to658 ) ( (  from_dash_integral38 ( 1 ) ) ,  ( (  size_dash_i32162 ) ( (  n1169 ) ) ) ) ) ,  ( (struct envunion799){ .fun = (  struct Maybe_570  (*) (  struct env798*  ,    int32_t  ) )lam802 , .env =  envinst798 } ) ) );
    return ( Unit_6_Unit );
}

static  size_t   reduce804 (    struct TakeWhile_785  iterable1074 ,    size_t  base1076 ,    size_t (*  fun1078 )(    struct Char_47  ,    size_t  ) ) {
    size_t  x1079 = (  base1076 );
    struct TakeWhile_785  it1080 = ( (  into_dash_iter795 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_570  dref1081 = ( (  next792 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_570_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_570_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_570_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp805 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp805);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp806;
    return (  temp806 );
}

static  size_t   lam807 (    struct Char_47  dref1086 ,    size_t  x1088 ) {
    return (  op_dash_add198 ( (  x1088 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count803 (    struct TakeWhile_785  it1085 ) {
    return ( (  reduce804 ) ( (  it1085 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam807 ) ) );
}

static  struct TakeWhile_785   chars809 (    struct TakeWhile_785  self1632 ) {
    return (  self1632 );
}

static  struct Maybe_783   reduce810 (    struct TakeWhile_785  iterable1074 ,    struct Maybe_783  base1076 ,    struct Maybe_783 (*  fun1078 )(    struct Char_47  ,    struct Maybe_783  ) ) {
    struct Maybe_783  x1079 = (  base1076 );
    struct TakeWhile_785  it1080 = ( (  into_dash_iter795 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_570  dref1081 = ( (  next792 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_570_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_570_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_570_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp811 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp811);
    exit ( 1 );
    ( Unit_6_Unit );
    struct Maybe_783  temp812;
    return (  temp812 );
}

static  void *   cast_dash_ptr820 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of821 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed818 (  ) {
    int32_t  temp819;
    int32_t  x570 = (  temp819 );
    ( ( memset ) ( ( (  cast_dash_ptr820 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of821 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast822 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed816 (    uint8_t  x573 ) {
    int32_t  temp817 = ( (  zeroed818 ) ( ) );
    int32_t *  y574 = ( &temp817 );
    uint8_t *  yp575 = ( (  cast822 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int32_t   u8_dash_i32815 (    uint8_t  x669 ) {
    return ( (  cast_dash_on_dash_zeroed816 ) ( (  x669 ) ) );
}

static  struct Maybe_238   parse_dash_digit814 (    struct Char_47  c2423 ) {
    if ( ( (  is_dash_digit789 ) ( (  c2423 ) ) ) ) {
        return ( ( Maybe_238_Just ) ( ( (  u8_dash_i32815 ) ( (  op_dash_sub745 ( ( (  char_dash_u8345 ) ( (  c2423 ) ) ) , ( (  char_dash_u8345 ) ( ( (  from_dash_charlike186 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_238) { .tag = Maybe_238_None_t } );
    }
}

static  int64_t   op_dash_add823 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  int64_t   i32_dash_i64824 (    int32_t  x606 ) {
    return ( (int64_t ) (  x606 ) );
}

static  struct Maybe_783   sequence_dash_maybe813 (    struct Char_47  e2429 ,    struct Maybe_783  b2431 ) {
    struct Maybe_783  dref2432 = (  b2431 );
    if ( dref2432.tag == Maybe_783_None_t ) {
        return ( (struct Maybe_783) { .tag = Maybe_783_None_t } );
    }
    else {
        if ( dref2432.tag == Maybe_783_Just_t ) {
            struct Maybe_238  dref2434 = ( (  parse_dash_digit814 ) ( (  e2429 ) ) );
            if ( dref2434.tag == Maybe_238_None_t ) {
                return ( (struct Maybe_783) { .tag = Maybe_783_None_t } );
            }
            else {
                if ( dref2434.tag == Maybe_238_Just_t ) {
                    return ( ( Maybe_783_Just ) ( (  op_dash_add823 ( (  op_dash_mul196 ( ( dref2432 .stuff .Maybe_783_Just_s .field0 ) , (  from_dash_integral268 ( 10 ) ) ) ) , ( (  i32_dash_i64824 ) ( ( dref2434 .stuff .Maybe_238_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_783   parse_dash_int808 (    struct TakeWhile_785  s2426 ) {
    struct TakeWhile_785  cs2436 = ( (  chars809 ) ( (  s2426 ) ) );
    struct Maybe_570  dref2437 = ( (  head791 ) ( (  cs2436 ) ) );
    if ( dref2437.tag == Maybe_570_Just_t ) {
        return ( (  reduce810 ) ( (  cs2436 ) ,  ( ( Maybe_783_Just ) ( (  from_dash_integral268 ( 0 ) ) ) ) ,  (  sequence_dash_maybe813 ) ) );
    }
    else {
        if ( dref2437.tag == Maybe_570_None_t ) {
            return ( (struct Maybe_783) { .tag = Maybe_783_None_t } );
        }
    }
}

static  struct Maybe_783   scan_dash_int784 (    struct Scanner_770 *  sc3124 ) {
    struct TakeWhile_785  digit_dash_chars3125 = ( (  take_dash_while786 ) ( (  sc3124 ) ,  (  is_dash_digit789 ) ) );
    if ( ( (  null790 ) ( (  digit_dash_chars3125 ) ) ) ) {
        return ( (struct Maybe_783) { .tag = Maybe_783_None_t } );
    }
    ( (  drop_prime_796 ) ( (  sc3124 ) ,  ( (  count803 ) ( (  digit_dash_chars3125 ) ) ) ) );
    return ( (  parse_dash_int808 ) ( (  digit_dash_chars3125 ) ) );
}

static  int32_t   i64_dash_i32826 (    int64_t  x618 ) {
    return ( (int32_t ) (  x618 ) );
}

struct StrConcat_828 {
    struct StrView_20  field0;
    int64_t  field1;
};

static struct StrConcat_828 StrConcat_828_StrConcat (  struct StrView_20  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_828 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_831 {
    struct StrView_20  field0;
    struct StrConcat_828  field1;
};

static struct StrConcat_831 StrConcat_831_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_828  field1 ) {
    return ( struct StrConcat_831 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_830 {
    struct StrConcat_831  field0;
    struct Char_47  field1;
};

static struct StrConcat_830 StrConcat_830_StrConcat (  struct StrConcat_831  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_830 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_836 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_835 {
    struct StrViewIter_567  f_left;
    struct IntStrIter_836  f_right;
};

struct StrConcatIter_834 {
    struct StrViewIter_567  f_left;
    struct StrConcatIter_835  f_right;
};

enum EmptyIter_838 {
    EmptyIter_838_EmptyIter,
};

struct AppendIter_837 {
    enum EmptyIter_838  f_it;
    struct Char_47  f_elem;
    bool  f_appended;
};

struct StrConcatIter_833 {
    struct StrConcatIter_834  f_left;
    struct AppendIter_837  f_right;
};

static  struct StrConcatIter_833   into_dash_iter840 (    struct StrConcatIter_833  self1472 ) {
    return (  self1472 );
}

struct env847 {
    ;
    int64_t  base1191;
};

struct envunion848 {
    int64_t  (*fun) (  struct env847*  ,    int32_t  ,    int64_t  );
    struct env847 env;
};

static  int64_t   reduce846 (    struct Range_650  iterable1074 ,    int64_t  base1076 ,   struct envunion848  fun1078 ) {
    int64_t  x1079 = (  base1076 );
    struct RangeIter_653  it1080 = ( (  into_dash_iter655 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_238  dref1081 = ( (  next656 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_238_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_238_Just_t ) {
                struct envunion848  temp849 = (  fun1078 );
                x1079 = ( temp849.fun ( &temp849.env ,  ( dref1081 .stuff .Maybe_238_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp850 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp850);
    exit ( 1 );
    ( Unit_6_Unit );
    int64_t  temp851;
    return (  temp851 );
}

static  int64_t   lam852 (   struct env847* env ,    int32_t  item1195 ,    int64_t  x1197 ) {
    return (  op_dash_mul196 ( (  x1197 ) , ( env->base1191 ) ) );
}

static  int64_t   pow845 (    int64_t  base1191 ,    int32_t  p1193 ) {
    struct env847 envinst847 = {
        .base1191 =  base1191 ,
    };
    return ( (  reduce846 ) ( ( (  to658 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub775 ( (  p1193 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral268 ( 1 ) ) ,  ( (struct envunion848){ .fun = (  int64_t  (*) (  struct env847*  ,    int32_t  ,    int64_t  ) )lam852 , .env =  envinst847 } ) ) );
}

static  int64_t   op_dash_div853 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast854 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub855 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  uint8_t *   cast861 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed859 (    uint8_t  x573 ) {
    size_t  temp860 = ( (  zeroed642 ) ( ) );
    size_t *  y574 = ( &temp860 );
    uint8_t *  yp575 = ( (  cast861 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u8_dash_size858 (    uint8_t  x663 ) {
    return ( (  cast_dash_on_dash_zeroed859 ) ( (  x663 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer857 (    uint8_t *  ptr681 ,    uint8_t  b683 ) {
    size_t  s684 = ( ( (size_t ) (  ptr681 ) ) );
    size_t  exp685 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add198 ( (  op_dash_sub269 ( (  s684 ) , ( (  u8_dash_size858 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer174 ) ( (  ptr681 ) ) ) ) ) ) ) , (  op_dash_mul211 ( (  exp685 ) , ( (  u8_dash_size858 ) ( (  b683 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast862 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_47   from_dash_u8856 (    uint8_t  b710 ) {
    uint8_t *  ptr711 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer857 ) ( ( ( (  cast862 ) ( ( (  u8_dash_size858 ) ( (  b710 ) ) ) ) ) ) ,  (  from_dash_integral177 ( 103 ) ) ) );
    return ( (struct Char_47) { .f_ptr = (  ptr711 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_570   next844 (    struct IntStrIter_836 *  self1403 ) {
    if ( ( ( * (  self1403 ) ) .f_negative ) ) {
        (*  self1403 ) .f_negative = ( false );
        return ( ( Maybe_570_Just ) ( ( (  from_dash_charlike186 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp386 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_570) { .tag = Maybe_570_None_t } );
    }
    int64_t  trim_dash_down1404 = ( (  pow845 ) ( (  from_dash_integral268 ( 10 ) ) ,  (  op_dash_sub775 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    int64_t  upper1405 = (  op_dash_div853 ( ( ( * (  self1403 ) ) .f_int ) , (  trim_dash_down1404 ) ) );
    int64_t  upper_dash_mask1406 = (  op_dash_mul196 ( (  op_dash_div853 ( (  upper1405 ) , (  from_dash_integral268 ( 10 ) ) ) ) , (  from_dash_integral268 ( 10 ) ) ) );
    uint8_t  digit1407 = ( ( (  cast854 ) ( (  op_dash_sub855 ( (  upper1405 ) , (  upper_dash_mask1406 ) ) ) ) ) );
    (*  self1403 ) .f_len = (  op_dash_sub775 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_47  digit_dash_char1408 = ( (  from_dash_u8856 ) ( (  op_dash_add191 ( (  digit1407 ) , (  from_dash_integral177 ( 48 ) ) ) ) ) );
    return ( ( Maybe_570_Just ) ( (  digit_dash_char1408 ) ) );
}

static  struct Maybe_570   next843 (    struct StrConcatIter_835 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next571 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next844 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next842 (    struct StrConcatIter_834 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next571 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next843 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next864 (    enum EmptyIter_838 *  dref786 ) {
    return ( (struct Maybe_570) { .tag = Maybe_570_None_t } );
}

static  struct Maybe_570   next863 (    struct AppendIter_837 *  self1016 ) {
    struct Maybe_570  dref1017 = ( (  next864 ) ( ( & ( ( * (  self1016 ) ) .f_it ) ) ) );
    if ( dref1017.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1017 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1017.tag == Maybe_570_None_t ) {
            if ( ( ! ( ( * (  self1016 ) ) .f_appended ) ) ) {
                (*  self1016 ) .f_appended = ( true );
                return ( ( Maybe_570_Just ) ( ( ( * (  self1016 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_570) { .tag = Maybe_570_None_t } );
        }
    }
}

static  struct Maybe_570   next841 (    struct StrConcatIter_833 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next842 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next863 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each832 (    struct StrConcatIter_833  iterable1055 ,    enum Unit_6 (*  fun1057 )(    struct Char_47  ) ) {
    struct StrConcatIter_833  temp839 = ( (  into_dash_iter840 ) ( (  iterable1055 ) ) );
    struct StrConcatIter_833 *  it1058 = ( &temp839 );
    while ( ( true ) ) {
        struct Maybe_570  dref1059 = ( (  next841 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_570_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_570_Just_t ) {
                ( (  fun1057 ) ( ( dref1059 .stuff .Maybe_570_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_151   cmp873 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg874 (    int64_t  l204 ) {
    return ( (  from_dash_integral268 ( 0 ) ) - (  l204 ) );
}

static  bool   eq876 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits875 (    int64_t  self1411 ) {
    if ( (  eq876 ( (  self1411 ) , (  from_dash_integral268 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1412 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp873 ( (  self1411 ) , (  from_dash_integral268 ( 0 ) ) ) == 2 ) ) {
        self1411 = (  op_dash_div853 ( (  self1411 ) , (  from_dash_integral268 ( 10 ) ) ) );
        digits1412 = (  op_dash_add240 ( (  digits1412 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1412 );
}

static  struct IntStrIter_836   int_dash_iter872 (    int64_t  int1415 ) {
    if ( (  cmp873 ( (  int1415 ) , (  from_dash_integral268 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_836) { .f_int = (  op_dash_neg874 ( (  int1415 ) ) ) , .f_len = ( (  count_dash_digits875 ) ( (  op_dash_neg874 ( (  int1415 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_836) { .f_int = (  int1415 ) , .f_len = ( (  count_dash_digits875 ) ( (  int1415 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_836   chars871 (    int64_t  self1442 ) {
    return ( (  int_dash_iter872 ) ( (  self1442 ) ) );
}

static  struct StrConcatIter_835   into_dash_iter870 (    struct StrConcat_828  dref1479 ) {
    return ( (struct StrConcatIter_835) { .f_left = ( (  chars572 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars871 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_835   chars869 (    struct StrConcat_828  self1490 ) {
    return ( (  into_dash_iter870 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_834   into_dash_iter868 (    struct StrConcat_831  dref1479 ) {
    return ( (struct StrConcatIter_834) { .f_left = ( (  chars572 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars869 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_834   chars867 (    struct StrConcat_831  self1490 ) {
    return ( (  into_dash_iter868 ) ( (  self1490 ) ) );
}

static  enum EmptyIter_838   into_dash_iter881 (    enum EmptyIter_838  self784 ) {
    return (  self784 );
}

static  struct AppendIter_837   append880 (    enum EmptyIter_838  it1000 ,    struct Char_47  e1002 ) {
    return ( (struct AppendIter_837) { .f_it = ( (  into_dash_iter881 ) ( (  it1000 ) ) ) , .f_elem = (  e1002 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_837   cons879 (    enum EmptyIter_838  it1005 ,    struct Char_47  e1007 ) {
    return ( (  append880 ) ( (  it1005 ) ,  (  e1007 ) ) );
}

static  enum EmptyIter_838   nil882 (  ) {
    return ( EmptyIter_838_EmptyIter );
}

static  struct AppendIter_837   single878 (    struct Char_47  e1010 ) {
    return ( (  cons879 ) ( ( (  nil882 ) ( ) ) ,  (  e1010 ) ) );
}

static  struct AppendIter_837   chars877 (    struct Char_47  self1388 ) {
    return ( (  single878 ) ( (  self1388 ) ) );
}

static  struct StrConcatIter_833   into_dash_iter866 (    struct StrConcat_830  dref1479 ) {
    return ( (struct StrConcatIter_833) { .f_left = ( (  chars867 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars877 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_833   chars865 (    struct StrConcat_830  self1490 ) {
    return ( (  into_dash_iter866 ) ( (  self1490 ) ) );
}

static  enum Unit_6   print829 (    struct StrConcat_830  s1682 ) {
    ( (  for_dash_each832 ) ( ( (  chars865 ) ( (  s1682 ) ) ) ,  (  printf_dash_char170 ) ) );
    return ( Unit_6_Unit );
}

static  enum MouseButton_688   undefined883 (  ) {
    enum MouseButton_688  temp884;
    return (  temp884 );
}

static  enum MouseButton_688   panic_prime_827 (    struct StrConcat_828  errmsg1696 ) {
    ( (  print829 ) ( ( ( StrConcat_830_StrConcat ) ( ( ( StrConcat_831_StrConcat ) ( ( (  from_dash_string185 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1696 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined883 ) ( ) );
}

static  enum MouseButton_688   btn_dash_to_dash_mouse_dash_button825 (    int64_t  btn3286 ) {
    return ( {  int32_t  dref3287 = ( (  i64_dash_i32826 ) ( (  btn3286 ) ) ) ;  dref3287 == 0 ? ( MouseButton_688_MouseLeft ) :  dref3287 == 1 ? ( MouseButton_688_MouseMiddle ) :  dref3287 == 2 ? ( MouseButton_688_MouseRight ) :  dref3287 == 64 ? ( MouseButton_688_ScrollUp ) :  dref3287 == 65 ? ( MouseButton_688_ScrollDown ) : ( (  panic_prime_827 ) ( ( ( StrConcat_828_StrConcat ) ( ( (  from_dash_string185 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3286 ) ) ) ) ) ; } );
}

static  struct Scanner_770   mk886 (    struct StrView_20  s3115 ) {
    return ( (struct Scanner_770) { .f_s = ( (  into_dash_iter573 ) ( (  s3115 ) ) ) } );
}

static  struct Maybe_685   parse_dash_csi764 (    struct Slice_765  seq3293 ) {
    if ( (  eq205 ( ( (  seq3293 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_685) { .tag = Maybe_685_None_t } );
    }
    char  last3294 = (  elem_dash_get766 ( (  seq3293 ) , (  op_dash_sub269 ( ( (  seq3293 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq749 ( (  elem_dash_get766 ( (  seq3293 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike750 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq749 ( (  last3294 ) , ( (  from_dash_charlike750 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq749 ( (  last3294 ) , ( (  from_dash_charlike750 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_770  temp771 = ( (  mk_dash_from_dash_str772 ) ( ( (  substr773 ) ( ( (  from_dash_ascii_dash_slice780 ) ( (  seq3293 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3293 ) .f_count ) ) ) ) );
        struct Scanner_770 *  sc3295 = ( &temp771 );
        struct Maybe_783  dref3296 = ( (  scan_dash_int784 ) ( (  sc3295 ) ) );
        if ( dref3296.tag == Maybe_783_None_t ) {
            return ( (struct Maybe_685) { .tag = Maybe_685_None_t } );
        }
        else {
            if ( dref3296.tag == Maybe_783_Just_t ) {
                ( (  next793 ) ( (  sc3295 ) ) );
                struct Maybe_783  dref3298 = ( (  scan_dash_int784 ) ( (  sc3295 ) ) );
                if ( dref3298.tag == Maybe_783_None_t ) {
                    return ( (struct Maybe_685) { .tag = Maybe_685_None_t } );
                }
                else {
                    if ( dref3298.tag == Maybe_783_Just_t ) {
                        ( (  next793 ) ( (  sc3295 ) ) );
                        struct Maybe_783  dref3300 = ( (  scan_dash_int784 ) ( (  sc3295 ) ) );
                        if ( dref3300.tag == Maybe_783_None_t ) {
                            return ( (struct Maybe_685) { .tag = Maybe_685_None_t } );
                        }
                        else {
                            if ( dref3300.tag == Maybe_783_Just_t ) {
                                return ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Mouse ) ( ( (struct MouseEvent_687) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button825 ) ( ( dref3296 .stuff .Maybe_783_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub775 ( ( (  i64_dash_i32826 ) ( ( dref3298 .stuff .Maybe_783_Just_s .field0 ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_y = (  op_dash_sub775 ( ( (  i64_dash_i32826 ) ( ( dref3300 .stuff .Maybe_783_Just_s .field0 ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_pressed = (  eq749 ( (  last3294 ) , ( (  from_dash_charlike750 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq205 ( ( (  seq3293 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq749 ( (  last3294 ) , ( (  from_dash_charlike750 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_Up_t } ) ) ) ) );
        }
        if ( (  eq749 ( (  last3294 ) , ( (  from_dash_charlike750 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_Down_t } ) ) ) ) );
        }
        if ( (  eq749 ( (  last3294 ) , ( (  from_dash_charlike750 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_Right_t } ) ) ) ) );
        }
        if ( (  eq749 ( (  last3294 ) , ( (  from_dash_charlike750 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_Left_t } ) ) ) ) );
        }
        if ( (  eq749 ( (  last3294 ) , ( (  from_dash_charlike750 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_Home_t } ) ) ) ) );
        }
        if ( (  eq749 ( (  last3294 ) , ( (  from_dash_charlike750 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_685) { .tag = Maybe_685_None_t } );
    }
    if ( (  eq749 ( (  last3294 ) , ( (  from_dash_charlike750 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_770  temp885 = ( (  mk886 ) ( ( (  from_dash_ascii_dash_slice780 ) ( (  seq3293 ) ) ) ) );
        struct Scanner_770 *  sc3302 = ( &temp885 );
        struct Maybe_783  dref3303 = ( (  scan_dash_int784 ) ( (  sc3302 ) ) );
        if ( dref3303.tag == Maybe_783_None_t ) {
            return ( (struct Maybe_685) { .tag = Maybe_685_None_t } );
        }
        else {
            if ( dref3303.tag == Maybe_783_Just_t ) {
                return ( {  int32_t  dref3305 = ( (  i64_dash_i32826 ) ( ( dref3303 .stuff .Maybe_783_Just_s .field0 ) ) ) ;  dref3305 == 1 ? ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_Home_t } ) ) ) ) ) :  dref3305 == 2 ? ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_Insert_t } ) ) ) ) ) :  dref3305 == 3 ? ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_Delete_t } ) ) ) ) ) :  dref3305 == 4 ? ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_End_t } ) ) ) ) ) :  dref3305 == 5 ? ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_PageUp_t } ) ) ) ) ) :  dref3305 == 6 ? ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_PageDown_t } ) ) ) ) ) :  dref3305 == 15 ? ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_F5_t } ) ) ) ) ) :  dref3305 == 17 ? ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_F6_t } ) ) ) ) ) :  dref3305 == 18 ? ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_F7_t } ) ) ) ) ) :  dref3305 == 19 ? ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_F8_t } ) ) ) ) ) :  dref3305 == 20 ? ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_F9_t } ) ) ) ) ) :  dref3305 == 21 ? ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_F10_t } ) ) ) ) ) :  dref3305 == 23 ? ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_F11_t } ) ) ) ) ) :  dref3305 == 24 ? ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_F12_t } ) ) ) ) ) : ( (struct Maybe_685) { .tag = Maybe_685_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_685) { .tag = Maybe_685_None_t } );
}

static  struct Slice_765   subslice887 (    struct Slice_765  slice1763 ,    size_t  from1765 ,    size_t  to1767 ) {
    char *  begin_dash_ptr1768 = ( (  offset_dash_ptr762 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64227 ) ( (  from1765 ) ) ) ) );
    if ( ( (  cmp150 ( (  from1765 ) , (  to1767 ) ) != 0 ) || (  cmp150 ( (  from1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_765) { .f_ptr = (  begin_dash_ptr1768 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1769 = (  op_dash_sub269 ( ( (  min292 ) ( (  to1767 ) ,  ( (  slice1763 ) .f_count ) ) ) , (  from1765 ) ) );
    return ( (struct Slice_765) { .f_ptr = (  begin_dash_ptr1768 ) , .f_count = (  count1769 ) } );
}

static  char *   cast889 (    struct Array_752 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_765   as_dash_slice888 (    struct Array_752 *  arr2241 ) {
    return ( (struct Slice_765) { .f_ptr = ( (  cast889 ) ( (  arr2241 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_891 {
    enum {
        Maybe_891_None_t,
        Maybe_891_Just_t,
    } tag;
    union {
        struct {
            struct Key_121  field0;
        } Maybe_891_Just_s;
    } stuff;
};

static struct Maybe_891 Maybe_891_Just (  struct Key_121  field0 ) {
    return ( struct Maybe_891 ) { .tag = Maybe_891_Just_t, .stuff = { .Maybe_891_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_891   parse_dash_ss3892 (    char  c3290 ) {
    if ( (  eq749 ( (  c3290 ) , ( (  from_dash_charlike750 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_891_Just ) ( ( (struct Key_121) { .tag = Key_121_Up_t } ) ) );
    }
    if ( (  eq749 ( (  c3290 ) , ( (  from_dash_charlike750 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_891_Just ) ( ( (struct Key_121) { .tag = Key_121_Down_t } ) ) );
    }
    if ( (  eq749 ( (  c3290 ) , ( (  from_dash_charlike750 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_891_Just ) ( ( (struct Key_121) { .tag = Key_121_Right_t } ) ) );
    }
    if ( (  eq749 ( (  c3290 ) , ( (  from_dash_charlike750 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_891_Just ) ( ( (struct Key_121) { .tag = Key_121_Left_t } ) ) );
    }
    if ( (  eq749 ( (  c3290 ) , ( (  from_dash_charlike750 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_891_Just ) ( ( (struct Key_121) { .tag = Key_121_Home_t } ) ) );
    }
    if ( (  eq749 ( (  c3290 ) , ( (  from_dash_charlike750 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_891_Just ) ( ( (struct Key_121) { .tag = Key_121_End_t } ) ) );
    }
    if ( (  eq749 ( (  c3290 ) , ( (  from_dash_charlike750 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_891_Just ) ( ( (struct Key_121) { .tag = Key_121_F1_t } ) ) );
    }
    if ( (  eq749 ( (  c3290 ) , ( (  from_dash_charlike750 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_891_Just ) ( ( (struct Key_121) { .tag = Key_121_F2_t } ) ) );
    }
    if ( (  eq749 ( (  c3290 ) , ( (  from_dash_charlike750 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_891_Just ) ( ( (struct Key_121) { .tag = Key_121_F3_t } ) ) );
    }
    if ( (  eq749 ( (  c3290 ) , ( (  from_dash_charlike750 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_891_Just ) ( ( (struct Key_121) { .tag = Key_121_F4_t } ) ) );
    }
    return ( (struct Maybe_891) { .tag = Maybe_891_None_t } );
}

static  struct Maybe_685   read_dash_key697 (  ) {
    char  temp698 = ( (  undefined699 ) ( ) );
    char *  ch3307 = ( &temp698 );
    struct Maybe_701  dref3308 = ( (  read_dash_byte702 ) ( (  from_dash_integral38 ( 0 ) ) ) );
    if ( dref3308.tag == Maybe_701_None_t ) {
        return ( (struct Maybe_685) { .tag = Maybe_685_None_t } );
    }
    else {
        if ( dref3308.tag == Maybe_701_Just_t ) {
            (*  ch3307 ) = ( dref3308 .stuff .Maybe_701_Just_s .field0 );
        }
    }
    if ( (  eq173 ( ( (  ascii_dash_u8709 ) ( ( * (  ch3307 ) ) ) ) , (  from_dash_integral177 ( 13 ) ) ) ) ) {
        return ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_Enter_t } ) ) ) ) );
    }
    if ( (  eq173 ( ( (  ascii_dash_u8709 ) ( ( * (  ch3307 ) ) ) ) , (  from_dash_integral177 ( 127 ) ) ) ) ) {
        return ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp190 ( ( (  ascii_dash_u8709 ) ( ( * (  ch3307 ) ) ) ) , (  from_dash_integral177 ( 27 ) ) ) == 0 ) && ( !  eq173 ( ( (  ascii_dash_u8709 ) ( ( * (  ch3307 ) ) ) ) , (  from_dash_integral177 ( 9 ) ) ) ) ) ) {
        char  letter3310 = ( (  u8_dash_ascii710 ) ( ( (  u32_dash_u8183 ) ( ( (  u32_dash_or521 ) ( ( (  u8_dash_u32711 ) ( ( (  ascii_dash_u8709 ) ( ( * (  ch3307 ) ) ) ) ) ) ,  ( (  from_dash_hex715 ) ( ( (  from_dash_string185 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( ( Key_121_Ctrl ) ( (  letter3310 ) ) ) ) ) ) );
    }
    if ( ( !  eq173 ( ( (  ascii_dash_u8709 ) ( ( * (  ch3307 ) ) ) ) , (  from_dash_integral177 ( 27 ) ) ) ) ) {
        if ( (  cmp190 ( ( (  ascii_dash_u8709 ) ( ( * (  ch3307 ) ) ) ) , (  from_dash_integral177 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key697 ) ( ) );
        } else {
            return ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( ( Key_121_Char ) ( ( * (  ch3307 ) ) ) ) ) ) ) );
        }
    }
    char  temp748 = ( (  undefined699 ) ( ) );
    char *  ch23311 = ( &temp748 );
    struct Maybe_701  dref3312 = ( (  read_dash_byte702 ) ( (  from_dash_integral38 ( 50 ) ) ) );
    if ( dref3312.tag == Maybe_701_None_t ) {
        return ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3312.tag == Maybe_701_Just_t ) {
            (*  ch23311 ) = ( dref3312 .stuff .Maybe_701_Just_s .field0 );
        }
    }
    if ( (  eq749 ( ( * (  ch23311 ) ) , ( (  from_dash_charlike750 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_752  temp753 = ( ( (  zeroed754 ) ( ) ) );
        struct Array_752 *  seq3314 = ( &temp753 );
        int32_t  slen3315 = (  from_dash_integral38 ( 0 ) );
        while ( (  cmp386 ( (  slen3315 ) , (  from_dash_integral38 ( 31 ) ) ) == 0 ) ) {
            char  temp758 = ( (  undefined699 ) ( ) );
            char *  sc3316 = ( &temp758 );
            struct Maybe_701  dref3317 = ( (  read_dash_byte702 ) ( (  from_dash_integral38 ( 50 ) ) ) );
            if ( dref3317.tag == Maybe_701_None_t ) {
                break;
            }
            else {
                if ( dref3317.tag == Maybe_701_Just_t ) {
                    (*  sc3316 ) = ( dref3317 .stuff .Maybe_701_Just_s .field0 );
                }
            }
            ( (  set759 ) ( (  seq3314 ) ,  ( (  i32_dash_size228 ) ( (  slen3315 ) ) ) ,  ( * (  sc3316 ) ) ) );
            slen3315 = (  op_dash_add240 ( (  slen3315 ) , (  from_dash_integral38 ( 1 ) ) ) );
            if ( ( (  cmp190 ( ( (  ascii_dash_u8709 ) ( ( * (  sc3316 ) ) ) ) , (  from_dash_integral177 ( 64 ) ) ) != 0 ) && (  cmp190 ( ( (  ascii_dash_u8709 ) ( ( * (  sc3316 ) ) ) ) , (  from_dash_integral177 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi764 ) ( ( (  subslice887 ) ( ( (  as_dash_slice888 ) ( (  seq3314 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size228 ) ( (  slen3315 ) ) ) ) ) ) );
    }
    if ( (  eq749 ( ( * (  ch23311 ) ) , ( (  from_dash_charlike750 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp890 = ( (  undefined699 ) ( ) );
        char *  sc3319 = ( &temp890 );
        struct Maybe_701  dref3320 = ( (  read_dash_byte702 ) ( (  from_dash_integral38 ( 50 ) ) ) );
        if ( dref3320.tag == Maybe_701_None_t ) {
            return ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3320.tag == Maybe_701_Just_t ) {
                (*  sc3319 ) = ( dref3320 .stuff .Maybe_701_Just_s .field0 );
            }
        }
        struct Maybe_891  dref3322 = ( (  parse_dash_ss3892 ) ( ( * (  sc3319 ) ) ) );
        if ( dref3322.tag == Maybe_891_None_t ) {
            return ( (struct Maybe_685) { .tag = Maybe_685_None_t } );
        }
        else {
            if ( dref3322.tag == Maybe_891_Just_t ) {
                return ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( dref3322 .stuff .Maybe_891_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_685_Just ) ( ( ( InputEvent_686_Key ) ( ( (struct Key_121) { .tag = Key_121_Escape_t } ) ) ) ) );
}

static  struct Maybe_685   read_dash_event694 (   struct env56* env ,    struct Tui_58 *  tui3332 ) {
    struct envunion57  temp695 = ( (struct envunion57){ .fun = (  bool  (*) (  struct env55*  ,    struct Tui_58 *  ) )update_dash_dimensions696 , .env =  env->envinst55 } );
    ( temp695.fun ( &temp695.env ,  (  tui3332 ) ) );
    struct Maybe_685  dref3333 = ( (  read_dash_key697 ) ( ) );
    if ( dref3333.tag == Maybe_685_None_t ) {
        return ( (struct Maybe_685) { .tag = Maybe_685_None_t } );
    }
    else {
        if ( dref3333.tag == Maybe_685_Just_t ) {
            (*  tui3332 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_685_Just ) ( ( dref3333 .stuff .Maybe_685_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_685   lam692 (   struct env683* env ) {
    struct envunion684  temp693 = ( (struct envunion684){ .fun = (  struct Maybe_685  (*) (  struct env56*  ,    struct Tui_58 *  ) )read_dash_event694 , .env =  env->envinst56 } );
    return ( temp693.fun ( &temp693.env ,  ( env->tui3964 ) ) );
}

static  struct Maybe_685   next894 (    struct FunIter_682 *  self1025 ) {
    if ( ( ( * (  self1025 ) ) .f_finished ) ) {
        return ( (struct Maybe_685) { .tag = Maybe_685_None_t } );
    }
    struct envunion689  temp895 = ( ( * (  self1025 ) ) .f_fun );
    struct Maybe_685  dref1026 = ( temp895.fun ( &temp895.env ) );
    if ( dref1026.tag == Maybe_685_Just_t ) {
        return ( ( Maybe_685_Just ) ( ( dref1026 .stuff .Maybe_685_Just_s .field0 ) ) );
    }
    else {
        if ( dref1026.tag == Maybe_685_None_t ) {
            (*  self1025 ) .f_finished = ( true );
            return ( (struct Maybe_685) { .tag = Maybe_685_None_t } );
        }
    }
}

struct env898 {
    ;
    struct Editor_109 *  ed3909;
};

struct envunion899 {
    enum Unit_6  (*fun) (  struct env898*  ,    struct StrView_20  );
    struct env898 env;
};

static  enum Unit_6   if_dash_just897 (    struct Maybe_112  x1272 ,   struct envunion899  fun1274 ) {
    struct Maybe_112  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_112_Just_t ) {
        struct envunion899  temp900 = (  fun1274 );
        ( temp900.fun ( &temp900.env ,  ( dref1275 .stuff .Maybe_112_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_112_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   free902 (    struct StrView_20  s2139 ,    enum CAllocator_8  al2141 ) {
    ( (  free333 ) ( (  al2141 ) ,  ( (struct Slice_11) { .f_ptr = ( ( (  s2139 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam901 (   struct env898* env ,    struct StrView_20  msg3911 ) {
    ( (  free902 ) ( (  msg3911 ) ,  ( ( * ( env->ed3909 ) ) .f_al ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   reset_dash_msg896 (    struct Editor_109 *  ed3909 ) {
    struct env898 envinst898 = {
        .ed3909 =  ed3909 ,
    };
    ( (  if_dash_just897 ) ( ( ( * (  ed3909 ) ) .f_msg ) ,  ( (struct envunion899){ .fun = (  enum Unit_6  (*) (  struct env898*  ,    struct StrView_20  ) )lam901 , .env =  envinst898 } ) ) );
    (*  ed3909 ) .f_msg = ( (struct Maybe_112) { .tag = Maybe_112_None_t } );
    return ( Unit_6_Unit );
}

struct envunion904 {
    enum Unit_6  (*fun) (  struct env119*  ,    struct Editor_109 *  ,    struct Key_121  );
    struct env119 env;
};

struct envunion907 {
    enum Unit_6  (*fun) (  struct env107*  ,    struct Editor_109 *  ,    struct Key_121  );
    struct env107 env;
};

static  size_t   num_dash_bytes911 (    struct StrView_20  self2167 ) {
    return ( ( (  self2167 ) .f_contents ) .f_count );
}

static  struct StrView_20   from_dash_bytes913 (    struct Slice_11  sl2124 ) {
    return ( (struct StrView_20) { .f_contents = (  sl2124 ) } );
}

static  struct StrView_20   line912 (    struct TextBuf_73 *  self3547 ,    int32_t  li3549 ) {
    return ( (  from_dash_bytes913 ) ( ( (  to_dash_slice293 ) ( ( (  get286 ) ( ( & ( ( * (  self3547 ) ) .f_buf ) ) ,  ( (  i32_dash_size228 ) ( (  li3549 ) ) ) ) ) ) ) ) );
}

static  size_t   clamp914 (    size_t  x1333 ,    size_t  mn1335 ,    size_t  mx1337 ) {
    if ( (  cmp150 ( (  x1333 ) , (  mn1335 ) ) == 0 ) ) {
        return (  mn1335 );
    } else {
        if ( (  cmp150 ( (  x1333 ) , (  mx1337 ) ) == 2 ) ) {
            return (  mx1337 );
        } else {
            return (  x1333 );
        }
    }
}

static  size_t   sync_dash_char916 (    uint8_t *  p692 ) {
    size_t  i693 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb694 = ( * ( (uint8_t * ) ( ( (void*) (  p692 ) ) + (  op_dash_neg874 ( ( (  size_dash_i64227 ) ( (  i693 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp190 ( (  pb694 ) , (  from_dash_integral177 ( 128 ) ) ) != 0 ) && (  cmp190 ( (  pb694 ) , (  op_dash_add191 ( (  from_dash_integral177 ( 128 ) ) , (  from_dash_integral177 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i693 );
        }
        i693 = (  op_dash_add198 ( (  i693 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char915 (    uint8_t *  p697 ) {
    return (  op_dash_add198 ( ( (  sync_dash_char916 ) ( ( (  offset_dash_ptr290 ) ( (  p697 ) ,  (  op_dash_neg874 ( (  from_dash_integral268 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_19   left_dash_pos910 (    struct TextBuf_73 *  self3563 ,    struct Pos_19  pos3565 ) {
    if ( (  eq280 ( (  pos3565 ) , ( (  mk467 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk467 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    }
    if ( (  eq281 ( ( (  pos3565 ) .f_bi ) , (  from_dash_integral38 ( 0 ) ) ) ) ) {
        ( (  assert440 ) ( (  cmp386 ( ( (  pos3565 ) .f_line ) , (  from_dash_integral38 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string185 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk467 ) ( (  op_dash_sub775 ( ( (  pos3565 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  ( (  size_dash_i32162 ) ( ( (  num_dash_bytes911 ) ( ( (  line912 ) ( (  self3563 ) ,  (  op_dash_sub775 ( ( (  pos3565 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_20  line3566 = ( (  line912 ) ( (  self3563 ) ,  ( (  pos3565 ) .f_line ) ) );
    size_t  pos_dash_bi3567 = ( (  clamp914 ) ( ( (  i32_dash_size228 ) ( ( (  pos3565 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes911 ) ( (  line3566 ) ) ) ) );
    size_t  off3568 = ( (  previous_dash_char915 ) ( ( (  offset_dash_ptr290 ) ( ( ( (  line3566 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64227 ) ( (  pos_dash_bi3567 ) ) ) ) ) ) );
    return ( (  mk467 ) ( ( (  pos3565 ) .f_line ) ,  ( (  size_dash_i32162 ) ( (  op_dash_sub269 ( (  pos_dash_bi3567 ) , (  off3568 ) ) ) ) ) ) );
}

static  int32_t   max921 (    int32_t  l1296 ,    int32_t  r1298 ) {
    if ( (  cmp386 ( (  l1296 ) , (  r1298 ) ) == 2 ) ) {
        return (  l1296 );
    } else {
        return (  r1298 );
    }
}

static  void *   cast_dash_ptr927 (    wchar_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of928 (    wchar_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  wchar_t   zeroed925 (  ) {
    wchar_t  temp926;
    wchar_t  x570 = (  temp926 );
    ( ( memset ) ( ( (  cast_dash_ptr927 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of928 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr929 (    uint8_t *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  size_t   cast930 (    int64_t  x356 ) {
    return ( (size_t ) (  x356 ) );
}

struct TypeSize_933 {
    size_t  f_size;
};

static  struct TypeSize_933   get_dash_typesize932 (  ) {
    wchar_t  temp934;
    return ( (struct TypeSize_933) { .f_size = ( sizeof( ( (  temp934 ) ) ) ) } );
}

static  wchar_t   cast936 (    uint32_t  x356 ) {
    return ( (wchar_t ) (  x356 ) );
}

static  wchar_t   to_dash_c_dash_wchar923 (    struct Char_47  c748 ) {
    struct CharDestructured_171  dref749 = ( (  destructure172 ) ( (  c748 ) ) );
    if ( dref749.tag == CharDestructured_171_Ref_t ) {
        wchar_t  temp924 = ( (  zeroed925 ) ( ) );
        wchar_t *  wcp751 = ( &temp924 );
        size_t  num_dash_chars752 = ( ( mbstowcs ) ( (  wcp751 ) ,  ( (  cast_dash_ptr929 ) ( ( ( dref749 .stuff .CharDestructured_171_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq205 ( (  num_dash_chars752 ) , ( ( (  cast930 ) ( ( (  op_dash_neg874 ( (  from_dash_integral268 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp931 = ( (  from_dash_string39 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp931);
            exit ( 1 );
            ( Unit_6_Unit );
        }
        return ( * (  wcp751 ) );
    }
    else {
        if ( dref749.tag == CharDestructured_171_Scalar_t ) {
            if ( ( ! (  eq205 ( ( (  size_dash_of609 ) ( ( dref749 .stuff .CharDestructured_171_Scalar_s .field0 ) ) ) , ( ( ( (  get_dash_typesize932 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp935 = ( (  from_dash_string39 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp935);
                exit ( 1 );
                ( Unit_6_Unit );
            }
            return ( (  cast936 ) ( ( dref749 .stuff .CharDestructured_171_Scalar_s .field0 ) ) );
        }
    }
}

static  int32_t   wcwidth922 (    struct Char_47  c2535 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar923 ) ( (  c2535 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth920 (    struct Char_47  c3377 ) {
    return ( (  max921 ) ( ( (  wcwidth922 ) ( (  c3377 ) ) ) ,  (  from_dash_integral38 ( 1 ) ) ) );
}

static  int32_t   pos_dash_vi917 (    struct TextBuf_73 *  self3733 ,    struct Pos_19  pos3735 ) {
    int32_t  bi3736 = ( (  from_dash_integral38 ( 0 ) ) );
    int32_t  vi3737 = (  from_dash_integral38 ( 0 ) );
    struct StrViewIter_567  temp918 =  into_dash_iter569 ( ( (  chars572 ) ( ( (  line912 ) ( (  self3733 ) ,  ( (  pos3735 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_570  __cond919 =  next571 (&temp918);
        if (  __cond919 .tag == 0 ) {
            break;
        }
        struct Char_47  c3739 =  __cond919 .stuff .Maybe_570_Just_s .field0;
        bi3736 = (  op_dash_add240 ( (  bi3736 ) , ( (  size_dash_i32162 ) ( ( (  c3739 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp386 ( ( (  pos3735 ) .f_bi ) , (  bi3736 ) ) == 0 ) ) {
            break;
        }
        vi3737 = (  op_dash_add240 ( (  vi3737 ) , ( (  rendered_dash_wcwidth920 ) ( (  c3739 ) ) ) ) );
    }
    return (  vi3737 );
}

struct Tuple2_939 {
    enum Mode_111  field0;
    enum Mode_111  field1;
};

static struct Tuple2_939 Tuple2_939_Tuple2 (  enum Mode_111  field0 ,  enum Mode_111  field1 ) {
    return ( struct Tuple2_939 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq938 (    enum Mode_111  l3693 ,    enum Mode_111  r3695 ) {
    return ( {  struct Tuple2_939  dref3696 = ( ( Tuple2_939_Tuple2 ) ( (  l3693 ) ,  (  r3695 ) ) ) ;  dref3696 .field0 == Mode_111_Normal &&  dref3696 .field1 == Mode_111_Normal ? ( true ) :  dref3696 .field0 == Mode_111_Insert &&  dref3696 .field1 == Mode_111_Insert ? ( true ) :  dref3696 .field0 == Mode_111_Select &&  dref3696 .field1 == Mode_111_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_6   set_dash_sel937 (    struct Pane_110 *  self3780 ,    struct Maybe_22  sel3782 ) {
    if ( ( !  eq938 ( ( ( * (  self3780 ) ) .f_mode ) , ( Mode_111_Select ) ) ) ) {
        (*  self3780 ) .f_sel = (  sel3782 );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   move_dash_left909 (    struct Pane_110 *  self3788 ) {
    (*  self3788 ) .f_cursor = ( (  left_dash_pos910 ) ( ( ( * (  self3788 ) ) .f_buf ) ,  ( ( * (  self3788 ) ) .f_cursor ) ) );
    (*  self3788 ) .f_vi = ( (  pos_dash_vi917 ) ( ( ( * (  self3788 ) ) .f_buf ) ,  ( ( * (  self3788 ) ) .f_cursor ) ) );
    ( (  set_dash_sel937 ) ( (  self3788 ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ) );
    return ( Unit_6_Unit );
}

static  struct Pane_110 *   pane940 (    struct Editor_109 *  ed3892 ) {
    return ( & ( ( * (  ed3892 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines943 (    struct TextBuf_73 *  self3552 ) {
    return ( (  size_dash_i32162 ) ( ( (  size282 ) ( ( & ( ( * (  self3552 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_19   right_dash_pos942 (    struct TextBuf_73 *  self3555 ,    struct Pos_19  pos3557 ) {
    if ( (  cmp386 ( ( (  pos3557 ) .f_line ) , ( (  num_dash_lines943 ) ( (  self3555 ) ) ) ) != 0 ) ) {
        return ( (  mk467 ) ( ( (  num_dash_lines943 ) ( (  self3555 ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    }
    struct StrView_20  line3558 = ( (  line912 ) ( (  self3555 ) ,  ( (  pos3557 ) .f_line ) ) );
    int64_t  bi3559 = ( (  i32_dash_i64824 ) ( ( (  pos3557 ) .f_bi ) ) );
    if ( (  cmp873 ( (  bi3559 ) , ( (  size_dash_i64227 ) ( ( (  num_dash_bytes911 ) ( (  line3558 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp386 ( (  op_dash_add240 ( ( (  pos3557 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , ( (  num_dash_lines943 ) ( (  self3555 ) ) ) ) != 0 ) ) {
            return ( (  mk467 ) ( ( (  pos3557 ) .f_line ) ,  ( (  size_dash_i32162 ) ( ( (  num_dash_bytes911 ) ( (  line3558 ) ) ) ) ) ) );
        }
        return ( (  mk467 ) ( (  op_dash_add240 ( ( (  pos3557 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    }
    int32_t  off3560 = ( (  size_dash_i32162 ) ( ( (  next_dash_char189 ) ( ( (  offset_dash_ptr290 ) ( ( ( (  line3558 ) .f_contents ) .f_ptr ) ,  (  bi3559 ) ) ) ) ) ) );
    return ( (  mk467 ) ( ( (  pos3557 ) .f_line ) ,  (  op_dash_add240 ( ( (  pos3557 ) .f_bi ) , (  off3560 ) ) ) ) );
}

static  enum Unit_6   move_dash_right941 (    struct Pane_110 *  self3785 ) {
    (*  self3785 ) .f_cursor = ( (  right_dash_pos942 ) ( ( ( * (  self3785 ) ) .f_buf ) ,  ( ( * (  self3785 ) ) .f_cursor ) ) );
    (*  self3785 ) .f_vi = ( (  pos_dash_vi917 ) ( ( ( * (  self3785 ) ) .f_buf ) ,  ( ( * (  self3785 ) ) .f_cursor ) ) );
    ( (  set_dash_sel937 ) ( (  self3785 ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ) );
    return ( Unit_6_Unit );
}

static  int32_t   vi_dash_bi945 (    struct TextBuf_73 *  self3722 ,    int32_t  ln3724 ,    int32_t  vx3726 ) {
    int32_t  bi3727 = ( (  from_dash_integral38 ( 0 ) ) );
    int32_t  vi3728 = (  from_dash_integral38 ( 0 ) );
    struct StrViewIter_567  temp946 =  into_dash_iter569 ( ( (  chars572 ) ( ( (  line912 ) ( (  self3722 ) ,  (  ln3724 ) ) ) ) ) );
    while (true) {
        struct Maybe_570  __cond947 =  next571 (&temp946);
        if (  __cond947 .tag == 0 ) {
            break;
        }
        struct Char_47  c3730 =  __cond947 .stuff .Maybe_570_Just_s .field0;
        vi3728 = (  op_dash_add240 ( (  vi3728 ) , ( (  rendered_dash_wcwidth920 ) ( (  c3730 ) ) ) ) );
        if ( (  cmp386 ( (  vx3726 ) , (  vi3728 ) ) == 0 ) ) {
            break;
        }
        bi3727 = (  op_dash_add240 ( (  bi3727 ) , ( (  size_dash_i32162 ) ( ( (  c3730 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi3727 );
}

static  enum Unit_6   move_dash_down944 (    struct Pane_110 *  self3791 ) {
    struct Pos_19  cur3792 = ( ( * (  self3791 ) ) .f_cursor );
    if ( (  cmp386 ( (  op_dash_add240 ( ( (  cur3792 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , ( (  num_dash_lines943 ) ( ( ( * (  self3791 ) ) .f_buf ) ) ) ) != 0 ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  vci3793 = ( ( * (  self3791 ) ) .f_vi );
    int32_t  bi3794 = ( (  vi_dash_bi945 ) ( ( ( * (  self3791 ) ) .f_buf ) ,  (  op_dash_add240 ( ( (  cur3792 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  vci3793 ) ) );
    (*  self3791 ) .f_cursor = ( (struct Pos_19) { .f_line = (  op_dash_add240 ( ( (  cur3792 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_bi = (  bi3794 ) } );
    ( (  set_dash_sel937 ) ( (  self3791 ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   move_dash_up948 (    struct Pane_110 *  self3797 ) {
    struct Pos_19  cur3798 = ( ( * (  self3797 ) ) .f_cursor );
    if ( (  cmp386 ( ( (  cur3798 ) .f_line ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  vci3799 = ( ( * (  self3797 ) ) .f_vi );
    int32_t  bi3800 = ( (  vi_dash_bi945 ) ( ( ( * (  self3797 ) ) .f_buf ) ,  (  op_dash_sub775 ( ( (  cur3798 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  vci3799 ) ) );
    (*  self3797 ) .f_cursor = ( (struct Pos_19) { .f_line = (  op_dash_sub775 ( ( (  cur3798 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_bi = (  bi3800 ) } );
    ( (  set_dash_sel937 ) ( (  self3797 ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ) );
    return ( Unit_6_Unit );
}

enum MoveDirection_950 {
    MoveDirection_950_MoveFwd,
    MoveDirection_950_MoveBwd,
};

enum MoveTarget_951 {
    MoveTarget_951_NextWordStart,
    MoveTarget_951_NextWordEnd,
};

static  struct Pos_19   own953 (    struct Pos_19  x1232 ) {
    return (  x1232 );
}

struct env954 {
    struct Pane_110 *  pane3824;
    enum MoveDirection_950  dir3826;
    struct Pos_19 *  prev3829;
    ;
    ;
};

struct envunion956 {
    enum Unit_6  (*fun) (  struct env954*  );
    struct env954 env;
};

static  enum Unit_6   advance957 (   struct env954* env ) {
    (* env->prev3829 ) = ( ( * ( env->pane3824 ) ) .f_cursor );
    enum MoveDirection_950  dref3831 = ( env->dir3826 );
    switch (  dref3831 ) {
        case MoveDirection_950_MoveFwd : {
            ( (  move_dash_right941 ) ( ( env->pane3824 ) ) );
            break;
        }
        case MoveDirection_950_MoveBwd : {
            ( (  move_dash_left909 ) ( ( env->pane3824 ) ) );
            break;
        }
    }
    return ( Unit_6_Unit );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end958 (    struct Pane_110 *  pane3810 ) {
    struct Pos_19  cur3811 = ( ( * (  pane3810 ) ) .f_cursor );
    return (  eq205 ( ( (  i32_dash_size228 ) ( ( (  cur3811 ) .f_bi ) ) ) , ( (  num_dash_bytes911 ) ( ( (  line912 ) ( ( ( * (  pane3810 ) ) .f_buf ) ,  ( (  cur3811 ) .f_line ) ) ) ) ) ) );
}

struct envunion960 {
    enum Unit_6  (*fun) (  struct env954*  );
    struct env954 env;
};

enum CharType_963 {
    CharType_963_CharSpace,
    CharType_963_CharWord,
    CharType_963_CharPunctuation,
};

struct Tuple2_964 {
    enum CharType_963  field0;
    enum CharType_963  field1;
};

static struct Tuple2_964 Tuple2_964_Tuple2 (  enum CharType_963  field0 ,  enum CharType_963  field1 ) {
    return ( struct Tuple2_964 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq962 (    enum CharType_963  l3674 ,    enum CharType_963  r3676 ) {
    struct Tuple2_964  dref3677 = ( ( Tuple2_964_Tuple2 ) ( (  l3674 ) ,  (  r3676 ) ) );
    if (  dref3677 .field0 == CharType_963_CharSpace &&  dref3677 .field1 == CharType_963_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3677 .field0 == CharType_963_CharWord &&  dref3677 .field1 == CharType_963_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3677 .field0 == CharType_963_CharPunctuation &&  dref3677 .field1 == CharType_963_CharPunctuation ) {
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

static  struct Char_47   min969 (    struct Char_47  l1217 ,    struct Char_47  r1219 ) {
    if ( (  cmp743 ( (  l1217 ) , (  r1219 ) ) == 0 ) ) {
        return (  l1217 );
    } else {
        return (  r1219 );
    }
}

static  struct Char_47   max970 (    struct Char_47  l1296 ,    struct Char_47  r1298 ) {
    if ( (  cmp743 ( (  l1296 ) , (  r1298 ) ) == 2 ) ) {
        return (  l1296 );
    } else {
        return (  r1298 );
    }
}

static  bool   between968 (    struct Char_47  c1318 ,    struct Char_47  l1320 ,    struct Char_47  r1322 ) {
    struct Char_47  from1323 = ( (  min969 ) ( (  l1320 ) ,  (  r1322 ) ) );
    struct Char_47  to1324 = ( (  max970 ) ( (  l1320 ) ,  (  r1322 ) ) );
    return ( (  cmp743 ( (  from1323 ) , (  c1318 ) ) != 2 ) && (  cmp743 ( (  c1318 ) , (  to1324 ) ) != 2 ) );
}

static  bool   is_dash_alpha967 (    struct Char_47  c2357 ) {
    return ( ( (  between968 ) ( (  c2357 ) ,  ( (  from_dash_charlike186 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) || ( (  between968 ) ( (  c2357 ) ,  ( (  from_dash_charlike186 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit971 (    struct Char_47  c2360 ) {
    return ( (  between968 ) ( (  c2360 ) ,  ( (  from_dash_charlike186 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "9" ) ,  ( 1 ) ) ) ) );
}

static  bool   is_dash_alphanumeric966 (    struct Char_47  c2363 ) {
    return ( ( (  is_dash_alpha967 ) ( (  c2363 ) ) ) || ( (  is_dash_digit971 ) ( (  c2363 ) ) ) );
}

static  bool   is_dash_whitespace972 (    struct Char_47  c2348 ) {
    return ( ( (  eq364 ( (  c2348 ) , ( (  from_dash_charlike186 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq364 ( (  c2348 ) , ( (  from_dash_charlike186 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq364 ( (  c2348 ) , ( (  from_dash_charlike186 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_963   char_dash_type965 (    struct Char_47  c3680 ) {
    if ( ( ( ( (  is_dash_alphanumeric966 ) ( (  c3680 ) ) ) || (  eq364 ( (  c3680 ) , ( (  from_dash_charlike186 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq364 ( (  c3680 ) , ( (  from_dash_charlike186 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_963_CharWord );
    } else {
        if ( ( (  is_dash_whitespace972 ) ( (  c3680 ) ) ) ) {
            return ( CharType_963_CharSpace );
        } else {
            return ( CharType_963_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary961 (    struct Char_47  l3683 ,    struct Char_47  r3685 ) {
    return ( !  eq962 ( ( (  char_dash_type965 ) ( (  l3683 ) ) ) , ( (  char_dash_type965 ) ( (  r3685 ) ) ) ) );
}

static  struct Char_47   or_dash_else974 (    struct Maybe_570  self1713 ,    struct Char_47  alt1715 ) {
    struct Maybe_570  dref1716 = (  self1713 );
    if ( dref1716.tag == Maybe_570_None_t ) {
        return (  alt1715 );
    }
    else {
        if ( dref1716.tag == Maybe_570_Just_t ) {
            return ( dref1716 .stuff .Maybe_570_Just_s .field0 );
        }
    }
}

static  struct Maybe_570   head975 (    struct StrViewIter_567  it1123 ) {
    struct StrViewIter_567  temp976 = ( (  into_dash_iter569 ) ( (  it1123 ) ) );
    return ( (  next571 ) ( ( &temp976 ) ) );
}

static  struct Char_47   char_dash_at973 (    struct Pane_110 *  pane3742 ,    struct Pos_19  pos3744 ) {
    struct StrView_20  line3745 = ( (  line912 ) ( ( ( * (  pane3742 ) ) .f_buf ) ,  ( (  pos3744 ) .f_line ) ) );
    return ( (  or_dash_else974 ) ( ( (  head975 ) ( ( (  chars572 ) ( ( (  byte_dash_substr346 ) ( (  line3745 ) ,  ( (  i32_dash_size228 ) ( ( (  pos3744 ) .f_bi ) ) ) ,  ( (  num_dash_bytes911 ) ( (  line3745 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

struct envunion978 {
    enum Unit_6  (*fun) (  struct env954*  );
    struct env954 env;
};

static  enum Unit_6   print981 (    struct StrView_20  s1682 ) {
    ( (  for_dash_each566 ) ( ( (  chars572 ) ( (  s1682 ) ) ) ,  (  printf_dash_char170 ) ) );
    return ( Unit_6_Unit );
}

static  bool   undefined982 (  ) {
    bool  temp983;
    return (  temp983 );
}

static  bool   todo980 (  ) {
    ( (  print981 ) ( ( (  from_dash_string185 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined982 ) ( ) );
}

static  bool   reached_dash_target979 (    struct Pane_110 *  pane3816 ,    enum MoveTarget_951  target3818 ,    struct Pos_19  prev3820 ) {
    return ( {  enum MoveTarget_951  dref3821 = (  target3818 ) ;  dref3821 == MoveTarget_951_NextWordStart ? ( ( (  is_dash_word_dash_boundary961 ) ( ( (  char_dash_at973 ) ( (  pane3816 ) ,  (  prev3820 ) ) ) ,  ( (  char_dash_at973 ) ( (  pane3816 ) ,  ( ( * (  pane3816 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq962 ( ( (  char_dash_type965 ) ( ( (  char_dash_at973 ) ( (  pane3816 ) ,  ( ( * (  pane3816 ) ) .f_cursor ) ) ) ) ) , ( CharType_963_CharSpace ) ) ) ) ) :  dref3821 == MoveTarget_951_NextWordEnd ? ( ( (  is_dash_word_dash_boundary961 ) ( ( (  char_dash_at973 ) ( (  pane3816 ) ,  (  prev3820 ) ) ) ,  ( (  char_dash_at973 ) ( (  pane3816 ) ,  ( ( * (  pane3816 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq962 ( ( (  char_dash_type965 ) ( ( (  char_dash_at973 ) ( (  pane3816 ) ,  (  prev3820 ) ) ) ) ) , ( CharType_963_CharSpace ) ) ) ) ) : ( (  todo980 ) ( ) ) ; } );
}

static  enum Unit_6   advance_dash_word949 (    struct Pane_110 *  pane3824 ,    enum MoveDirection_950  dir3826 ,    enum MoveTarget_951  target3828 ) {
    struct Pos_19  temp952 = ( (  own953 ) ( ( ( * (  pane3824 ) ) .f_cursor ) ) );
    struct Pos_19 *  prev3829 = ( &temp952 );
    struct env954 envinst954 = {
        .pane3824 =  pane3824 ,
        .dir3826 =  dir3826 ,
        .prev3829 =  prev3829 ,
    };
    struct Pos_19  sel3832 = ( ( * (  pane3824 ) ) .f_cursor );
    struct envunion956  temp955 = ( (struct envunion956){ .fun = (  enum Unit_6  (*) (  struct env954*  ) )advance957 , .env =  envinst954 } );
    ( temp955.fun ( &temp955.env ) );
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end958 ) ( (  pane3824 ) ) ) ) {
        if ( (  eq280 ( ( ( * (  pane3824 ) ) .f_cursor ) , ( * (  prev3829 ) ) ) ) ) {
            return ( Unit_6_Unit );
        }
        struct envunion960  temp959 = ( (struct envunion960){ .fun = (  enum Unit_6  (*) (  struct env954*  ) )advance957 , .env =  envinst954 } );
        ( temp959.fun ( &temp959.env ) );
        sel3832 = ( ( * (  pane3824 ) ) .f_cursor );
    }
    if ( ( (  is_dash_word_dash_boundary961 ) ( ( (  char_dash_at973 ) ( (  pane3824 ) ,  ( * (  prev3829 ) ) ) ) ,  ( (  char_dash_at973 ) ( (  pane3824 ) ,  ( ( * (  pane3824 ) ) .f_cursor ) ) ) ) ) ) {
        sel3832 = ( ( * (  pane3824 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion978  temp977 = ( (struct envunion978){ .fun = (  enum Unit_6  (*) (  struct env954*  ) )advance957 , .env =  envinst954 } );
        ( temp977.fun ( &temp977.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end958 ) ( (  pane3824 ) ) ) || ( (  reached_dash_target979 ) ( (  pane3824 ) ,  (  target3828 ) ,  ( * (  prev3829 ) ) ) ) ) ) {
            enum MoveDirection_950  dref3833 = (  dir3826 );
            switch (  dref3833 ) {
                case MoveDirection_950_MoveFwd : {
                    ( (  move_dash_left909 ) ( (  pane3824 ) ) );
                    break;
                }
                case MoveDirection_950_MoveBwd : {
                    ( (  move_dash_right941 ) ( (  pane3824 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq280 ( ( * (  prev3829 ) ) , ( ( * (  pane3824 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel937 ) ( (  pane3824 ) ,  ( ( Maybe_22_Just ) ( (  sel3832 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  size_t   size988 (    struct List_16 *  l2108 ) {
    return ( ( * (  l2108 ) ) .f_count );
}

static  struct Action_18 *   offset_dash_ptr993 (    struct Action_18 *  x338 ,    int64_t  count340 ) {
    struct Action_18  temp994;
    return ( (struct Action_18 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul196 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp994 ) ) ) ) ) ) ) ) );
}

static  struct Action_18 *   get_dash_ptr992 (    struct Slice_17  slice1738 ,    size_t  i1740 ) {
    if ( ( (  cmp150 ( (  i1740 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i1740 ) , ( (  slice1738 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic218 ) ( ( ( StrConcat_219_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1740 ) ) ) ,  ( (  from_dash_string185 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1738 ) .f_count ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_18 *  elem_dash_ptr1741 = ( (  offset_dash_ptr993 ) ( ( (  slice1738 ) .f_ptr ) ,  ( (  size_dash_i64227 ) ( (  i1740 ) ) ) ) );
    return (  elem_dash_ptr1741 );
}

static  struct Action_18 *   get_dash_ptr991 (    struct List_16 *  list1976 ,    size_t  i1978 ) {
    if ( ( (  cmp150 ( (  i1978 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp150 ( (  i1978 ) , ( ( * (  list1976 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic218 ) ( ( ( StrConcat_219_StrConcat ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i1978 ) ) ) ,  ( (  from_dash_string185 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list1976 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr992 ) ( ( ( * (  list1976 ) ) .f_elements ) ,  (  i1978 ) ) );
}

static  struct Action_18   get990 (    struct List_16 *  list1986 ,    size_t  i1988 ) {
    return ( * ( (  get_dash_ptr991 ) ( (  list1986 ) ,  (  i1988 ) ) ) );
}

static  struct Action_18   elem_dash_get989 (    struct List_16  self2056 ,    size_t  k2058 ) {
    return ( (  get990 ) ( ( & (  self2056 ) ) ,  (  k2058 ) ) );
}

static  struct Pos_19   action_dash_fwd996 (   struct env80* env ,    struct TextBuf_73 *  self3611 ,    struct Action_18  action3613 ) {
    struct envunion81  temp997 = ( (struct envunion81){ .fun = (  enum Unit_6  (*) (  struct env70*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ) )change_dash_no_dash_action279 , .env =  env->envinst70 } );
    ( temp997.fun ( &temp997.env ,  (  self3611 ) ,  ( (  action3613 ) .f_from ) ,  ( (  action3613 ) .f_to_dash_bwd ) ,  ( (  action3613 ) .f_fwd ) ) );
    return ( (  action3613 ) .f_to_dash_fwd );
}

static  struct Maybe_90   redo987 (   struct env84* env ,    struct TextBuf_73 *  self3621 ) {
    struct Actions_74 *  actions3622 = ( & ( ( * (  self3621 ) ) .f_actions ) );
    if ( (  cmp150 ( ( ( * (  actions3622 ) ) .f_cur ) , ( (  size988 ) ( ( & ( ( * (  actions3622 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_90) { .tag = Maybe_90_None_t } );
    }
    struct Action_18  action3623 = (  elem_dash_get989 ( ( ( * (  actions3622 ) ) .f_list ) , ( ( * (  actions3622 ) ) .f_cur ) ) );
    struct envunion85  temp995 = ( (struct envunion85){ .fun = (  struct Pos_19  (*) (  struct env80*  ,    struct TextBuf_73 *  ,    struct Action_18  ) )action_dash_fwd996 , .env =  env->envinst80 } );
    struct Pos_19  to_dash_fwd3624 = ( temp995.fun ( &temp995.env ,  (  self3621 ) ,  (  action3623 ) ) );
    (*  actions3622 ) .f_cur = (  op_dash_add198 ( ( ( * (  actions3622 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    if ( (  cmp150 ( ( (  num_dash_bytes911 ) ( ( (  action3623 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        to_dash_fwd3624 = ( (  left_dash_pos910 ) ( (  self3621 ) ,  (  to_dash_fwd3624 ) ) );
    }
    return ( ( Maybe_90_Just ) ( ( (struct Cursors_21) { .f_cur = (  to_dash_fwd3624 ) , .f_sel = ( ( Maybe_22_Just ) ( ( (  action3623 ) .f_from ) ) ) } ) ) );
}

struct env999 {
    ;
    ;
    struct Pane_110 *  self3862;
};

struct envunion1000 {
    enum Unit_6  (*fun) (  struct env999*  ,    struct Cursors_21  );
    struct env999 env;
};

static  enum Unit_6   if_dash_just998 (    struct Maybe_90  x1272 ,   struct envunion1000  fun1274 ) {
    struct Maybe_90  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_90_Just_t ) {
        struct envunion1000  temp1001 = (  fun1274 );
        ( temp1001.fun ( &temp1001.env ,  ( dref1275 .stuff .Maybe_90_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_90_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_cursors1003 (    struct Pane_110 *  self3803 ,    struct Pos_19  cur3805 ,    struct Pos_19  sel3807 ) {
    (*  self3803 ) .f_cursor = (  cur3805 );
    if ( (  eq280 ( (  cur3805 ) , (  sel3807 ) ) ) ) {
        (*  self3803 ) .f_sel = ( (struct Maybe_22) { .tag = Maybe_22_None_t } );
    } else {
        (*  self3803 ) .f_sel = ( ( Maybe_22_Just ) ( (  sel3807 ) ) );
    }
    return ( Unit_6_Unit );
}

static  struct Pos_19   or_dash_else1004 (    struct Maybe_22  self1713 ,    struct Pos_19  alt1715 ) {
    struct Maybe_22  dref1716 = (  self1713 );
    if ( dref1716.tag == Maybe_22_None_t ) {
        return (  alt1715 );
    }
    else {
        if ( dref1716.tag == Maybe_22_Just_t ) {
            return ( dref1716 .stuff .Maybe_22_Just_s .field0 );
        }
    }
}

static  enum Unit_6   lam1002 (   struct env999* env ,    struct Cursors_21  cursors3865 ) {
    ( (  set_dash_cursors1003 ) ( ( env->self3862 ) ,  ( (  cursors3865 ) .f_cur ) ,  ( (  or_dash_else1004 ) ( ( (  cursors3865 ) .f_sel ) ,  ( (  cursors3865 ) .f_cur ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   redo985 (   struct env99* env ,    struct Pane_110 *  self3862 ) {
    struct envunion100  temp986 = ( (struct envunion100){ .fun = (  struct Maybe_90  (*) (  struct env84*  ,    struct TextBuf_73 *  ) )redo987 , .env =  env->envinst84 } );
    struct Maybe_90  mcursors3863 = ( temp986.fun ( &temp986.env ,  ( ( * (  self3862 ) ) .f_buf ) ) );
    struct env999 envinst999 = {
        .self3862 =  self3862 ,
    };
    ( (  if_dash_just998 ) ( (  mcursors3863 ) ,  ( (struct envunion1000){ .fun = (  enum Unit_6  (*) (  struct env999*  ,    struct Cursors_21  ) )lam1002 , .env =  envinst999 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Pos_19   action_dash_bwd1010 (   struct env78* env ,    struct TextBuf_73 *  self3606 ,    struct Action_18  action3608 ) {
    struct envunion79  temp1011 = ( (struct envunion79){ .fun = (  enum Unit_6  (*) (  struct env70*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ) )change_dash_no_dash_action279 , .env =  env->envinst70 } );
    ( temp1011.fun ( &temp1011.env ,  (  self3606 ) ,  ( (  action3608 ) .f_from ) ,  ( (  action3608 ) .f_to_dash_fwd ) ,  ( (  action3608 ) .f_bwd ) ) );
    return ( (  action3608 ) .f_to_dash_bwd );
}

static  struct Maybe_90   undo1008 (   struct env82* env ,    struct TextBuf_73 *  self3616 ) {
    struct Actions_74 *  actions3617 = ( & ( ( * (  self3616 ) ) .f_actions ) );
    if ( (  eq205 ( ( ( * (  actions3617 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_90) { .tag = Maybe_90_None_t } );
    }
    (*  actions3617 ) .f_cur = (  op_dash_sub269 ( ( ( * (  actions3617 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_18  action3618 = (  elem_dash_get989 ( ( ( * (  actions3617 ) ) .f_list ) , ( ( * (  actions3617 ) ) .f_cur ) ) );
    struct envunion83  temp1009 = ( (struct envunion83){ .fun = (  struct Pos_19  (*) (  struct env78*  ,    struct TextBuf_73 *  ,    struct Action_18  ) )action_dash_bwd1010 , .env =  env->envinst78 } );
    ( temp1009.fun ( &temp1009.env ,  (  self3616 ) ,  (  action3618 ) ) );
    return ( ( Maybe_90_Just ) ( ( (  action3618 ) .f_before_dash_cursors ) ) );
}

struct env1013 {
    struct Pane_110 *  self3856;
    ;
    ;
};

struct envunion1014 {
    enum Unit_6  (*fun) (  struct env1013*  ,    struct Cursors_21  );
    struct env1013 env;
};

static  enum Unit_6   if_dash_just1012 (    struct Maybe_90  x1272 ,   struct envunion1014  fun1274 ) {
    struct Maybe_90  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_90_Just_t ) {
        struct envunion1014  temp1015 = (  fun1274 );
        ( temp1015.fun ( &temp1015.env ,  ( dref1275 .stuff .Maybe_90_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_90_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1016 (   struct env1013* env ,    struct Cursors_21  cursors3859 ) {
    ( (  set_dash_cursors1003 ) ( ( env->self3856 ) ,  ( (  cursors3859 ) .f_cur ) ,  ( (  or_dash_else1004 ) ( ( (  cursors3859 ) .f_sel ) ,  ( (  cursors3859 ) .f_cur ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   undo1006 (   struct env97* env ,    struct Pane_110 *  self3856 ) {
    struct envunion98  temp1007 = ( (struct envunion98){ .fun = (  struct Maybe_90  (*) (  struct env82*  ,    struct TextBuf_73 *  ) )undo1008 , .env =  env->envinst82 } );
    struct Maybe_90  mcursors3857 = ( temp1007.fun ( &temp1007.env ,  ( ( * (  self3856 ) ) .f_buf ) ) );
    struct env1013 envinst1013 = {
        .self3856 =  self3856 ,
    };
    ( (  if_dash_just1012 ) ( (  mcursors3857 ) ,  ( (struct envunion1014){ .fun = (  enum Unit_6  (*) (  struct env1013*  ,    struct Cursors_21  ) )lam1016 , .env =  envinst1013 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Tuple2_116   minmax1020 (    struct Pos_19  l1310 ,    struct Pos_19  r1312 ) {
    return ( (  cmp385 ( (  l1310 ) , (  r1312 ) ) == 0 ) ? ( ( Tuple2_116_Tuple2 ) ( (  l1310 ) ,  (  r1312 ) ) ) : ( ( Tuple2_116_Tuple2 ) ( (  r1312 ) ,  (  l1310 ) ) ) );
}

static  struct Pos_19   fst1021 (    struct Tuple2_116  dref1234 ) {
    return ( dref1234 .field0 );
}

static  struct Pos_19   snd1022 (    struct Tuple2_116  dref1237 ) {
    return ( dref1237 .field1 );
}

static  struct Tuple2_116   selection1019 (    struct Pane_110 *  self3868 ) {
    struct Tuple2_116  from_dash_to3869 = ( (  minmax1020 ) ( ( (  or_dash_else1004 ) ( ( ( * (  self3868 ) ) .f_sel ) ,  ( ( * (  self3868 ) ) .f_cursor ) ) ) ,  ( ( * (  self3868 ) ) .f_cursor ) ) );
    struct Pos_19  from3870 = ( (  fst1021 ) ( (  from_dash_to3869 ) ) );
    struct Pos_19  to3871 = ( (  right_dash_pos942 ) ( ( ( * (  self3868 ) ) .f_buf ) ,  ( (  snd1022 ) ( (  from_dash_to3869 ) ) ) ) );
    return ( ( Tuple2_116_Tuple2 ) ( (  from3870 ) ,  (  to3871 ) ) );
}

static  struct StrView_20   clone_dash_01026 (    struct StrView_20  s2127 ,    enum CAllocator_8  al2129 ) {
    size_t  cnt2130 = ( ( (  s2127 ) .f_contents ) .f_count );
    struct Slice_11  nus2131 = ( (  allocate314 ) ( (  al2129 ) ,  (  op_dash_add198 ( (  cnt2130 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to415 ) ( ( (  s2127 ) .f_contents ) ,  (  nus2131 ) ) );
    ( (  set323 ) ( (  nus2131 ) ,  (  cnt2130 ) ,  ( (  char_dash_u8345 ) ( ( (  from_dash_charlike186 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_20) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  nus2131 ) .f_ptr ) , .f_count = (  cnt2130 ) } ) } );
}

static  struct StrView_20   clone1025 (    struct StrView_20  s2134 ,    enum CAllocator_8  al2136 ) {
    return ( (  clone_dash_01026 ) ( (  s2134 ) ,  (  al2136 ) ) );
}

struct envunion1032 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct envunion1034 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

static  struct StrView_20   str_dash_between1024 (   struct env86* env ,    struct TextBuf_73 *  self3639 ,    struct Pos_19  from3641 ,    struct Pos_19  to3643 ) {
    enum CAllocator_8  al3644 = ( ( ( * (  self3639 ) ) .f_buf ) .f_al );
    if ( (  eq281 ( ( (  from3641 ) .f_line ) , ( (  to3643 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3645 = ( (  i32_dash_size228 ) ( ( (  min432 ) ( ( (  from3641 ) .f_bi ) ,  ( (  to3643 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3646 = ( (  i32_dash_size228 ) ( ( (  max921 ) ( ( (  from3641 ) .f_bi ) ,  ( (  to3643 ) .f_bi ) ) ) ) );
        return ( (  clone1025 ) ( ( (  byte_dash_substr346 ) ( ( (  line912 ) ( (  self3639 ) ,  ( (  from3641 ) .f_line ) ) ) ,  (  from_dash_bi3645 ) ,  (  to_dash_bi3646 ) ) ) ,  (  al3644 ) ) );
    } else {
        struct Pos_19  from_dash_pos3647 = ( (  min384 ) ( (  from3641 ) ,  (  to3643 ) ) );
        struct Pos_19  to_dash_pos3648 = ( (  max387 ) ( (  from3641 ) ,  (  to3643 ) ) );
        struct List_10  temp1027 = ( (  mk249 ) ( (  al3644 ) ) );
        struct List_10 *  sb3649 = ( &temp1027 );
        struct StrView_20  first_dash_line3650 = ( (  line912 ) ( (  self3639 ) ,  ( (  from_dash_pos3647 ) .f_line ) ) );
        struct envunion87  temp1028 = ( (struct envunion87){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all299 , .env =  env->envinst30 } );
        ( temp1028.fun ( &temp1028.env ,  (  sb3649 ) ,  ( ( (  byte_dash_substr346 ) ( (  first_dash_line3650 ) ,  ( (  i32_dash_size228 ) ( ( (  from_dash_pos3647 ) .f_bi ) ) ) ,  ( (  num_dash_bytes911 ) ( (  first_dash_line3650 ) ) ) ) ) .f_contents ) ) );
        struct RangeIter_653  temp1029 =  into_dash_iter655 ( ( (  to658 ) ( (  op_dash_add240 ( ( (  from_dash_pos3647 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  op_dash_sub775 ( ( (  to_dash_pos3648 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_238  __cond1030 =  next656 (&temp1029);
            if (  __cond1030 .tag == 0 ) {
                break;
            }
            int32_t  i3652 =  __cond1030 .stuff .Maybe_238_Just_s .field0;
            struct envunion1032  temp1031 = ( (struct envunion1032){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all299 , .env =  env->envinst30 } );
            ( temp1031.fun ( &temp1031.env ,  (  sb3649 ) ,  ( ( (  line912 ) ( (  self3639 ) ,  (  i3652 ) ) ) .f_contents ) ) );
        }
        struct envunion1034  temp1033 = ( (struct envunion1034){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all299 , .env =  env->envinst30 } );
        ( temp1033.fun ( &temp1033.env ,  (  sb3649 ) ,  ( ( (  byte_dash_substr346 ) ( ( (  line912 ) ( (  self3639 ) ,  ( (  to_dash_pos3648 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size228 ) ( ( (  to_dash_pos3648 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes913 ) ( ( (  to_dash_slice293 ) ( ( * (  sb3649 ) ) ) ) ) );
    }
}

struct env1036 {
    ;
    struct Editor_109 *  ed3895;
};

struct envunion1037 {
    enum Unit_6  (*fun) (  struct env1036*  ,    struct StrView_20  );
    struct env1036 env;
};

static  enum Unit_6   if_dash_just1035 (    struct Maybe_112  x1272 ,   struct envunion1037  fun1274 ) {
    struct Maybe_112  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_112_Just_t ) {
        struct envunion1037  temp1038 = (  fun1274 );
        ( temp1038.fun ( &temp1038.env ,  ( dref1275 .stuff .Maybe_112_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_112_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1039 (   struct env1036* env ,    struct StrView_20  cp3899 ) {
    ( (  free902 ) ( (  cp3899 ) ,  ( ( * ( env->ed3895 ) ) .f_al ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   copy_dash_selection_dash_to_dash_clipboard1018 (   struct env103* env ,    struct Editor_109 *  ed3895 ) {
    struct Tuple2_116  from_dash_to3896 = ( (  selection1019 ) ( ( (  pane940 ) ( (  ed3895 ) ) ) ) );
    struct envunion104  temp1023 = ( (struct envunion104){ .fun = (  struct StrView_20  (*) (  struct env86*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct Pos_19  ) )str_dash_between1024 , .env =  env->envinst86 } );
    struct StrView_20  cpd3897 = ( temp1023.fun ( &temp1023.env ,  ( ( ( * (  ed3895 ) ) .f_pane ) .f_buf ) ,  ( (  fst1021 ) ( (  from_dash_to3896 ) ) ) ,  ( (  snd1022 ) ( (  from_dash_to3896 ) ) ) ) );
    struct env1036 envinst1036 = {
        .ed3895 =  ed3895 ,
    };
    ( (  if_dash_just1035 ) ( ( ( * (  ed3895 ) ) .f_clipboard ) ,  ( (struct envunion1037){ .fun = (  enum Unit_6  (*) (  struct env1036*  ,    struct StrView_20  ) )lam1039 , .env =  envinst1036 } ) ) );
    (*  ed3895 ) .f_clipboard = ( ( Maybe_112_Just ) ( (  cpd3897 ) ) );
    return ( Unit_6_Unit );
}

struct SliceIter_1046 {
    struct Slice_17  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1045 {
    struct SliceIter_1046  field0;
    size_t  field1;
};

static struct Drop_1045 Drop_1045_Drop (  struct SliceIter_1046  field0 ,  size_t  field1 ) {
    return ( struct Drop_1045 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1045   into_dash_iter1047 (    struct Drop_1045  self839 ) {
    return (  self839 );
}

static  struct SliceIter_1046   into_dash_iter1050 (    struct Slice_17  self1803 ) {
    return ( (struct SliceIter_1046) { .f_slice = (  self1803 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_17   subslice1051 (    struct Slice_17  slice1763 ,    size_t  from1765 ,    size_t  to1767 ) {
    struct Action_18 *  begin_dash_ptr1768 = ( (  offset_dash_ptr993 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64227 ) ( (  from1765 ) ) ) ) );
    if ( ( (  cmp150 ( (  from1765 ) , (  to1767 ) ) != 0 ) || (  cmp150 ( (  from1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_17) { .f_ptr = (  begin_dash_ptr1768 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1769 = (  op_dash_sub269 ( ( (  min292 ) ( (  to1767 ) ,  ( (  slice1763 ) .f_count ) ) ) , (  from1765 ) ) );
    return ( (struct Slice_17) { .f_ptr = (  begin_dash_ptr1768 ) , .f_count = (  count1769 ) } );
}

static  struct SliceIter_1046   into_dash_iter1049 (    struct List_16  self2003 ) {
    return ( (  into_dash_iter1050 ) ( ( (  subslice1051 ) ( ( (  self2003 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2003 ) .f_count ) ) ) ) );
}

static  struct Drop_1045   drop1048 (    struct List_16  iterable846 ,    size_t  i848 ) {
    struct SliceIter_1046  it849 = ( (  into_dash_iter1049 ) ( (  iterable846 ) ) );
    return ( ( Drop_1045_Drop ) ( (  it849 ) ,  (  i848 ) ) );
}

struct Maybe_1053 {
    enum {
        Maybe_1053_None_t,
        Maybe_1053_Just_t,
    } tag;
    union {
        struct {
            struct Action_18  field0;
        } Maybe_1053_Just_s;
    } stuff;
};

static struct Maybe_1053 Maybe_1053_Just (  struct Action_18  field0 ) {
    return ( struct Maybe_1053 ) { .tag = Maybe_1053_Just_t, .stuff = { .Maybe_1053_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1053   next1055 (    struct SliceIter_1046 *  self1809 ) {
    size_t  off1810 = ( ( * (  self1809 ) ) .f_current_dash_offset );
    if ( (  cmp150 ( (  op_dash_add198 ( (  off1810 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1809 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1053) { .tag = Maybe_1053_None_t } );
    }
    struct Action_18  elem1811 = ( * ( (  offset_dash_ptr993 ) ( ( ( ( * (  self1809 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64227 ) ( (  off1810 ) ) ) ) ) );
    (*  self1809 ) .f_current_dash_offset = (  op_dash_add198 ( (  off1810 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1053_Just ) ( (  elem1811 ) ) );
}

static  struct Maybe_1053   next1054 (    struct Drop_1045 *  dref841 ) {
    while ( (  cmp150 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1055 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
        (* dref841 ) .field1 = (  op_dash_sub269 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1055 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
}

static  enum Unit_6   free_dash_action1056 (    struct Action_18  action3534 ,    enum CAllocator_8  al3536 ) {
    ( (  free902 ) ( ( (  action3534 ) .f_fwd ) ,  (  al3536 ) ) );
    ( (  free902 ) ( ( (  action3534 ) .f_bwd ) ,  (  al3536 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   trim1057 (    struct List_16 *  l2090 ,    size_t  new_dash_count2092 ) {
    (*  l2090 ) .f_count = ( (  min292 ) ( (  new_dash_count2092 ) ,  ( ( * (  l2090 ) ) .f_count ) ) );
    return ( Unit_6_Unit );
}

struct TypeSize_1064 {
    size_t  f_size;
};

static  struct TypeSize_1064   get_dash_typesize1063 (  ) {
    struct Action_18  temp1065;
    return ( (struct TypeSize_1064) { .f_size = ( sizeof( ( (  temp1065 ) ) ) ) } );
}

static  struct Action_18 *   cast_dash_ptr1066 (    void *  p359 ) {
    return ( (struct Action_18 * ) (  p359 ) );
}

static  struct Slice_17   allocate1062 (    enum CAllocator_8  dref1928 ,    size_t  count1930 ) {
    if (!(  dref1928 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1931 = ( ( ( (  get_dash_typesize1063 ) ( ) ) ) .f_size );
    struct Action_18 *  ptr1932 = ( (  cast_dash_ptr1066 ) ( ( ( malloc ) ( (  op_dash_mul211 ( (  size1931 ) , (  count1930 ) ) ) ) ) ) );
    return ( (struct Slice_17) { .f_ptr = (  ptr1932 ) , .f_count = (  count1930 ) } );
}

struct env1067 {
    struct Slice_17  new_dash_slice2017;
    ;
    ;
};

struct Tuple2_1069 {
    struct Action_18  field0;
    int32_t  field1;
};

static struct Tuple2_1069 Tuple2_1069_Tuple2 (  struct Action_18  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1069 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1068 {
    enum Unit_6  (*fun) (  struct env1067*  ,    struct Tuple2_1069  );
    struct env1067 env;
};

static  enum Unit_6   set1071 (    struct Slice_17  slice1755 ,    size_t  i1757 ,    struct Action_18  x1759 ) {
    struct Action_18 *  ep1760 = ( (  get_dash_ptr992 ) ( (  slice1755 ) ,  (  i1757 ) ) );
    (*  ep1760 ) = (  x1759 );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1070 (   struct env1067* env ,    struct Tuple2_1069  dref2018 ) {
    return ( (  set1071 ) ( ( env->new_dash_slice2017 ) ,  ( (  i32_dash_size228 ) ( ( dref2018 .field1 ) ) ) ,  ( dref2018 .field0 ) ) );
}

struct Zip_1073 {
    struct SliceIter_1046  f_left_dash_it;
    struct FromIter_232  f_right_dash_it;
};

static  struct Zip_1073   into_dash_iter1075 (    struct Zip_1073  self905 ) {
    return (  self905 );
}

struct Maybe_1076 {
    enum {
        Maybe_1076_None_t,
        Maybe_1076_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1069  field0;
        } Maybe_1076_Just_s;
    } stuff;
};

static struct Maybe_1076 Maybe_1076_Just (  struct Tuple2_1069  field0 ) {
    return ( struct Maybe_1076 ) { .tag = Maybe_1076_Just_t, .stuff = { .Maybe_1076_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1076   next1077 (    struct Zip_1073 *  self908 ) {
    struct Zip_1073  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_1053  dref910 = ( (  next1055 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_1053_None_t ) {
            return ( (struct Maybe_1076) { .tag = Maybe_1076_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_1053_Just_t ) {
                struct Maybe_238  dref912 = ( (  next239 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_238_None_t ) {
                    return ( (struct Maybe_1076) { .tag = Maybe_1076_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_238_Just_t ) {
                        ( (  next1055 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next239 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1076_Just ) ( ( ( Tuple2_1069_Tuple2 ) ( ( dref910 .stuff .Maybe_1053_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_238_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1072 (    struct Zip_1073  iterable1055 ,   struct envunion1068  fun1057 ) {
    struct Zip_1073  temp1074 = ( (  into_dash_iter1075 ) ( (  iterable1055 ) ) );
    struct Zip_1073 *  it1058 = ( &temp1074 );
    while ( ( true ) ) {
        struct Maybe_1076  dref1059 = ( (  next1077 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_1076_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_1076_Just_t ) {
                struct envunion1068  temp1078 = (  fun1057 );
                ( temp1078.fun ( &temp1078.env ,  ( dref1059 .stuff .Maybe_1076_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1073   zip1079 (    struct Slice_17  left916 ,    struct FromIter_232  right918 ) {
    struct SliceIter_1046  left_dash_it919 = ( (  into_dash_iter1050 ) ( (  left916 ) ) );
    struct FromIter_232  right_dash_it920 = ( (  into_dash_iter244 ) ( (  right918 ) ) );
    return ( (struct Zip_1073) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  void *   cast_dash_ptr1081 (    struct Action_18 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free1080 (    enum CAllocator_8  dref1934 ,    struct Slice_17  slice1936 ) {
    if (!(  dref1934 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1081 ) ( ( (  slice1936 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   grow_dash_if_dash_full1061 (   struct env3* env ,    struct List_16 *  list2016 ) {
    if ( (  eq205 ( ( ( * (  list2016 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2016 ) .f_elements = ( (  allocate1062 ) ( ( ( * (  list2016 ) ) .f_al ) ,  ( env->starting_dash_size2011 ) ) );
    } else {
        if ( (  eq205 ( ( ( * (  list2016 ) ) .f_count ) , ( ( ( * (  list2016 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_17  new_dash_slice2017 = ( (  allocate1062 ) ( ( ( * (  list2016 ) ) .f_al ) ,  (  op_dash_mul211 ( ( ( * (  list2016 ) ) .f_count ) , ( env->growth_dash_factor2012 ) ) ) ) );
            struct env1067 envinst1067 = {
                .new_dash_slice2017 =  new_dash_slice2017 ,
            };
            struct envunion1068  fun2021 = ( (struct envunion1068){ .fun = (  enum Unit_6  (*) (  struct env1067*  ,    struct Tuple2_1069  ) )lam1070 , .env =  envinst1067 } );
            ( (  for_dash_each1072 ) ( ( (  zip1079 ) ( ( ( * (  list2016 ) ) .f_elements ) ,  ( (  from245 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  fun2021 ) ) );
            ( (  free1080 ) ( ( ( * (  list2016 ) ) .f_al ) ,  ( ( * (  list2016 ) ) .f_elements ) ) );
            (*  list2016 ) .f_elements = (  new_dash_slice2017 );
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   add1059 (   struct env14* env ,    struct List_16 *  list2024 ,    struct Action_18  elem2026 ) {
    struct envunion15  temp1060 = ( (struct envunion15){ .fun = (  enum Unit_6  (*) (  struct env3*  ,    struct List_16 *  ) )grow_dash_if_dash_full1061 , .env =  env->envinst3 } );
    ( temp1060.fun ( &temp1060.env ,  (  list2024 ) ) );
    ( (  set1071 ) ( ( ( * (  list2024 ) ) .f_elements ) ,  ( ( * (  list2024 ) ) .f_count ) ,  (  elem2026 ) ) );
    (*  list2024 ) .f_count = (  op_dash_add198 ( ( ( * (  list2024 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  struct Maybe_112   head1083 (    struct SplitIter_353  it1123 ) {
    struct SplitIter_353  temp1084 = ( (  into_dash_iter360 ) ( (  it1123 ) ) );
    return ( (  next372 ) ( ( &temp1084 ) ) );
}

static  struct Maybe_112   head1086 (    struct Drop_352  it1123 ) {
    struct Drop_352  temp1087 = ( (  into_dash_iter358 ) ( (  it1123 ) ) );
    return ( (  next371 ) ( ( &temp1087 ) ) );
}

static  bool   null1085 (    struct Drop_352  it1132 ) {
    struct Maybe_112  dref1133 = ( (  head1086 ) ( (  it1132 ) ) );
    if ( dref1133.tag == Maybe_112_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_6   panic1089 (    struct StrView_20  errmsg1693 ) {
    ( (  print_dash_str441 ) ( ( ( StrConcat_442_StrConcat ) ( ( ( StrConcat_443_StrConcat ) ( ( (  from_dash_string185 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1693 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  struct Tuple2_369   undefined1090 (  ) {
    struct Tuple2_369  temp1091;
    return (  temp1091 );
}

static  struct Tuple2_369   or_dash_fail1088 (    struct Maybe_368  x1706 ,    struct StrView_20  errmsg1708 ) {
    struct Maybe_368  dref1709 = (  x1706 );
    if ( dref1709.tag == Maybe_368_None_t ) {
        ( (  panic1089 ) ( (  errmsg1708 ) ) );
        return ( (  undefined1090 ) ( ) );
    }
    else {
        if ( dref1709.tag == Maybe_368_Just_t ) {
            return ( dref1709 .stuff .Maybe_368_Just_s .field0 );
        }
    }
}

static  struct Maybe_368   reduce1093 (    struct Zip_351  iterable1074 ,    struct Maybe_368  base1076 ,    struct Maybe_368 (*  fun1078 )(    struct Tuple2_369  ,    struct Maybe_368  ) ) {
    struct Maybe_368  x1079 = (  base1076 );
    struct Zip_351  it1080 = ( (  into_dash_iter356 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_368  dref1081 = ( (  next370 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_368_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_368_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_368_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1094 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1094);
    exit ( 1 );
    ( Unit_6_Unit );
    struct Maybe_368  temp1095;
    return (  temp1095 );
}

static  struct Maybe_368   lam1096 (    struct Tuple2_369  e1128 ,    struct Maybe_368  dref1129 ) {
    return ( ( Maybe_368_Just ) ( (  e1128 ) ) );
}

static  struct Maybe_368   last1092 (    struct Zip_351  it1126 ) {
    return ( (  reduce1093 ) ( (  it1126 ) ,  ( (struct Maybe_368) { .tag = Maybe_368_None_t } ) ,  (  lam1096 ) ) );
}

static  int32_t   snd1097 (    struct Tuple2_369  dref1237 ) {
    return ( dref1237 .field1 );
}

static  struct StrView_20   fst1098 (    struct Tuple2_369  dref1234 ) {
    return ( dref1234 .field0 );
}

static  struct Pos_19   pos_dash_after_dash_str1082 (    struct TextBuf_73 *  self3627 ,    struct StrView_20  bytes3629 ,    struct Pos_19  from3631 ) {
    struct SplitIter_353  lines3632 = ( (  split_dash_by_dash_each361 ) ( (  bytes3629 ) ,  ( (  from_dash_charlike186 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_20  first_dash_line3633 = ( (  or_dash_else336 ) ( ( (  head1083 ) ( (  lines3632 ) ) ) ,  ( (  from_dash_string185 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_352  headless3634 = ( (  drop359 ) ( (  lines3632 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1085 ) ( (  headless3634 ) ) ) ) {
        struct Pos_19  next_dash_pos3635 = ( (  mk467 ) ( ( (  from3631 ) .f_line ) ,  (  op_dash_add240 ( ( (  from3631 ) .f_bi ) , ( (  size_dash_i32162 ) ( ( (  num_dash_bytes911 ) ( (  first_dash_line3633 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3635 );
    } else {
        struct Tuple2_369  last_dash_line3636 = ( (  or_dash_fail1088 ) ( ( (  last1092 ) ( ( (  zip357 ) ( (  headless3634 ) ,  ( (  from245 ) ( (  op_dash_add240 ( ( (  from3631 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string185 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk467 ) ( ( (  snd1097 ) ( (  last_dash_line3636 ) ) ) ,  ( (  size_dash_i32162 ) ( ( (  num_dash_bytes911 ) ( ( (  fst1098 ) ( (  last_dash_line3636 ) ) ) ) ) ) ) ) );
    }
}

static  struct Cursors_21   or_dash_else1100 (    struct Maybe_90  self1713 ,    struct Cursors_21  alt1715 ) {
    struct Maybe_90  dref1716 = (  self1713 );
    if ( dref1716.tag == Maybe_90_None_t ) {
        return (  alt1715 );
    }
    else {
        if ( dref1716.tag == Maybe_90_Just_t ) {
            return ( dref1716 .stuff .Maybe_90_Just_s .field0 );
        }
    }
}

static  struct Maybe_90   change1043 (   struct env88* env ,    struct TextBuf_73 *  self3655 ,    struct Pos_19  from3657 ,    struct Pos_19  to3659 ,    struct StrView_20  bytes3661 ,    struct Maybe_90  before_dash_cursors3663 ) {
    struct Pos_19  from_dash_pos3664 = ( (  min384 ) ( (  from3657 ) ,  (  to3659 ) ) );
    struct Pos_19  to_dash_pos3665 = ( (  max387 ) ( (  from3657 ) ,  (  to3659 ) ) );
    struct Actions_74 *  actions3666 = ( & ( ( * (  self3655 ) ) .f_actions ) );
    enum CAllocator_8  al3667 = ( ( ( * (  actions3666 ) ) .f_list ) .f_al );
    size_t  cur3668 = ( ( * (  actions3666 ) ) .f_cur );
    struct Drop_1045  temp1044 =  into_dash_iter1047 ( ( (  drop1048 ) ( ( ( * (  actions3666 ) ) .f_list ) ,  (  cur3668 ) ) ) );
    while (true) {
        struct Maybe_1053  __cond1052 =  next1054 (&temp1044);
        if (  __cond1052 .tag == 0 ) {
            break;
        }
        struct Action_18  action3670 =  __cond1052 .stuff .Maybe_1053_Just_s .field0;
        ( (  free_dash_action1056 ) ( (  action3670 ) ,  (  al3667 ) ) );
    }
    ( (  trim1057 ) ( ( & ( ( * (  actions3666 ) ) .f_list ) ) ,  (  cur3668 ) ) );
    struct envunion91  temp1058 = ( (struct envunion91){ .fun = (  enum Unit_6  (*) (  struct env14*  ,    struct List_16 *  ,    struct Action_18  ) )add1059 , .env =  env->envinst14 } );
    struct envunion92  temp1099 = ( (struct envunion92){ .fun = (  struct StrView_20  (*) (  struct env86*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct Pos_19  ) )str_dash_between1024 , .env =  env->envinst86 } );
    ( temp1058.fun ( &temp1058.env ,  ( & ( ( * (  actions3666 ) ) .f_list ) ) ,  ( (struct Action_18) { .f_from = (  from3657 ) , .f_fwd = ( (  clone1025 ) ( (  bytes3661 ) ,  (  al3667 ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1082 ) ( (  self3655 ) ,  (  bytes3661 ) ,  (  from_dash_pos3664 ) ) ) , .f_bwd = ( temp1099.fun ( &temp1099.env ,  (  self3655 ) ,  (  from_dash_pos3664 ) ,  (  to_dash_pos3665 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3665 ) , .f_before_dash_cursors = ( (  or_dash_else1100 ) ( (  before_dash_cursors3663 ) ,  ( (struct Cursors_21) { .f_cur = (  from3657 ) , .f_sel = ( (  eq280 ( (  from3657 ) , (  to3659 ) ) ) ? ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) : ( ( Maybe_22_Just ) ( (  to3659 ) ) ) ) } ) ) ) } ) ) );
    struct envunion89  temp1101 = ( (struct envunion89){ .fun = (  struct Maybe_90  (*) (  struct env84*  ,    struct TextBuf_73 *  ) )redo987 , .env =  env->envinst84 } );
    return ( temp1101.fun ( &temp1101.env ,  (  self3655 ) ) );
}

struct env1103 {
    struct Pane_110 *  self3874;
    ;
    ;
};

struct envunion1104 {
    enum Unit_6  (*fun) (  struct env1103*  ,    struct Cursors_21  );
    struct env1103 env;
};

static  enum Unit_6   if_dash_just1102 (    struct Maybe_90  x1272 ,   struct envunion1104  fun1274 ) {
    struct Maybe_90  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_90_Just_t ) {
        struct envunion1104  temp1105 = (  fun1274 );
        ( temp1105.fun ( &temp1105.env ,  ( dref1275 .stuff .Maybe_90_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_90_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1106 (   struct env1103* env ,    struct Cursors_21  cursors3881 ) {
    ( (  set_dash_cursors1003 ) ( ( env->self3874 ) ,  ( (  cursors3881 ) .f_cur ) ,  ( (  or_dash_else1004 ) ( ( (  cursors3881 ) .f_sel ) ,  ( (  cursors3881 ) .f_cur ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   replace_dash_selection1041 (   struct env101* env ,    struct Pane_110 *  self3874 ,    struct Tuple2_116  pos_prime_s3876 ,    struct StrView_20  cp3878 ) {
    struct envunion102  temp1042 = ( (struct envunion102){ .fun = (  struct Maybe_90  (*) (  struct env88*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_90  ) )change1043 , .env =  env->envinst88 } );
    struct Maybe_90  mcursors3879 = ( temp1042.fun ( &temp1042.env ,  ( ( * (  self3874 ) ) .f_buf ) ,  ( (  fst1021 ) ( (  pos_prime_s3876 ) ) ) ,  ( (  snd1022 ) ( (  pos_prime_s3876 ) ) ) ,  (  cp3878 ) ,  ( ( Maybe_90_Just ) ( ( (struct Cursors_21) { .f_cur = ( ( * (  self3874 ) ) .f_cursor ) , .f_sel = ( ( * (  self3874 ) ) .f_sel ) } ) ) ) ) );
    struct env1103 envinst1103 = {
        .self3874 =  self3874 ,
    };
    ( (  if_dash_just1102 ) ( (  mcursors3879 ) ,  ( (struct envunion1104){ .fun = (  enum Unit_6  (*) (  struct env1103*  ,    struct Cursors_21  ) )lam1106 , .env =  envinst1103 } ) ) );
    return ( Unit_6_Unit );
}

struct envunion1108 {
    enum Unit_6  (*fun) (  struct env103*  ,    struct Editor_109 *  );
    struct env103 env;
};

struct envunion1110 {
    enum Unit_6  (*fun) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_116  ,    struct StrView_20  );
    struct env101 env;
};

struct envunion1112 {
    enum Unit_6  (*fun) (  struct env103*  ,    struct Editor_109 *  );
    struct env103 env;
};

static  struct StrBuilder_44   mk1118 (    enum CAllocator_8  al2730 ) {
    return ( (struct StrBuilder_44) { .f_chars = ( (  mk249 ) ( (  al2730 ) ) ) } );
}

struct IntStrIter_1124 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1123 {
    struct StrViewIter_567  f_left;
    struct IntStrIter_1124  f_right;
};

struct StrConcatIter_1122 {
    struct StrConcatIter_1123  f_left;
    struct StrViewIter_567  f_right;
};

struct env1125 {
    struct StrBuilder_44 *  builder2712;
    struct env42 envinst42;
};

struct envunion1126 {
    enum Unit_6  (*fun) (  struct env1125*  ,    struct Char_47  );
    struct env1125 env;
};

static  struct StrConcatIter_1122   into_dash_iter1128 (    struct StrConcatIter_1122  self1472 ) {
    return (  self1472 );
}

struct env1134 {
    ;
    size_t  base1191;
};

struct envunion1135 {
    size_t  (*fun) (  struct env1134*  ,    int32_t  ,    size_t  );
    struct env1134 env;
};

static  size_t   reduce1133 (    struct Range_650  iterable1074 ,    size_t  base1076 ,   struct envunion1135  fun1078 ) {
    size_t  x1079 = (  base1076 );
    struct RangeIter_653  it1080 = ( (  into_dash_iter655 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_238  dref1081 = ( (  next656 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_238_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_238_Just_t ) {
                struct envunion1135  temp1136 = (  fun1078 );
                x1079 = ( temp1136.fun ( &temp1136.env ,  ( dref1081 .stuff .Maybe_238_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1137 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1137);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1138;
    return (  temp1138 );
}

static  size_t   lam1139 (   struct env1134* env ,    int32_t  item1195 ,    size_t  x1197 ) {
    return (  op_dash_mul211 ( (  x1197 ) , ( env->base1191 ) ) );
}

static  size_t   pow1132 (    size_t  base1191 ,    int32_t  p1193 ) {
    struct env1134 envinst1134 = {
        .base1191 =  base1191 ,
    };
    return ( (  reduce1133 ) ( ( (  to658 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub775 ( (  p1193 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1135){ .fun = (  size_t  (*) (  struct env1134*  ,    int32_t  ,    size_t  ) )lam1139 , .env =  envinst1134 } ) ) );
}

static  uint8_t   cast1140 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_570   next1131 (    struct IntStrIter_1124 *  self1403 ) {
    if ( ( ( * (  self1403 ) ) .f_negative ) ) {
        (*  self1403 ) .f_negative = ( false );
        return ( ( Maybe_570_Just ) ( ( (  from_dash_charlike186 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp386 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_570) { .tag = Maybe_570_None_t } );
    }
    size_t  trim_dash_down1404 = ( (  pow1132 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub775 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    size_t  upper1405 = (  op_dash_div176 ( ( ( * (  self1403 ) ) .f_int ) , (  trim_dash_down1404 ) ) );
    size_t  upper_dash_mask1406 = (  op_dash_mul211 ( (  op_dash_div176 ( (  upper1405 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1407 = ( ( (  cast1140 ) ( (  op_dash_sub269 ( (  upper1405 ) , (  upper_dash_mask1406 ) ) ) ) ) );
    (*  self1403 ) .f_len = (  op_dash_sub775 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_47  digit_dash_char1408 = ( (  from_dash_u8856 ) ( (  op_dash_add191 ( (  digit1407 ) , (  from_dash_integral177 ( 48 ) ) ) ) ) );
    return ( ( Maybe_570_Just ) ( (  digit_dash_char1408 ) ) );
}

static  struct Maybe_570   next1130 (    struct StrConcatIter_1123 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next571 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next1131 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next1129 (    struct StrConcatIter_1122 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next1130 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next571 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each1121 (    struct StrConcatIter_1122  iterable1055 ,   struct envunion1126  fun1057 ) {
    struct StrConcatIter_1122  temp1127 = ( (  into_dash_iter1128 ) ( (  iterable1055 ) ) );
    struct StrConcatIter_1122 *  it1058 = ( &temp1127 );
    while ( ( true ) ) {
        struct Maybe_570  dref1059 = ( (  next1129 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_570_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_570_Just_t ) {
                struct envunion1126  temp1141 = (  fun1057 );
                ( temp1141.fun ( &temp1141.env ,  ( dref1059 .stuff .Maybe_570_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  int32_t   count_dash_digits1148 (    size_t  self1411 ) {
    if ( (  eq205 ( (  self1411 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1412 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp150 ( (  self1411 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1411 = (  op_dash_div176 ( (  self1411 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1412 = (  op_dash_add240 ( (  digits1412 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1412 );
}

static  struct IntStrIter_1124   uint_dash_iter1147 (    size_t  int1418 ) {
    return ( (struct IntStrIter_1124) { .f_int = (  int1418 ) , .f_len = ( (  count_dash_digits1148 ) ( (  int1418 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1124   chars1146 (    size_t  self1448 ) {
    return ( (  uint_dash_iter1147 ) ( (  self1448 ) ) );
}

static  struct StrConcatIter_1123   into_dash_iter1145 (    struct StrConcat_51  dref1479 ) {
    return ( (struct StrConcatIter_1123) { .f_left = ( (  chars572 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1146 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1123   chars1144 (    struct StrConcat_51  self1490 ) {
    return ( (  into_dash_iter1145 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1122   into_dash_iter1143 (    struct StrConcat_50  dref1479 ) {
    return ( (struct StrConcatIter_1122) { .f_left = ( (  chars1144 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars572 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1122   chars1142 (    struct StrConcat_50  self1490 ) {
    return ( (  into_dash_iter1143 ) ( (  self1490 ) ) );
}

static  enum Unit_6   write_dash_slice1153 (   struct env40* env ,    struct StrBuilder_44 *  builder2702 ,    struct Slice_11  s2704 ) {
    struct envunion41  temp1154 = ( (struct envunion41){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all299 , .env =  env->envinst30 } );
    ( temp1154.fun ( &temp1154.env ,  ( & ( ( * (  builder2702 ) ) .f_chars ) ) ,  (  s2704 ) ) );
    return ( Unit_6_Unit );
}

static  struct Slice_11   from_dash_char1155 (    struct Char_47  c1916 ,    uint8_t *  buf1918 ) {
    struct CharDestructured_171  dref1919 = ( (  destructure172 ) ( (  c1916 ) ) );
    if ( dref1919.tag == CharDestructured_171_Ref_t ) {
        return ( (struct Slice_11) { .f_ptr = ( ( dref1919 .stuff .CharDestructured_171_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1919 .stuff .CharDestructured_171_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1919.tag == CharDestructured_171_Scalar_t ) {
            if ( (  cmp180 ( ( dref1919 .stuff .CharDestructured_171_Scalar_s .field0 ) , (  from_dash_integral181 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1156 = ( (  from_dash_string39 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1156);
                exit ( 1 );
                ( Unit_6_Unit );
            }
            (*  buf1918 ) = ( (  u32_dash_u8183 ) ( ( dref1919 .stuff .CharDestructured_171_Scalar_s .field0 ) ) );
            return ( (struct Slice_11) { .f_ptr = (  buf1918 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_6   write_dash_char1151 (   struct env42* env ,    struct StrBuilder_44 *  builder2707 ,    struct Char_47  c2709 ) {
    struct envunion43  temp1152 = ( (struct envunion43){ .fun = (  enum Unit_6  (*) (  struct env40*  ,    struct StrBuilder_44 *  ,    struct Slice_11  ) )write_dash_slice1153 , .env =  env->envinst40 } );
    uint8_t  temp1158;
    uint8_t  temp1157 = (  temp1158 );
    ( temp1152.fun ( &temp1152.env ,  (  builder2707 ) ,  ( (  from_dash_char1155 ) ( (  c2709 ) ,  ( &temp1157 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1149 (   struct env1125* env ,    struct Char_47  c2716 ) {
    struct envunion46  temp1150 = ( (struct envunion46){ .fun = (  enum Unit_6  (*) (  struct env42*  ,    struct StrBuilder_44 *  ,    struct Char_47  ) )write_dash_char1151 , .env =  env->envinst42 } );
    return ( temp1150.fun ( &temp1150.env ,  ( env->builder2712 ) ,  (  c2716 ) ) );
}

static  enum Unit_6   write1120 (   struct env45* env ,    struct StrBuilder_44 *  builder2712 ,    struct StrConcat_50  s2714 ) {
    struct env1125 envinst1125 = {
        .builder2712 =  builder2712 ,
        .envinst42 = env->envinst42 ,
    };
    ( (  for_dash_each1121 ) ( ( (  chars1142 ) ( (  s2714 ) ) ) ,  ( (struct envunion1126){ .fun = (  enum Unit_6  (*) (  struct env1125*  ,    struct Char_47  ) )lam1149 , .env =  envinst1125 } ) ) );
    return ( Unit_6_Unit );
}

static  uint8_t *   cast_dash_ptr1162 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice1161 (    struct Slice_11  s1913 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr1162 ) ( ( (  s1913 ) .f_ptr ) ) ) , .f_count = ( (  s1913 ) .f_count ) } );
}

static  struct StrView_20   as_dash_str1160 (    struct StrBuilder_44 *  builder2736 ) {
    return ( (struct StrView_20) { .f_contents = ( (  cast_dash_slice1161 ) ( ( (  subslice289 ) ( ( ( ( * (  builder2736 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2736 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_20   mk_dash_dyn_dash_str1116 (   struct env48* env ,    struct StrConcat_50  s2756 ,    enum CAllocator_8  al2758 ) {
    struct StrBuilder_44  temp1117 = ( (  mk1118 ) ( (  al2758 ) ) );
    struct StrBuilder_44 *  sb2759 = ( &temp1117 );
    struct envunion49  temp1119 = ( (struct envunion49){ .fun = (  enum Unit_6  (*) (  struct env45*  ,    struct StrBuilder_44 *  ,    struct StrConcat_50  ) )write1120 , .env =  env->envinst45 } );
    ( temp1119.fun ( &temp1119.env ,  (  sb2759 ) ,  (  s2756 ) ) );
    struct envunion52  temp1159 = ( (struct envunion52){ .fun = (  enum Unit_6  (*) (  struct env42*  ,    struct StrBuilder_44 *  ,    struct Char_47  ) )write_dash_char1151 , .env =  env->envinst42 } );
    ( temp1159.fun ( &temp1159.env ,  (  sb2759 ) ,  ( (  nullchar492 ) ( ) ) ) );
    struct StrView_20  dynstr2760 = ( (  as_dash_str1160 ) ( (  sb2759 ) ) );
    return ( (struct StrView_20) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2760 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub269 ( ( ( (  dynstr2760 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_6   set_dash_msg1114 (   struct env105* env ,    struct Editor_109 *  ed3914 ,    struct StrConcat_50  s3916 ) {
    ( (  reset_dash_msg896 ) ( (  ed3914 ) ) );
    struct envunion106  temp1115 = ( (struct envunion106){ .fun = (  struct StrView_20  (*) (  struct env48*  ,    struct StrConcat_50  ,    enum CAllocator_8  ) )mk_dash_dyn_dash_str1116 , .env =  env->envinst48 } );
    (*  ed3914 ) .f_msg = ( ( Maybe_112_Just ) ( ( temp1115.fun ( &temp1115.env ,  (  s3916 ) ,  ( ( * (  ed3914 ) ) .f_al ) ) ) ) );
    return ( Unit_6_Unit );
}

struct envunion1165 {
    enum Unit_6  (*fun) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_116  ,    struct StrView_20  );
    struct env101 env;
};

struct env1164 {
    struct env101 envinst101;
    ;
    ;
    ;
    struct Editor_109 *  ed3919;
};

struct envunion1166 {
    enum Unit_6  (*fun) (  struct env1164*  ,    struct StrView_20  );
    struct env1164 env;
};

static  enum Unit_6   if_dash_just1163 (    struct Maybe_112  x1272 ,   struct envunion1166  fun1274 ) {
    struct Maybe_112  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_112_Just_t ) {
        struct envunion1166  temp1167 = (  fun1274 );
        ( temp1167.fun ( &temp1167.env ,  ( dref1275 .stuff .Maybe_112_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_112_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  struct Pos_19   max_dash_pos1169 (    struct Pane_110 *  pane3841 ) {
    return ( {  struct Maybe_22  dref3842 = ( ( * (  pane3841 ) ) .f_sel ) ; dref3842.tag == Maybe_22_Just_t ? ( (  max387 ) ( ( ( * (  pane3841 ) ) .f_cursor ) ,  ( dref3842 .stuff .Maybe_22_Just_s .field0 ) ) ) : ( ( * (  pane3841 ) ) .f_cursor ) ; } );
}

static  enum Unit_6   lam1168 (   struct env1164* env ,    struct StrView_20  cp3926 ) {
    struct Pos_19  start3927 = ( (  right_dash_pos942 ) ( ( ( ( * ( env->ed3919 ) ) .f_pane ) .f_buf ) ,  ( (  max_dash_pos1169 ) ( ( (  pane940 ) ( ( env->ed3919 ) ) ) ) ) ) );
    struct envunion1165  temp1170 = ( (struct envunion1165){ .fun = (  enum Unit_6  (*) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_116  ,    struct StrView_20  ) )replace_dash_selection1041 , .env =  env->envinst101 } );
    ( temp1170.fun ( &temp1170.env ,  ( (  pane940 ) ( ( env->ed3919 ) ) ) ,  ( ( Tuple2_116_Tuple2 ) ( (  start3927 ) ,  (  start3927 ) ) ) ,  (  cp3926 ) ) );
    return ( Unit_6_Unit );
}

struct envunion1173 {
    enum Unit_6  (*fun) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_116  ,    struct StrView_20  );
    struct env101 env;
};

struct env1172 {
    struct env101 envinst101;
    struct Editor_109 *  ed3919;
    ;
    ;
};

struct envunion1174 {
    enum Unit_6  (*fun) (  struct env1172*  ,    struct StrView_20  );
    struct env1172 env;
};

static  enum Unit_6   if_dash_just1171 (    struct Maybe_112  x1272 ,   struct envunion1174  fun1274 ) {
    struct Maybe_112  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_112_Just_t ) {
        struct envunion1174  temp1175 = (  fun1274 );
        ( temp1175.fun ( &temp1175.env ,  ( dref1275 .stuff .Maybe_112_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_112_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  struct Pos_19   min_dash_pos1177 (    struct Pane_110 *  pane3836 ) {
    return ( {  struct Maybe_22  dref3837 = ( ( * (  pane3836 ) ) .f_sel ) ; dref3837.tag == Maybe_22_Just_t ? ( (  min384 ) ( ( ( * (  pane3836 ) ) .f_cursor ) ,  ( dref3837 .stuff .Maybe_22_Just_s .field0 ) ) ) : ( ( * (  pane3836 ) ) .f_cursor ) ; } );
}

static  enum Unit_6   lam1176 (   struct env1172* env ,    struct StrView_20  cp3929 ) {
    struct Pos_19  start3930 = ( (  min_dash_pos1177 ) ( ( (  pane940 ) ( ( env->ed3919 ) ) ) ) );
    struct envunion1173  temp1178 = ( (struct envunion1173){ .fun = (  enum Unit_6  (*) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_116  ,    struct StrView_20  ) )replace_dash_selection1041 , .env =  env->envinst101 } );
    ( temp1178.fun ( &temp1178.env ,  ( (  pane940 ) ( ( env->ed3919 ) ) ) ,  ( ( Tuple2_116_Tuple2 ) ( (  start3930 ) ,  (  start3930 ) ) ) ,  (  cp3929 ) ) );
    return ( Unit_6_Unit );
}

struct envunion1181 {
    enum Unit_6  (*fun) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_116  ,    struct StrView_20  );
    struct env101 env;
};

struct env1180 {
    struct env101 envinst101;
    struct Editor_109 *  ed3919;
    ;
    ;
};

struct envunion1182 {
    enum Unit_6  (*fun) (  struct env1180*  ,    struct StrView_20  );
    struct env1180 env;
};

static  enum Unit_6   if_dash_just1179 (    struct Maybe_112  x1272 ,   struct envunion1182  fun1274 ) {
    struct Maybe_112  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_112_Just_t ) {
        struct envunion1182  temp1183 = (  fun1274 );
        ( temp1183.fun ( &temp1183.env ,  ( dref1275 .stuff .Maybe_112_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_112_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1184 (   struct env1180* env ,    struct StrView_20  cp3932 ) {
    struct Pos_19  start3933 = ( (  min_dash_pos1177 ) ( ( (  pane940 ) ( ( env->ed3919 ) ) ) ) );
    struct envunion1181  temp1185 = ( (struct envunion1181){ .fun = (  enum Unit_6  (*) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_116  ,    struct StrView_20  ) )replace_dash_selection1041 , .env =  env->envinst101 } );
    ( temp1185.fun ( &temp1185.env ,  ( (  pane940 ) ( ( env->ed3919 ) ) ) ,  ( ( Tuple2_116_Tuple2 ) ( (  start3933 ) ,  (  start3933 ) ) ) ,  (  cp3932 ) ) );
    return ( Unit_6_Unit );
}

static  bool   is_dash_none1186 (    struct Maybe_22  m1245 ) {
    struct Maybe_22  dref1246 = (  m1245 );
    if ( dref1246.tag == Maybe_22_None_t ) {
        return ( true );
    }
    else {
        if ( dref1246.tag == Maybe_22_Just_t ) {
            return ( false );
        }
    }
}

static  enum Unit_6   handle_dash_normal_dash_key908 (   struct env107* env ,    struct Editor_109 *  ed3919 ,    struct Key_121  key3921 ) {
    struct Key_121  dref3922 = (  key3921 );
    if ( dref3922.tag == Key_121_Char_t ) {
        if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed3919 ) .f_running = ( false );
        } else {
            if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left909 ) ( ( (  pane940 ) ( (  ed3919 ) ) ) ) );
            } else {
                if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right941 ) ( ( (  pane940 ) ( (  ed3919 ) ) ) ) );
                } else {
                    if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down944 ) ( ( (  pane940 ) ( (  ed3919 ) ) ) ) );
                    } else {
                        if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up948 ) ( ( (  pane940 ) ( (  ed3919 ) ) ) ) );
                        } else {
                            if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                (*  ed3919 ) .f_pane .f_mode = ( Mode_111_Insert );
                            } else {
                                if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  advance_dash_word949 ) ( ( (  pane940 ) ( (  ed3919 ) ) ) ,  ( MoveDirection_950_MoveFwd ) ,  ( MoveTarget_951_NextWordStart ) ) );
                                } else {
                                    if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  advance_dash_word949 ) ( ( (  pane940 ) ( (  ed3919 ) ) ) ,  ( MoveDirection_950_MoveFwd ) ,  ( MoveTarget_951_NextWordEnd ) ) );
                                    } else {
                                        if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  advance_dash_word949 ) ( ( (  pane940 ) ( (  ed3919 ) ) ) ,  ( MoveDirection_950_MoveBwd ) ,  ( MoveTarget_951_NextWordEnd ) ) );
                                        } else {
                                            if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct envunion118  temp984 = ( (struct envunion118){ .fun = (  enum Unit_6  (*) (  struct env99*  ,    struct Pane_110 *  ) )redo985 , .env =  env->envinst99 } );
                                                ( temp984.fun ( &temp984.env ,  ( (  pane940 ) ( (  ed3919 ) ) ) ) );
                                            } else {
                                                if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                    struct envunion117  temp1005 = ( (struct envunion117){ .fun = (  enum Unit_6  (*) (  struct env97*  ,    struct Pane_110 *  ) )undo1006 , .env =  env->envinst97 } );
                                                    ( temp1005.fun ( &temp1005.env ,  ( (  pane940 ) ( (  ed3919 ) ) ) ) );
                                                } else {
                                                    if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                        struct envunion114  temp1017 = ( (struct envunion114){ .fun = (  enum Unit_6  (*) (  struct env103*  ,    struct Editor_109 *  ) )copy_dash_selection_dash_to_dash_clipboard1018 , .env =  env->envinst103 } );
                                                        ( temp1017.fun ( &temp1017.env ,  (  ed3919 ) ) );
                                                        struct envunion115  temp1040 = ( (struct envunion115){ .fun = (  enum Unit_6  (*) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_116  ,    struct StrView_20  ) )replace_dash_selection1041 , .env =  env->envinst101 } );
                                                        ( temp1040.fun ( &temp1040.env ,  ( (  pane940 ) ( (  ed3919 ) ) ) ,  ( (  selection1019 ) ( ( (  pane940 ) ( (  ed3919 ) ) ) ) ) ,  ( (  from_dash_string185 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                    } else {
                                                        if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                            struct envunion1108  temp1107 = ( (struct envunion1108){ .fun = (  enum Unit_6  (*) (  struct env103*  ,    struct Editor_109 *  ) )copy_dash_selection_dash_to_dash_clipboard1018 , .env =  env->envinst103 } );
                                                            ( temp1107.fun ( &temp1107.env ,  (  ed3919 ) ) );
                                                            struct envunion1110  temp1109 = ( (struct envunion1110){ .fun = (  enum Unit_6  (*) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_116  ,    struct StrView_20  ) )replace_dash_selection1041 , .env =  env->envinst101 } );
                                                            ( temp1109.fun ( &temp1109.env ,  ( (  pane940 ) ( (  ed3919 ) ) ) ,  ( (  selection1019 ) ( ( (  pane940 ) ( (  ed3919 ) ) ) ) ) ,  ( (  from_dash_string185 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                            (*  ed3919 ) .f_pane .f_mode = ( Mode_111_Insert );
                                                        } else {
                                                            if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion1112  temp1111 = ( (struct envunion1112){ .fun = (  enum Unit_6  (*) (  struct env103*  ,    struct Editor_109 *  ) )copy_dash_selection_dash_to_dash_clipboard1018 , .env =  env->envinst103 } );
                                                                ( temp1111.fun ( &temp1111.env ,  (  ed3919 ) ) );
                                                                size_t  bytes_dash_yanked3924 = ( (  num_dash_bytes911 ) ( ( (  or_dash_else336 ) ( ( ( * (  ed3919 ) ) .f_clipboard ) ,  ( (  from_dash_string185 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                struct envunion108  temp1113 = ( (struct envunion108){ .fun = (  enum Unit_6  (*) (  struct env105*  ,    struct Editor_109 *  ,    struct StrConcat_50  ) )set_dash_msg1114 , .env =  env->envinst105 } );
                                                                ( temp1113.fun ( &temp1113.env ,  (  ed3919 ) ,  ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string185 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked3924 ) ) ) ,  ( (  from_dash_string185 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                            } else {
                                                                if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct env1164 envinst1164 = {
                                                                        .envinst101 = env->envinst101 ,
                                                                        .ed3919 =  ed3919 ,
                                                                    };
                                                                    ( (  if_dash_just1163 ) ( ( ( * (  ed3919 ) ) .f_clipboard ) ,  ( (struct envunion1166){ .fun = (  enum Unit_6  (*) (  struct env1164*  ,    struct StrView_20  ) )lam1168 , .env =  envinst1164 } ) ) );
                                                                } else {
                                                                    if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct env1172 envinst1172 = {
                                                                            .envinst101 = env->envinst101 ,
                                                                            .ed3919 =  ed3919 ,
                                                                        };
                                                                        ( (  if_dash_just1171 ) ( ( ( * (  ed3919 ) ) .f_clipboard ) ,  ( (struct envunion1174){ .fun = (  enum Unit_6  (*) (  struct env1172*  ,    struct StrView_20  ) )lam1176 , .env =  envinst1172 } ) ) );
                                                                    } else {
                                                                        if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct env1180 envinst1180 = {
                                                                                .envinst101 = env->envinst101 ,
                                                                                .ed3919 =  ed3919 ,
                                                                            };
                                                                            ( (  if_dash_just1179 ) ( ( ( * (  ed3919 ) ) .f_clipboard ) ,  ( (struct envunion1182){ .fun = (  enum Unit_6  (*) (  struct env1180*  ,    struct StrView_20  ) )lam1184 , .env =  envinst1180 } ) ) );
                                                                        } else {
                                                                            if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                (*  ed3919 ) .f_pane .f_mode = ( Mode_111_Select );
                                                                                if ( ( (  is_dash_none1186 ) ( ( ( ( * (  ed3919 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                    (*  ed3919 ) .f_pane .f_sel = ( ( Maybe_22_Just ) ( ( ( ( * (  ed3919 ) ) .f_pane ) .f_cursor ) ) );
                                                                                }
                                                                            } else {
                                                                                if ( (  eq749 ( ( dref3922 .stuff .Key_121_Char_s .field0 ) , ( (  from_dash_charlike750 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    (*  ed3919 ) .f_mode = ( ( EditorMode_113_Cmd ) ( ( (  mk1118 ) ( ( ( * (  ed3919 ) ) .f_al ) ) ) ) );
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
        if ( dref3922.tag == Key_121_Escape_t ) {
            (*  ed3919 ) .f_pane .f_mode = ( Mode_111_Normal );
        }
        else {
            if ( true ) {
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   add_dash_str_dash_at_dash_char1189 (   struct env93* env ,    struct Pane_110 *  self3846 ,    struct StrView_20  s3848 ) {
    struct Pos_19  cur3849 = ( ( * (  self3846 ) ) .f_cursor );
    struct envunion94  temp1190 = ( (struct envunion94){ .fun = (  struct Maybe_90  (*) (  struct env88*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_90  ) )change1043 , .env =  env->envinst88 } );
    ( temp1190.fun ( &temp1190.env ,  ( ( * (  self3846 ) ) .f_buf ) ,  (  cur3849 ) ,  (  cur3849 ) ,  (  s3848 ) ,  ( (struct Maybe_90) { .tag = Maybe_90_None_t } ) ) );
    return ( Unit_6_Unit );
}

static  struct StrView_20   from_dash_charlike1191 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_20) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

static  enum Unit_6   backspace1193 (   struct env95* env ,    struct Pane_110 *  self3852 ) {
    struct Pos_19  prev_dash_cur3853 = ( ( * (  self3852 ) ) .f_cursor );
    ( (  move_dash_left909 ) ( (  self3852 ) ) );
    struct envunion96  temp1194 = ( (struct envunion96){ .fun = (  struct Maybe_90  (*) (  struct env88*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_90  ) )change1043 , .env =  env->envinst88 } );
    ( temp1194.fun ( &temp1194.env ,  ( ( * (  self3852 ) ) .f_buf ) ,  ( ( * (  self3852 ) ) .f_cursor ) ,  (  prev_dash_cur3853 ) ,  ( (  from_dash_string185 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_90) { .tag = Maybe_90_None_t } ) ) );
    return ( Unit_6_Unit );
}

struct Array_1196 {
    char _arr [1];
};

static  char *   cast1197 (    struct Array_1196 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_765   as_dash_slice1195 (    struct Array_1196 *  arr2241 ) {
    return ( (struct Slice_765) { .f_ptr = ( (  cast1197 ) ( (  arr2241 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1196   from_dash_listlike1199 (    struct Array_1196  self330 ) {
    return (  self330 );
}

struct envunion1201 {
    enum Unit_6  (*fun) (  struct env93*  ,    struct Pane_110 *  ,    struct StrView_20  );
    struct env93 env;
};

struct Scanner_1203 {
    struct StrView_20  f_s;
};

static  struct Scanner_1203   mk_dash_from_dash_strview1205 (    struct StrView_20  s3118 ) {
    return ( (struct Scanner_1203) { .f_s = (  s3118 ) } );
}

struct TakeWhile_1210 {
    struct StrViewIter_567  f_it;
    bool (*  f_pred )(    struct Char_47  );
};

struct Map_1209 {
    struct TakeWhile_1210  field0;
    size_t (*  field1 )(    struct Char_47  );
};

static struct Map_1209 Map_1209_Map (  struct TakeWhile_1210  field0 ,  size_t (*  field1 )(    struct Char_47  ) ) {
    return ( struct Map_1209 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1209   into_dash_iter1212 (    struct Map_1209  self790 ) {
    return (  self790 );
}

struct Maybe_1213 {
    enum {
        Maybe_1213_None_t,
        Maybe_1213_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_1213_Just_s;
    } stuff;
};

static struct Maybe_1213 Maybe_1213_Just (  size_t  field0 ) {
    return ( struct Maybe_1213 ) { .tag = Maybe_1213_Just_t, .stuff = { .Maybe_1213_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_570   next1215 (    struct TakeWhile_1210 *  self958 ) {
    struct Maybe_570  mx959 = ( (  next571 ) ( ( & ( ( * (  self958 ) ) .f_it ) ) ) );
    struct Maybe_570  dref960 = (  mx959 );
    if ( dref960.tag == Maybe_570_None_t ) {
        return ( (struct Maybe_570) { .tag = Maybe_570_None_t } );
    }
    else {
        if ( dref960.tag == Maybe_570_Just_t ) {
            if ( ( ( ( * (  self958 ) ) .f_pred ) ( ( dref960 .stuff .Maybe_570_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_570_Just ) ( ( dref960 .stuff .Maybe_570_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_570) { .tag = Maybe_570_None_t } );
            }
        }
    }
}

static  struct Maybe_1213   next1214 (    struct Map_1209 *  dref792 ) {
    struct Maybe_570  dref795 = ( (  next1215 ) ( ( & ( (* dref792 ) .field0 ) ) ) );
    if ( dref795.tag == Maybe_570_None_t ) {
        return ( (struct Maybe_1213) { .tag = Maybe_1213_None_t } );
    }
    else {
        if ( dref795.tag == Maybe_570_Just_t ) {
            return ( ( Maybe_1213_Just ) ( ( ( (* dref792 ) .field1 ) ( ( dref795 .stuff .Maybe_570_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1211 (    struct Map_1209  iterable1074 ,    size_t  base1076 ,    size_t (*  fun1078 )(    size_t  ,    size_t  ) ) {
    size_t  x1079 = (  base1076 );
    struct Map_1209  it1080 = ( (  into_dash_iter1212 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_1213  dref1081 = ( (  next1214 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_1213_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_1213_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_1213_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1216 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1216);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1217;
    return (  temp1217 );
}

static  size_t   lam1218 (    size_t  v1093 ,    size_t  s1095 ) {
    return (  op_dash_add198 ( (  v1093 ) , (  s1095 ) ) );
}

static  size_t   sum1208 (    struct Map_1209  it1091 ) {
    return ( (  reduce1211 ) ( (  it1091 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1218 ) ) );
}

static  struct TakeWhile_1210   into_dash_iter1220 (    struct TakeWhile_1210  self955 ) {
    return (  self955 );
}

static  struct Map_1209   map1219 (    struct TakeWhile_1210  iterable799 ,    size_t (*  fun801 )(    struct Char_47  ) ) {
    struct TakeWhile_1210  it802 = ( (  into_dash_iter1220 ) ( (  iterable799 ) ) );
    return ( ( Map_1209_Map ) ( (  it802 ) ,  (  fun801 ) ) );
}

static  struct TakeWhile_1210   take_dash_while1221 (    struct StrViewIter_567  it964 ,    bool (*  pred966 )(    struct Char_47  ) ) {
    return ( (struct TakeWhile_1210) { .f_it = ( (  into_dash_iter569 ) ( (  it964 ) ) ) , .f_pred = (  pred966 ) } );
}

static  size_t   lam1222 (    struct Char_47  c2174 ) {
    return ( (  c2174 ) .f_num_dash_bytes );
}

static  struct StrView_20   take_dash_while1207 (    struct StrView_20  self2170 ,    bool (*  fun2172 )(    struct Char_47  ) ) {
    size_t  bi2175 = ( (  sum1208 ) ( ( (  map1219 ) ( ( (  take_dash_while1221 ) ( ( (  chars572 ) ( (  self2170 ) ) ) ,  (  fun2172 ) ) ) ,  (  lam1222 ) ) ) ) );
    return ( (  byte_dash_substr346 ) ( (  self2170 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2175 ) ) );
}

static  struct StrView_20   byte_dash_substr_dash_from1223 (    struct StrView_20  s2162 ,    size_t  from2164 ) {
    return ( (struct StrView_20) { .f_contents = ( (  from288 ) ( ( (  s2162 ) .f_contents ) ,  (  from2164 ) ) ) } );
}

static  struct StrView_20   take_dash_str_dash_while1206 (    struct Scanner_1203 *  sc3164 ,    bool (*  fun3166 )(    struct Char_47  ) ) {
    struct StrView_20  s3167 = ( (  take_dash_while1207 ) ( ( ( * (  sc3164 ) ) .f_s ) ,  (  fun3166 ) ) );
    (*  sc3164 ) .f_s = ( (  byte_dash_substr_dash_from1223 ) ( ( ( * (  sc3164 ) ) .f_s ) ,  ( (  num_dash_bytes911 ) ( (  s3167 ) ) ) ) );
    return (  s3167 );
}

static  bool   is_dash_not_dash_whitespace1224 (    struct Char_47  c2351 ) {
    return ( ! ( (  is_dash_whitespace972 ) ( (  c2351 ) ) ) );
}

struct TakeWhile_1230 {
    struct StrViewIter_567  f_it;
    bool (*  f_pred )(    struct Char_47  );
};

struct Map_1229 {
    struct TakeWhile_1230  field0;
    size_t (*  field1 )(    struct Char_47  );
};

static struct Map_1229 Map_1229_Map (  struct TakeWhile_1230  field0 ,  size_t (*  field1 )(    struct Char_47  ) ) {
    return ( struct Map_1229 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1229   into_dash_iter1232 (    struct Map_1229  self790 ) {
    return (  self790 );
}

static  struct Maybe_570   next1234 (    struct TakeWhile_1230 *  self958 ) {
    struct Maybe_570  mx959 = ( (  next571 ) ( ( & ( ( * (  self958 ) ) .f_it ) ) ) );
    struct Maybe_570  dref960 = (  mx959 );
    if ( dref960.tag == Maybe_570_None_t ) {
        return ( (struct Maybe_570) { .tag = Maybe_570_None_t } );
    }
    else {
        if ( dref960.tag == Maybe_570_Just_t ) {
            if ( ( ( ( * (  self958 ) ) .f_pred ) ( ( dref960 .stuff .Maybe_570_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_570_Just ) ( ( dref960 .stuff .Maybe_570_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_570) { .tag = Maybe_570_None_t } );
            }
        }
    }
}

static  struct Maybe_1213   next1233 (    struct Map_1229 *  dref792 ) {
    struct Maybe_570  dref795 = ( (  next1234 ) ( ( & ( (* dref792 ) .field0 ) ) ) );
    if ( dref795.tag == Maybe_570_None_t ) {
        return ( (struct Maybe_1213) { .tag = Maybe_1213_None_t } );
    }
    else {
        if ( dref795.tag == Maybe_570_Just_t ) {
            return ( ( Maybe_1213_Just ) ( ( ( (* dref792 ) .field1 ) ( ( dref795 .stuff .Maybe_570_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1231 (    struct Map_1229  iterable1074 ,    size_t  base1076 ,    size_t (*  fun1078 )(    size_t  ,    size_t  ) ) {
    size_t  x1079 = (  base1076 );
    struct Map_1229  it1080 = ( (  into_dash_iter1232 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_1213  dref1081 = ( (  next1233 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_1213_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_1213_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_1213_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1235 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1235);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1236;
    return (  temp1236 );
}

static  size_t   lam1237 (    size_t  v1093 ,    size_t  s1095 ) {
    return (  op_dash_add198 ( (  v1093 ) , (  s1095 ) ) );
}

static  size_t   sum1228 (    struct Map_1229  it1091 ) {
    return ( (  reduce1231 ) ( (  it1091 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1237 ) ) );
}

static  struct TakeWhile_1230   into_dash_iter1239 (    struct TakeWhile_1230  self955 ) {
    return (  self955 );
}

static  struct Map_1229   map1238 (    struct TakeWhile_1230  iterable799 ,    size_t (*  fun801 )(    struct Char_47  ) ) {
    struct TakeWhile_1230  it802 = ( (  into_dash_iter1239 ) ( (  iterable799 ) ) );
    return ( ( Map_1229_Map ) ( (  it802 ) ,  (  fun801 ) ) );
}

static  struct TakeWhile_1230   take_dash_while1240 (    struct StrViewIter_567  it964 ,    bool (*  pred966 )(    struct Char_47  ) ) {
    return ( (struct TakeWhile_1230) { .f_it = ( (  into_dash_iter569 ) ( (  it964 ) ) ) , .f_pred = (  pred966 ) } );
}

static  size_t   lam1241 (    struct Char_47  c2174 ) {
    return ( (  c2174 ) .f_num_dash_bytes );
}

static  struct StrView_20   take_dash_while1227 (    struct StrView_20  self2170 ,    bool (*  fun2172 )(    struct Char_47  ) ) {
    size_t  bi2175 = ( (  sum1228 ) ( ( (  map1238 ) ( ( (  take_dash_while1240 ) ( ( (  chars572 ) ( (  self2170 ) ) ) ,  (  fun2172 ) ) ) ,  (  lam1241 ) ) ) ) );
    return ( (  byte_dash_substr346 ) ( (  self2170 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2175 ) ) );
}

static  struct StrView_20   take_dash_str_dash_while1226 (    struct Scanner_1203 *  sc3164 ,    bool (*  fun3166 )(    struct Char_47  ) ) {
    struct StrView_20  s3167 = ( (  take_dash_while1227 ) ( ( ( * (  sc3164 ) ) .f_s ) ,  (  fun3166 ) ) );
    (*  sc3164 ) .f_s = ( (  byte_dash_substr_dash_from1223 ) ( ( ( * (  sc3164 ) ) .f_s ) ,  ( (  num_dash_bytes911 ) ( (  s3167 ) ) ) ) );
    return (  s3167 );
}

static  enum Unit_6   drop_dash_str_dash_while1225 (    struct Scanner_1203 *  sc3170 ,    bool (*  fun3172 )(    struct Char_47  ) ) {
    ( (  take_dash_str_dash_while1226 ) ( (  sc3170 ) ,  (  fun3172 ) ) );
    return ( Unit_6_Unit );
}

struct Zip_1245 {
    struct SliceIter_303  f_left_dash_it;
    struct SliceIter_303  f_right_dash_it;
};

struct Tuple2_1246 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_1246 Tuple2_1246_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_1246 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1248 {
    bool (*  fun1107 )(    struct Tuple2_1246  );
};

struct envunion1249 {
    bool  (*fun) (  struct env1248*  ,    struct Tuple2_1246  ,    bool  );
    struct env1248 env;
};

static  struct Zip_1245   into_dash_iter1250 (    struct Zip_1245  self905 ) {
    return (  self905 );
}

struct Maybe_1251 {
    enum {
        Maybe_1251_None_t,
        Maybe_1251_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1246  field0;
        } Maybe_1251_Just_s;
    } stuff;
};

static struct Maybe_1251 Maybe_1251_Just (  struct Tuple2_1246  field0 ) {
    return ( struct Maybe_1251 ) { .tag = Maybe_1251_Just_t, .stuff = { .Maybe_1251_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1251   next1252 (    struct Zip_1245 *  self908 ) {
    struct Zip_1245  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_306  dref910 = ( (  next307 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_306_None_t ) {
            return ( (struct Maybe_1251) { .tag = Maybe_1251_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_306_Just_t ) {
                struct Maybe_306  dref912 = ( (  next307 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_306_None_t ) {
                    return ( (struct Maybe_1251) { .tag = Maybe_1251_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_306_Just_t ) {
                        ( (  next307 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next307 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1251_Just ) ( ( ( Tuple2_1246_Tuple2 ) ( ( dref910 .stuff .Maybe_306_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_306_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1247 (    struct Zip_1245  iterable1074 ,    bool  base1076 ,   struct envunion1249  fun1078 ) {
    bool  x1079 = (  base1076 );
    struct Zip_1245  it1080 = ( (  into_dash_iter1250 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_1251  dref1081 = ( (  next1252 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_1251_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_1251_Just_t ) {
                struct envunion1249  temp1253 = (  fun1078 );
                x1079 = ( temp1253.fun ( &temp1253.env ,  ( dref1081 .stuff .Maybe_1251_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1254 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1254);
    exit ( 1 );
    ( Unit_6_Unit );
    bool  temp1255;
    return (  temp1255 );
}

static  bool   lam1256 (   struct env1248* env ,    struct Tuple2_1246  e1109 ,    bool  x1111 ) {
    return ( ( ( env->fun1107 ) ( (  e1109 ) ) ) && (  x1111 ) );
}

static  bool   all1244 (    struct Zip_1245  it1105 ,    bool (*  fun1107 )(    struct Tuple2_1246  ) ) {
    struct env1248 envinst1248 = {
        .fun1107 =  fun1107 ,
    };
    return ( (  reduce1247 ) ( (  it1105 ) ,  ( true ) ,  ( (struct envunion1249){ .fun = (  bool  (*) (  struct env1248*  ,    struct Tuple2_1246  ,    bool  ) )lam1256 , .env =  envinst1248 } ) ) );
}

static  struct Zip_1245   zip1257 (    struct Slice_11  left916 ,    struct Slice_11  right918 ) {
    struct SliceIter_303  left_dash_it919 = ( (  into_dash_iter305 ) ( (  left916 ) ) );
    struct SliceIter_303  right_dash_it920 = ( (  into_dash_iter305 ) ( (  right918 ) ) );
    return ( (struct Zip_1245) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  bool   lam1258 (    struct Tuple2_1246  dref1843 ) {
    return (  eq173 ( ( dref1843 .field0 ) , ( dref1843 .field1 ) ) );
}

static  bool   eq1243 (    struct Slice_11  l1840 ,    struct Slice_11  r1842 ) {
    if ( ( !  eq205 ( ( (  l1840 ) .f_count ) , ( (  r1842 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all1244 ) ( ( (  zip1257 ) ( (  l1840 ) ,  (  r1842 ) ) ) ,  (  lam1258 ) ) );
}

static  bool   eq1242 (    struct StrView_20  l2178 ,    struct StrView_20  r2180 ) {
    return (  eq1243 ( ( (  l2178 ) .f_contents ) , ( (  r2180 ) .f_contents ) ) );
}

static  enum Unit_6   undefined1260 (  ) {
    enum Unit_6  temp1261;
    return (  temp1261 );
}

static  enum Unit_6   todo1259 (  ) {
    ( (  print981 ) ( ( (  from_dash_string185 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined1260 ) ( ) );
}

static  enum Unit_6   run_dash_cmd1202 (    struct Editor_109 *  ed3902 ,    struct StrView_20  s3904 ) {
    struct Scanner_1203  temp1204 = ( (  mk_dash_from_dash_strview1205 ) ( (  s3904 ) ) );
    struct Scanner_1203 *  sc3905 = ( &temp1204 );
    struct StrView_20  cmd3906 = ( (  take_dash_str_dash_while1206 ) ( (  sc3905 ) ,  (  is_dash_not_dash_whitespace1224 ) ) );
    ( (  drop_dash_str_dash_while1225 ) ( (  sc3905 ) ,  (  is_dash_whitespace972 ) ) );
    if ( (  eq1242 ( (  cmd3906 ) , ( (  from_dash_charlike1191 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed3902 ) .f_running = ( false );
    } else {
        if ( (  eq1242 ( (  cmd3906 ) , ( (  from_dash_string185 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq1242 ( (  cmd3906 ) , ( (  from_dash_charlike1191 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  todo1259 ) ( ) );
            } else {
                if ( (  eq1242 ( (  cmd3906 ) , ( (  from_dash_string185 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                }
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   free1262 (    struct StrBuilder_44 *  builder2742 ) {
    ( (  free383 ) ( ( & ( ( * (  builder2742 ) ) .f_chars ) ) ) );
    return ( Unit_6_Unit );
}

static  struct Char_47   ascii_dash_char1264 (    char  c776 ) {
    return ( (  from_dash_u8856 ) ( ( (  ascii_dash_u8709 ) ( (  c776 ) ) ) ) );
}

static  enum Unit_6   handle_dash_key905 (   struct env119* env ,    struct Editor_109 *  ed3936 ,    struct Key_121  key3938 ) {
    struct EditorMode_113 *  dref3939 = ( & ( ( * (  ed3936 ) ) .f_mode ) );
    if ( (* dref3939 ).tag == EditorMode_113_Normal_t ) {
        enum Mode_111  dref3940 = ( ( ( * (  ed3936 ) ) .f_pane ) .f_mode );
        switch (  dref3940 ) {
            case Mode_111_Normal : {
                struct envunion907  temp906 = ( (struct envunion907){ .fun = (  enum Unit_6  (*) (  struct env107*  ,    struct Editor_109 *  ,    struct Key_121  ) )handle_dash_normal_dash_key908 , .env =  env->envinst107 } );
                ( temp906.fun ( &temp906.env ,  (  ed3936 ) ,  (  key3938 ) ) );
                break;
            }
            case Mode_111_Select : {
                struct envunion120  temp1187 = ( (struct envunion120){ .fun = (  enum Unit_6  (*) (  struct env107*  ,    struct Editor_109 *  ,    struct Key_121  ) )handle_dash_normal_dash_key908 , .env =  env->envinst107 } );
                ( temp1187.fun ( &temp1187.env ,  (  ed3936 ) ,  (  key3938 ) ) );
                break;
            }
            case Mode_111_Insert : {
                struct Key_121  dref3941 = (  key3938 );
                if ( dref3941.tag == Key_121_Escape_t ) {
                    (*  ed3936 ) .f_pane .f_mode = ( Mode_111_Normal );
                }
                else {
                    if ( dref3941.tag == Key_121_Enter_t ) {
                        struct envunion122  temp1188 = ( (struct envunion122){ .fun = (  enum Unit_6  (*) (  struct env93*  ,    struct Pane_110 *  ,    struct StrView_20  ) )add_dash_str_dash_at_dash_char1189 , .env =  env->envinst93 } );
                        ( temp1188.fun ( &temp1188.env ,  ( (  pane940 ) ( (  ed3936 ) ) ) ,  ( (  from_dash_charlike1191 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right941 ) ( ( (  pane940 ) ( (  ed3936 ) ) ) ) );
                    }
                    else {
                        if ( dref3941.tag == Key_121_Backspace_t ) {
                            struct envunion124  temp1192 = ( (struct envunion124){ .fun = (  enum Unit_6  (*) (  struct env95*  ,    struct Pane_110 *  ) )backspace1193 , .env =  env->envinst95 } );
                            ( temp1192.fun ( &temp1192.env ,  ( (  pane940 ) ( (  ed3936 ) ) ) ) );
                        }
                        else {
                            if ( dref3941.tag == Key_121_Char_t ) {
                                struct Array_1196  temp1198 = ( (  from_dash_listlike1199 ) ( ( (struct Array_1196) { ._arr = { ( dref3941 .stuff .Key_121_Char_s .field0 ) } } ) ) );
                                struct StrView_20  s3943 = ( (  from_dash_ascii_dash_slice780 ) ( ( (  as_dash_slice1195 ) ( ( &temp1198 ) ) ) ) );
                                struct envunion1201  temp1200 = ( (struct envunion1201){ .fun = (  enum Unit_6  (*) (  struct env93*  ,    struct Pane_110 *  ,    struct StrView_20  ) )add_dash_str_dash_at_dash_char1189 , .env =  env->envinst93 } );
                                ( temp1200.fun ( &temp1200.env ,  ( (  pane940 ) ( (  ed3936 ) ) ) ,  (  s3943 ) ) );
                                ( (  move_dash_right941 ) ( ( (  pane940 ) ( (  ed3936 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref3939 ).tag == EditorMode_113_Cmd_t ) {
            struct Key_121  dref3945 = (  key3938 );
            if ( dref3945.tag == Key_121_Escape_t ) {
                (*  ed3936 ) .f_mode = ( (struct EditorMode_113) { .tag = EditorMode_113_Normal_t } );
            }
            else {
                if ( dref3945.tag == Key_121_Enter_t ) {
                    ( (  run_dash_cmd1202 ) ( (  ed3936 ) ,  ( (  as_dash_str1160 ) ( ( & ( (* dref3939 ) .stuff .EditorMode_113_Cmd_s .field0 ) ) ) ) ) );
                    ( (  free1262 ) ( ( & ( (* dref3939 ) .stuff .EditorMode_113_Cmd_s .field0 ) ) ) );
                    (*  ed3936 ) .f_mode = ( (struct EditorMode_113) { .tag = EditorMode_113_Normal_t } );
                }
                else {
                    if ( dref3945.tag == Key_121_Char_t ) {
                        struct envunion123  temp1263 = ( (struct envunion123){ .fun = (  enum Unit_6  (*) (  struct env42*  ,    struct StrBuilder_44 *  ,    struct Char_47  ) )write_dash_char1151 , .env =  env->envinst42 } );
                        ( temp1263.fun ( &temp1263.env ,  ( & ( (* dref3939 ) .stuff .EditorMode_113_Cmd_s .field0 ) ) ,  ( (  ascii_dash_char1264 ) ( ( dref3945 .stuff .Key_121_Char_s .field0 ) ) ) ) );
                    }
                    else {
                        if ( true ) {
                        }
                    }
                }
            }
        }
        else {
            if ( true ) {
                ( (  todo1259 ) ( ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

struct envunion1266 {
    bool  (*fun) (  struct env62*  ,    struct Screen_625 *  );
    struct env62 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1267 (   struct env62* env ,    struct Screen_625 *  screen3408 ) {
    struct Tui_58 *  tui3409 = ( ( * (  screen3408 ) ) .f_tui );
    struct envunion63  temp1268 = ( (struct envunion63){ .fun = (  bool  (*) (  struct env55*  ,    struct Tui_58 *  ) )update_dash_dimensions696 , .env =  env->envinst55 } );
    ( temp1268.fun ( &temp1268.env ,  (  tui3409 ) ) );
    if ( ( ! ( ( * (  tui3409 ) ) .f_should_dash_redraw ) ) ) {
        return ( false );
    }
    (*  screen3408 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3410 = ( ( * ( ( * (  screen3408 ) ) .f_tui ) ) .f_width );
    uint32_t  h3411 = ( ( * ( ( * (  screen3408 ) ) .f_tui ) ) .f_height );
    size_t  nusz3412 = ( (  u32_dash_size639 ) ( (  op_dash_mul647 ( (  w3410 ) , (  h3411 ) ) ) ) );
    if ( (  cmp150 ( (  nusz3412 ) , ( ( ( * (  screen3408 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_625  nuscreen3413 = ( (  mk_dash_screen633 ) ( (  tui3409 ) ,  ( ( * (  screen3408 ) ) .f_al ) ) );
    (*  screen3408 ) .f_current = ( (  nuscreen3413 ) .f_current );
    (*  screen3408 ) .f_previous = ( (  nuscreen3413 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1269 (    struct Tui_58 *  tui3337 ) {
    bool  redraw3338 = ( ( * (  tui3337 ) ) .f_should_dash_redraw );
    (*  tui3337 ) .f_should_dash_redraw = ( false );
    return (  redraw3338 );
}

struct env1273 {
    struct Cell_627 (*  fun1888 )(    struct Cell_627  );
    ;
    ;
    ;
    struct Slice_626  s1886;
};

struct envunion1274 {
    enum Unit_6  (*fun) (  struct env1273*  ,    int32_t  );
    struct env1273 env;
};

static  enum Unit_6   for_dash_each1272 (    struct Range_650  iterable1055 ,   struct envunion1274  fun1057 ) {
    struct RangeIter_653  temp1275 = ( (  into_dash_iter655 ) ( (  iterable1055 ) ) );
    struct RangeIter_653 *  it1058 = ( &temp1275 );
    while ( ( true ) ) {
        struct Maybe_238  dref1059 = ( (  next656 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_238_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_238_Just_t ) {
                struct envunion1274  temp1276 = (  fun1057 );
                ( temp1276.fun ( &temp1276.env ,  ( dref1059 .stuff .Maybe_238_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1277 (   struct env1273* env ,    int32_t  i1890 ) {
    return ( (  set660 ) ( ( env->s1886 ) ,  ( (  i32_dash_size228 ) ( (  i1890 ) ) ) ,  ( ( env->fun1888 ) ( (  elem_dash_get664 ( ( env->s1886 ) , ( (  i32_dash_size228 ) ( (  i1890 ) ) ) ) ) ) ) ) );
}

static  enum Unit_6   map1271 (    struct Slice_626  s1886 ,    struct Cell_627 (*  fun1888 )(    struct Cell_627  ) ) {
    struct env1273 envinst1273 = {
        .fun1888 =  fun1888 ,
        .s1886 =  s1886 ,
    };
    ( (  for_dash_each1272 ) ( ( (  to658 ) ( (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_i32162 ) ( (  op_dash_sub269 ( ( (  s1886 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1274){ .fun = (  enum Unit_6  (*) (  struct env1273*  ,    int32_t  ) )lam1277 , .env =  envinst1273 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Cell_627   lam1278 (    struct Cell_627  dref3374 ) {
    return ( (  default_dash_cell672 ) ( ) );
}

static  enum Unit_6   clear_dash_screen1270 (    struct Screen_625 *  screen3373 ) {
    ( (  map1271 ) ( ( ( * (  screen3373 ) ) .f_current ) ,  (  lam1278 ) ) );
    return ( Unit_6_Unit );
}

struct AppendIter_1284 {
    struct StrViewIter_567  f_it;
    struct Char_47  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1284   into_dash_iter1285 (    struct AppendIter_1284  self1013 ) {
    return (  self1013 );
}

static  struct AppendIter_1284   append1286 (    struct StrViewIter_567  it1000 ,    struct Char_47  e1002 ) {
    return ( (struct AppendIter_1284) { .f_it = ( (  into_dash_iter569 ) ( (  it1000 ) ) ) , .f_elem = (  e1002 ) , .f_appended = ( false ) } );
}

static  struct Maybe_570   next1288 (    struct AppendIter_1284 *  self1016 ) {
    struct Maybe_570  dref1017 = ( (  next571 ) ( ( & ( ( * (  self1016 ) ) .f_it ) ) ) );
    if ( dref1017.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1017 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1017.tag == Maybe_570_None_t ) {
            if ( ( ! ( ( * (  self1016 ) ) .f_appended ) ) ) {
                (*  self1016 ) .f_appended = ( true );
                return ( ( Maybe_570_Just ) ( ( ( * (  self1016 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_570) { .tag = Maybe_570_None_t } );
        }
    }
}

static  int32_t   cast1290 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321289 (    uint32_t  x660 ) {
    return ( (  cast1290 ) ( (  x660 ) ) );
}

static  bool   between1292 (    struct Pos_19  c1318 ,    struct Pos_19  l1320 ,    struct Pos_19  r1322 ) {
    struct Pos_19  from1323 = ( (  min384 ) ( (  l1320 ) ,  (  r1322 ) ) );
    struct Pos_19  to1324 = ( (  max387 ) ( (  l1320 ) ,  (  r1322 ) ) );
    return ( (  cmp385 ( (  from1323 ) , (  c1318 ) ) != 2 ) && (  cmp385 ( (  c1318 ) , (  to1324 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1291 (    struct Pane_110 *  pane3748 ,    struct Pos_19  pos3750 ) {
    return ( {  struct Maybe_22  dref3751 = ( ( * (  pane3748 ) ) .f_sel ) ; dref3751.tag == Maybe_22_Just_t ? ( (  between1292 ) ( (  pos3750 ) ,  ( ( * (  pane3748 ) ) .f_cursor ) ,  ( dref3751 .stuff .Maybe_22_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  int32_t   op_dash_mul1294 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  enum Unit_6   put_dash_char1293 (    struct Screen_625 *  screen3454 ,    struct Char_47  c3456 ,    int32_t  x3458 ,    int32_t  y3460 ) {
    int32_t  w3461 = ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3454 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp386 ( (  x3458 ) , (  w3461 ) ) != 0 ) || (  cmp386 ( (  y3460 ) , ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp386 ( (  x3458 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) ) || (  cmp386 ( (  y3460 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    size_t  i3462 = ( (  i32_dash_size228 ) ( (  op_dash_add240 ( (  op_dash_mul1294 ( (  y3460 ) , (  w3461 ) ) ) , (  x3458 ) ) ) ) );
    struct Color_628  fg3463 = ( ( * (  screen3454 ) ) .f_default_dash_fg );
    struct Color_628  bg3464 = ( ( * (  screen3454 ) ) .f_default_dash_bg );
    struct Char_47  c3465 = (  c3456 );
    int32_t  char_dash_width3466 = ( (  wcwidth922 ) ( (  c3465 ) ) );
    ( (  set660 ) ( ( ( * (  screen3454 ) ) .f_current ) ,  (  i3462 ) ,  ( (struct Cell_627) { .f_c = (  c3465 ) , .f_fg = (  fg3463 ) , .f_bg = (  bg3464 ) , .f_char_dash_width = (  char_dash_width3466 ) } ) ) );
    return ( Unit_6_Unit );
}

static  int32_t   tab_dash_width1296 (  ) {
    return (  from_dash_integral38 ( 2 ) );
}

static  size_t   i64_dash_size1299 (    int64_t  x624 ) {
    return ( (size_t ) (  x624 ) );
}

static  int32_t   pos_dash_si1298 (    struct TextBuf_73 *  self3710 ,    struct Pos_19  pos3712 ) {
    struct StrView_20  line3713 = ( (  line912 ) ( (  self3710 ) ,  ( (  pos3712 ) .f_line ) ) );
    uint8_t *  line_dash_ptr3714 = ( ( (  line3713 ) .f_contents ) .f_ptr );
    int64_t  bi3715 = ( (  from_dash_integral268 ( 0 ) ) );
    int32_t  si3716 = ( (  from_dash_integral38 ( 0 ) ) );
    while ( (  cmp150 ( ( (  i64_dash_size1299 ) ( (  bi3715 ) ) ) , ( (  num_dash_bytes911 ) ( (  line3713 ) ) ) ) == 0 ) ) {
        uint8_t *  cptr3717 = ( (  offset_dash_ptr290 ) ( (  line_dash_ptr3714 ) ,  (  bi3715 ) ) );
        size_t  off3718 = ( (  next_dash_char189 ) ( (  cptr3717 ) ) );
        bi3715 = (  op_dash_add823 ( (  bi3715 ) , ( (  size_dash_i64227 ) ( (  off3718 ) ) ) ) );
        if ( (  cmp386 ( ( (  i64_dash_i32826 ) ( (  bi3715 ) ) ) , ( (  pos3712 ) .f_bi ) ) == 2 ) ) {
            return (  si3716 );
        }
        struct Char_47  c3719 = ( (  scan_dash_from_dash_mem188 ) ( (  cptr3717 ) ) );
        si3716 = (  op_dash_add240 ( (  si3716 ) , ( (  eq364 ( (  c3719 ) , ( (  from_dash_charlike186 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ? ( (  tab_dash_width1296 ) ( ) ) : (  from_dash_integral38 ( 1 ) ) ) ) );
    }
    return (  si3716 );
}

struct Maybe_1301 {
    enum {
        Maybe_1301_None_t,
        Maybe_1301_Just_t,
    } tag;
    union {
        struct {
            struct Cell_627 *  field0;
        } Maybe_1301_Just_s;
    } stuff;
};

static struct Maybe_1301 Maybe_1301_Just (  struct Cell_627 *  field0 ) {
    return ( struct Maybe_1301 ) { .tag = Maybe_1301_Just_t, .stuff = { .Maybe_1301_Just_s = { .field0 = field0 } } };
};

static  enum Unit_6   if_dash_just1300 (    struct Maybe_1301  x1272 ,    enum Unit_6 (*  fun1274 )(    struct Cell_627 *  ) ) {
    struct Maybe_1301  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_1301_Just_t ) {
        ( (  fun1274 ) ( ( dref1275 .stuff .Maybe_1301_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_1301_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  struct Maybe_1301   get_dash_cell_dash_ptr1302 (    struct Screen_625 *  screen3437 ,    int32_t  x3439 ,    int32_t  y3441 ) {
    int32_t  w3442 = ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp386 ( (  x3439 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp386 ( (  x3439 ) , (  w3442 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1301) { .tag = Maybe_1301_None_t } );
    }
    if ( ( (  cmp386 ( (  y3441 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp386 ( (  y3441 ) , ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1301) { .tag = Maybe_1301_None_t } );
    }
    size_t  i3443 = ( (  i32_dash_size228 ) ( (  op_dash_add240 ( (  op_dash_mul1294 ( (  y3441 ) , (  w3442 ) ) ) , (  x3439 ) ) ) ) );
    return ( ( Maybe_1301_Just ) ( ( (  get_dash_ptr661 ) ( ( ( * (  screen3437 ) ) .f_current ) ,  (  i3443 ) ) ) ) );
}

static  enum Unit_6   lam1303 (    struct Cell_627 *  curcell3773 ) {
    (*  curcell3773 ) .f_fg = ( ( Color_628_Color8 ) ( ( Color8_629_Black8 ) ) );
    (*  curcell3773 ) .f_bg = ( ( Color_628_Color8 ) ( ( Color8_629_White8 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   if_dash_just1306 (    struct Maybe_1301  x1272 ,    enum Unit_6 (*  fun1274 )(    struct Cell_627 *  ) ) {
    struct Maybe_1301  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_1301_Just_t ) {
        ( (  fun1274 ) ( ( dref1275 .stuff .Maybe_1301_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_1301_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1307 (    struct Cell_627 *  curcell3777 ) {
    (*  curcell3777 ) .f_fg = ( ( Color_628_Color8 ) ( ( Color8_629_Black8 ) ) );
    (*  curcell3777 ) .f_bg = ( ( Color_628_Color8 ) ( ( Color8_629_White8 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   render1280 (    struct Screen_625 *  screen3755 ,    struct Pane_110 *  pane3757 ) {
    struct RangeIter_653  temp1281 =  into_dash_iter655 ( ( (  to658 ) ( (  from_dash_integral38 ( 1 ) ) ,  ( (  num_dash_lines943 ) ( ( ( * (  pane3757 ) ) .f_buf ) ) ) ) ) );
    while (true) {
        struct Maybe_238  __cond1282 =  next656 (&temp1281);
        if (  __cond1282 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num3759 =  __cond1282 .stuff .Maybe_238_Just_s .field0;
        int32_t  y3760 = (  op_dash_sub775 ( (  line_dash_num3759 ) , (  from_dash_integral38 ( 1 ) ) ) );
        struct StrView_20  line_dash_content3761 = ( (  line912 ) ( ( ( * (  pane3757 ) ) .f_buf ) ,  (  y3760 ) ) );
        int32_t  xbi3762 = (  from_dash_integral38 ( 0 ) );
        int32_t  xs3763 = (  from_dash_integral38 ( 0 ) );
        struct AppendIter_1284  temp1283 =  into_dash_iter1285 ( ( (  append1286 ) ( ( (  chars572 ) ( (  line_dash_content3761 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_570  __cond1287 =  next1288 (&temp1283);
            if (  __cond1287 .tag == 0 ) {
                break;
            }
            struct Char_47  c3765 =  __cond1287 .stuff .Maybe_570_Just_s .field0;
            if ( (  cmp386 ( (  xs3763 ) , ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3755 ) ) .f_tui ) ) .f_width ) ) ) ) == 2 ) ) {
                break;
            }
            bool  in_dash_selection3766 = ( (  is_dash_in_dash_selection1291 ) ( (  pane3757 ) ,  ( (  mk467 ) ( (  y3760 ) ,  (  xbi3762 ) ) ) ) );
            if ( (  in_dash_selection3766 ) ) {
                (*  screen3755 ) .f_default_dash_bg = ( ( Color_628_Color8 ) ( ( Color8_629_Cyan8 ) ) );
            }
            if ( ( !  eq364 ( (  c3765 ) , ( (  from_dash_charlike186 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  put_dash_char1293 ) ( (  screen3755 ) ,  (  c3765 ) ,  (  xs3763 ) ,  (  y3760 ) ) );
                xs3763 = (  op_dash_add240 ( (  xs3763 ) , (  from_dash_integral38 ( 1 ) ) ) );
            } else {
                struct RangeIter_653  temp1295 =  into_dash_iter655 ( ( (  to658 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub775 ( ( (  tab_dash_width1296 ) ( ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_238  __cond1297 =  next656 (&temp1295);
                    if (  __cond1297 .tag == 0 ) {
                        break;
                    }
                    int32_t  off3768 =  __cond1297 .stuff .Maybe_238_Just_s .field0;
                    ( (  put_dash_char1293 ) ( (  screen3755 ) ,  ( (  from_dash_charlike186 ) ( ( " " ) ,  ( 1 ) ) ) ,  (  op_dash_add240 ( (  xs3763 ) , (  off3768 ) ) ) ,  (  y3760 ) ) );
                }
                xs3763 = (  op_dash_add240 ( (  xs3763 ) , ( (  tab_dash_width1296 ) ( ) ) ) );
            }
            if ( (  in_dash_selection3766 ) ) {
                (*  screen3755 ) .f_default_dash_bg = ( (struct Color_628) { .tag = Color_628_ColorDefault_t } );
            }
            xbi3762 = (  op_dash_add240 ( (  xbi3762 ) , ( (  size_dash_i32162 ) ( ( (  c3765 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    struct Pos_19  cursor3769 = ( ( * (  pane3757 ) ) .f_cursor );
    struct Char_47  cursor_dash_char3770 = ( (  char_dash_at973 ) ( (  pane3757 ) ,  (  cursor3769 ) ) );
    int32_t  cursor_dash_si3771 = ( (  pos_dash_si1298 ) ( ( ( * (  pane3757 ) ) .f_buf ) ,  (  cursor3769 ) ) );
    if ( ( !  eq364 ( (  cursor_dash_char3770 ) , ( (  from_dash_charlike186 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        ( (  if_dash_just1300 ) ( ( (  get_dash_cell_dash_ptr1302 ) ( (  screen3755 ) ,  (  cursor_dash_si3771 ) ,  ( ( ( * (  pane3757 ) ) .f_cursor ) .f_line ) ) ) ,  (  lam1303 ) ) );
    } else {
        struct RangeIter_653  temp1304 =  into_dash_iter655 ( ( (  to658 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub775 ( ( (  tab_dash_width1296 ) ( ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_238  __cond1305 =  next656 (&temp1304);
            if (  __cond1305 .tag == 0 ) {
                break;
            }
            int32_t  off3775 =  __cond1305 .stuff .Maybe_238_Just_s .field0;
            ( (  if_dash_just1306 ) ( ( (  get_dash_cell_dash_ptr1302 ) ( (  screen3755 ) ,  (  op_dash_add240 ( (  cursor_dash_si3771 ) , (  off3775 ) ) ) ,  ( ( ( * (  pane3757 ) ) .f_cursor ) .f_line ) ) ) ,  (  lam1307 ) ) );
        }
    }
    return ( Unit_6_Unit );
}

struct env1309 {
    int32_t *  curline3952;
    ;
    ;
    ;
    struct Screen_625 *  screen3949;
    ;
    ;
    ;
};

struct env1310 {
    int32_t *  curline3952;
    ;
    ;
    ;
    struct Screen_625 *  screen3949;
    ;
    ;
    ;
};

struct env1311 {
    int32_t *  curline3952;
    ;
    ;
    ;
    struct Screen_625 *  screen3949;
    ;
    ;
    ;
};

struct env1312 {
    int32_t *  curline3952;
    ;
    ;
    ;
    struct Screen_625 *  screen3949;
    ;
    ;
    ;
};

struct env1313 {
    int32_t *  curline3952;
    ;
    ;
    ;
    struct Screen_625 *  screen3949;
    ;
    ;
    ;
};

struct StrConcat_1316 {
    struct StrView_20  field0;
    enum Mode_111  field1;
};

static struct StrConcat_1316 StrConcat_1316_StrConcat (  struct StrView_20  field0 ,  enum Mode_111  field1 ) {
    return ( struct StrConcat_1316 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1315 {
    enum Unit_6  (*fun) (  struct env1309*  ,    struct StrConcat_1316  );
    struct env1309 env;
};

struct StrConcatIter_1320 {
    struct StrViewIter_567  f_left;
    struct StrViewIter_567  f_right;
};

static  struct StrConcatIter_1320   into_dash_iter1322 (    struct StrConcatIter_1320  self1472 ) {
    return (  self1472 );
}

static  struct Maybe_570   next1323 (    struct StrConcatIter_1320 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next571 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next571 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce1321 (    struct StrConcatIter_1320  iterable1074 ,    size_t  base1076 ,    size_t (*  fun1078 )(    struct Char_47  ,    size_t  ) ) {
    size_t  x1079 = (  base1076 );
    struct StrConcatIter_1320  it1080 = ( (  into_dash_iter1322 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_570  dref1081 = ( (  next1323 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_570_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_570_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_570_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1324 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1324);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1325;
    return (  temp1325 );
}

static  size_t   lam1326 (    struct Char_47  dref1086 ,    size_t  x1088 ) {
    return (  op_dash_add198 ( (  x1088 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1319 (    struct StrConcatIter_1320  it1085 ) {
    return ( (  reduce1321 ) ( (  it1085 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1326 ) ) );
}

static  struct StrView_20   todo1330 (  ) {
    ( (  print981 ) ( ( (  from_dash_string185 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined480 ) ( ) );
}

static  struct StrViewIter_567   chars1329 (    enum Mode_111  self3699 ) {
    return ( (  chars572 ) ( ( {  enum Mode_111  dref3700 = (  self3699 ) ;  dref3700 == Mode_111_Normal ? ( (  from_dash_string185 ) ( ( "Normal" ) ,  ( 6 ) ) ) :  dref3700 == Mode_111_Insert ? ( (  from_dash_string185 ) ( ( "Insert" ) ,  ( 6 ) ) ) :  dref3700 == Mode_111_Select ? ( (  from_dash_string185 ) ( ( "Select" ) ,  ( 6 ) ) ) : ( (  todo1330 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1320   into_dash_iter1328 (    struct StrConcat_1316  dref1479 ) {
    return ( (struct StrConcatIter_1320) { .f_left = ( (  chars572 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1329 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1320   chars1327 (    struct StrConcat_1316  self1490 ) {
    return ( (  into_dash_iter1328 ) ( (  self1490 ) ) );
}

struct Zip_1333 {
    struct StrConcatIter_1320  f_left_dash_it;
    struct FromIter_232  f_right_dash_it;
};

struct env1334 {
    int32_t  y3475;
    ;
    struct Screen_625 *  screen3469;
    int32_t  x3478;
    ;
};

struct Tuple2_1336 {
    struct Char_47  field0;
    int32_t  field1;
};

static struct Tuple2_1336 Tuple2_1336_Tuple2 (  struct Char_47  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1336 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1335 {
    enum Unit_6  (*fun) (  struct env1334*  ,    struct Tuple2_1336  );
    struct env1334 env;
};

static  struct Zip_1333   into_dash_iter1338 (    struct Zip_1333  self905 ) {
    return (  self905 );
}

struct Maybe_1339 {
    enum {
        Maybe_1339_None_t,
        Maybe_1339_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1336  field0;
        } Maybe_1339_Just_s;
    } stuff;
};

static struct Maybe_1339 Maybe_1339_Just (  struct Tuple2_1336  field0 ) {
    return ( struct Maybe_1339 ) { .tag = Maybe_1339_Just_t, .stuff = { .Maybe_1339_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1339   next1340 (    struct Zip_1333 *  self908 ) {
    struct Zip_1333  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_570  dref910 = ( (  next1323 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_570_None_t ) {
            return ( (struct Maybe_1339) { .tag = Maybe_1339_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_570_Just_t ) {
                struct Maybe_238  dref912 = ( (  next239 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_238_None_t ) {
                    return ( (struct Maybe_1339) { .tag = Maybe_1339_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_238_Just_t ) {
                        ( (  next1323 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next239 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1339_Just ) ( ( ( Tuple2_1336_Tuple2 ) ( ( dref910 .stuff .Maybe_570_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_238_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1332 (    struct Zip_1333  iterable1055 ,   struct envunion1335  fun1057 ) {
    struct Zip_1333  temp1337 = ( (  into_dash_iter1338 ) ( (  iterable1055 ) ) );
    struct Zip_1333 *  it1058 = ( &temp1337 );
    while ( ( true ) ) {
        struct Maybe_1339  dref1059 = ( (  next1340 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_1339_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_1339_Just_t ) {
                struct envunion1335  temp1341 = (  fun1057 );
                ( temp1341.fun ( &temp1341.env ,  ( dref1059 .stuff .Maybe_1339_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1333   zip1342 (    struct StrConcatIter_1320  left916 ,    struct FromIter_232  right918 ) {
    struct StrConcatIter_1320  left_dash_it919 = ( (  into_dash_iter1322 ) ( (  left916 ) ) );
    struct FromIter_232  right_dash_it920 = ( (  into_dash_iter244 ) ( (  right918 ) ) );
    return ( (struct Zip_1333) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  enum Unit_6   lam1343 (   struct env1334* env ,    struct Tuple2_1336  dref3480 ) {
    ( (  put_dash_char1293 ) ( ( env->screen3469 ) ,  ( dref3480 .field0 ) ,  (  op_dash_add240 ( ( env->x3478 ) , ( dref3480 .field1 ) ) ) ,  ( env->y3475 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1331 (    struct Screen_625 *  screen3469 ,    struct StrConcat_1316  s3471 ,    int32_t  x3473 ,    int32_t  y3475 ) {
    int32_t  w3476 = ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3469 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp386 ( (  y3475 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp386 ( (  y3475 ) , ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3469 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3477 = (  op_dash_add240 ( (  op_dash_mul1294 ( (  y3475 ) , (  w3476 ) ) ) , (  x3473 ) ) );
    int32_t  x3478 = ( (  min432 ) ( (  x3473 ) ,  (  w3476 ) ) );
    size_t  max_dash_len3479 = ( (  i32_dash_size228 ) ( (  op_dash_sub775 ( (  w3476 ) , (  x3478 ) ) ) ) );
    struct env1334 envinst1334 = {
        .y3475 =  y3475 ,
        .screen3469 =  screen3469 ,
        .x3478 =  x3478 ,
    };
    ( (  for_dash_each1332 ) ( ( (  zip1342 ) ( ( (  chars1327 ) ( (  s3471 ) ) ) ,  ( (  from245 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1335){ .fun = (  enum Unit_6  (*) (  struct env1334*  ,    struct Tuple2_1336  ) )lam1343 , .env =  envinst1334 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1318 (    struct Screen_625 *  screen3485 ,    struct StrConcat_1316  s3487 ,    int32_t  x3489 ,    int32_t  y3491 ) {
    int32_t  slen3492 = ( (  size_dash_i32162 ) ( ( (  count1319 ) ( ( (  chars1327 ) ( (  s3487 ) ) ) ) ) ) );
    int32_t  w3493 = ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3485 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3494 = (  op_dash_sub775 ( (  op_dash_sub775 ( (  w3493 ) , (  x3489 ) ) ) , (  slen3492 ) ) );
    ( (  draw_dash_str1331 ) ( (  screen3485 ) ,  (  s3487 ) ,  (  x3494 ) ,  (  y3491 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1317 (   struct env1309* env ,    struct StrConcat_1316  s3955 ) {
    ( (  draw_dash_str_dash_right1318 ) ( ( env->screen3949 ) ,  (  s3955 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline3952 ) ) ) );
    (* env->curline3952 ) = (  op_dash_add240 ( ( * ( env->curline3952 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1348 {
    struct StrView_20  field0;
    struct Pos_19  field1;
};

static struct StrConcat_1348 StrConcat_1348_StrConcat (  struct StrView_20  field0 ,  struct Pos_19  field1 ) {
    return ( struct StrConcat_1348 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1347 {
    struct StrConcat_1348  field0;
    struct StrView_20  field1;
};

static struct StrConcat_1347 StrConcat_1347_StrConcat (  struct StrConcat_1348  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_1347 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1346 {
    struct StrConcat_1347  field0;
    enum CharType_963  field1;
};

static struct StrConcat_1346 StrConcat_1346_StrConcat (  struct StrConcat_1347  field0 ,  enum CharType_963  field1 ) {
    return ( struct StrConcat_1346 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1345 {
    enum Unit_6  (*fun) (  struct env1310*  ,    struct StrConcat_1346  );
    struct env1310 env;
};

struct IntStrIter_1359 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1358 {
    struct AppendIter_837  f_left;
    struct IntStrIter_1359  f_right;
};

struct StrConcatIter_1357 {
    struct StrConcatIter_1358  f_left;
    struct StrViewIter_567  f_right;
};

struct StrConcatIter_1356 {
    struct StrConcatIter_1357  f_left;
    struct IntStrIter_1359  f_right;
};

struct StrConcatIter_1355 {
    struct StrConcatIter_1356  f_left;
    struct AppendIter_837  f_right;
};

struct StrConcatIter_1354 {
    struct StrViewIter_567  f_left;
    struct StrConcatIter_1355  f_right;
};

struct StrConcatIter_1353 {
    struct StrConcatIter_1354  f_left;
    struct StrViewIter_567  f_right;
};

struct StrConcatIter_1352 {
    struct StrConcatIter_1353  f_left;
    struct StrViewIter_567  f_right;
};

static  struct StrConcatIter_1352   into_dash_iter1361 (    struct StrConcatIter_1352  self1472 ) {
    return (  self1472 );
}

struct env1372 {
    ;
    int32_t  base1191;
};

struct envunion1373 {
    int32_t  (*fun) (  struct env1372*  ,    int32_t  ,    int32_t  );
    struct env1372 env;
};

static  int32_t   reduce1371 (    struct Range_650  iterable1074 ,    int32_t  base1076 ,   struct envunion1373  fun1078 ) {
    int32_t  x1079 = (  base1076 );
    struct RangeIter_653  it1080 = ( (  into_dash_iter655 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_238  dref1081 = ( (  next656 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_238_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_238_Just_t ) {
                struct envunion1373  temp1374 = (  fun1078 );
                x1079 = ( temp1374.fun ( &temp1374.env ,  ( dref1081 .stuff .Maybe_238_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1375 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1375);
    exit ( 1 );
    ( Unit_6_Unit );
    int32_t  temp1376;
    return (  temp1376 );
}

static  int32_t   lam1377 (   struct env1372* env ,    int32_t  item1195 ,    int32_t  x1197 ) {
    return (  op_dash_mul1294 ( (  x1197 ) , ( env->base1191 ) ) );
}

static  int32_t   pow1370 (    int32_t  base1191 ,    int32_t  p1193 ) {
    struct env1372 envinst1372 = {
        .base1191 =  base1191 ,
    };
    return ( (  reduce1371 ) ( ( (  to658 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub775 ( (  p1193 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral38 ( 1 ) ) ,  ( (struct envunion1373){ .fun = (  int32_t  (*) (  struct env1372*  ,    int32_t  ,    int32_t  ) )lam1377 , .env =  envinst1372 } ) ) );
}

static  int32_t   op_dash_div1378 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  uint8_t   cast1379 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_570   next1369 (    struct IntStrIter_1359 *  self1403 ) {
    if ( ( ( * (  self1403 ) ) .f_negative ) ) {
        (*  self1403 ) .f_negative = ( false );
        return ( ( Maybe_570_Just ) ( ( (  from_dash_charlike186 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp386 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_570) { .tag = Maybe_570_None_t } );
    }
    int32_t  trim_dash_down1404 = ( (  pow1370 ) ( (  from_dash_integral38 ( 10 ) ) ,  (  op_dash_sub775 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    int32_t  upper1405 = (  op_dash_div1378 ( ( ( * (  self1403 ) ) .f_int ) , (  trim_dash_down1404 ) ) );
    int32_t  upper_dash_mask1406 = (  op_dash_mul1294 ( (  op_dash_div1378 ( (  upper1405 ) , (  from_dash_integral38 ( 10 ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) );
    uint8_t  digit1407 = ( ( (  cast1379 ) ( (  op_dash_sub775 ( (  upper1405 ) , (  upper_dash_mask1406 ) ) ) ) ) );
    (*  self1403 ) .f_len = (  op_dash_sub775 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_47  digit_dash_char1408 = ( (  from_dash_u8856 ) ( (  op_dash_add191 ( (  digit1407 ) , (  from_dash_integral177 ( 48 ) ) ) ) ) );
    return ( ( Maybe_570_Just ) ( (  digit_dash_char1408 ) ) );
}

static  struct Maybe_570   next1368 (    struct StrConcatIter_1358 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next863 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next1369 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next1367 (    struct StrConcatIter_1357 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next1368 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next571 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next1366 (    struct StrConcatIter_1356 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next1367 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next1369 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next1365 (    struct StrConcatIter_1355 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next1366 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next863 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next1364 (    struct StrConcatIter_1354 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next571 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next1365 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next1363 (    struct StrConcatIter_1353 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next1364 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next571 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next1362 (    struct StrConcatIter_1352 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next1363 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next571 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce1360 (    struct StrConcatIter_1352  iterable1074 ,    size_t  base1076 ,    size_t (*  fun1078 )(    struct Char_47  ,    size_t  ) ) {
    size_t  x1079 = (  base1076 );
    struct StrConcatIter_1352  it1080 = ( (  into_dash_iter1361 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_570  dref1081 = ( (  next1362 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_570_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_570_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_570_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1380 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1380);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1381;
    return (  temp1381 );
}

static  size_t   lam1382 (    struct Char_47  dref1086 ,    size_t  x1088 ) {
    return (  op_dash_add198 ( (  x1088 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1351 (    struct StrConcatIter_1352  it1085 ) {
    return ( (  reduce1360 ) ( (  it1085 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1382 ) ) );
}

struct StrConcat_1394 {
    struct Char_47  field0;
    int32_t  field1;
};

static struct StrConcat_1394 StrConcat_1394_StrConcat (  struct Char_47  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1394 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1393 {
    struct StrConcat_1394  field0;
    struct StrView_20  field1;
};

static struct StrConcat_1393 StrConcat_1393_StrConcat (  struct StrConcat_1394  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_1393 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1392 {
    struct StrConcat_1393  field0;
    int32_t  field1;
};

static struct StrConcat_1392 StrConcat_1392_StrConcat (  struct StrConcat_1393  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1392 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1391 {
    struct StrConcat_1392  field0;
    struct Char_47  field1;
};

static struct StrConcat_1391 StrConcat_1391_StrConcat (  struct StrConcat_1392  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1391 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   count_dash_digits1404 (    int32_t  self1411 ) {
    if ( (  eq281 ( (  self1411 ) , (  from_dash_integral38 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1412 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp386 ( (  self1411 ) , (  from_dash_integral38 ( 0 ) ) ) == 2 ) ) {
        self1411 = (  op_dash_div1378 ( (  self1411 ) , (  from_dash_integral38 ( 10 ) ) ) );
        digits1412 = (  op_dash_add240 ( (  digits1412 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1412 );
}

static  struct IntStrIter_1359   int_dash_iter1403 (    int32_t  int1415 ) {
    if ( (  cmp386 ( (  int1415 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1359) { .f_int = (  op_dash_neg600 ( (  int1415 ) ) ) , .f_len = ( (  count_dash_digits1404 ) ( (  op_dash_neg600 ( (  int1415 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1359) { .f_int = (  int1415 ) , .f_len = ( (  count_dash_digits1404 ) ( (  int1415 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1359   chars1402 (    int32_t  self1424 ) {
    return ( (  int_dash_iter1403 ) ( (  self1424 ) ) );
}

static  struct StrConcatIter_1358   into_dash_iter1401 (    struct StrConcat_1394  dref1479 ) {
    return ( (struct StrConcatIter_1358) { .f_left = ( (  chars877 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1402 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1358   chars1400 (    struct StrConcat_1394  self1490 ) {
    return ( (  into_dash_iter1401 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1357   into_dash_iter1399 (    struct StrConcat_1393  dref1479 ) {
    return ( (struct StrConcatIter_1357) { .f_left = ( (  chars1400 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars572 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1357   chars1398 (    struct StrConcat_1393  self1490 ) {
    return ( (  into_dash_iter1399 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1356   into_dash_iter1397 (    struct StrConcat_1392  dref1479 ) {
    return ( (struct StrConcatIter_1356) { .f_left = ( (  chars1398 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1402 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1356   chars1396 (    struct StrConcat_1392  self1490 ) {
    return ( (  into_dash_iter1397 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1355   into_dash_iter1395 (    struct StrConcat_1391  dref1479 ) {
    return ( (struct StrConcatIter_1355) { .f_left = ( (  chars1396 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars877 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1355   chars1390 (    struct StrConcat_1391  self1490 ) {
    return ( (  into_dash_iter1395 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1355   chars1389 (    struct Pos_19  self3526 ) {
    return ( (  chars1390 ) ( ( ( StrConcat_1391_StrConcat ) ( ( ( StrConcat_1392_StrConcat ) ( ( ( StrConcat_1393_StrConcat ) ( ( ( StrConcat_1394_StrConcat ) ( ( (  from_dash_charlike186 ) ( ( "(" ) ,  ( 1 ) ) ) ,  ( (  self3526 ) .f_line ) ) ) ,  ( (  from_dash_string185 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  self3526 ) .f_bi ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrConcatIter_1354   into_dash_iter1388 (    struct StrConcat_1348  dref1479 ) {
    return ( (struct StrConcatIter_1354) { .f_left = ( (  chars572 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1389 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1354   chars1387 (    struct StrConcat_1348  self1490 ) {
    return ( (  into_dash_iter1388 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1353   into_dash_iter1386 (    struct StrConcat_1347  dref1479 ) {
    return ( (struct StrConcatIter_1353) { .f_left = ( (  chars1387 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars572 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1353   chars1385 (    struct StrConcat_1347  self1490 ) {
    return ( (  into_dash_iter1386 ) ( (  self1490 ) ) );
}

static  struct StrViewIter_567   chars1405 (    enum CharType_963  self3688 ) {
    return ( (  chars572 ) ( ( {  enum CharType_963  dref3689 = (  self3688 ) ;  dref3689 == CharType_963_CharPunctuation ? ( (  from_dash_string185 ) ( ( "Punct" ) ,  ( 5 ) ) ) :  dref3689 == CharType_963_CharWord ? ( (  from_dash_string185 ) ( ( "Word" ) ,  ( 4 ) ) ) :  dref3689 == CharType_963_CharSpace ? ( (  from_dash_string185 ) ( ( "Space" ) ,  ( 5 ) ) ) : ( (  todo1330 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1352   into_dash_iter1384 (    struct StrConcat_1346  dref1479 ) {
    return ( (struct StrConcatIter_1352) { .f_left = ( (  chars1385 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1405 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1352   chars1383 (    struct StrConcat_1346  self1490 ) {
    return ( (  into_dash_iter1384 ) ( (  self1490 ) ) );
}

struct Zip_1408 {
    struct StrConcatIter_1352  f_left_dash_it;
    struct FromIter_232  f_right_dash_it;
};

struct env1409 {
    int32_t  y3475;
    ;
    struct Screen_625 *  screen3469;
    int32_t  x3478;
    ;
};

struct envunion1410 {
    enum Unit_6  (*fun) (  struct env1409*  ,    struct Tuple2_1336  );
    struct env1409 env;
};

static  struct Zip_1408   into_dash_iter1412 (    struct Zip_1408  self905 ) {
    return (  self905 );
}

static  struct Maybe_1339   next1413 (    struct Zip_1408 *  self908 ) {
    struct Zip_1408  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_570  dref910 = ( (  next1362 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_570_None_t ) {
            return ( (struct Maybe_1339) { .tag = Maybe_1339_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_570_Just_t ) {
                struct Maybe_238  dref912 = ( (  next239 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_238_None_t ) {
                    return ( (struct Maybe_1339) { .tag = Maybe_1339_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_238_Just_t ) {
                        ( (  next1362 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next239 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1339_Just ) ( ( ( Tuple2_1336_Tuple2 ) ( ( dref910 .stuff .Maybe_570_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_238_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1407 (    struct Zip_1408  iterable1055 ,   struct envunion1410  fun1057 ) {
    struct Zip_1408  temp1411 = ( (  into_dash_iter1412 ) ( (  iterable1055 ) ) );
    struct Zip_1408 *  it1058 = ( &temp1411 );
    while ( ( true ) ) {
        struct Maybe_1339  dref1059 = ( (  next1413 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_1339_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_1339_Just_t ) {
                struct envunion1410  temp1414 = (  fun1057 );
                ( temp1414.fun ( &temp1414.env ,  ( dref1059 .stuff .Maybe_1339_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1408   zip1415 (    struct StrConcatIter_1352  left916 ,    struct FromIter_232  right918 ) {
    struct StrConcatIter_1352  left_dash_it919 = ( (  into_dash_iter1361 ) ( (  left916 ) ) );
    struct FromIter_232  right_dash_it920 = ( (  into_dash_iter244 ) ( (  right918 ) ) );
    return ( (struct Zip_1408) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  enum Unit_6   lam1416 (   struct env1409* env ,    struct Tuple2_1336  dref3480 ) {
    ( (  put_dash_char1293 ) ( ( env->screen3469 ) ,  ( dref3480 .field0 ) ,  (  op_dash_add240 ( ( env->x3478 ) , ( dref3480 .field1 ) ) ) ,  ( env->y3475 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1406 (    struct Screen_625 *  screen3469 ,    struct StrConcat_1346  s3471 ,    int32_t  x3473 ,    int32_t  y3475 ) {
    int32_t  w3476 = ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3469 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp386 ( (  y3475 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp386 ( (  y3475 ) , ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3469 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3477 = (  op_dash_add240 ( (  op_dash_mul1294 ( (  y3475 ) , (  w3476 ) ) ) , (  x3473 ) ) );
    int32_t  x3478 = ( (  min432 ) ( (  x3473 ) ,  (  w3476 ) ) );
    size_t  max_dash_len3479 = ( (  i32_dash_size228 ) ( (  op_dash_sub775 ( (  w3476 ) , (  x3478 ) ) ) ) );
    struct env1409 envinst1409 = {
        .y3475 =  y3475 ,
        .screen3469 =  screen3469 ,
        .x3478 =  x3478 ,
    };
    ( (  for_dash_each1407 ) ( ( (  zip1415 ) ( ( (  chars1383 ) ( (  s3471 ) ) ) ,  ( (  from245 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1410){ .fun = (  enum Unit_6  (*) (  struct env1409*  ,    struct Tuple2_1336  ) )lam1416 , .env =  envinst1409 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1350 (    struct Screen_625 *  screen3485 ,    struct StrConcat_1346  s3487 ,    int32_t  x3489 ,    int32_t  y3491 ) {
    int32_t  slen3492 = ( (  size_dash_i32162 ) ( ( (  count1351 ) ( ( (  chars1383 ) ( (  s3487 ) ) ) ) ) ) );
    int32_t  w3493 = ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3485 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3494 = (  op_dash_sub775 ( (  op_dash_sub775 ( (  w3493 ) , (  x3489 ) ) ) , (  slen3492 ) ) );
    ( (  draw_dash_str1406 ) ( (  screen3485 ) ,  (  s3487 ) ,  (  x3494 ) ,  (  y3491 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1349 (   struct env1310* env ,    struct StrConcat_1346  s3955 ) {
    ( (  draw_dash_str_dash_right1350 ) ( ( env->screen3949 ) ,  (  s3955 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline3952 ) ) ) );
    (* env->curline3952 ) = (  op_dash_add240 ( ( * ( env->curline3952 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1419 {
    struct StrView_20  field0;
    struct Maybe_22  field1;
};

static struct StrConcat_1419 StrConcat_1419_StrConcat (  struct StrView_20  field0 ,  struct Maybe_22  field1 ) {
    return ( struct StrConcat_1419 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1418 {
    enum Unit_6  (*fun) (  struct env1311*  ,    struct StrConcat_1419  );
    struct env1311 env;
};

struct StrConcatIter_1425 {
    struct StrConcatIter_1354  f_left;
    struct AppendIter_837  f_right;
};

struct StrCaseIter_1424 {
    enum {
        StrCaseIter_1424_StrCaseIter1_t,
        StrCaseIter_1424_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_567  field0;
        } StrCaseIter_1424_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1425  field0;
        } StrCaseIter_1424_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1424 StrCaseIter_1424_StrCaseIter1 (  struct StrViewIter_567  field0 ) {
    return ( struct StrCaseIter_1424 ) { .tag = StrCaseIter_1424_StrCaseIter1_t, .stuff = { .StrCaseIter_1424_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1424 StrCaseIter_1424_StrCaseIter2 (  struct StrConcatIter_1425  field0 ) {
    return ( struct StrCaseIter_1424 ) { .tag = StrCaseIter_1424_StrCaseIter2_t, .stuff = { .StrCaseIter_1424_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1423 {
    struct StrViewIter_567  f_left;
    struct StrCaseIter_1424  f_right;
};

static  struct StrConcatIter_1423   into_dash_iter1427 (    struct StrConcatIter_1423  self1472 ) {
    return (  self1472 );
}

static  struct Maybe_570   next1430 (    struct StrConcatIter_1425 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next1364 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next863 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next1429 (    struct StrCaseIter_1424 *  self1497 ) {
    struct StrCaseIter_1424 *  dref1498 = (  self1497 );
    if ( (* dref1498 ).tag == StrCaseIter_1424_StrCaseIter1_t ) {
        return ( (  next571 ) ( ( & ( (* dref1498 ) .stuff .StrCaseIter_1424_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1498 ).tag == StrCaseIter_1424_StrCaseIter2_t ) {
            return ( (  next1430 ) ( ( & ( (* dref1498 ) .stuff .StrCaseIter_1424_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_570   next1428 (    struct StrConcatIter_1423 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next571 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next1429 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce1426 (    struct StrConcatIter_1423  iterable1074 ,    size_t  base1076 ,    size_t (*  fun1078 )(    struct Char_47  ,    size_t  ) ) {
    size_t  x1079 = (  base1076 );
    struct StrConcatIter_1423  it1080 = ( (  into_dash_iter1427 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_570  dref1081 = ( (  next1428 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_570_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_570_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_570_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1431 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1431);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1432;
    return (  temp1432 );
}

static  size_t   lam1433 (    struct Char_47  dref1086 ,    size_t  x1088 ) {
    return (  op_dash_add198 ( (  x1088 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1422 (    struct StrConcatIter_1423  it1085 ) {
    return ( (  reduce1426 ) ( (  it1085 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1433 ) ) );
}

struct StrConcat_1438 {
    struct StrConcat_1348  field0;
    struct Char_47  field1;
};

static struct StrConcat_1438 StrConcat_1438_StrConcat (  struct StrConcat_1348  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1438 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1437 {
    enum {
        StrCase_1437_StrCase1_t,
        StrCase_1437_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_20  field0;
        } StrCase_1437_StrCase1_s;
        struct {
            struct StrConcat_1438  field0;
        } StrCase_1437_StrCase2_s;
    } stuff;
};

static struct StrCase_1437 StrCase_1437_StrCase1 (  struct StrView_20  field0 ) {
    return ( struct StrCase_1437 ) { .tag = StrCase_1437_StrCase1_t, .stuff = { .StrCase_1437_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1437 StrCase_1437_StrCase2 (  struct StrConcat_1438  field0 ) {
    return ( struct StrCase_1437 ) { .tag = StrCase_1437_StrCase2_t, .stuff = { .StrCase_1437_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1425   into_dash_iter1443 (    struct StrConcat_1438  dref1479 ) {
    return ( (struct StrConcatIter_1425) { .f_left = ( (  chars1387 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars877 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1425   chars1442 (    struct StrConcat_1438  self1490 ) {
    return ( (  into_dash_iter1443 ) ( (  self1490 ) ) );
}

static  struct StrCaseIter_1424   into_dash_iter1441 (    struct StrCase_1437  self1503 ) {
    struct StrCase_1437  dref1504 = (  self1503 );
    if ( dref1504.tag == StrCase_1437_StrCase1_t ) {
        return ( ( StrCaseIter_1424_StrCaseIter1 ) ( ( (  chars572 ) ( ( dref1504 .stuff .StrCase_1437_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1504.tag == StrCase_1437_StrCase2_t ) {
            return ( ( StrCaseIter_1424_StrCaseIter2 ) ( ( (  chars1442 ) ( ( dref1504 .stuff .StrCase_1437_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1424   chars1440 (    struct StrCase_1437  self1515 ) {
    return ( (  into_dash_iter1441 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_1424   chars1436 (    struct Maybe_22  self1529 ) {
    struct StrCase_1437  temp1439;
    struct StrCase_1437  c1530 = (  temp1439 );
    struct Maybe_22  dref1531 = (  self1529 );
    if ( dref1531.tag == Maybe_22_None_t ) {
        c1530 = ( ( StrCase_1437_StrCase1 ) ( ( (  from_dash_string185 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_22_Just_t ) {
            c1530 = ( ( StrCase_1437_StrCase2 ) ( ( ( StrConcat_1438_StrConcat ) ( ( ( StrConcat_1348_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1531 .stuff .Maybe_22_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1440 ) ( (  c1530 ) ) );
}

static  struct StrConcatIter_1423   into_dash_iter1435 (    struct StrConcat_1419  dref1479 ) {
    return ( (struct StrConcatIter_1423) { .f_left = ( (  chars572 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1436 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1423   chars1434 (    struct StrConcat_1419  self1490 ) {
    return ( (  into_dash_iter1435 ) ( (  self1490 ) ) );
}

struct Zip_1446 {
    struct StrConcatIter_1423  f_left_dash_it;
    struct FromIter_232  f_right_dash_it;
};

struct env1447 {
    int32_t  y3475;
    ;
    struct Screen_625 *  screen3469;
    int32_t  x3478;
    ;
};

struct envunion1448 {
    enum Unit_6  (*fun) (  struct env1447*  ,    struct Tuple2_1336  );
    struct env1447 env;
};

static  struct Zip_1446   into_dash_iter1450 (    struct Zip_1446  self905 ) {
    return (  self905 );
}

static  struct Maybe_1339   next1451 (    struct Zip_1446 *  self908 ) {
    struct Zip_1446  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_570  dref910 = ( (  next1428 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_570_None_t ) {
            return ( (struct Maybe_1339) { .tag = Maybe_1339_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_570_Just_t ) {
                struct Maybe_238  dref912 = ( (  next239 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_238_None_t ) {
                    return ( (struct Maybe_1339) { .tag = Maybe_1339_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_238_Just_t ) {
                        ( (  next1428 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next239 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1339_Just ) ( ( ( Tuple2_1336_Tuple2 ) ( ( dref910 .stuff .Maybe_570_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_238_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1445 (    struct Zip_1446  iterable1055 ,   struct envunion1448  fun1057 ) {
    struct Zip_1446  temp1449 = ( (  into_dash_iter1450 ) ( (  iterable1055 ) ) );
    struct Zip_1446 *  it1058 = ( &temp1449 );
    while ( ( true ) ) {
        struct Maybe_1339  dref1059 = ( (  next1451 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_1339_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_1339_Just_t ) {
                struct envunion1448  temp1452 = (  fun1057 );
                ( temp1452.fun ( &temp1452.env ,  ( dref1059 .stuff .Maybe_1339_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1446   zip1453 (    struct StrConcatIter_1423  left916 ,    struct FromIter_232  right918 ) {
    struct StrConcatIter_1423  left_dash_it919 = ( (  into_dash_iter1427 ) ( (  left916 ) ) );
    struct FromIter_232  right_dash_it920 = ( (  into_dash_iter244 ) ( (  right918 ) ) );
    return ( (struct Zip_1446) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  enum Unit_6   lam1454 (   struct env1447* env ,    struct Tuple2_1336  dref3480 ) {
    ( (  put_dash_char1293 ) ( ( env->screen3469 ) ,  ( dref3480 .field0 ) ,  (  op_dash_add240 ( ( env->x3478 ) , ( dref3480 .field1 ) ) ) ,  ( env->y3475 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1444 (    struct Screen_625 *  screen3469 ,    struct StrConcat_1419  s3471 ,    int32_t  x3473 ,    int32_t  y3475 ) {
    int32_t  w3476 = ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3469 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp386 ( (  y3475 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp386 ( (  y3475 ) , ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3469 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3477 = (  op_dash_add240 ( (  op_dash_mul1294 ( (  y3475 ) , (  w3476 ) ) ) , (  x3473 ) ) );
    int32_t  x3478 = ( (  min432 ) ( (  x3473 ) ,  (  w3476 ) ) );
    size_t  max_dash_len3479 = ( (  i32_dash_size228 ) ( (  op_dash_sub775 ( (  w3476 ) , (  x3478 ) ) ) ) );
    struct env1447 envinst1447 = {
        .y3475 =  y3475 ,
        .screen3469 =  screen3469 ,
        .x3478 =  x3478 ,
    };
    ( (  for_dash_each1445 ) ( ( (  zip1453 ) ( ( (  chars1434 ) ( (  s3471 ) ) ) ,  ( (  from245 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1448){ .fun = (  enum Unit_6  (*) (  struct env1447*  ,    struct Tuple2_1336  ) )lam1454 , .env =  envinst1447 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1421 (    struct Screen_625 *  screen3485 ,    struct StrConcat_1419  s3487 ,    int32_t  x3489 ,    int32_t  y3491 ) {
    int32_t  slen3492 = ( (  size_dash_i32162 ) ( ( (  count1422 ) ( ( (  chars1434 ) ( (  s3487 ) ) ) ) ) ) );
    int32_t  w3493 = ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3485 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3494 = (  op_dash_sub775 ( (  op_dash_sub775 ( (  w3493 ) , (  x3489 ) ) ) , (  slen3492 ) ) );
    ( (  draw_dash_str1444 ) ( (  screen3485 ) ,  (  s3487 ) ,  (  x3494 ) ,  (  y3491 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1420 (   struct env1311* env ,    struct StrConcat_1419  s3955 ) {
    ( (  draw_dash_str_dash_right1421 ) ( ( env->screen3949 ) ,  (  s3955 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline3952 ) ) ) );
    (* env->curline3952 ) = (  op_dash_add240 ( ( * ( env->curline3952 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1457 {
    struct StrView_20  field0;
    struct Maybe_112  field1;
};

static struct StrConcat_1457 StrConcat_1457_StrConcat (  struct StrView_20  field0 ,  struct Maybe_112  field1 ) {
    return ( struct StrConcat_1457 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1456 {
    enum Unit_6  (*fun) (  struct env1312*  ,    struct StrConcat_1457  );
    struct env1312 env;
};

struct StrConcatIter_1463 {
    struct StrConcatIter_1320  f_left;
    struct AppendIter_837  f_right;
};

struct StrCaseIter_1462 {
    enum {
        StrCaseIter_1462_StrCaseIter1_t,
        StrCaseIter_1462_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_567  field0;
        } StrCaseIter_1462_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1463  field0;
        } StrCaseIter_1462_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1462 StrCaseIter_1462_StrCaseIter1 (  struct StrViewIter_567  field0 ) {
    return ( struct StrCaseIter_1462 ) { .tag = StrCaseIter_1462_StrCaseIter1_t, .stuff = { .StrCaseIter_1462_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1462 StrCaseIter_1462_StrCaseIter2 (  struct StrConcatIter_1463  field0 ) {
    return ( struct StrCaseIter_1462 ) { .tag = StrCaseIter_1462_StrCaseIter2_t, .stuff = { .StrCaseIter_1462_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1461 {
    struct StrViewIter_567  f_left;
    struct StrCaseIter_1462  f_right;
};

static  struct StrConcatIter_1461   into_dash_iter1465 (    struct StrConcatIter_1461  self1472 ) {
    return (  self1472 );
}

static  struct Maybe_570   next1468 (    struct StrConcatIter_1463 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next1323 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next863 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next1467 (    struct StrCaseIter_1462 *  self1497 ) {
    struct StrCaseIter_1462 *  dref1498 = (  self1497 );
    if ( (* dref1498 ).tag == StrCaseIter_1462_StrCaseIter1_t ) {
        return ( (  next571 ) ( ( & ( (* dref1498 ) .stuff .StrCaseIter_1462_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1498 ).tag == StrCaseIter_1462_StrCaseIter2_t ) {
            return ( (  next1468 ) ( ( & ( (* dref1498 ) .stuff .StrCaseIter_1462_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_570   next1466 (    struct StrConcatIter_1461 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next571 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next1467 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce1464 (    struct StrConcatIter_1461  iterable1074 ,    size_t  base1076 ,    size_t (*  fun1078 )(    struct Char_47  ,    size_t  ) ) {
    size_t  x1079 = (  base1076 );
    struct StrConcatIter_1461  it1080 = ( (  into_dash_iter1465 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_570  dref1081 = ( (  next1466 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_570_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_570_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_570_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1469 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1469);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1470;
    return (  temp1470 );
}

static  size_t   lam1471 (    struct Char_47  dref1086 ,    size_t  x1088 ) {
    return (  op_dash_add198 ( (  x1088 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1460 (    struct StrConcatIter_1461  it1085 ) {
    return ( (  reduce1464 ) ( (  it1085 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1471 ) ) );
}

struct StrCase_1475 {
    enum {
        StrCase_1475_StrCase1_t,
        StrCase_1475_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_20  field0;
        } StrCase_1475_StrCase1_s;
        struct {
            struct StrConcat_442  field0;
        } StrCase_1475_StrCase2_s;
    } stuff;
};

static struct StrCase_1475 StrCase_1475_StrCase1 (  struct StrView_20  field0 ) {
    return ( struct StrCase_1475 ) { .tag = StrCase_1475_StrCase1_t, .stuff = { .StrCase_1475_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1475 StrCase_1475_StrCase2 (  struct StrConcat_442  field0 ) {
    return ( struct StrCase_1475 ) { .tag = StrCase_1475_StrCase2_t, .stuff = { .StrCase_1475_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1320   into_dash_iter1482 (    struct StrConcat_443  dref1479 ) {
    return ( (struct StrConcatIter_1320) { .f_left = ( (  chars572 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars572 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1320   chars1481 (    struct StrConcat_443  self1490 ) {
    return ( (  into_dash_iter1482 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1463   into_dash_iter1480 (    struct StrConcat_442  dref1479 ) {
    return ( (struct StrConcatIter_1463) { .f_left = ( (  chars1481 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars877 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1463   chars1479 (    struct StrConcat_442  self1490 ) {
    return ( (  into_dash_iter1480 ) ( (  self1490 ) ) );
}

static  struct StrCaseIter_1462   into_dash_iter1478 (    struct StrCase_1475  self1503 ) {
    struct StrCase_1475  dref1504 = (  self1503 );
    if ( dref1504.tag == StrCase_1475_StrCase1_t ) {
        return ( ( StrCaseIter_1462_StrCaseIter1 ) ( ( (  chars572 ) ( ( dref1504 .stuff .StrCase_1475_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1504.tag == StrCase_1475_StrCase2_t ) {
            return ( ( StrCaseIter_1462_StrCaseIter2 ) ( ( (  chars1479 ) ( ( dref1504 .stuff .StrCase_1475_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1462   chars1477 (    struct StrCase_1475  self1515 ) {
    return ( (  into_dash_iter1478 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_1462   chars1474 (    struct Maybe_112  self1529 ) {
    struct StrCase_1475  temp1476;
    struct StrCase_1475  c1530 = (  temp1476 );
    struct Maybe_112  dref1531 = (  self1529 );
    if ( dref1531.tag == Maybe_112_None_t ) {
        c1530 = ( ( StrCase_1475_StrCase1 ) ( ( (  from_dash_string185 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_112_Just_t ) {
            c1530 = ( ( StrCase_1475_StrCase2 ) ( ( ( StrConcat_442_StrConcat ) ( ( ( StrConcat_443_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1531 .stuff .Maybe_112_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1477 ) ( (  c1530 ) ) );
}

static  struct StrConcatIter_1461   into_dash_iter1473 (    struct StrConcat_1457  dref1479 ) {
    return ( (struct StrConcatIter_1461) { .f_left = ( (  chars572 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1474 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1461   chars1472 (    struct StrConcat_1457  self1490 ) {
    return ( (  into_dash_iter1473 ) ( (  self1490 ) ) );
}

struct Zip_1485 {
    struct StrConcatIter_1461  f_left_dash_it;
    struct FromIter_232  f_right_dash_it;
};

struct env1486 {
    int32_t  y3475;
    ;
    struct Screen_625 *  screen3469;
    int32_t  x3478;
    ;
};

struct envunion1487 {
    enum Unit_6  (*fun) (  struct env1486*  ,    struct Tuple2_1336  );
    struct env1486 env;
};

static  struct Zip_1485   into_dash_iter1489 (    struct Zip_1485  self905 ) {
    return (  self905 );
}

static  struct Maybe_1339   next1490 (    struct Zip_1485 *  self908 ) {
    struct Zip_1485  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_570  dref910 = ( (  next1466 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_570_None_t ) {
            return ( (struct Maybe_1339) { .tag = Maybe_1339_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_570_Just_t ) {
                struct Maybe_238  dref912 = ( (  next239 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_238_None_t ) {
                    return ( (struct Maybe_1339) { .tag = Maybe_1339_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_238_Just_t ) {
                        ( (  next1466 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next239 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1339_Just ) ( ( ( Tuple2_1336_Tuple2 ) ( ( dref910 .stuff .Maybe_570_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_238_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1484 (    struct Zip_1485  iterable1055 ,   struct envunion1487  fun1057 ) {
    struct Zip_1485  temp1488 = ( (  into_dash_iter1489 ) ( (  iterable1055 ) ) );
    struct Zip_1485 *  it1058 = ( &temp1488 );
    while ( ( true ) ) {
        struct Maybe_1339  dref1059 = ( (  next1490 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_1339_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_1339_Just_t ) {
                struct envunion1487  temp1491 = (  fun1057 );
                ( temp1491.fun ( &temp1491.env ,  ( dref1059 .stuff .Maybe_1339_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1485   zip1492 (    struct StrConcatIter_1461  left916 ,    struct FromIter_232  right918 ) {
    struct StrConcatIter_1461  left_dash_it919 = ( (  into_dash_iter1465 ) ( (  left916 ) ) );
    struct FromIter_232  right_dash_it920 = ( (  into_dash_iter244 ) ( (  right918 ) ) );
    return ( (struct Zip_1485) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  enum Unit_6   lam1493 (   struct env1486* env ,    struct Tuple2_1336  dref3480 ) {
    ( (  put_dash_char1293 ) ( ( env->screen3469 ) ,  ( dref3480 .field0 ) ,  (  op_dash_add240 ( ( env->x3478 ) , ( dref3480 .field1 ) ) ) ,  ( env->y3475 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1483 (    struct Screen_625 *  screen3469 ,    struct StrConcat_1457  s3471 ,    int32_t  x3473 ,    int32_t  y3475 ) {
    int32_t  w3476 = ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3469 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp386 ( (  y3475 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp386 ( (  y3475 ) , ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3469 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3477 = (  op_dash_add240 ( (  op_dash_mul1294 ( (  y3475 ) , (  w3476 ) ) ) , (  x3473 ) ) );
    int32_t  x3478 = ( (  min432 ) ( (  x3473 ) ,  (  w3476 ) ) );
    size_t  max_dash_len3479 = ( (  i32_dash_size228 ) ( (  op_dash_sub775 ( (  w3476 ) , (  x3478 ) ) ) ) );
    struct env1486 envinst1486 = {
        .y3475 =  y3475 ,
        .screen3469 =  screen3469 ,
        .x3478 =  x3478 ,
    };
    ( (  for_dash_each1484 ) ( ( (  zip1492 ) ( ( (  chars1472 ) ( (  s3471 ) ) ) ,  ( (  from245 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1487){ .fun = (  enum Unit_6  (*) (  struct env1486*  ,    struct Tuple2_1336  ) )lam1493 , .env =  envinst1486 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1459 (    struct Screen_625 *  screen3485 ,    struct StrConcat_1457  s3487 ,    int32_t  x3489 ,    int32_t  y3491 ) {
    int32_t  slen3492 = ( (  size_dash_i32162 ) ( ( (  count1460 ) ( ( (  chars1472 ) ( (  s3487 ) ) ) ) ) ) );
    int32_t  w3493 = ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3485 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3494 = (  op_dash_sub775 ( (  op_dash_sub775 ( (  w3493 ) , (  x3489 ) ) ) , (  slen3492 ) ) );
    ( (  draw_dash_str1483 ) ( (  screen3485 ) ,  (  s3487 ) ,  (  x3494 ) ,  (  y3491 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1458 (   struct env1312* env ,    struct StrConcat_1457  s3955 ) {
    ( (  draw_dash_str_dash_right1459 ) ( ( env->screen3949 ) ,  (  s3955 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline3952 ) ) ) );
    (* env->curline3952 ) = (  op_dash_add240 ( ( * ( env->curline3952 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1496 {
    struct StrView_20  field0;
    struct EditorMode_113  field1;
};

static struct StrConcat_1496 StrConcat_1496_StrConcat (  struct StrView_20  field0 ,  struct EditorMode_113  field1 ) {
    return ( struct StrConcat_1496 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1495 {
    enum Unit_6  (*fun) (  struct env1313*  ,    struct StrConcat_1496  );
    struct env1313 env;
};

struct StrConcat_1504 {
    struct StrView_20  field0;
    struct StrBuilder_44  field1;
};

static struct StrConcat_1504 StrConcat_1504_StrConcat (  struct StrView_20  field0 ,  struct StrBuilder_44  field1 ) {
    return ( struct StrConcat_1504 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1503 {
    struct StrConcat_1504  field0;
    struct Char_47  field1;
};

static struct StrConcat_1503 StrConcat_1503_StrConcat (  struct StrConcat_1504  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1503 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1502 {
    enum {
        StrCase_1502_StrCase1_t,
        StrCase_1502_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_20  field0;
        } StrCase_1502_StrCase1_s;
        struct {
            struct StrConcat_1503  field0;
        } StrCase_1502_StrCase2_s;
    } stuff;
};

static struct StrCase_1502 StrCase_1502_StrCase1 (  struct StrView_20  field0 ) {
    return ( struct StrCase_1502 ) { .tag = StrCase_1502_StrCase1_t, .stuff = { .StrCase_1502_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1502 StrCase_1502_StrCase2 (  struct StrConcat_1503  field0 ) {
    return ( struct StrCase_1502 ) { .tag = StrCase_1502_StrCase2_t, .stuff = { .StrCase_1502_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrCaseIter_1462   undefined1507 (  ) {
    struct StrCaseIter_1462  temp1508;
    return (  temp1508 );
}

static  struct StrCaseIter_1462   todo1506 (  ) {
    ( (  print981 ) ( ( (  from_dash_string185 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined1507 ) ( ) );
}

static  struct StrViewIter_567   chars1515 (    struct StrBuilder_44  s2750 ) {
    return ( (  into_dash_iter573 ) ( ( (  as_dash_str1160 ) ( ( & (  s2750 ) ) ) ) ) );
}

static  struct StrConcatIter_1320   into_dash_iter1514 (    struct StrConcat_1504  dref1479 ) {
    return ( (struct StrConcatIter_1320) { .f_left = ( (  chars572 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1515 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1320   chars1513 (    struct StrConcat_1504  self1490 ) {
    return ( (  into_dash_iter1514 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1463   into_dash_iter1512 (    struct StrConcat_1503  dref1479 ) {
    return ( (struct StrConcatIter_1463) { .f_left = ( (  chars1513 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars877 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1463   chars1511 (    struct StrConcat_1503  self1490 ) {
    return ( (  into_dash_iter1512 ) ( (  self1490 ) ) );
}

static  struct StrCaseIter_1462   into_dash_iter1510 (    struct StrCase_1502  self1503 ) {
    struct StrCase_1502  dref1504 = (  self1503 );
    if ( dref1504.tag == StrCase_1502_StrCase1_t ) {
        return ( ( StrCaseIter_1462_StrCaseIter1 ) ( ( (  chars572 ) ( ( dref1504 .stuff .StrCase_1502_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1504.tag == StrCase_1502_StrCase2_t ) {
            return ( ( StrCaseIter_1462_StrCaseIter2 ) ( ( (  chars1511 ) ( ( dref1504 .stuff .StrCase_1502_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1462   chars1509 (    struct StrCase_1502  self1515 ) {
    return ( (  into_dash_iter1510 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_1462   chars1501 (    struct EditorMode_113  self3885 ) {
    struct StrCase_1502  temp1505;
    struct StrCase_1502  c3886 = (  temp1505 );
    struct EditorMode_113  dref3887 = (  self3885 );
    if ( dref3887.tag == EditorMode_113_Normal_t ) {
        c3886 = ( ( StrCase_1502_StrCase1 ) ( ( (  from_dash_string185 ) ( ( "Normal" ) ,  ( 6 ) ) ) ) );
    }
    else {
        if ( dref3887.tag == EditorMode_113_Cmd_t ) {
            c3886 = ( ( StrCase_1502_StrCase2 ) ( ( ( StrConcat_1503_StrConcat ) ( ( ( StrConcat_1504_StrConcat ) ( ( (  from_dash_string185 ) ( ( "Cmd(" ) ,  ( 4 ) ) ) ,  ( dref3887 .stuff .EditorMode_113_Cmd_s .field0 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
        else {
            if ( true ) {
                return ( (  todo1506 ) ( ) );
            }
        }
    }
    return ( (  chars1509 ) ( (  c3886 ) ) );
}

static  struct StrConcatIter_1461   into_dash_iter1500 (    struct StrConcat_1496  dref1479 ) {
    return ( (struct StrConcatIter_1461) { .f_left = ( (  chars572 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1501 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1461   chars1499 (    struct StrConcat_1496  self1490 ) {
    return ( (  into_dash_iter1500 ) ( (  self1490 ) ) );
}

struct env1518 {
    int32_t  y3475;
    ;
    struct Screen_625 *  screen3469;
    int32_t  x3478;
    ;
};

struct envunion1519 {
    enum Unit_6  (*fun) (  struct env1518*  ,    struct Tuple2_1336  );
    struct env1518 env;
};

static  enum Unit_6   for_dash_each1517 (    struct Zip_1485  iterable1055 ,   struct envunion1519  fun1057 ) {
    struct Zip_1485  temp1520 = ( (  into_dash_iter1489 ) ( (  iterable1055 ) ) );
    struct Zip_1485 *  it1058 = ( &temp1520 );
    while ( ( true ) ) {
        struct Maybe_1339  dref1059 = ( (  next1490 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_1339_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_1339_Just_t ) {
                struct envunion1519  temp1521 = (  fun1057 );
                ( temp1521.fun ( &temp1521.env ,  ( dref1059 .stuff .Maybe_1339_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1522 (   struct env1518* env ,    struct Tuple2_1336  dref3480 ) {
    ( (  put_dash_char1293 ) ( ( env->screen3469 ) ,  ( dref3480 .field0 ) ,  (  op_dash_add240 ( ( env->x3478 ) , ( dref3480 .field1 ) ) ) ,  ( env->y3475 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1516 (    struct Screen_625 *  screen3469 ,    struct StrConcat_1496  s3471 ,    int32_t  x3473 ,    int32_t  y3475 ) {
    int32_t  w3476 = ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3469 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp386 ( (  y3475 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp386 ( (  y3475 ) , ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3469 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3477 = (  op_dash_add240 ( (  op_dash_mul1294 ( (  y3475 ) , (  w3476 ) ) ) , (  x3473 ) ) );
    int32_t  x3478 = ( (  min432 ) ( (  x3473 ) ,  (  w3476 ) ) );
    size_t  max_dash_len3479 = ( (  i32_dash_size228 ) ( (  op_dash_sub775 ( (  w3476 ) , (  x3478 ) ) ) ) );
    struct env1518 envinst1518 = {
        .y3475 =  y3475 ,
        .screen3469 =  screen3469 ,
        .x3478 =  x3478 ,
    };
    ( (  for_dash_each1517 ) ( ( (  zip1492 ) ( ( (  chars1499 ) ( (  s3471 ) ) ) ,  ( (  from245 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1519){ .fun = (  enum Unit_6  (*) (  struct env1518*  ,    struct Tuple2_1336  ) )lam1522 , .env =  envinst1518 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1498 (    struct Screen_625 *  screen3485 ,    struct StrConcat_1496  s3487 ,    int32_t  x3489 ,    int32_t  y3491 ) {
    int32_t  slen3492 = ( (  size_dash_i32162 ) ( ( (  count1460 ) ( ( (  chars1499 ) ( (  s3487 ) ) ) ) ) ) );
    int32_t  w3493 = ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3485 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3494 = (  op_dash_sub775 ( (  op_dash_sub775 ( (  w3493 ) , (  x3489 ) ) ) , (  slen3492 ) ) );
    ( (  draw_dash_str1516 ) ( (  screen3485 ) ,  (  s3487 ) ,  (  x3494 ) ,  (  y3491 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1497 (   struct env1313* env ,    struct StrConcat_1496  s3955 ) {
    ( (  draw_dash_str_dash_right1498 ) ( ( env->screen3949 ) ,  (  s3955 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline3952 ) ) ) );
    (* env->curline3952 ) = (  op_dash_add240 ( ( * ( env->curline3952 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct envunion1524 {
    enum Unit_6  (*fun) (  struct env1312*  ,    struct StrConcat_1457  );
    struct env1312 env;
};

static  enum Unit_6   render_dash_editor1279 (    struct Screen_625 *  screen3949 ,    struct Editor_109 *  ed3951 ) {
    ( (  render1280 ) ( (  screen3949 ) ,  ( (  pane940 ) ( (  ed3951 ) ) ) ) );
    int32_t  temp1308 = (  from_dash_integral38 ( 0 ) );
    int32_t *  curline3952 = ( &temp1308 );
    struct env1309 envinst1309 = {
        .curline3952 =  curline3952 ,
        .screen3949 =  screen3949 ,
    };
    struct env1310 envinst1310 = {
        .curline3952 =  curline3952 ,
        .screen3949 =  screen3949 ,
    };
    struct env1311 envinst1311 = {
        .curline3952 =  curline3952 ,
        .screen3949 =  screen3949 ,
    };
    struct env1312 envinst1312 = {
        .curline3952 =  curline3952 ,
        .screen3949 =  screen3949 ,
    };
    struct env1313 envinst1313 = {
        .curline3952 =  curline3952 ,
        .screen3949 =  screen3949 ,
    };
    struct envunion1315  temp1314 = ( (struct envunion1315){ .fun = (  enum Unit_6  (*) (  struct env1309*  ,    struct StrConcat_1316  ) )ann1317 , .env =  envinst1309 } );
    ( temp1314.fun ( &temp1314.env ,  ( ( StrConcat_1316_StrConcat ) ( ( (  from_dash_string185 ) ( ( "mode: " ) ,  ( 6 ) ) ) ,  ( ( ( * (  ed3951 ) ) .f_pane ) .f_mode ) ) ) ) );
    enum CharType_963  cur_dash_ty3956 = ( (  char_dash_type965 ) ( ( (  char_dash_at973 ) ( ( (  pane940 ) ( (  ed3951 ) ) ) ,  ( ( ( * (  ed3951 ) ) .f_pane ) .f_cursor ) ) ) ) );
    struct envunion1345  temp1344 = ( (struct envunion1345){ .fun = (  enum Unit_6  (*) (  struct env1310*  ,    struct StrConcat_1346  ) )ann1349 , .env =  envinst1310 } );
    ( temp1344.fun ( &temp1344.env ,  ( ( StrConcat_1346_StrConcat ) ( ( ( StrConcat_1347_StrConcat ) ( ( ( StrConcat_1348_StrConcat ) ( ( (  from_dash_string185 ) ( ( "cur: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed3951 ) ) .f_pane ) .f_cursor ) ) ) ,  ( (  from_dash_string185 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  (  cur_dash_ty3956 ) ) ) ) );
    struct envunion1418  temp1417 = ( (struct envunion1418){ .fun = (  enum Unit_6  (*) (  struct env1311*  ,    struct StrConcat_1419  ) )ann1420 , .env =  envinst1311 } );
    ( temp1417.fun ( &temp1417.env ,  ( ( StrConcat_1419_StrConcat ) ( ( (  from_dash_string185 ) ( ( "sel: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed3951 ) ) .f_pane ) .f_sel ) ) ) ) );
    struct envunion1456  temp1455 = ( (struct envunion1456){ .fun = (  enum Unit_6  (*) (  struct env1312*  ,    struct StrConcat_1457  ) )ann1458 , .env =  envinst1312 } );
    ( temp1455.fun ( &temp1455.env ,  ( ( StrConcat_1457_StrConcat ) ( ( (  from_dash_string185 ) ( ( "cp: " ) ,  ( 4 ) ) ) ,  ( ( * (  ed3951 ) ) .f_clipboard ) ) ) ) );
    struct envunion1495  temp1494 = ( (struct envunion1495){ .fun = (  enum Unit_6  (*) (  struct env1313*  ,    struct StrConcat_1496  ) )ann1497 , .env =  envinst1313 } );
    ( temp1494.fun ( &temp1494.env ,  ( ( StrConcat_1496_StrConcat ) ( ( (  from_dash_string185 ) ( ( "edmode: " ) ,  ( 8 ) ) ) ,  ( ( * (  ed3951 ) ) .f_mode ) ) ) ) );
    struct envunion1524  temp1523 = ( (struct envunion1524){ .fun = (  enum Unit_6  (*) (  struct env1312*  ,    struct StrConcat_1457  ) )ann1458 , .env =  envinst1312 } );
    ( temp1523.fun ( &temp1523.env ,  ( ( StrConcat_1457_StrConcat ) ( ( (  from_dash_string185 ) ( ( "msg: " ) ,  ( 5 ) ) ) ,  ( ( * (  ed3951 ) ) .f_msg ) ) ) ) );
    return ( Unit_6_Unit );
}

struct RenderState_1526 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_628  f_fg;
    struct Color_628  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_1533 {
    struct StrView_20  field0;
    uint32_t  field1;
};

static struct StrConcat_1533 StrConcat_1533_StrConcat (  struct StrView_20  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1533 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1532 {
    struct StrConcat_1533  field0;
    struct Char_47  field1;
};

static struct StrConcat_1532 StrConcat_1532_StrConcat (  struct StrConcat_1533  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1532 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1531 {
    struct StrConcat_1532  field0;
    uint32_t  field1;
};

static struct StrConcat_1531 StrConcat_1531_StrConcat (  struct StrConcat_1532  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1531 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1530 {
    struct StrConcat_1531  field0;
    struct Char_47  field1;
};

static struct StrConcat_1530 StrConcat_1530_StrConcat (  struct StrConcat_1531  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1530 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1539 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1538 {
    struct StrViewIter_567  f_left;
    struct IntStrIter_1539  f_right;
};

struct StrConcatIter_1537 {
    struct StrConcatIter_1538  f_left;
    struct AppendIter_837  f_right;
};

struct StrConcatIter_1536 {
    struct StrConcatIter_1537  f_left;
    struct IntStrIter_1539  f_right;
};

struct StrConcatIter_1535 {
    struct StrConcatIter_1536  f_left;
    struct AppendIter_837  f_right;
};

static  struct StrConcatIter_1535   into_dash_iter1541 (    struct StrConcatIter_1535  self1472 ) {
    return (  self1472 );
}

struct env1549 {
    ;
    uint32_t  base1191;
};

struct envunion1550 {
    uint32_t  (*fun) (  struct env1549*  ,    int32_t  ,    uint32_t  );
    struct env1549 env;
};

static  uint32_t   reduce1548 (    struct Range_650  iterable1074 ,    uint32_t  base1076 ,   struct envunion1550  fun1078 ) {
    uint32_t  x1079 = (  base1076 );
    struct RangeIter_653  it1080 = ( (  into_dash_iter655 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_238  dref1081 = ( (  next656 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_238_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_238_Just_t ) {
                struct envunion1550  temp1551 = (  fun1078 );
                x1079 = ( temp1551.fun ( &temp1551.env ,  ( dref1081 .stuff .Maybe_238_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1552 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1552);
    exit ( 1 );
    ( Unit_6_Unit );
    uint32_t  temp1553;
    return (  temp1553 );
}

static  uint32_t   lam1554 (   struct env1549* env ,    int32_t  item1195 ,    uint32_t  x1197 ) {
    return (  op_dash_mul647 ( (  x1197 ) , ( env->base1191 ) ) );
}

static  uint32_t   pow1547 (    uint32_t  base1191 ,    int32_t  p1193 ) {
    struct env1549 envinst1549 = {
        .base1191 =  base1191 ,
    };
    return ( (  reduce1548 ) ( ( (  to658 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub775 ( (  p1193 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral181 ( 1 ) ) ,  ( (struct envunion1550){ .fun = (  uint32_t  (*) (  struct env1549*  ,    int32_t  ,    uint32_t  ) )lam1554 , .env =  envinst1549 } ) ) );
}

static  uint32_t   op_dash_div1555 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

static  uint32_t   op_dash_sub1556 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static  struct Maybe_570   next1546 (    struct IntStrIter_1539 *  self1403 ) {
    if ( ( ( * (  self1403 ) ) .f_negative ) ) {
        (*  self1403 ) .f_negative = ( false );
        return ( ( Maybe_570_Just ) ( ( (  from_dash_charlike186 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp386 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_570) { .tag = Maybe_570_None_t } );
    }
    uint32_t  trim_dash_down1404 = ( (  pow1547 ) ( (  from_dash_integral181 ( 10 ) ) ,  (  op_dash_sub775 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    uint32_t  upper1405 = (  op_dash_div1555 ( ( ( * (  self1403 ) ) .f_int ) , (  trim_dash_down1404 ) ) );
    uint32_t  upper_dash_mask1406 = (  op_dash_mul647 ( (  op_dash_div1555 ( (  upper1405 ) , (  from_dash_integral181 ( 10 ) ) ) ) , (  from_dash_integral181 ( 10 ) ) ) );
    uint8_t  digit1407 = ( ( (  cast184 ) ( (  op_dash_sub1556 ( (  upper1405 ) , (  upper_dash_mask1406 ) ) ) ) ) );
    (*  self1403 ) .f_len = (  op_dash_sub775 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_47  digit_dash_char1408 = ( (  from_dash_u8856 ) ( (  op_dash_add191 ( (  digit1407 ) , (  from_dash_integral177 ( 48 ) ) ) ) ) );
    return ( ( Maybe_570_Just ) ( (  digit_dash_char1408 ) ) );
}

static  struct Maybe_570   next1545 (    struct StrConcatIter_1538 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next571 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next1546 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next1544 (    struct StrConcatIter_1537 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next1545 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next863 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next1543 (    struct StrConcatIter_1536 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next1544 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next1546 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next1542 (    struct StrConcatIter_1535 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next1543 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next863 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each1534 (    struct StrConcatIter_1535  iterable1055 ,    enum Unit_6 (*  fun1057 )(    struct Char_47  ) ) {
    struct StrConcatIter_1535  temp1540 = ( (  into_dash_iter1541 ) ( (  iterable1055 ) ) );
    struct StrConcatIter_1535 *  it1058 = ( &temp1540 );
    while ( ( true ) ) {
        struct Maybe_570  dref1059 = ( (  next1542 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_570_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_570_Just_t ) {
                ( (  fun1057 ) ( ( dref1059 .stuff .Maybe_570_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  int32_t   count_dash_digits1567 (    uint32_t  self1411 ) {
    if ( (  eq366 ( (  self1411 ) , (  from_dash_integral181 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1412 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp180 ( (  self1411 ) , (  from_dash_integral181 ( 0 ) ) ) == 2 ) ) {
        self1411 = (  op_dash_div1555 ( (  self1411 ) , (  from_dash_integral181 ( 10 ) ) ) );
        digits1412 = (  op_dash_add240 ( (  digits1412 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1412 );
}

static  struct IntStrIter_1539   uint_dash_iter1566 (    uint32_t  int1418 ) {
    return ( (struct IntStrIter_1539) { .f_int = (  int1418 ) , .f_len = ( (  count_dash_digits1567 ) ( (  int1418 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1539   chars1565 (    uint32_t  self1430 ) {
    return ( (  uint_dash_iter1566 ) ( (  self1430 ) ) );
}

static  struct StrConcatIter_1538   into_dash_iter1564 (    struct StrConcat_1533  dref1479 ) {
    return ( (struct StrConcatIter_1538) { .f_left = ( (  chars572 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1565 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1538   chars1563 (    struct StrConcat_1533  self1490 ) {
    return ( (  into_dash_iter1564 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1537   into_dash_iter1562 (    struct StrConcat_1532  dref1479 ) {
    return ( (struct StrConcatIter_1537) { .f_left = ( (  chars1563 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars877 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1537   chars1561 (    struct StrConcat_1532  self1490 ) {
    return ( (  into_dash_iter1562 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1536   into_dash_iter1560 (    struct StrConcat_1531  dref1479 ) {
    return ( (struct StrConcatIter_1536) { .f_left = ( (  chars1561 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1565 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1536   chars1559 (    struct StrConcat_1531  self1490 ) {
    return ( (  into_dash_iter1560 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1535   into_dash_iter1558 (    struct StrConcat_1530  dref1479 ) {
    return ( (struct StrConcatIter_1535) { .f_left = ( (  chars1559 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars877 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1535   chars1557 (    struct StrConcat_1530  self1490 ) {
    return ( (  into_dash_iter1558 ) ( (  self1490 ) ) );
}

static  enum Unit_6   print1529 (    struct StrConcat_1530  s2526 ) {
    ( (  for_dash_each1534 ) ( ( (  chars1557 ) ( (  s2526 ) ) ) ,  (  printf_dash_char170 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   move_dash_cursor_dash_to1528 (    uint32_t  x2540 ,    uint32_t  y2542 ) {
    uint32_t  x2543 = (  op_dash_add747 ( (  x2540 ) , (  from_dash_integral181 ( 1 ) ) ) );
    uint32_t  y2544 = (  op_dash_add747 ( (  y2542 ) , (  from_dash_integral181 ( 1 ) ) ) );
    ( (  print1529 ) ( ( ( StrConcat_1530_StrConcat ) ( ( ( StrConcat_1531_StrConcat ) ( ( ( StrConcat_1532_StrConcat ) ( ( ( StrConcat_1533_StrConcat ) ( ( (  from_dash_string185 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2544 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2543 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

struct Tuple2_1575 {
    struct Color_628  field0;
    struct Color_628  field1;
};

static struct Tuple2_1575 Tuple2_1575_Tuple2 (  struct Color_628  field0 ,  struct Color_628  field1 ) {
    return ( struct Tuple2_1575 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_629 *   cast1579 (    int32_t *  x356 ) {
    return ( (enum Color8_629 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1577 (    enum Color8_629  x573 ) {
    int32_t  temp1578 = ( (  zeroed818 ) ( ) );
    int32_t *  y574 = ( &temp1578 );
    enum Color8_629 *  yp575 = ( (  cast1579 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq1576 (    enum Color8_629  l2568 ,    enum Color8_629  r2570 ) {
    return (  eq281 ( ( ( (  cast_dash_on_dash_zeroed1577 ) ( (  l2568 ) ) ) ) , ( (  cast_dash_on_dash_zeroed1577 ) ( (  r2570 ) ) ) ) );
}

static  enum Color16_630 *   cast1583 (    int32_t *  x356 ) {
    return ( (enum Color16_630 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1581 (    enum Color16_630  x573 ) {
    int32_t  temp1582 = ( (  zeroed818 ) ( ) );
    int32_t *  y574 = ( &temp1582 );
    enum Color16_630 *  yp575 = ( (  cast1583 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq1580 (    enum Color16_630  l2574 ,    enum Color16_630  r2576 ) {
    return (  eq281 ( ( ( (  cast_dash_on_dash_zeroed1581 ) ( (  l2574 ) ) ) ) , ( (  cast_dash_on_dash_zeroed1581 ) ( (  r2576 ) ) ) ) );
}

static  bool   eq1584 (    struct RGB_631  l2604 ,    struct RGB_631  r2606 ) {
    return ( ( (  eq173 ( ( (  l2604 ) .f_r ) , ( (  r2606 ) .f_r ) ) ) && (  eq173 ( ( (  l2604 ) .f_g ) , ( (  r2606 ) .f_g ) ) ) ) && (  eq173 ( ( (  l2604 ) .f_b ) , ( (  r2606 ) .f_b ) ) ) );
}

static  bool   eq1574 (    struct Color_628  l2627 ,    struct Color_628  r2629 ) {
    return ( {  struct Tuple2_1575  dref2630 = ( ( Tuple2_1575_Tuple2 ) ( (  l2627 ) ,  (  r2629 ) ) ) ; dref2630 .field0.tag == Color_628_ColorDefault_t && dref2630 .field1.tag == Color_628_ColorDefault_t ? ( true ) : dref2630 .field0.tag == Color_628_Color8_t && dref2630 .field1.tag == Color_628_Color8_t ? (  eq1576 ( ( dref2630 .field0 .stuff .Color_628_Color8_s .field0 ) , ( dref2630 .field1 .stuff .Color_628_Color8_s .field0 ) ) ) : dref2630 .field0.tag == Color_628_Color16_t && dref2630 .field1.tag == Color_628_Color16_t ? (  eq1580 ( ( dref2630 .field0 .stuff .Color_628_Color16_s .field0 ) , ( dref2630 .field1 .stuff .Color_628_Color16_s .field0 ) ) ) : dref2630 .field0.tag == Color_628_Color256_t && dref2630 .field1.tag == Color_628_Color256_t ? (  eq173 ( ( dref2630 .field0 .stuff .Color_628_Color256_s .field0 ) , ( dref2630 .field1 .stuff .Color_628_Color256_s .field0 ) ) ) : dref2630 .field0.tag == Color_628_ColorRGB_t && dref2630 .field1.tag == Color_628_ColorRGB_t ? (  eq1584 ( ( dref2630 .field0 .stuff .Color_628_ColorRGB_s .field0 ) , ( dref2630 .field1 .stuff .Color_628_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq1573 (    struct Cell_627  l3349 ,    struct Cell_627  r3351 ) {
    if ( ( !  eq364 ( ( (  l3349 ) .f_c ) , ( (  r3351 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq1574 ( ( (  l3349 ) .f_fg ) , ( (  r3351 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq1574 ( ( (  l3349 ) .f_bg ) , ( (  r3351 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   eq1572 (    struct Cell_627 *  dref148 ,    struct Cell_627 *  dref150 ) {
    return (  eq1573 ( ( (* dref148 ) ) , ( (* dref150 ) ) ) );
}

static  enum Unit_6   set_dash_default_dash_fg1587 (  ) {
    ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg81588 (    enum Color8_629  color2579 ) {
    enum Color8_629  dref2580 = (  color2579 );
    switch (  dref2580 ) {
        case Color8_629_Black8 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_629_Red8 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_629_Green8 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_629_Yellow8 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_629_Blue8 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_629_Magenta8 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_629_Cyan8 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_629_White8 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg161589 (    enum Color16_630  color2583 ) {
    enum Color16_630  dref2584 = (  color2583 );
    switch (  dref2584 ) {
        case Color16_630_Black16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_Red16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_Green16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_Yellow16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_Blue16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_Magenta16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_Cyan16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_White16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_BrightBlack16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_BrightRed16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_BrightGreen16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_BrightYellow16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_BrightBlue16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_BrightMagenta16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_BrightCyan16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_BrightWhite16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_6_Unit );
}

struct StrConcat_1593 {
    struct StrView_20  field0;
    uint8_t  field1;
};

static struct StrConcat_1593 StrConcat_1593_StrConcat (  struct StrView_20  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1593 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1592 {
    struct StrConcat_1593  field0;
    struct Char_47  field1;
};

static struct StrConcat_1592 StrConcat_1592_StrConcat (  struct StrConcat_1593  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1592 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1597 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1596 {
    struct StrViewIter_567  f_left;
    struct IntStrIter_1597  f_right;
};

struct StrConcatIter_1595 {
    struct StrConcatIter_1596  f_left;
    struct AppendIter_837  f_right;
};

static  struct StrConcatIter_1595   into_dash_iter1599 (    struct StrConcatIter_1595  self1472 ) {
    return (  self1472 );
}

struct env1605 {
    ;
    uint8_t  base1191;
};

struct envunion1606 {
    uint8_t  (*fun) (  struct env1605*  ,    int32_t  ,    uint8_t  );
    struct env1605 env;
};

static  uint8_t   reduce1604 (    struct Range_650  iterable1074 ,    uint8_t  base1076 ,   struct envunion1606  fun1078 ) {
    uint8_t  x1079 = (  base1076 );
    struct RangeIter_653  it1080 = ( (  into_dash_iter655 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_238  dref1081 = ( (  next656 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_238_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_238_Just_t ) {
                struct envunion1606  temp1607 = (  fun1078 );
                x1079 = ( temp1607.fun ( &temp1607.env ,  ( dref1081 .stuff .Maybe_238_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1608 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1608);
    exit ( 1 );
    ( Unit_6_Unit );
    uint8_t  temp1609;
    return (  temp1609 );
}

static  uint8_t   op_dash_mul1611 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam1610 (   struct env1605* env ,    int32_t  item1195 ,    uint8_t  x1197 ) {
    return (  op_dash_mul1611 ( (  x1197 ) , ( env->base1191 ) ) );
}

static  uint8_t   pow1603 (    uint8_t  base1191 ,    int32_t  p1193 ) {
    struct env1605 envinst1605 = {
        .base1191 =  base1191 ,
    };
    return ( (  reduce1604 ) ( ( (  to658 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub775 ( (  p1193 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral177 ( 1 ) ) ,  ( (struct envunion1606){ .fun = (  uint8_t  (*) (  struct env1605*  ,    int32_t  ,    uint8_t  ) )lam1610 , .env =  envinst1605 } ) ) );
}

static  uint8_t   op_dash_div1612 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast1613 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_570   next1602 (    struct IntStrIter_1597 *  self1403 ) {
    if ( ( ( * (  self1403 ) ) .f_negative ) ) {
        (*  self1403 ) .f_negative = ( false );
        return ( ( Maybe_570_Just ) ( ( (  from_dash_charlike186 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp386 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_570) { .tag = Maybe_570_None_t } );
    }
    uint8_t  trim_dash_down1404 = ( (  pow1603 ) ( (  from_dash_integral177 ( 10 ) ) ,  (  op_dash_sub775 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    uint8_t  upper1405 = (  op_dash_div1612 ( ( ( * (  self1403 ) ) .f_int ) , (  trim_dash_down1404 ) ) );
    uint8_t  upper_dash_mask1406 = (  op_dash_mul1611 ( (  op_dash_div1612 ( (  upper1405 ) , (  from_dash_integral177 ( 10 ) ) ) ) , (  from_dash_integral177 ( 10 ) ) ) );
    uint8_t  digit1407 = ( ( (  cast1613 ) ( (  op_dash_sub745 ( (  upper1405 ) , (  upper_dash_mask1406 ) ) ) ) ) );
    (*  self1403 ) .f_len = (  op_dash_sub775 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_47  digit_dash_char1408 = ( (  from_dash_u8856 ) ( (  op_dash_add191 ( (  digit1407 ) , (  from_dash_integral177 ( 48 ) ) ) ) ) );
    return ( ( Maybe_570_Just ) ( (  digit_dash_char1408 ) ) );
}

static  struct Maybe_570   next1601 (    struct StrConcatIter_1596 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next571 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next1602 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next1600 (    struct StrConcatIter_1595 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next1601 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next863 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each1594 (    struct StrConcatIter_1595  iterable1055 ,    enum Unit_6 (*  fun1057 )(    struct Char_47  ) ) {
    struct StrConcatIter_1595  temp1598 = ( (  into_dash_iter1599 ) ( (  iterable1055 ) ) );
    struct StrConcatIter_1595 *  it1058 = ( &temp1598 );
    while ( ( true ) ) {
        struct Maybe_570  dref1059 = ( (  next1600 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_570_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_570_Just_t ) {
                ( (  fun1057 ) ( ( dref1059 .stuff .Maybe_570_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  int32_t   count_dash_digits1620 (    uint8_t  self1411 ) {
    if ( (  eq173 ( (  self1411 ) , (  from_dash_integral177 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1412 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp190 ( (  self1411 ) , (  from_dash_integral177 ( 0 ) ) ) == 2 ) ) {
        self1411 = (  op_dash_div1612 ( (  self1411 ) , (  from_dash_integral177 ( 10 ) ) ) );
        digits1412 = (  op_dash_add240 ( (  digits1412 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1412 );
}

static  struct IntStrIter_1597   uint_dash_iter1619 (    uint8_t  int1418 ) {
    return ( (struct IntStrIter_1597) { .f_int = (  int1418 ) , .f_len = ( (  count_dash_digits1620 ) ( (  int1418 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1597   chars1618 (    uint8_t  self1436 ) {
    return ( (  uint_dash_iter1619 ) ( (  self1436 ) ) );
}

static  struct StrConcatIter_1596   into_dash_iter1617 (    struct StrConcat_1593  dref1479 ) {
    return ( (struct StrConcatIter_1596) { .f_left = ( (  chars572 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1618 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1596   chars1616 (    struct StrConcat_1593  self1490 ) {
    return ( (  into_dash_iter1617 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1595   into_dash_iter1615 (    struct StrConcat_1592  dref1479 ) {
    return ( (struct StrConcatIter_1595) { .f_left = ( (  chars1616 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars877 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1595   chars1614 (    struct StrConcat_1592  self1490 ) {
    return ( (  into_dash_iter1615 ) ( (  self1490 ) ) );
}

static  enum Unit_6   print1591 (    struct StrConcat_1592  s2526 ) {
    ( (  for_dash_each1594 ) ( ( (  chars1614 ) ( (  s2526 ) ) ) ,  (  printf_dash_char170 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg2561590 (    uint8_t  color2597 ) {
    ( (  print1591 ) ( ( ( StrConcat_1592_StrConcat ) ( ( ( StrConcat_1593_StrConcat ) ( ( (  from_dash_string185 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2597 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1626 {
    struct StrConcat_1592  field0;
    uint8_t  field1;
};

static struct StrConcat_1626 StrConcat_1626_StrConcat (  struct StrConcat_1592  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1626 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1625 {
    struct StrConcat_1626  field0;
    struct Char_47  field1;
};

static struct StrConcat_1625 StrConcat_1625_StrConcat (  struct StrConcat_1626  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1625 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1624 {
    struct StrConcat_1625  field0;
    uint8_t  field1;
};

static struct StrConcat_1624 StrConcat_1624_StrConcat (  struct StrConcat_1625  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1624 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1623 {
    struct StrConcat_1624  field0;
    struct Char_47  field1;
};

static struct StrConcat_1623 StrConcat_1623_StrConcat (  struct StrConcat_1624  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1623 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_1631 {
    struct StrConcatIter_1595  f_left;
    struct IntStrIter_1597  f_right;
};

struct StrConcatIter_1630 {
    struct StrConcatIter_1631  f_left;
    struct AppendIter_837  f_right;
};

struct StrConcatIter_1629 {
    struct StrConcatIter_1630  f_left;
    struct IntStrIter_1597  f_right;
};

struct StrConcatIter_1628 {
    struct StrConcatIter_1629  f_left;
    struct AppendIter_837  f_right;
};

static  struct StrConcatIter_1628   into_dash_iter1633 (    struct StrConcatIter_1628  self1472 ) {
    return (  self1472 );
}

static  struct Maybe_570   next1637 (    struct StrConcatIter_1631 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next1600 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next1602 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next1636 (    struct StrConcatIter_1630 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next1637 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next863 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next1635 (    struct StrConcatIter_1629 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next1636 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next1602 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_570   next1634 (    struct StrConcatIter_1628 *  self1475 ) {
    struct Maybe_570  dref1476 = ( (  next1635 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_570_Just_t ) {
        return ( ( Maybe_570_Just ) ( ( dref1476 .stuff .Maybe_570_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_570_None_t ) {
            return ( (  next863 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each1627 (    struct StrConcatIter_1628  iterable1055 ,    enum Unit_6 (*  fun1057 )(    struct Char_47  ) ) {
    struct StrConcatIter_1628  temp1632 = ( (  into_dash_iter1633 ) ( (  iterable1055 ) ) );
    struct StrConcatIter_1628 *  it1058 = ( &temp1632 );
    while ( ( true ) ) {
        struct Maybe_570  dref1059 = ( (  next1634 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_570_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_570_Just_t ) {
                ( (  fun1057 ) ( ( dref1059 .stuff .Maybe_570_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct StrConcatIter_1631   into_dash_iter1645 (    struct StrConcat_1626  dref1479 ) {
    return ( (struct StrConcatIter_1631) { .f_left = ( (  chars1614 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1618 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1631   chars1644 (    struct StrConcat_1626  self1490 ) {
    return ( (  into_dash_iter1645 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1630   into_dash_iter1643 (    struct StrConcat_1625  dref1479 ) {
    return ( (struct StrConcatIter_1630) { .f_left = ( (  chars1644 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars877 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1630   chars1642 (    struct StrConcat_1625  self1490 ) {
    return ( (  into_dash_iter1643 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1629   into_dash_iter1641 (    struct StrConcat_1624  dref1479 ) {
    return ( (struct StrConcatIter_1629) { .f_left = ( (  chars1642 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1618 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1629   chars1640 (    struct StrConcat_1624  self1490 ) {
    return ( (  into_dash_iter1641 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1628   into_dash_iter1639 (    struct StrConcat_1623  dref1479 ) {
    return ( (struct StrConcatIter_1628) { .f_left = ( (  chars1640 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars877 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1628   chars1638 (    struct StrConcat_1623  self1490 ) {
    return ( (  into_dash_iter1639 ) ( (  self1490 ) ) );
}

static  enum Unit_6   print1622 (    struct StrConcat_1623  s2526 ) {
    ( (  for_dash_each1627 ) ( ( (  chars1638 ) ( (  s2526 ) ) ) ,  (  printf_dash_char170 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg_dash_rgb1621 (    struct RGB_631  c2620 ) {
    ( (  print1622 ) ( ( ( StrConcat_1623_StrConcat ) ( ( ( StrConcat_1624_StrConcat ) ( ( ( StrConcat_1625_StrConcat ) ( ( ( StrConcat_1626_StrConcat ) ( ( ( StrConcat_1592_StrConcat ) ( ( ( StrConcat_1593_StrConcat ) ( ( (  from_dash_string185 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2620 ) .f_r ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2620 ) .f_g ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2620 ) .f_b ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg1586 (    struct Color_628  c2641 ) {
    struct Color_628  dref2642 = (  c2641 );
    if ( dref2642.tag == Color_628_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1587 ) ( ) );
    }
    else {
        if ( dref2642.tag == Color_628_Color8_t ) {
            ( (  set_dash_fg81588 ) ( ( dref2642 .stuff .Color_628_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2642.tag == Color_628_Color16_t ) {
                ( (  set_dash_fg161589 ) ( ( dref2642 .stuff .Color_628_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2642.tag == Color_628_Color256_t ) {
                    ( (  set_dash_fg2561590 ) ( ( dref2642 .stuff .Color_628_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2642.tag == Color_628_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb1621 ) ( ( dref2642 .stuff .Color_628_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_default_dash_bg1647 (  ) {
    ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg81648 (    enum Color8_629  color2587 ) {
    enum Color8_629  dref2588 = (  color2587 );
    switch (  dref2588 ) {
        case Color8_629_Black8 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_629_Red8 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_629_Green8 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_629_Yellow8 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_629_Blue8 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_629_Magenta8 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_629_Cyan8 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_629_White8 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg161649 (    enum Color16_630  color2591 ) {
    enum Color16_630  dref2592 = (  color2591 );
    switch (  dref2592 ) {
        case Color16_630_Black16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_Red16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_Green16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_Yellow16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_Blue16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_Magenta16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_Cyan16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_White16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_630_BrightBlack16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_630_BrightRed16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_630_BrightGreen16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_630_BrightYellow16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_630_BrightBlue16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_630_BrightMagenta16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_630_BrightCyan16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_630_BrightWhite16 : {
            ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg2561650 (    uint8_t  color2600 ) {
    ( (  print1591 ) ( ( ( StrConcat_1592_StrConcat ) ( ( ( StrConcat_1593_StrConcat ) ( ( (  from_dash_string185 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2600 ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg_dash_rgb1651 (    struct RGB_631  c2623 ) {
    ( (  print1622 ) ( ( ( StrConcat_1623_StrConcat ) ( ( ( StrConcat_1624_StrConcat ) ( ( ( StrConcat_1625_StrConcat ) ( ( ( StrConcat_1626_StrConcat ) ( ( ( StrConcat_1592_StrConcat ) ( ( ( StrConcat_1593_StrConcat ) ( ( (  from_dash_string185 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2623 ) .f_r ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2623 ) .f_g ) ) ) ,  ( (  from_dash_charlike186 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2623 ) .f_b ) ) ) ,  ( (  from_dash_charlike186 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg1646 (    struct Color_628  c2649 ) {
    struct Color_628  dref2650 = (  c2649 );
    if ( dref2650.tag == Color_628_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1647 ) ( ) );
    }
    else {
        if ( dref2650.tag == Color_628_Color8_t ) {
            ( (  set_dash_bg81648 ) ( ( dref2650 .stuff .Color_628_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2650.tag == Color_628_Color16_t ) {
                ( (  set_dash_bg161649 ) ( ( dref2650 .stuff .Color_628_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2650.tag == Color_628_Color256_t ) {
                    ( (  set_dash_bg2561650 ) ( ( dref2650 .stuff .Color_628_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2650.tag == Color_628_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb1651 ) ( ( dref2650 .stuff .Color_628_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_6_Unit );
}

static  uint32_t   i32_dash_u321652 (    int32_t  x603 ) {
    return ( (uint32_t ) (  x603 ) );
}

static  enum Unit_6   emit_dash_cell1585 (    struct RenderState_1526 *  rs3381 ,    struct Cell_627 *  c3383 ,    uint32_t  x3385 ,    uint32_t  y3387 ) {
    if ( ( ( !  eq366 ( (  x3385 ) , ( ( * (  rs3381 ) ) .f_x ) ) ) || ( !  eq366 ( (  y3387 ) , ( ( * (  rs3381 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1528 ) ( (  x3385 ) ,  (  y3387 ) ) );
        (*  rs3381 ) .f_x = (  x3385 );
        (*  rs3381 ) .f_y = (  y3387 );
    }
    struct Char_47  char3388 = ( ( * (  c3383 ) ) .f_c );
    struct Color_628  bg3389 = ( ( * (  c3383 ) ) .f_bg );
    if ( (  eq281 ( ( ( * (  c3383 ) ) .f_char_dash_width ) , (  op_dash_neg600 ( (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) {
        char3388 = ( (  from_dash_charlike186 ) ( ( " " ) ,  ( 1 ) ) );
        bg3389 = ( ( Color_628_Color8 ) ( ( Color8_629_Red8 ) ) );
    }
    if ( ( !  eq1574 ( ( ( * (  rs3381 ) ) .f_fg ) , ( ( * (  c3383 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1586 ) ( ( ( * (  c3383 ) ) .f_fg ) ) );
        (*  rs3381 ) .f_fg = ( ( * (  c3383 ) ) .f_fg );
    }
    if ( ( !  eq1574 ( ( ( * (  rs3381 ) ) .f_bg ) , (  bg3389 ) ) ) ) {
        ( (  set_dash_bg1646 ) ( (  bg3389 ) ) );
        (*  rs3381 ) .f_bg = (  bg3389 );
    }
    ( (  print_dash_str169 ) ( (  char3388 ) ) );
    uint32_t  char_dash_width3390 = ( (  i32_dash_u321652 ) ( ( (  max921 ) ( ( ( * (  c3383 ) ) .f_char_dash_width ) ,  (  from_dash_integral38 ( 1 ) ) ) ) ) );
    (*  rs3381 ) .f_x = (  op_dash_add747 ( ( ( * (  rs3381 ) ) .f_x ) , (  char_dash_width3390 ) ) );
    return ( Unit_6_Unit );
}

static  uint32_t   render_dash_screen1525 (    struct Screen_625 *  screen3393 ) {
    int32_t  w3394 = ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3393 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3395 = ( (  u32_dash_i321289 ) ( ( ( * ( ( * (  screen3393 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1526  temp1527 = ( (struct RenderState_1526) { .f_x = (  from_dash_integral181 ( 0 ) ) , .f_y = (  from_dash_integral181 ( 0 ) ) , .f_fg = ( (struct Color_628) { .tag = Color_628_ColorDefault_t } ) , .f_bg = ( (struct Color_628) { .tag = Color_628_ColorDefault_t } ) , .f_changes = (  from_dash_integral181 ( 0 ) ) } );
    struct RenderState_1526 *  rs3396 = ( &temp1527 );
    ( (  move_dash_cursor_dash_to1528 ) ( (  from_dash_integral181 ( 0 ) ) ,  (  from_dash_integral181 ( 0 ) ) ) );
    struct RangeIter_653  temp1568 =  into_dash_iter655 ( ( (  to658 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub775 ( (  h3395 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_238  __cond1569 =  next656 (&temp1568);
        if (  __cond1569 .tag == 0 ) {
            break;
        }
        int32_t  y3398 =  __cond1569 .stuff .Maybe_238_Just_s .field0;
        int32_t  x_dash_v3399 = (  from_dash_integral38 ( 0 ) );
        struct RangeIter_653  temp1570 =  into_dash_iter655 ( ( (  to658 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub775 ( (  w3394 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_238  __cond1571 =  next656 (&temp1570);
            if (  __cond1571 .tag == 0 ) {
                break;
            }
            int32_t  x_dash_i3401 =  __cond1571 .stuff .Maybe_238_Just_s .field0;
            size_t  i3402 = ( (  i32_dash_size228 ) ( (  op_dash_add240 ( (  op_dash_mul1294 ( (  y3398 ) , (  w3394 ) ) ) , (  x_dash_i3401 ) ) ) ) );
            struct Cell_627 *  cur3403 = ( (  get_dash_ptr661 ) ( ( ( * (  screen3393 ) ) .f_current ) ,  (  i3402 ) ) );
            struct Cell_627 *  prev3404 = ( (  get_dash_ptr661 ) ( ( ( * (  screen3393 ) ) .f_previous ) ,  (  i3402 ) ) );
            int32_t  char_dash_width3405 = ( (  max921 ) ( ( ( * (  cur3403 ) ) .f_char_dash_width ) ,  (  from_dash_integral38 ( 1 ) ) ) );
            if ( ( ( !  eq1572 ( (  cur3403 ) , (  prev3404 ) ) ) || ( ( * (  screen3393 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs3396 ) .f_changes = (  op_dash_add747 ( ( ( * (  rs3396 ) ) .f_changes ) , (  from_dash_integral181 ( 1 ) ) ) );
                ( (  emit_dash_cell1585 ) ( (  rs3396 ) ,  (  cur3403 ) ,  ( (  i32_dash_u321652 ) ( (  x_dash_v3399 ) ) ) ,  ( (  i32_dash_u321652 ) ( (  y3398 ) ) ) ) );
                (*  prev3404 ) = ( * (  cur3403 ) );
            }
            x_dash_v3399 = (  op_dash_add240 ( (  x_dash_v3399 ) , (  char_dash_width3405 ) ) );
        }
    }
    (*  screen3393 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors574 ) ( ) );
    ( (  flush_dash_stdout577 ) ( ) );
    return ( ( * (  rs3396 ) ) .f_changes );
}

static  void *   cast_dash_ptr1659 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1660 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed1657 (  ) {
    struct timespec *  temp1658;
    struct timespec *  x570 = (  temp1658 );
    ( ( memset ) ( ( (  cast_dash_ptr1659 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of1660 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct timespec *   null_dash_ptr1656 (  ) {
    return ( (  zeroed1657 ) ( ) );
}

static  enum Unit_6   sync1653 (    struct Tui_58 *  tui3264 ) {
    if ( (  eq366 ( ( ( * (  tui3264 ) ) .f_target_dash_fps ) , (  from_dash_integral181 ( 0 ) ) ) ) ) {
        return ( Unit_6_Unit );
    }
    int64_t  frame_dash_ns3265 = (  op_dash_div853 ( (  from_dash_integral268 ( 1000000000 ) ) , ( (  size_dash_i64227 ) ( ( (  u32_dash_size639 ) ( ( ( * (  tui3264 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1654 = ( (  undefined613 ) ( ) );
    struct timespec *  now3266 = ( &temp1654 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic615 ) ( ) ) ,  (  now3266 ) ) );
    int64_t  elapsed_dash_ns3267 = (  op_dash_add823 ( (  op_dash_mul196 ( (  op_dash_sub855 ( ( ( * (  now3266 ) ) .tv_sec ) , ( ( ( * (  tui3264 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral268 ( 1000000000 ) ) ) ) , (  op_dash_sub855 ( ( ( * (  now3266 ) ) .tv_nsec ) , ( ( ( * (  tui3264 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3268 = (  op_dash_sub855 ( (  frame_dash_ns3265 ) , (  elapsed_dash_ns3267 ) ) );
    if ( (  cmp873 ( (  sleep_dash_ns3268 ) , (  from_dash_integral268 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1655 = ( (struct timespec) { .tv_sec = (  from_dash_integral268 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3268 ) } );
        struct timespec *  ts3269 = ( &temp1655 );
        ( ( nanosleep ) ( (  ts3269 ) ,  ( (  null_dash_ptr1656 ) ( ) ) ) );
    }
    struct timespec  temp1661 = ( (  undefined613 ) ( ) );
    struct timespec *  last_dash_sync3270 = ( &temp1661 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic615 ) ( ) ) ,  (  last_dash_sync3270 ) ) );
    (*  tui3264 ) .f_last_dash_sync = ( * (  last_dash_sync3270 ) );
    (*  tui3264 ) .f_fps_dash_count = (  op_dash_add747 ( ( ( * (  tui3264 ) ) .f_fps_dash_count ) , (  from_dash_integral181 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3271 = (  op_dash_add823 ( (  op_dash_mul196 ( (  op_dash_sub855 ( ( ( ( * (  tui3264 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3264 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral268 ( 1000 ) ) ) ) , (  op_dash_div853 ( (  op_dash_sub855 ( ( ( ( * (  tui3264 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3264 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral268 ( 1000000 ) ) ) ) ) );
    if ( (  cmp873 ( (  fps_dash_elapsed_dash_ms3271 ) , (  from_dash_integral268 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3264 ) .f_actual_dash_fps = ( ( * (  tui3264 ) ) .f_fps_dash_count );
        (*  tui3264 ) .f_fps_dash_count = (  from_dash_integral181 ( 0 ) );
        (*  tui3264 ) .f_fps_dash_ts = ( ( * (  tui3264 ) ) .f_last_dash_sync );
    }
    return ( Unit_6_Unit );
}

static  void *   cast_dash_ptr1664 (    struct Cell_627 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free1663 (    enum CAllocator_8  dref1934 ,    struct Slice_626  slice1936 ) {
    if (!(  dref1934 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1664 ) ( ( (  slice1936 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   free_dash_screen1662 (    struct Screen_625 *  screen3369 ) {
    enum CAllocator_8  al3370 = ( ( * (  screen3369 ) ) .f_al );
    ( (  free1663 ) ( (  al3370 ) ,  ( ( * (  screen3369 ) ) .f_current ) ) );
    ( (  free1663 ) ( (  al3370 ) ,  ( ( * (  screen3369 ) ) .f_previous ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   disable_dash_mouse1666 (  ) {
    ( (  print_dash_str161 ) ( ( (  from_dash_string185 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   show_dash_cursor1667 (  ) {
    ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   reset_dash_cursor_dash_position1668 (  ) {
    ( (  print565 ) ( ( (  from_dash_string185 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   disable_dash_raw_dash_mode1669 (    struct Termios_60 *  og_dash_termios3244 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno503 ) ( ) ) ,  ( (  tcsa_dash_flush563 ) ( ) ) ,  ( (  cast_dash_ptr504 ) ( (  og_dash_termios3244 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   deinit1665 (    struct Tui_58 *  tui3274 ) {
    ( (  disable_dash_mouse1666 ) ( ) );
    ( (  show_dash_cursor1667 ) ( ) );
    ( (  reset_dash_colors574 ) ( ) );
    ( (  clear_dash_screen575 ) ( ) );
    ( (  reset_dash_cursor_dash_position1668 ) ( ) );
    ( (  disable_dash_raw_dash_mode1669 ) ( ( & ( ( * (  tui3274 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout577 ) ( ) );
    return ( Unit_6_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2011 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2012 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2013 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .starting_dash_size2011 =  starting_dash_size2011 ,
        .growth_dash_factor2012 =  growth_dash_factor2012 ,
    };
    struct env2 envinst2 = {
        .starting_dash_size2011 =  starting_dash_size2011 ,
        .growth_dash_factor2012 =  growth_dash_factor2012 ,
    };
    struct env3 envinst3 = {
        .starting_dash_size2011 =  starting_dash_size2011 ,
        .growth_dash_factor2012 =  growth_dash_factor2012 ,
    };
    struct env4 envinst4 = {
        .envinst1 = envinst1 ,
    };
    struct env12 envinst12 = {
        .envinst2 = envinst2 ,
    };
    struct env14 envinst14 = {
        .envinst3 = envinst3 ,
    };
    struct env23 envinst23 = {
        .envinst4 = envinst4 ,
        .envinst1 = envinst1 ,
    };
    struct env26 envinst26 = {
        .shrink_dash_factor2013 =  shrink_dash_factor2013 ,
    };
    struct env27 envinst27 = {
        .shrink_dash_factor2013 =  shrink_dash_factor2013 ,
    };
    struct env28 envinst28 = {
        .envinst4 = envinst4 ,
    };
    struct env30 envinst30 = {
        .envinst12 = envinst12 ,
    };
    struct env32 envinst32 = {
        .envinst28 = envinst28 ,
    };
    struct env35 envinst35 = {
        .envinst30 = envinst30 ,
    };
    ( ( setlocale ) ( ( (  lc_dash_ctype37 ) ( ) ) ,  ( (  from_dash_string39 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct env40 envinst40 = {
        .envinst30 = envinst30 ,
    };
    struct env42 envinst42 = {
        .envinst40 = envinst40 ,
    };
    struct env45 envinst45 = {
        .envinst42 = envinst42 ,
    };
    struct env48 envinst48 = {
        .envinst45 = envinst45 ,
        .envinst42 = envinst42 ,
    };
    bool  temp53 = ( false );
    bool *  should_dash_resize3254 = ( &temp53 );
    struct env54 envinst54 = {
        .should_dash_resize3254 =  should_dash_resize3254 ,
    };
    struct env55 envinst55 = {
        .should_dash_resize3254 =  should_dash_resize3254 ,
    };
    struct env56 envinst56 = {
        .envinst55 = envinst55 ,
    };
    struct env62 envinst62 = {
        .envinst55 = envinst55 ,
    };
    struct env64 envinst64 = {
        .envinst32 = envinst32 ,
    };
    struct env66 envinst66 = {
        .envinst23 = envinst23 ,
        .envinst30 = envinst30 ,
        .envinst35 = envinst35 ,
    };
    struct env70 envinst70 = {
        .envinst30 = envinst30 ,
        .envinst66 = envinst66 ,
        .envinst26 = envinst26 ,
        .envinst27 = envinst27 ,
        .envinst4 = envinst4 ,
    };
    struct env78 envinst78 = {
        .envinst70 = envinst70 ,
    };
    struct env80 envinst80 = {
        .envinst70 = envinst70 ,
    };
    struct env82 envinst82 = {
        .envinst78 = envinst78 ,
    };
    struct env84 envinst84 = {
        .envinst80 = envinst80 ,
    };
    struct env86 envinst86 = {
        .envinst30 = envinst30 ,
    };
    struct env88 envinst88 = {
        .envinst84 = envinst84 ,
        .envinst14 = envinst14 ,
        .envinst86 = envinst86 ,
    };
    struct env93 envinst93 = {
        .envinst88 = envinst88 ,
    };
    struct env95 envinst95 = {
        .envinst88 = envinst88 ,
    };
    struct env97 envinst97 = {
        .envinst82 = envinst82 ,
    };
    struct env99 envinst99 = {
        .envinst84 = envinst84 ,
    };
    struct env101 envinst101 = {
        .envinst88 = envinst88 ,
    };
    struct env103 envinst103 = {
        .envinst86 = envinst86 ,
    };
    struct env105 envinst105 = {
        .envinst48 = envinst48 ,
    };
    struct env107 envinst107 = {
        .envinst105 = envinst105 ,
        .envinst103 = envinst103 ,
        .envinst101 = envinst101 ,
        .envinst97 = envinst97 ,
        .envinst99 = envinst99 ,
    };
    struct env119 envinst119 = {
        .envinst107 = envinst107 ,
        .envinst93 = envinst93 ,
        .envinst42 = envinst42 ,
        .envinst95 = envinst95 ,
    };
    enum CAllocator_8  al3957 = ( (  idc125 ) ( ) );
    struct envunion128  temp127 = ( (struct envunion128){ .fun = (  struct TextBuf_73  (*) (  struct env64*  ,    enum CAllocator_8  ) )mk129 , .env =  envinst64 } );
    struct TextBuf_73  temp126 = ( temp127.fun ( &temp127.env ,  (  al3957 ) ) );
    struct TextBuf_73 *  tb3958 = ( &temp126 );
    struct Slice_264  args3961 = ( (  get265 ) ( ) );
    if ( (  cmp150 ( ( (  args3961 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        const char*  fname3962 = (  elem_dash_get270 ( (  args3961 ) , (  from_dash_integral0 ( 0 ) ) ) );
        struct envunion278  temp277 = ( (struct envunion278){ .fun = (  enum Unit_6  (*) (  struct env70*  ,    struct TextBuf_73 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ) )change_dash_no_dash_action279 , .env =  envinst70 } );
        ( temp277.fun ( &temp277.env ,  (  tb3958 ) ,  ( (  mk467 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) ,  ( (  mk467 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) ,  ( (  read_dash_contents468 ) ( (  fname3962 ) ,  (  al3957 ) ) ) ) );
    }
    struct Editor_109  temp493 = ( (struct Editor_109) { .f_running = ( true ) , .f_al = (  al3957 ) , .f_pane = ( (  mk494 ) ( (  al3957 ) ,  (  tb3958 ) ) ) , .f_clipboard = ( (struct Maybe_112) { .tag = Maybe_112_None_t } ) , .f_mode = ( (struct EditorMode_113) { .tag = EditorMode_113_Normal_t } ) , .f_msg = ( (struct Maybe_112) { .tag = Maybe_112_None_t } ) } );
    struct Editor_109 *  ed3963 = ( &temp493 );
    struct envunion497  temp496 = ( (struct envunion497){ .fun = (  struct Tui_58  (*) (  struct env54*  ) )mk498 , .env =  envinst54 } );
    struct Tui_58  temp495 = ( temp496.fun ( &temp496.env ) );
    struct Tui_58 *  tui3964 = ( &temp495 );
    struct Screen_625  temp632 = ( (  mk_dash_screen633 ) ( (  tui3964 ) ,  (  al3957 ) ) );
    struct Screen_625 *  screen3965 = ( &temp632 );
    while ( ( ( * (  ed3963 ) ) .f_running ) ) {
        struct env683 envinst683 = {
            .tui3964 =  tui3964 ,
            .envinst56 = envinst56 ,
        };
        struct FunIter_682  temp681 =  into_dash_iter690 ( ( (  from_dash_function691 ) ( ( (struct envunion689){ .fun = (  struct Maybe_685  (*) (  struct env683*  ) )lam692 , .env =  envinst683 } ) ) ) );
        while (true) {
            struct Maybe_685  __cond893 =  next894 (&temp681);
            if (  __cond893 .tag == 0 ) {
                break;
            }
            struct InputEvent_686  ev3967 =  __cond893 .stuff .Maybe_685_Just_s .field0;
            struct InputEvent_686  dref3968 = (  ev3967 );
            if ( dref3968.tag == InputEvent_686_Key_t ) {
                ( (  reset_dash_msg896 ) ( (  ed3963 ) ) );
                struct envunion904  temp903 = ( (struct envunion904){ .fun = (  enum Unit_6  (*) (  struct env119*  ,    struct Editor_109 *  ,    struct Key_121  ) )handle_dash_key905 , .env =  envinst119 } );
                ( temp903.fun ( &temp903.env ,  (  ed3963 ) ,  ( dref3968 .stuff .InputEvent_686_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1266  temp1265 = ( (struct envunion1266){ .fun = (  bool  (*) (  struct env62*  ,    struct Screen_625 *  ) )resize_dash_screen_dash_if_dash_needed1267 , .env =  envinst62 } );
        ( temp1265.fun ( &temp1265.env ,  (  screen3965 ) ) );
        if ( ( (  should_dash_redraw1269 ) ( (  tui3964 ) ) ) ) {
            ( (  clear_dash_screen1270 ) ( (  screen3965 ) ) );
            ( (  render_dash_editor1279 ) ( (  screen3965 ) ,  (  ed3963 ) ) );
            ( (  render_dash_screen1525 ) ( (  screen3965 ) ) );
        }
        ( (  sync1653 ) ( (  tui3964 ) ) );
    }
    ( (  free_dash_screen1662 ) ( (  screen3965 ) ) );
    ( (  deinit1665 ) ( (  tui3964 ) ) );
}
