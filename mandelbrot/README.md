% ispc mandelbrot.ispc -h mandelbrot_ispc.h -o mandelbrot_ispc.o
% clang -c mandelbrot.cpp -o mandelbrot_cpp.o
% clang -lstdc++  mandelbrot_cpp.o mandelbrot_ispc.o -o mandelbrot
% ./mandelbrot > mandelbrot.ppm
