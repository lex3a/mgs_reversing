#include "linker.h"

int s08c_dword_800C3428 = 0x0008512D;
int s08c_dword_800C342C = 0x001E0004;
int s08c_dword_800C3430 = 0x03E80001;
int s08c_dword_800C3434 = 0x0FA00003;
int s08c_dword_800C3438 = 0x00FF0FA0;
int s08c_dword_800C343C = 0x00000000;
int s08c_dword_800C3440 = 0x800D1708;
int s08c_dword_800C3444 = 0x0008512D;
int s08c_dword_800C3448 = 0x001E0004;
int s08c_dword_800C344C = 0x03E80001;
int s08c_dword_800C3450 = 0x0BB80003;
int s08c_dword_800C3454 = 0x00200BB8;
int s08c_dword_800C3458 = 0x00000000;
int s08c_dword_800C345C = 0x800D1724;
int s08c_dword_800C3460 = 0x0008512D;
int s08c_dword_800C3464 = 0x001E0004;
int s08c_dword_800C3468 = 0x03E80001;
int s08c_dword_800C346C = 0x05DC0002;
int s08c_dword_800C3470 = 0x008005DC;
int s08c_dword_800C3474 = 0x00000000;
int s08c_dword_800C3478 = 0x800D1740;
int s08c_dword_800C347C = 0x0008512D;
int s08c_dword_800C3480 = 0x001E0004;
int s08c_dword_800C3484 = 0x03E80001;
int s08c_dword_800C3488 = 0x01F40002;
int s08c_dword_800C348C = 0x000801F4;
int s08c_dword_800C3490 = 0x00000000;
int s08c_dword_800C3494 = 0x800D1780;
int s08c_dword_800C3498 = 0x0008512D;
int s08c_dword_800C349C = 0x001E0004;
int s08c_dword_800C34A0 = 0x03E80001;
int s08c_dword_800C34A4 = 0x01F40002;
int s08c_dword_800C34A8 = 0x001001F4;
int s08c_dword_800C34AC = 0x00000000;
int s08c_dword_800C34B0 = 0x800D1780;
int s08c_dword_800C34B4 = 0x0008512D;
int s08c_dword_800C34B8 = 0x001E0004;
int s08c_dword_800C34BC = 0x0BB80001;
int s08c_dword_800C34C0 = 0x03E80002;
int s08c_dword_800C34C4 = 0x002003E8;
int s08c_dword_800C34C8 = 0x00000000;
int s08c_dword_800C34CC = 0x800D1834;
int s08c_dword_800C34D0 = 0x0008512D;
int s08c_dword_800C34D4 = 0x001E0004;
int s08c_dword_800C34D8 = 0x0BB80001;
int s08c_dword_800C34DC = 0x03E80002;
int s08c_dword_800C34E0 = 0x002003E8;
int s08c_dword_800C34E4 = 0x00000000;
int s08c_dword_800C34E8 = 0x800D1834;
int s08c_dword_800C34EC = 0x0008512D;
int s08c_dword_800C34F0 = 0x001E0004;
int s08c_dword_800C34F4 = 0x03E80001;
int s08c_dword_800C34F8 = 0x01F40003;
int s08c_dword_800C34FC = 0x00FF01F4;
int s08c_dword_800C3500 = 0x00000000;
int s08c_dword_800C3504 = 0x800D1874;
int s08c_dword_800C3508 = 0x0008512D;
int s08c_dword_800C350C = 0x001E0004;
int s08c_dword_800C3510 = 0x03E80001;
int s08c_dword_800C3514 = 0x01F40002;
int s08c_dword_800C3518 = 0x001001F4;
int s08c_dword_800C351C = 0x00000000;
int s08c_dword_800C3520 = 0x800D192C;
int s08c_dword_800C3524 = 0x0008512D;
int s08c_dword_800C3528 = 0x001E0004;
int s08c_dword_800C352C = 0x03E80001;
int s08c_dword_800C3530 = 0x01F40003;
int s08c_dword_800C3534 = 0x000001F4;
int s08c_dword_800C3538 = 0x00000000;
int s08c_dword_800C353C = 0x800D19E4;
int s08c_dword_800C3540 = 0x0008512D;
int s08c_dword_800C3544 = 0x001E0004;
int s08c_dword_800C3548 = 0x03E80001;
int s08c_dword_800C354C = 0x01F40003;
int s08c_dword_800C3550 = 0x00FF01F4;
int s08c_dword_800C3554 = 0x00000000;
int s08c_dword_800C3558 = 0x800D1AAC;
int s08c_dword_800C355C = 0x0008512D;
int s08c_dword_800C3560 = 0x001E0004;
int s08c_dword_800C3564 = 0x03E80001;
int s08c_dword_800C3568 = 0x01F40002;
int s08c_dword_800C356C = 0x001001F4;
int s08c_dword_800C3570 = 0x00000000;
int s08c_dword_800C3574 = 0x800D1B40;
int s08c_dword_800C3578 = 0x0008512D;
int s08c_dword_800C357C = 0x001E0004;
int s08c_dword_800C3580 = 0x03E80001;
int s08c_dword_800C3584 = 0x00010003;
int s08c_dword_800C3588 = 0x00FF0001;
int s08c_dword_800C358C = 0x00000000;
int s08c_dword_800C3590 = 0x800D1BD4;

const char s08c_aBlurpurec_800D16D8[] = "blurpure.c";
const char s08c_dword_800D16E4[] = {'b', 'l', 'u', 'r'};
const char s08c_dword_800D16E8[] = {'.', 'c', 0x0, '&'};
const char s08c_dword_800D16EC[] = {0xa4, 0xcf, 0xa4, 0xb8};
const char s08c_dword_800D16F0[] = {0xa4, 0xe1, 0x0, 0x0};
const char s08c_dword_800D16F4[] = {0xa4, 0xe4, 0xa4, 0xe1};
const char s08c_dword_800D16F8[] = {0x0, 0x0, 0x0, 0x0};
const char s08c_dword_800D16FC[] = {'w', 'a', 'l', 'l'};
const char s08c_dword_800D1700[] = {'_', 's', 'p', 'a'};
const char s08c_dword_800D1704[] = {'.', 'c', 0x0, 0xc};
const char s08c_dword_800D1708[] = {0x0, 0x15, 0x1, 0x0};
const char s08c_dword_800D170C[] = {0x5, 0x1, 0xfe, 0xc};
const char s08c_dword_800D1710[] = {0x0, '\n', '\n', 0x0};
const char s08c_dword_800D1714[] = {0xc8, 0x0, 0xc8, 0x1};
const char s08c_dword_800D1718[] = {0xff, 0x8, 0xe7, 0xe7};
const char s08c_dword_800D171C[] = {0xe7, 0x2, 0x0, 0x1};
const char s08c_dword_800D1720[] = {0xd, 0xf, 0x0, 0x0};
const char s08c_dword_800D1724[] = {0x0, 0x15, 0x1, 0x0};
const char s08c_dword_800D1728[] = {0x5, 0x1, 0xfe, 0xc};
const char s08c_dword_800D172C[] = {0x0, 0x7, '\n', 0x0};
const char s08c_dword_800D1730[] = {0xc8, 0x0, 0xc8, 0x1};
const char s08c_dword_800D1734[] = {0xff, 0x8, 0xfc, 0xfc};
const char s08c_dword_800D1738[] = {0xfc, 0x2, 0x0, 0x1};
const char s08c_dword_800D173C[] = {0xd, 0xf, 0x0, 0x0};
const char s08c_dword_800D1740[] = {0x0, ':', 0x1, 0x0};
const char s08c_dword_800D1744[] = {0x5, 0x1, 0xfe, 0xc};
const char s08c_dword_800D1748[] = {0x0, 0x7, 0x4, 0x0};
const char s08c_dword_800D174C[] = {0x0, 0x0, 0x96, 0x0};
const char s08c_dword_800D1750[] = {0x0, '\n', 0x1, ','};
const char s08c_dword_800D1754[] = {0x1, ',', 0x2, 0x0};
const char s08c_dword_800D1758[] = {0x1, 0x4, 0x0, 0x0};
const char s08c_dword_800D175C[] = {0x0, 0x96, 0x0, 0x0};
const char s08c_dword_800D1760[] = {'\n', 0x1, ',', 0x1};
const char s08c_dword_800D1764[] = {',', 0x2, 0x0, 0x1};
const char s08c_dword_800D1768[] = {0x4, 0x0, 0x0, 0x0};
const char s08c_dword_800D176C[] = {0x96, 0x0, 0x0, '\n'};
const char s08c_dword_800D1770[] = {0x1, ',', 0x1, ','};
const char s08c_dword_800D1774[] = {0x1, 0xff, 0x8, 0xf0};
const char s08c_dword_800D1778[] = {0xf0, 0xf0, 0x2, 0x0};
const char s08c_dword_800D177C[] = {0x1, 0xd, 0xf, 0x0};
const char s08c_dword_800D1780[] = {0x0, 0xa7, 0x4, 0x0};
const char s08c_dword_800D1784[] = {0xb, 0x0, '1', 0x0};
const char s08c_dword_800D1788[] = {'\\', 0x0, 0x87, 0x1};
const char s08c_dword_800D178C[] = {0xfe, 0xc, 0x0, 0x7};
const char s08c_dword_800D1790[] = {0x2, 0x0, 0x1, '\n'};
const char s08c_dword_800D1794[] = {0x0, '2', 0x0, '2'};
const char s08c_dword_800D1798[] = {0x1, 0xff, 0x2, 0x0};
const char s08c_dword_800D179C[] = {0x1, 0xd, 0xc, 0x0};
const char s08c_dword_800D17A0[] = {0x7, 0x1, 0xff, 0x2};
const char s08c_dword_800D17A4[] = {0x0, 0x1, 0x1, 0xff};
const char s08c_dword_800D17A8[] = {0x8, 0xff, 0xff, 0xff};
const char s08c_dword_800D17AC[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D17B0[] = {0xf, '\n', 0x1, 0xf4};
const char s08c_dword_800D17B4[] = {0x1, 0xf4, 0x1, 0xfe};
const char s08c_dword_800D17B8[] = {0xc, 0x0, 0x7, 0x2};
const char s08c_dword_800D17BC[] = {0x0, 0x1, '\n', 0x0};
const char s08c_dword_800D17C0[] = {'d', 0x0, 'd', 0x1};
const char s08c_dword_800D17C4[] = {0xff, 0x2, 0x0, 0x1};
const char s08c_dword_800D17C8[] = {0xd, 0xc, 0x0, 0x7};
const char s08c_dword_800D17CC[] = {0x1, 0xff, 0x2, 0x0};
const char s08c_dword_800D17D0[] = {0x1, 0x1, 0xff, 0x8};
const char s08c_dword_800D17D4[] = {0xff, 0xff, 0xff, 0x2};
const char s08c_dword_800D17D8[] = {0x0, 0x1, 0xd, 0xf};
const char s08c_dword_800D17DC[] = {'\n', 0x3, 0xe8, 0x3};
const char s08c_dword_800D17E0[] = {0xe8, 0x1, 0xfe, 0xc};
const char s08c_dword_800D17E4[] = {0x0, 0x7, 0x2, 0x0};
const char s08c_dword_800D17E8[] = {0x1, '\n', 0x0, 0xc8};
const char s08c_dword_800D17EC[] = {0x0, 'd', 0x1, 0xff};
const char s08c_dword_800D17F0[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D17F4[] = {0xc, 0x0, 0x7, 0x1};
const char s08c_dword_800D17F8[] = {0xff, 0x2, 0x0, 0x1};
const char s08c_dword_800D17FC[] = {0x1, 0xff, 0x8, 0xff};
const char s08c_dword_800D1800[] = {0xff, 0xff, 0x2, 0x0};
const char s08c_dword_800D1804[] = {0x1, 0xd, 0xf, '\n'};
const char s08c_dword_800D1808[] = {0x7, 0xd0, 0x7, 0xd0};
const char s08c_dword_800D180C[] = {0x1, 0xfe, 0xc, 0x0};
const char s08c_dword_800D1810[] = {0x7, 0x2, 0x0, 0x1};
const char s08c_dword_800D1814[] = {'\n', 0x1, 0x90, 0x1};
const char s08c_dword_800D1818[] = {0x90, 0x1, 0xff, 0x2};
const char s08c_dword_800D181C[] = {0x0, 0x1, 0xd, 0xc};
const char s08c_dword_800D1820[] = {0x0, 0x7, 0x1, 0xff};
const char s08c_dword_800D1824[] = {0x2, 0x0, 0x1, 0x1};
const char s08c_dword_800D1828[] = {0xff, 0x8, 0xff, 0xff};
const char s08c_dword_800D182C[] = {0xff, 0x2, 0x0, 0x1};
const char s08c_dword_800D1830[] = {0xd, 0xf, 0x0, 0x0};
const char s08c_dword_800D1834[] = {0x0, ':', 0x1, 0x0};
const char s08c_dword_800D1838[] = {0x5, 0x1, 0xfe, 0xc};
const char s08c_dword_800D183C[] = {0x0, 0x7, 0x4, 0x0};
const char s08c_dword_800D1840[] = {0x0, 0x0, 0x96, 0x0};
const char s08c_dword_800D1844[] = {0x0, '\n', 0x1, ','};
const char s08c_dword_800D1848[] = {0x1, ',', 0x2, 0x0};
const char s08c_dword_800D184C[] = {0x1, 0x4, 0x0, 0x0};
const char s08c_dword_800D1850[] = {0x0, 0x96, 0x0, 0x0};
const char s08c_dword_800D1854[] = {'\n', 0x1, ',', 0x1};
const char s08c_dword_800D1858[] = {',', 0x2, 0x0, 0x1};
const char s08c_dword_800D185C[] = {0x4, 0x0, 0x0, 0x0};
const char s08c_dword_800D1860[] = {0x96, 0x0, 0x0, '\n'};
const char s08c_dword_800D1864[] = {0x1, ',', 0x1, ','};
const char s08c_dword_800D1868[] = {0x1, 0xff, 0x8, 0xfc};
const char s08c_dword_800D186C[] = {0xfc, 0xfc, 0x2, 0x0};
const char s08c_dword_800D1870[] = {0x1, 0xd, 0xf, 0x0};
const char s08c_dword_800D1874[] = {0x0, 0xab, 0x4, 0x0};
const char s08c_dword_800D1878[] = {0xb, 0x0, '2', 0x0};
const char s08c_dword_800D187C[] = {'^', 0x0, 0x8a, 0x1};
const char s08c_dword_800D1880[] = {0xfe, 0xc, 0x0, 0xf};
const char s08c_dword_800D1884[] = {'\n', 0x0, '2', 0x0};
const char s08c_dword_800D1888[] = {'2', 0x1, 0xff, 0x2};
const char s08c_dword_800D188C[] = {0x0, 0x1, 0xd, 0xc};
const char s08c_dword_800D1890[] = {0x0, 0x1e, 0x1, 0xff};
const char s08c_dword_800D1894[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D1898[] = {0xc, 0x0, 0xf, 0x1};
const char s08c_dword_800D189C[] = {0xff, 0x8, 0xf0, 0xf0};
const char s08c_dword_800D18A0[] = {0xf0, 0x2, 0x0, 0x1};
const char s08c_dword_800D18A4[] = {0xd, 0xf, '\n', 0x0};
const char s08c_dword_800D18A8[] = {0xfa, 0x0, 0xfa, 0x1};
const char s08c_dword_800D18AC[] = {0xfe, 0xc, 0x0, 0xf};
const char s08c_dword_800D18B0[] = {'\n', 0x0, 'F', 0x0};
const char s08c_dword_800D18B4[] = {'F', 0x1, 0xff, 0x2};
const char s08c_dword_800D18B8[] = {0x0, 0x1, 0xd, 0xc};
const char s08c_dword_800D18BC[] = {0x0, 0x1e, 0x1, 0xff};
const char s08c_dword_800D18C0[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D18C4[] = {0xc, 0x0, 0xf, 0x1};
const char s08c_dword_800D18C8[] = {0xff, 0x8, 0xf0, 0xf0};
const char s08c_dword_800D18CC[] = {0xf0, 0x2, 0x0, 0x1};
const char s08c_dword_800D18D0[] = {0xd, 0xf, '\n', 0x1};
const char s08c_dword_800D18D4[] = {0xf4, 0x1, 0xf4, 0x1};
const char s08c_dword_800D18D8[] = {0xfe, 0xc, 0x0, 0xf};
const char s08c_dword_800D18DC[] = {'\n', 0x0, 'Z', 0x0};
const char s08c_dword_800D18E0[] = {'Z', 0x1, 0xff, 0x2};
const char s08c_dword_800D18E4[] = {0x0, 0x1, 0xd, 0xc};
const char s08c_dword_800D18E8[] = {0x0, 0x1e, 0x1, 0xff};
const char s08c_dword_800D18EC[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D18F0[] = {0xc, 0x0, 0xf, 0x1};
const char s08c_dword_800D18F4[] = {0xff, 0x8, 0xf0, 0xf0};
const char s08c_dword_800D18F8[] = {0xf0, 0x2, 0x0, 0x1};
const char s08c_dword_800D18FC[] = {0xd, 0xf, '\n', 0x2};
const char s08c_dword_800D1900[] = {0xee, 0x2, 0xee, 0x1};
const char s08c_dword_800D1904[] = {0xfe, 0xc, 0x0, 0xf};
const char s08c_dword_800D1908[] = {'\n', 0x0, 'n', 0x0};
const char s08c_dword_800D190C[] = {'n', 0x1, 0xff, 0x2};
const char s08c_dword_800D1910[] = {0x0, 0x1, 0xd, 0xc};
const char s08c_dword_800D1914[] = {0x0, 0x1e, 0x1, 0xff};
const char s08c_dword_800D1918[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D191C[] = {0xc, 0x0, 0xf, 0x1};
const char s08c_dword_800D1920[] = {0xff, 0x8, 0xf0, 0xf0};
const char s08c_dword_800D1924[] = {0xf0, 0x2, 0x0, 0x1};
const char s08c_dword_800D1928[] = {0xd, 0xf, 0x0, 0x0};
const char s08c_dword_800D192C[] = {0x0, 0xab, 0x4, 0x0};
const char s08c_dword_800D1930[] = {0xb, 0x0, '2', 0x0};
const char s08c_dword_800D1934[] = {'^', 0x0, 0x8a, 0x1};
const char s08c_dword_800D1938[] = {0xfe, 0xc, 0x0, 0xf};
const char s08c_dword_800D193C[] = {'\n', 0x0, '2', 0x0};
const char s08c_dword_800D1940[] = {'2', 0x1, 0xff, 0x2};
const char s08c_dword_800D1944[] = {0x0, 0x1, 0xd, 0xc};
const char s08c_dword_800D1948[] = {0x0, 0x1e, 0x1, 0xff};
const char s08c_dword_800D194C[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D1950[] = {0xc, 0x0, 0xf, 0x1};
const char s08c_dword_800D1954[] = {0xff, 0x8, 0xff, 0xff};
const char s08c_dword_800D1958[] = {0xff, 0x2, 0x0, 0x1};
const char s08c_dword_800D195C[] = {0xd, 0xf, '\n', 0x0};
const char s08c_dword_800D1960[] = {0xfa, 0x0, 0xfa, 0x1};
const char s08c_dword_800D1964[] = {0xfe, 0xc, 0x0, 0xf};
const char s08c_dword_800D1968[] = {'\n', 0x0, 'F', 0x0};
const char s08c_dword_800D196C[] = {'F', 0x1, 0xff, 0x2};
const char s08c_dword_800D1970[] = {0x0, 0x1, 0xd, 0xc};
const char s08c_dword_800D1974[] = {0x0, 0x1e, 0x1, 0xff};
const char s08c_dword_800D1978[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D197C[] = {0xc, 0x0, 0xf, 0x1};
const char s08c_dword_800D1980[] = {0xff, 0x8, 0xff, 0xff};
const char s08c_dword_800D1984[] = {0xff, 0x2, 0x0, 0x1};
const char s08c_dword_800D1988[] = {0xd, 0xf, '\n', 0x1};
const char s08c_dword_800D198C[] = {0xf4, 0x1, 0xf4, 0x1};
const char s08c_dword_800D1990[] = {0xfe, 0xc, 0x0, 0xf};
const char s08c_dword_800D1994[] = {'\n', 0x0, 'Z', 0x0};
const char s08c_dword_800D1998[] = {'Z', 0x1, 0xff, 0x2};
const char s08c_dword_800D199C[] = {0x0, 0x1, 0xd, 0xc};
const char s08c_dword_800D19A0[] = {0x0, 0x1e, 0x1, 0xff};
const char s08c_dword_800D19A4[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D19A8[] = {0xc, 0x0, 0xf, 0x1};
const char s08c_dword_800D19AC[] = {0xff, 0x8, 0xff, 0xff};
const char s08c_dword_800D19B0[] = {0xff, 0x2, 0x0, 0x1};
const char s08c_dword_800D19B4[] = {0xd, 0xf, '\n', 0x2};
const char s08c_dword_800D19B8[] = {0xee, 0x2, 0xee, 0x1};
const char s08c_dword_800D19BC[] = {0xfe, 0xc, 0x0, 0xf};
const char s08c_dword_800D19C0[] = {'\n', 0x0, 'n', 0x0};
const char s08c_dword_800D19C4[] = {'n', 0x1, 0xff, 0x2};
const char s08c_dword_800D19C8[] = {0x0, 0x1, 0xd, 0xc};
const char s08c_dword_800D19CC[] = {0x0, 0x1e, 0x1, 0xff};
const char s08c_dword_800D19D0[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D19D4[] = {0xc, 0x0, 0xf, 0x1};
const char s08c_dword_800D19D8[] = {0xff, 0x8, 0xff, 0xff};
const char s08c_dword_800D19DC[] = {0xff, 0x2, 0x0, 0x1};
const char s08c_dword_800D19E0[] = {0xd, 0xf, 0x0, 0x0};
const char s08c_dword_800D19E4[] = {0x0, 0xbb, 0x4, 0x0};
const char s08c_dword_800D19E8[] = {0xb, 0x0, '6', 0x0};
const char s08c_dword_800D19EC[] = {'f', 0x0, 0x96, 0x8};
const char s08c_dword_800D19F0[] = {0xff, 0xff, 0xff, 0x1};
const char s08c_dword_800D19F4[] = {0xfe, 0xc, 0x0, 0xf};
const char s08c_dword_800D19F8[] = {'\n', 0x0, '2', 0x0};
const char s08c_dword_800D19FC[] = {'2', 0x1, 0xff, 0x2};
const char s08c_dword_800D1A00[] = {0x0, 0x1, 0xd, 0xc};
const char s08c_dword_800D1A04[] = {0x0, 0x1e, 0x1, 0xff};
const char s08c_dword_800D1A08[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D1A0C[] = {0xc, 0x0, 0xf, 0x1};
const char s08c_dword_800D1A10[] = {0xff, 0x8, 0xf0, 0xf0};
const char s08c_dword_800D1A14[] = {0xf0, 0x2, 0x0, 0x1};
const char s08c_dword_800D1A18[] = {0xd, 0xf, 0x8, 0xff};
const char s08c_dword_800D1A1C[] = {0xff, 0xff, '\n', 0x0};
const char s08c_dword_800D1A20[] = {0xfa, 0x0, 0xfa, 0x1};
const char s08c_dword_800D1A24[] = {0xfe, 0xc, 0x0, 0xf};
const char s08c_dword_800D1A28[] = {'\n', 0x0, 'F', 0x0};
const char s08c_dword_800D1A2C[] = {'F', 0x1, 0xff, 0x2};
const char s08c_dword_800D1A30[] = {0x0, 0x1, 0xd, 0xc};
const char s08c_dword_800D1A34[] = {0x0, 0x1e, 0x1, 0xff};
const char s08c_dword_800D1A38[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D1A3C[] = {0xc, 0x0, 0xf, 0x1};
const char s08c_dword_800D1A40[] = {0xff, 0x8, 0xf0, 0xf0};
const char s08c_dword_800D1A44[] = {0xf0, 0x2, 0x0, 0x1};
const char s08c_dword_800D1A48[] = {0xd, 0xf, 0x8, 0xff};
const char s08c_dword_800D1A4C[] = {0xff, 0xff, '\n', 0x1};
const char s08c_dword_800D1A50[] = {0xf4, 0x1, 0xf4, 0x1};
const char s08c_dword_800D1A54[] = {0xfe, 0xc, 0x0, 0xf};
const char s08c_dword_800D1A58[] = {'\n', 0x0, 'Z', 0x0};
const char s08c_dword_800D1A5C[] = {'Z', 0x1, 0xff, 0x2};
const char s08c_dword_800D1A60[] = {0x0, 0x1, 0xd, 0xc};
const char s08c_dword_800D1A64[] = {0x0, 0x1e, 0x1, 0xff};
const char s08c_dword_800D1A68[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D1A6C[] = {0xc, 0x0, 0xf, 0x1};
const char s08c_dword_800D1A70[] = {0xff, 0x8, 0xf0, 0xf0};
const char s08c_dword_800D1A74[] = {0xf0, 0x2, 0x0, 0x1};
const char s08c_dword_800D1A78[] = {0xd, 0xf, 0x8, 0xff};
const char s08c_dword_800D1A7C[] = {0xff, 0xff, '\n', 0x2};
const char s08c_dword_800D1A80[] = {0xee, 0x2, 0xee, 0x1};
const char s08c_dword_800D1A84[] = {0xfe, 0xc, 0x0, 0xf};
const char s08c_dword_800D1A88[] = {'\n', 0x0, 'n', 0x0};
const char s08c_dword_800D1A8C[] = {'n', 0x1, 0xff, 0x2};
const char s08c_dword_800D1A90[] = {0x0, 0x1, 0xd, 0xc};
const char s08c_dword_800D1A94[] = {0x0, 0x1e, 0x1, 0xff};
const char s08c_dword_800D1A98[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D1A9C[] = {0xc, 0x0, 0xf, 0x1};
const char s08c_dword_800D1AA0[] = {0xff, 0x8, 0xf0, 0xf0};
const char s08c_dword_800D1AA4[] = {0xf0, 0x2, 0x0, 0x1};
const char s08c_dword_800D1AA8[] = {0xd, 0xf, 0x0, 0x0};
const char s08c_dword_800D1AAC[] = {0x0, 0x87, 0x4, 0x0};
const char s08c_dword_800D1AB0[] = {0xb, 0x0, ')', 0x0};
const char s08c_dword_800D1AB4[] = {'L', 0x0, 'o', 0x1};
const char s08c_dword_800D1AB8[] = {0xfe, 0xc, 0x0, 0x7};
const char s08c_dword_800D1ABC[] = {'\n', 0x0, 'd', 0x0};
const char s08c_dword_800D1AC0[] = {'d', 0x1, 0xff, 0x2};
const char s08c_dword_800D1AC4[] = {0x0, 0x1, 0xd, 0xc};
const char s08c_dword_800D1AC8[] = {0x0, 0x3, 0x1, 0xff};
const char s08c_dword_800D1ACC[] = {0x8, 0xc0, 0xc0, 0xc0};
const char s08c_dword_800D1AD0[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D1AD4[] = {0xf, '\n', 0x0, 0xfa};
const char s08c_dword_800D1AD8[] = {0x0, 0xfa, 0x1, 0xfe};
const char s08c_dword_800D1ADC[] = {0xc, 0x0, 0x7, '\n'};
const char s08c_dword_800D1AE0[] = {0x0, 0x96, 0x0, 0x96};
const char s08c_dword_800D1AE4[] = {0x1, 0xff, 0x2, 0x0};
const char s08c_dword_800D1AE8[] = {0x1, 0xd, 0xc, 0x0};
const char s08c_dword_800D1AEC[] = {0x3, 0x1, 0xff, 0x8};
const char s08c_dword_800D1AF0[] = {0xc0, 0xc0, 0xc0, 0x2};
const char s08c_dword_800D1AF4[] = {0x0, 0x1, 0xd, 0xf};
const char s08c_dword_800D1AF8[] = {'\n', 0x1, 0xf4, 0x1};
const char s08c_dword_800D1AFC[] = {0xf4, 0x1, 0xfe, 0xc};
const char s08c_dword_800D1B00[] = {0x0, 0x7, '\n', 0x0};
const char s08c_dword_800D1B04[] = {0xc8, 0x0, 0xc8, 0x1};
const char s08c_dword_800D1B08[] = {0xff, 0x2, 0x0, 0x1};
const char s08c_dword_800D1B0C[] = {0xd, 0xc, 0x0, 0x3};
const char s08c_dword_800D1B10[] = {0x1, 0xff, 0x8, 0xc0};
const char s08c_dword_800D1B14[] = {0xc0, 0xc0, 0x2, 0x0};
const char s08c_dword_800D1B18[] = {0x1, 0xd, 0xf, '\n'};
const char s08c_dword_800D1B1C[] = {0x2, 0xee, 0x2, 0xee};
const char s08c_dword_800D1B20[] = {0x1, 0xfe, 0xc, 0x0};
const char s08c_dword_800D1B24[] = {0x7, '\n', 0x0, 0xfa};
const char s08c_dword_800D1B28[] = {0x0, 0xfa, 0x1, 0xff};
const char s08c_dword_800D1B2C[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D1B30[] = {0xc, 0x0, 0x3, 0x1};
const char s08c_dword_800D1B34[] = {0xff, 0x8, 0xc0, 0xc0};
const char s08c_dword_800D1B38[] = {0xc0, 0x2, 0x0, 0x1};
const char s08c_dword_800D1B3C[] = {0xd, 0xf, 0x0, 0x0};
const char s08c_dword_800D1B40[] = {0x0, 0x87, 0x4, 0x0};
const char s08c_dword_800D1B44[] = {0xb, 0x0, ')', 0x0};
const char s08c_dword_800D1B48[] = {'L', 0x0, 'o', 0x1};
const char s08c_dword_800D1B4C[] = {0xfe, 0xc, 0x0, 0x7};
const char s08c_dword_800D1B50[] = {'\n', 0x0, 'd', 0x0};
const char s08c_dword_800D1B54[] = {'d', 0x1, 0xff, 0x2};
const char s08c_dword_800D1B58[] = {0x0, 0x1, 0xd, 0xc};
const char s08c_dword_800D1B5C[] = {0x0, 0x3, 0x1, 0xff};
const char s08c_dword_800D1B60[] = {0x8, 0xfc, 0xfc, 0xfc};
const char s08c_dword_800D1B64[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D1B68[] = {0xf, '\n', 0x0, 0xfa};
const char s08c_dword_800D1B6C[] = {0x0, 0xfa, 0x1, 0xfe};
const char s08c_dword_800D1B70[] = {0xc, 0x0, 0x7, '\n'};
const char s08c_dword_800D1B74[] = {0x0, 0x96, 0x0, 0x96};
const char s08c_dword_800D1B78[] = {0x1, 0xff, 0x2, 0x0};
const char s08c_dword_800D1B7C[] = {0x1, 0xd, 0xc, 0x0};
const char s08c_dword_800D1B80[] = {0x3, 0x1, 0xff, 0x8};
const char s08c_dword_800D1B84[] = {0xfc, 0xfc, 0xfc, 0x2};
const char s08c_dword_800D1B88[] = {0x0, 0x1, 0xd, 0xf};
const char s08c_dword_800D1B8C[] = {'\n', 0x1, 0xf4, 0x1};
const char s08c_dword_800D1B90[] = {0xf4, 0x1, 0xfe, 0xc};
const char s08c_dword_800D1B94[] = {0x0, 0x7, '\n', 0x0};
const char s08c_dword_800D1B98[] = {0xc8, 0x0, 0xc8, 0x1};
const char s08c_dword_800D1B9C[] = {0xff, 0x2, 0x0, 0x1};
const char s08c_dword_800D1BA0[] = {0xd, 0xc, 0x0, 0x3};
const char s08c_dword_800D1BA4[] = {0x1, 0xff, 0x8, 0xfc};
const char s08c_dword_800D1BA8[] = {0xfc, 0xfc, 0x2, 0x0};
const char s08c_dword_800D1BAC[] = {0x1, 0xd, 0xf, '\n'};
const char s08c_dword_800D1BB0[] = {0x2, 0xee, 0x2, 0xee};
const char s08c_dword_800D1BB4[] = {0x1, 0xfe, 0xc, 0x0};
const char s08c_dword_800D1BB8[] = {0x7, '\n', 0x0, 0xfa};
const char s08c_dword_800D1BBC[] = {0x0, 0xfa, 0x1, 0xff};
const char s08c_dword_800D1BC0[] = {0x2, 0x0, 0x1, 0xd};
const char s08c_dword_800D1BC4[] = {0xc, 0x0, 0x3, 0x1};
const char s08c_dword_800D1BC8[] = {0xff, 0x8, 0xfc, 0xfc};
const char s08c_dword_800D1BCC[] = {0xfc, 0x2, 0x0, 0x1};
const char s08c_dword_800D1BD0[] = {0xd, 0xf, 0x0, 0x0};
const char s08c_dword_800D1BD4[] = {0x0, '*', 0x1, 0x0};
const char s08c_dword_800D1BD8[] = {0x5, 0x1, 0xfe, 0xc};
const char s08c_dword_800D1BDC[] = {0x0, 0x2, 0x2, 0x0};
const char s08c_dword_800D1BE0[] = {0x1, 0xd, '\n', 0x3};
const char s08c_dword_800D1BE4[] = {0xe8, 0x3, 0xe8, 0xc};
const char s08c_dword_800D1BE8[] = {0x0, 0x7, '\n', 0x0};
const char s08c_dword_800D1BEC[] = {'d', 0x0, 'd', 0x1};
const char s08c_dword_800D1BF0[] = {0xff, 0x2, 0x0, 0x1};
const char s08c_dword_800D1BF4[] = {0xd, 0xc, 0x0, 0x3};
const char s08c_dword_800D1BF8[] = {0x1, 0xff, 0x8, 0xc0};
const char s08c_dword_800D1BFC[] = {0xc0, 0xc0, 0x2, 0x0};
const char s08c_dword_800D1C00[] = {0x1, 0xd, 0xf, 0xa8};
const char s08c_dword_800D1C04[] = {0xa4, 0xcf, 0xa4, 0xb8};
const char s08c_dword_800D1C08[] = {0xa4, 0xe1, 0x0, 0x0};
const char s08c_dword_800D1C0C[] = {0xa4, 0xe4, 0xa4, 0xe1};
const char s08c_dword_800D1C10[] = {0x0, 0x0, 0x0, 0x0};
const char s08c_aPlasma_800D1C14[] = "plasma";
const char s08c_dword_800D1C1C[] = {'p', 'l', 'a', 's'};
const char s08c_dword_800D1C20[] = {'m', 'a', '.', 'c'};
const char s08c_dword_800D1C24[] = {0x0, 0x0, 0x4, '&'};

int SECTION("overlay.bss") s08c_dword_800D20C4;
int SECTION("overlay.bss") s08c_dword_800D20C8;
int SECTION("overlay.bss") s08c_dword_800D20CC;
int SECTION("overlay.bss") s08c_dword_800D20D0;
int SECTION("overlay.bss") s08c_dword_800D20D4;
int SECTION("overlay.bss") s08c_dword_800D20D8;
int SECTION("overlay.bss") s08c_dword_800D20DC;
int SECTION("overlay.bss") s08c_dword_800D20E0;
int SECTION("overlay.bss") s08c_dword_800D20E4;
int SECTION("overlay.bss") s08c_dword_800D20E8;
int SECTION("overlay.bss") s08c_dword_800D20EC;
int SECTION("overlay.bss") s08c_dword_800D20F0;
int SECTION("overlay.bss") s08c_dword_800D20F4;
int SECTION("overlay.bss") s08c_dword_800D20F8;
int SECTION("overlay.bss") s08c_dword_800D20FC;
int SECTION("overlay.bss") s08c_dword_800D2100;
int SECTION("overlay.bss") s08c_dword_800D2104;
int SECTION("overlay.bss") s08c_dword_800D2108;
int SECTION("overlay.bss") s08c_dword_800D210C;
int SECTION("overlay.bss") s08c_dword_800D2110;
