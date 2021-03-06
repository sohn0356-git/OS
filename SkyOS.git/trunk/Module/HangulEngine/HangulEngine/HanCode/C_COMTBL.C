/*
 *      File C_COMTBL.C
 *      Code-to-index Conversion Table
 *      for Common Combined Hangul Code
 *      '92.5.24
 *      '95.4.27-28,30
 *      Written by Inkeon Lim
 */


#include "hancode.h"


codetbl_t _codetbl_COMMON = {
    {
        {
            NC, FC,  1,  2,  3,  4,  5,  6,  /* Initial */
             7,  8,  9, 10, 11, 12, 13, 14,
            15, 16, 17, 18, 19, NC, NC, NC,
            NC, NC, NC, NC, NC, NC, NC, NC,
        }, {
            NC, NC, FC,  1,  2,  3,  4,  5,  /* Medial */
            NC, NC,  6,  7,  8,  9, 10, 11,
            NC, NC, 12, 13, 14, 15, 16, 17,
            NC, NC, 18, 19, 20, 21, NC, NC,
        }, {
            NC, FC,  1,  2,  3,  4,  5,  6,  /* Final */
             7,  8,  9, 10, 11, 12, 13, 14,
            15, 16, NC, 17, 18, 19, 20, 21,
            22, 23, 24, 25, 26, 27, NC, NC,
        }
    }, {
        {
             1,  2,  3,  4,  5,  6,  7,  8,
             9, 10, 11, 12, 13, 14, 15, 16,
            17, 18, 19, 20,
        }, {
             2,  3,  4,  5,  6,  7, 10, 11,
            12, 13, 14, 15, 18, 19, 20, 21,
            22, 23, 26, 27, 28, 29,
        }, {
             1,  2,  3,  4,  5,  6,  7,  8,
             9, 10, 11, 12, 13, 14, 15, 16,
            17, 19, 20, 21, 22, 23, 24, 25,
            26, 27, 28, 29,
        }
    }
};
