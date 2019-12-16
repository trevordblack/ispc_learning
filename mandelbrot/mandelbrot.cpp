
#include <algorithm>
#include <cstdlib>
#include <stdio.h>
#include <string.h>

#include "mandelbrot_ispc.h"
using namespace ispc;

int main(int argc, char* argv[])
{
    unsigned int width = 768;
    unsigned int height = 512;

    float x0 = -2.0f;
    float x1 = 1.0f;
    float y0 = -1.0f;
    float y1 = 1.0f;

    int maxIterations = 256;
    int *buf = new int[width * height];

    mandelbrot_ispc(x0, y0, x1, y1, width, height, maxIterations, buf);

    // print out mandelbrot
    printf("P3\n");
    printf("%d %d\n", width, height);
    printf("255\n");

    for (int i = 0; i < width * height; ++i) {
        unsigned int c = (buf[i] & 0x1) ? 240 : 20;
        printf("%d %d %d\n", c, c, c);
    }
}

