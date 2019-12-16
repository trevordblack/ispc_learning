$ ispc simple.ispc -h simple_ispc.h -o simple_ispc.o

$ clang -c simple.cpp  -o simple_cpp.o

$ clang simple_cpp.o simple_ispc.o  -o simple

$ ./simple
