//-----------------------------------------------------------------------------
#include "hanlib.h"
//-----------------------------------------------------------------------------
//	①초성의 벌수 결정 : [중성종류][종성유무] */
//-----------------------------------------------------------------------------
static byte _F1_by_F2F3[22][2] = {    /* 벌수는 0 ~ 7까지 8벌 */
    {0, 0},     /* [ 0]    */
    {0, 1},     /* [ 1] ㅏ */
    {0, 1},     /* [ 2] ㅐ */
    {0, 1},     /* [ 3] ㅑ */
    {0, 1},     /* [ 4] ㅒ */
    {0, 1},     /* [ 5] ㅓ */
    {0, 1},     /* [ 6] ㅔ */
    {0, 1},     /* [ 7] ㅕ */
    {0, 1},     /* [ 8] ㅖ */
    {2, 3},     /* [ 9] ㅗ */
    {4, 5},     /* [10] ㅘ */
    {4, 5},     /* [11] ㅙ */
    {4, 5},     /* [12] ㅚ */
    {2, 3},     /* [13] ㅛ */
    {3, 3},     /* [14] ㅜ */
    {4, 5},     /* [15] ㅝ */
    {4, 5},     /* [16] ㅞ */
    {4, 5},     /* [17] ㅟ */
    {3, 3},     /* [18] ㅠ */
    {2, 3},     /* [19] ㅡ */
    {4, 5},     /* [20] ㅢ */
    {0, 1}      /* [21] ㅣ */
};
//-----------------------------------------------------------------------------
//	②중성의 벌수 결정 : [초성종류][종성유뮤] */
//-----------------------------------------------------------------------------
static byte _F2_by_F1F3[20][2] = {    /* 벌수는 0 ~ 3까지 4벌 */
    {0, 1},     /* [ 0]   */
    {0, 1},     /* [ 1] ㄱ*/
    {0, 1},     /* [ 2] ㄲ*/
    {0, 1},     /* [ 3] ㄴ*/
    {0, 1},     /* [ 4] ㄷ*/
    {0, 1},     /* [ 5] ㄸ*/
    {0, 1},     /* [ 6] ㄹ*/
    {0, 1},     /* [ 7] ㅁ*/
    {0, 1},     /* [ 8] ㅂ*/
    {0, 1},     /* [ 9] ㅃ*/
    {0, 1},     /* [10] ㅅ*/
    {0, 1},     /* [11] ㅆ*/
    {0, 1},     /* [12] ㅇ*/
    {0, 1},     /* [13] ㅈ*/
    {0, 1},     /* [14] ㅉ*/
    {0, 1},     /* [15] ㅊ*/
    {0, 1},     /* [16] ㅋ*/
    {0, 1},     /* [17] ㅌ*/
    {0, 1},     /* [18] ㅍ*/
    {0, 1}      /* [19] ㅎ*/
};
//-----------------------------------------------------------------------------
//	③종성의 벌수 결정 : [중성종류] */
//-----------------------------------------------------------------------------
static byte _F3_by_F2[22] = {   /* 벌수는 0 ~ 3까지 4벌 */
    0,  /* [ 0]    */
    0,  /* [ 1] ㅏ */
    0,  /* [ 2] ㅐ */
    0,  /* [ 3] ㅑ */
    0,  /* [ 4] ㅒ */
    0,  /* [ 5] ㅓ */
    0,  /* [ 6] ㅔ */
    0,  /* [ 7] ㅕ */
    0,  /* [ 8] ㅖ */
    0,  /* [ 9] ㅗ */
    0,  /* [10] ㅘ */
    0,  /* [11] ㅙ */
    0,  /* [12] ㅚ */
    0,  /* [13] ㅛ */
    0,  /* [14] ㅜ */
    0,  /* [15] ㅝ */
    0,  /* [16] ㅞ */
    0,  /* [17] ㅟ */
    0,  /* [18] ㅠ */
    0,  /* [19] ㅡ */
    0,  /* [20] ㅢ */
    0   /* [21] ㅣ */
};
//-----------------------------------------------------------------------------
/* ①초성의 벌수 결정 : [중성종류][종성유무] */
/* ②중성의 벌수 결정 : [초성종류][종성유뮤] */
/* ③종성의 벌수 결정 : [중성종류] */

byte *_F1B_6x2x1 = &_F1_by_F2F3[0][false];
byte *_F2B_6x2x1 = &_F2_by_F1F3[0][false];
byte *_F3B_6x2x1 = &_F3_by_F2[0];
//-----------------------------------------------------------------------------
