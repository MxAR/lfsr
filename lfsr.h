//
// Created by mxar on 18.02.18.
//

#ifndef LFSR_LFSR_H
#define LFSR_LFSR_H


#include <stdint.h>


__int128_t LFSR128_SEED = 0x25e2c7f53a04812c30005912b1dd8108;   // 128,126,101,099
__int64_t  LFSR064_SEED = 0x481faae2a3d7f69b;                   // 064,063,061,060
__int32_t  LFSR032_SEED = 0xfa14c49d;                           // 032,022,002,001
__int16_t  LFSR016_SEED = 0x1495;                               // 016,015,013,004
__int8_t   LFSR008_SEED = 0x04;                                 // 008,006,005,004


__int8_t lfsr_008() {
    __int8_t ir = ((LFSR008_SEED >> 0) ^ (LFSR008_SEED >> 2) ^ (LFSR008_SEED >> 3) ^ (LFSR008_SEED >> 4)) & (__int8_t)(1);
    LFSR008_SEED = (LFSR008_SEED >> 1) | (ir << 7);
    return ir;
};

__int16_t lfsr_0016() {
    __int16_t ir = ((LFSR016_SEED >> 0) ^ (LFSR016_SEED >> 1) ^ (LFSR016_SEED >> 2) ^ (LFSR016_SEED >> 12)) & (__int16_t)(1);
    LFSR016_SEED = (LFSR016_SEED >> 1) | (ir << 15);
    return ir;
};

__int32_t lfsr_0032() {
    __int32_t ir = ((LFSR032_SEED >> 0) ^ (LFSR032_SEED >> 10) ^ (LFSR032_SEED >> 30) ^ (LFSR032_SEED >> 31)) & (__int32_t)(1);
    LFSR032_SEED = (LFSR032_SEED >> 1) | (ir << 31);
    return ir;
};

__int64_t lfsr_0064() {
    __int64_t ir = ((LFSR064_SEED >> 0) ^ (LFSR064_SEED >> 1) ^ (LFSR064_SEED >> 3) ^ (LFSR064_SEED >> 4)) & (__int64_t)(1);
    LFSR064_SEED = (LFSR064_SEED >> 1) | (ir << 63);
    return ir;
};

__int128_t lfsr_00128() {
    __int128_t ir = ((LFSR128_SEED >> 0) ^ (LFSR128_SEED >> 2) ^ (LFSR128_SEED >> 27) ^ (LFSR128_SEED >> 29)) & (__int128_t)(1);
    LFSR128_SEED = (LFSR128_SEED >> 1) | (ir << 127);
    return ir;
};

#endif //LFSR_LFSR_H
