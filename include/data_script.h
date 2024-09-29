#include "ground_script.h"
#define LPARRAY(x) (sizeof(x)/sizeof(*(x))), x

#define CPOS_HALFTILE 0x2
#define CPOS_CURRENT  0x4

#define JUMP_LOCAL(x)       { 0xE7, 0, x, 0, 0, NULL }
#define CALL_SCRIPT(x)      { 0xE8, 0, x, 0, 0, NULL }
#define JUMP_SCRIPT(x)      { 0xE9, 0, x, 0, 0, NULL }
#define RET_DIRECT          { 0xEE, 0, 0, 0, 0, NULL }
#define RET                 { 0xEF, 0, 0, 0, 0, NULL }
#define HALT                { 0xF0, 0, 0, 0, 0, NULL }
#define END_DELETE          { 0xF1, 0, 0, 0, 0, NULL }
#define LABEL(x)            { 0xF4, 0, x, 0, 0, NULL }
#ifdef NONMATCHING
#define DEBUGINFO           { 0xF6, 0, __LINE__, 0, 0, __FILE__ }
#else
#define DEBUGINFO           { 0xF6, 0, __LINE__, 0, 0, FAKE_FILENAME }
#endif

// most of these types should go into actual headers
