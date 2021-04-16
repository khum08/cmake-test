# cmake 最低版本需求
cmake_minimum_required(VERSION 3.18)

# 工程名称
project(step1)

# 设置
set(CMAKE_CXX_STANDARD 11)
aux_source_directory(src/ DIR_SRCS)

add_subdirectory(src/math)



# 编译源码生成目标
add_executable(step1 ${DIR_SRCS})

target_include_directories(step1 PUBLIC src/math)

target_link_libraries(step1 math_utils)

# build lib
# STATIC->libxxx.a
# SHARED->libxxx.dylib 
# MODULE->libxxx.so
# add_library(test1 MODULE main.cpp)