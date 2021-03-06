#ifndef beat_H_
#define beat_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"
 
#define beat_NUM_CELLS 4364
#define beat_SAMPLERATE 8000
 
CONSTTABLE_STORAGE(int8_t) beat_DATA [] = {-1, -1, 0, 0, -1, -1, -3, -3, -1, -1,
3, 3, 4, 4, 2, 1, 6, 6, 2, 2, -12, -12, -15, -15, -14, -14, -10, -10, 1, 1, 7,
7, 8, 8, 10, 10, 10, 10, 8, 8, 7, 7, 6, 6, 1, 1, -7, -7, -10, -10, -9, -9, -8,
-8, -6, -6, -4, -4, 0, 0, 7, 7, 14, 14, 18, 18, 17, 17, 10, 10, -2, -2, -14,
-14, -19, -19, -17, -17, -13, -13, -7, -7, 0, 0, 7, 7, 10, 10, 6, 6, -3, -3, -8,
-8, -9, -9, -9, -9, -5, -5, 2, 2, 8, 8, 10, 10, 16, 16, 16, 16, 11, 11, 2, 2,
-7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -4, -4, -3, -3, -6, -6, -12, -12, -15,
-15, -16, -16, -17, -17, -16, -16, -13, -13, -6, -6, 1, 1, 9, 9, 15, 15, 18, 18,
17, 17, 13, 13, 9, 9, 4, 4, 0, 0, -5, -5, -6, -6, -5, -5, -2, -2, -1, -1, -1,
-1, -2, -2, -5, -5, -11, -11, -15, -15, -15, -15, -13, -13, -8, -8, -2, -2, 3,
3, 6, 6, 9, 9, 8, 8, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 4, 4, 4, 4, 5, 5, 5, 5, 3, 3,
2, 2, -3, -3, -8, -8, -11, -11, -11, -11, -8, -8, -5, -5, -1, -1, 3, 3, 7, 7,
10, 10, 11, 11, 10, 10, 9, 9, 7, 7, 3, 3, 0, 0, -1, -1, -2, -2, -2, -2, -3, -3,
-4, -4, -5, -5, -5, -5, -4, -4, -2, -2, 0, 0, 2, 2, 3, 3, 3, 3, 2, 2, 2, 2, 2,
2, 3, 3, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2,
-3, -3, -3, -3, -2, -2, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, -2, -2, -3, -3, -4, -4,
-5, -5, -5, -5, -4, -4, -3, -3, -1, -1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1,
-1, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 2, 2, 3, 3, 3, 3, 3,
3, 1, 1, 0, 0, -2, -2, -4, -4, -4, -4, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4,
-4, -4, -5, -5, -5, -5, -5, -5, -5, -5, -4, -4, -2, -2, -1, -1, 0, 0, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -2, -2, -2, -3, -3, -3,
-3, -4, -4, -4, -4, -4, -4, -3, -3, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 1, 1, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 0, -1, -1, -2, -2, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 1, 1,
2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, -1, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, 0,
-1, -1, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0,
-1, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1,
-1, 0, 0, -1, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0,
-1, -1, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0,
-1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0,
0, 0, -1, -1, 0, 0, -1, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0,
0, -1, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, -1,
-1, 0, -1, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, -1, -1, 0, 0, -1,
-1, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1,
0, 0, -1, -1, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0,
0, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1, 0,
0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1, 0, 0,
-1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0,
0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -2, -2, -1,
-1, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, -1, -1, -2, -2, 0, 0, 0, 0, -3, -3, -1,
-1, -2, -2, 1, 1, 2, 2, -1, -1, -3, -3, 0, 0, 0, 0, -1, -1, -2, -2, -2, -2, -2,
-2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, 2, -1, -1, -1, -1, -1, -1, -4,
-4, -4, -4, -3, -3, 0, 0, 0, 0, -2, -2, -1, -1, 1, 1, -1, -1, -3, -3, -2, -2,
-1, -1, 1, 1, -2, -2, 1, 1, -1, -1, 0, 0, 1, 1, 0, 0, 1, 1, -2, -2, -1, -1, -2,
-2, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -2, -2, -2, -2, -2, -2, 0, 0, -1, -1,
-1, -1, 0, 0, 0, 0, -1, -1, -2, -2, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0,
0, 0, -2, -2, 0, 0, 0, 0, 1, 1, -1, -1, 1, 1, 0, 0, 0, 0, -1, -1, -2, -2, 0, 0,
0, 0, 0, 0, -1, -1, 0, 0, -1, -1, -2, -2, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, -1,
-1, -2, -2, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -2,
-3, -3, -1, -1, -1, -1, 0, 0, 1, 1, 0, 0, -1, -1, -2, -2, -1, -1, 0, 0, 1, 1, 1,
1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, -2, 0, 0, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, -1, -1, -1, -1, -1, 1, 1, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 1, 1, 0, 0, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0,
0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1,
-1, 0, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1,
0, 0, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0,
-1, -1, 0, 0, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, -1, 0,
0, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0,
-1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, -1, -1,
0, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1,
-1, 0, 0, 0, -1, -1, -1, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, -1,
0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1,
-1, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, 0,
0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, -1, -1, 0, 0, -1,
-1, 0, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, -1, -1,
0, 0, -1, -1, -1, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, -1,
-1, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0,
0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, -1, -1, 0, 0, 0,
-1, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1,
0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1,
-1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1,
0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1,
-1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1,
0, 0, -1, -1, 1, 1, -2, -2, 3, 3, -4, -4, -2, -2, 7, 7, -1, -1, -7, -7, -3, -3,
3, 3, -4, -4, 6, 6, 2, 2, 0, 0, 3, 3, -3, -3, -2, -2, -4, -4, -7, -7, -11, -11,
5, 5, 3, 3, 4, 4, 2, 2, 0, 0, 1, 1, -14, -14, 4, 4, 1, 1, -5, -5, 0, 0, 0, 0, 1,
1, 4, 4, 6, 6, -6, -6, -4, -4, -6, -6, -3, -3, -1, -1, 5, 5, -2, -2, -4, -4, 1,
1, -9, -9, 5, 5, 4, 4, -5, -5, -4, -4, 5, 5, -1, -1, 2, 2, 4, 4, -8, -8, 3, 3,
2, 2, -2, -2, 7, 7, -1, -1, -6, -6, -1, -1, -3, -3, 0, 0, 2, 2, -1, -1, -9, -9,
1, 1, 1, 1, -1, -1, 7, 7, 1, 1, -2, -2, -7, -7, 2, 2, 3, 3, 1, 1, -2, -2, 0, 0,
2, 2, 0, 0, 3, 3, -1, -1, -3, -3, -1, -1, -1, -1, 2, 2, 2, 2, -3, -3, -6, -6,
-1, -1, -1, -1, 2, 2, 3, 3, -5, -5, 0, 0, 1, 1, 2, 2, 1, 1, 1, 1, -3, -3, -4,
-4, 1, 1, -1, -1, 5, 5, 3, 3, -6, -6, -1, -1, 0, 0, -4, -4, 1, 1, 3, 3, -3, -3,
-2, -2, 1, 1, 0, 0, 1, 1, -6, -6, -2, -2, -1, -1, 2, 2, 1, 1, -3, -3, -1, -1,
-2, -2, 3, 3, -1, -1, 0, 0, -4, -4, -6, -6, -2, -2, 1, 1, 4, 4, 2, 2, -3, -3,
-2, -2, 1, 1, 0, 0, 0, 0, 1, 1, -2, -2, -1, -1, -2, -2, -1, -1, 3, 3, 0, 0, -1,
-1, -3, -3, 0, 0, -2, -2, -2, -2, -1, -1, -2, -2, 0, 0, 0, 0, 1, 1, 0, 0, -2,
-2, -2, -2, 0, 0, 1, 1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, -1, -1,
-2, -2, -1, -1, -1, -1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-2, -2, -2, -2, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1,
-1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, 0, 0,
-1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0,
0, -2, -2, 1, 1, 0, 0, -5, -5, 6, 6, 2, 2, -5, -5, -4, -4, 3, 3, -3, -3, 2, 2,
4, 4, -1, -1, 3, 3, -2, -2, -2, -1, -3, -3, -3, -3, -8, -8, 0, 0, 3, 3, 1, 1, 2,
2, -1, -1, 2, 2, -7, -7, -1, -1, 3, 3, -3, -3, 0, 0, -1, -1, 0, 0, 1, 1, 4, 4,
-2, -2, -3, -3, -2, -2, -3, -2, -1, -1, 1, 1, 0, 0, -3, -3, 1, 1, -4, -4, 0, 0,
2, 2, -2, -2, -2, -2, 1, 1, 0, 0, -1, -1, 2, 2, -2, -2, -1, -1, 1, 1, -1, -1, 1,
1, 0, 0, -2, -2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -2, -2, -1, -1, 0, 0, -1,
-1, 1, 1, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, 0, -1, -1, 0, 0, -1, -1,
0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0,
-1, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, -1, 0,
0, 0, 0, 0, -1, -1, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0,
-1, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1,
0, 0, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0,
0, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, 0,
0, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1, 0,
-1, -1, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, -1,
0, 0, -1, -1, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0,
0, -1, -1, 0, 0, -1, -1, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, -1, -1,
0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0,
-1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0,
0, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0,
0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, 0,
0, -1, -1, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0,
0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1,
0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1,
-1, -1, -2, -2, 0, 0, 0, 0, -3, -3, -1, -1, -2, -2, 1, 1, 2, 2, -1, -1, -3, -3,
0, 0, 0, 0, 0, 0, -1, -1, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 2, 2, 0, 0, -1, -1, -1, -1, -4, -4, -4, -4, -3, -3, 0, 0, 0, 0, -2, -2, -1,
-1, 1, 1, 0, 0, -3, -3, -2, -2, -1, -1, 2, 2, -2, -2, 1, 1, -1, -1, -1, -1, 1,
1, -1, -1, 1, 1, -2, -2, -1, -1, -2, -2, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0,
-2, -2, -2, -2, -2, -2, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, -2, -2, 0, 0,
-1, -1, 0, 0, 0, 0, 0, 0, 2, 2, 0, 0, 0, 0, -2, -2, -1, -1, 0, 0, 1, 1, 0, 0, 1,
1, 1, 1, 0, 0, 0, 0, -2, -2, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -2, -2,
-2, -2, 0, 0, 0, 0, 0, 0, 1, 1, -1, -1, -2, -2, -1, 0, 0, 0, 0, 0, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, -1, -1, -2, -2, -3, -3, -1, -1, 0, 0, 0, 0, 1, 1, 0, 0,
-1, -1, -2, -2, -1, -1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -2, -2, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, 1, 1, -1, -1, -1, -1, -1, -1, 1, 1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0,
0, -1, -1, 0, 0, 1, 1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0,
0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0,
-1, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1,
0, 0, -1, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0,
-1, -1, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1,
-1, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, -1, -1, -1, 0, 0,
-1, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1,
0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0,
0, -1, -1, 0, 0, -1, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0,
-1, -1, 0, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0,
-1, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0,
0, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1,
0, 0, 0, -1, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1,
0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0,
0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1,
0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, 0,
0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, 0,
0, -1, -1, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1,
0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0,
-1, -1, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, -1,
-1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, };

#endif /* beat_H_ */
