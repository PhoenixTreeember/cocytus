cmake_minimum_required(VERSION 2.8)
project (cqt_tyolo)
enable_language(C)

add_definitions("-pg -Wall -g -Iinc")
include_directories(inc)
SET(CMAKE_EXE_LINKER_FLAGS  "-pg")

add_executable(cqt_tyolo
        cqt_tyolo.c
        yad2k_yolo.c
        cqt_gen/cqt_gen.c
        cqt_gen/cqt_debug.c
        cqt_lib/numpy.c
        cqt_lib/cqt_lib.c
        cqt_lib/InputLayer.c
        cqt_lib/Conv2d_same_1x1.c
        cqt_lib/Conv2d_same_3x3.c
        cqt_lib/MaxPooling2D.c
        cqt_lib/BatchNormalization.c
        cqt_lib/LeakyReLU.c
        ya2k_yolo.h)

target_link_libraries(cqt_tyolo m)
