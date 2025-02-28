#include "Onoda/change/change.h"
#include "libgcl/hash.h"
#include "libgcl/libgcl.h"

GCL_ActorTableEntry OverlayCharas[] = {
    { 0xF722, NewChange_800C455C },
    { 0, 0 }
};

int dword_800C3218 = 1;
int dword_800C321C = 0x00be00a0;
int dword_800C3220 = 26425;
int dword_800C3224 = 1;
int dword_800C3228 = 0xD200A0;
int dword_800C322C = 26425;
int dword_800C3230 = 1;
int dword_800C3234 = 0xBE00A0;
int dword_800C3238 = 26425;
int dword_800C323C = 1;
int dword_800C3240 = 0xBE00A0;
int dword_800C3244 = 26425;
int dword_800C3248 = 1;
int dword_800C324C = 0xBE00A0;
int dword_800C3250 = 26425;
int dword_800C3254 = 1;
int dword_800C3258 = 0xBE00A0;
int dword_800C325C = 26425;
char byte_800C3260 = -1;
char byte_800C3261 = 0;
char byte_800C3262 = 1;
char byte_800C3263 = 0;
int dword_800C3264 = -0xFFFF00;
int dword_800C3268 = 0x1C7350;
int dword_800C326C = 0x3100000;
int dword_800C3270 = 50397185;
int dword_800C3274 = 83951623;
int dword_800C3278 = 50397954;
int dword_800C327C = 83951638;
int dword_800C3280 = 50397454;
int dword_800C3284 = 50594073;
int dword_800C3288 = 50397195;
int dword_800C328C = 50397187;
int dword_800C3290 = 50463001;
int dword_800C3294 = 83951625;
int  dword_800C3298 = 0x1F801800;
int  dword_800C329C = 0x1F801801;
int  dword_800C32A0 = 0x1F801802;
int  dword_800C32A4 = 0x1F801803;
char byte_800C32A8 = 0;
char byte_800C32A9 = 0;
char byte_800C32AA = 0;
int dword_800C32AB = 0;
char byte_800C32AF = 0;
char byte_800C32B0 = 0;
char byte_800C32B1 = 0;
int dword_800C32B2 = 0;
short word_800C32B6 = 0;
char byte_800C32BA = 6;
int __attribute__ ((aligned (1))) dword_800C32BB = 302648325;
int __attribute__ ((aligned (1))) dword_800C32BF = 504633359;
int __attribute__ ((aligned (1))) dword_800C32C3 = 673063705;
int __attribute__ ((aligned (1))) dword_800C32C7 = 824585506;
int __attribute__ ((aligned (1))) dword_800C32CB = 942421289;
int __attribute__ ((aligned (1))) dword_800C32CF = 1026636591;
char byte_800C32D3 = '3';
short word_800C32D4 = 13374;
char byte_800C32D6 = 63;
char byte_800C32D7 = '5';
char byte_800C32D8 = 0x40;
int __attribute__ ((aligned (1))) dword_800C32D9 = 54;
int dword_800C32DD = 0;
int dword_800C32E1 = 0;

short met_logo_lines_800C32E8[] = {
    108, // table length
    0x0023, 0x0058, 0x0019, 0x0087, 0x0019, 0x0087, 0x0021,
    0x0087, 0x0023, 0x0058, 0x002e, 0x0058, 0x002e, 0x0058,
    0x002e, 0x006b, 0x002e, 0x006b, 0x0038, 0x0058, 0x0038,
    0x0058, 0x0043, 0x0058, 0x0043, 0x0058, 0x003b, 0x0079,
    0x003b, 0x0079, 0x0033, 0x0079, 0x0033, 0x0079, 0x0037,
    0x0068, 0x0037, 0x0068, 0x002f, 0x0079, 0x002f, 0x0079,
    0x0028, 0x0079, 0x0028, 0x0079, 0x0028, 0x0068, 0x0028,
    0x0068, 0x0021, 0x0087, 0x0047, 0x0058, 0x0045, 0x0060,
    0x0044, 0x0064, 0x003f, 0x0079, 0x0055, 0x0079, 0x0057,
    0x0071, 0x0057, 0x0071, 0x004a, 0x0071, 0x004a, 0x0071,
    0x004b, 0x006c, 0x004b, 0x006c, 0x0058, 0x006c, 0x0058,
    0x006c, 0x005a, 0x0064, 0x005a, 0x0064, 0x0044, 0x0064,
    0x0045, 0x0060, 0x005b, 0x0060, 0x005b, 0x0060, 0x005d,
    0x0058, 0x005d, 0x0058, 0x0047, 0x0058, 0x003f, 0x0079,
    0x0055, 0x0079, 0x0060, 0x0058, 0x007a, 0x0058, 0x007a,
    0x0058, 0x0078, 0x0060, 0x005e, 0x0060, 0x0067, 0x0060,
    0x0078, 0x0060, 0x0070, 0x0060, 0x0067, 0x0060, 0x0062,
    0x0079, 0x0070, 0x0060, 0x006b, 0x0079, 0x006b, 0x0079,
    0x0062, 0x0079, 0x0060, 0x0058, 0x005e, 0x0060, 0x007b,
    0x0064, 0x006f, 0x0079, 0x006f, 0x0079, 0x0079, 0x0079,
    0x0079, 0x0079, 0x0081, 0x006b, 0x0081, 0x006b, 0x0085,
    0x006b, 0x0085, 0x006b, 0x0086, 0x0079, 0x0086, 0x0079,
    0x008f, 0x0079, 0x008f, 0x0079, 0x008d, 0x0064, 0x007b,
    0x0064, 0x008d, 0x0064, 0x007d, 0x0060, 0x008d, 0x0060,
    0x008d, 0x0060, 0x008c, 0x0058, 0x007d, 0x0060, 0x0082,
    0x0058, 0x0082, 0x0058, 0x008c, 0x0058, 0x0091, 0x0079,
    0x00a7, 0x0079, 0x0091, 0x0079, 0x0098, 0x0058, 0x0098,
    0x0058, 0x00a1, 0x0058, 0x00a1, 0x0058, 0x009c, 0x0071,
    0x009c, 0x0071, 0x00a9, 0x0071, 0x00a9, 0x0071, 0x00a7,
    0x0079, 0x00ba, 0x0058, 0x00ad, 0x0068, 0x00ad, 0x0068,
    0x00b3, 0x0079, 0x00b3, 0x0079, 0x00c8, 0x0079, 0x00c8,
    0x0079, 0x00cd, 0x0064, 0x00cd, 0x0064, 0x00bd, 0x0064,
    0x00bd, 0x0064, 0x00bb, 0x006c, 0x00bb, 0x006c, 0x00c2,
    0x006c, 0x00c2, 0x006c, 0x00c1, 0x0071, 0x00c1, 0x0071,
    0x00ba, 0x0071, 0x00ba, 0x0071, 0x00b7, 0x0068, 0x00b7,
    0x0068, 0x00bd, 0x0060, 0x00bd, 0x0060, 0x00ce, 0x0060,
    0x00ce, 0x0060, 0x00d0, 0x0058, 0x00d0, 0x0058, 0x00ba,
    0x0058, 0x00d4, 0x0058, 0x00d2, 0x0060, 0x00d1, 0x0064,
    0x00cc, 0x0079, 0x00cc, 0x0079, 0x00e2, 0x0079, 0x00d1,
    0x0064, 0x00e7, 0x0064, 0x00d2, 0x0060, 0x00e8, 0x0060,
    0x00d4, 0x0058, 0x00ea, 0x0058, 0x00ea, 0x0058, 0x00e8,
    0x0060, 0x00e7, 0x0064, 0x00e5, 0x006c, 0x00e5, 0x006c,
    0x00d8, 0x006c, 0x00e2, 0x0079, 0x00e4, 0x0071, 0x00e4,
    0x0071, 0x00d7, 0x0071, 0x00d8, 0x006c, 0x00d7, 0x0071,
    0x00e4, 0x0079, 0x00ee, 0x0079, 0x00ee, 0x0079, 0x00f6,
    0x006c, 0x00f6, 0x006c, 0x00fa, 0x006c, 0x00fa, 0x006c,
    0x00fb, 0x0079, 0x00fb, 0x0079, 0x0104, 0x0079, 0x0104,
    0x0079, 0x0102, 0x0064, 0x0102, 0x0064, 0x00f0, 0x0064,
    0x00f2, 0x0060, 0x0102, 0x0060, 0x0102, 0x0060, 0x0101,
    0x0058, 0x0101, 0x0058, 0x00f7, 0x0058, 0x00f2, 0x0060,
    0x00f7, 0x0058, 0x00f0, 0x0064, 0x00e4, 0x0079, 0x0106,
    0x0079, 0x0110, 0x0079, 0x010e, 0x0058, 0x0124, 0x0058,
    0x0124, 0x0058, 0x0127, 0x0061, 0x0127, 0x0061, 0x0120,
    0x006a, 0x011e, 0x006a, 0x0127, 0x0087, 0x0127, 0x0087,
    0x011d, 0x0087, 0x011d, 0x0087, 0x0115, 0x006b, 0x0115,
    0x006b, 0x0113, 0x006b, 0x0113, 0x006b, 0x0110, 0x0079,
    0x010b, 0x0064, 0x011a, 0x0064, 0x011a, 0x0064, 0x011e,
    0x0060, 0x011e, 0x0060, 0x010c, 0x0060, 0x010e, 0x0058,
    0x010c, 0x0060, 0x010b, 0x0064, 0x0106, 0x0079, 0x011e,
    0x006a, 0x0120, 0x006a, 0x0026, 0x007d, 0x0024, 0x0087,
    0x0117, 0x007d, 0x011a, 0x0087, 0x0117, 0x007d, 0x0026,
    0x007d, 0x0024, 0x0087, 0x011a, 0x0087
};
short word_800C364A = 0x200;
