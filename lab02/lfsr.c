#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg)
{
    /* YOUR CODE HERE */
    uint16_t r = *reg;
    uint16_t new_bit = ((*reg >> 5) ^ (*reg >> 3) ^ (*reg >> 2) ^ (*reg >> 0)) & 1;

    r = (r >> 1) | (new_bit << 15);
    *reg = r;
}
