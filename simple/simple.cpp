

#include <stdio.h>
#include <stdlib.h>

// The header file ispc generates
#include "simple_ispc.h"
using namespace ispc;

int main() {
    float vin[16], vout[16];

    // initialize input buffer
    for (int i = 0; i < 16; i++)
        vin[i] = (float)i;

    // Call simple() function from simple.ispc file
    simple(vin, vout, 16);

    // print results
    for (int i = 0; i < 16; i++)
        printf("%d: simple(%f) = %f\n", i, vin[i], vout[i]);

    return 0;
}

