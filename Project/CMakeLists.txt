cmake_minimum_required(VERSION 3.10)
project(Games101 VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Debug)

# Eigen 路径
set(EIGEN_DIR "E:/CMake/Eigen/eigen-3.4.0")
include_directories(${EIGEN_DIR})

# 遍历 Code 目录下所有 cpp 文件
file(GLOB CODE_SOURCES "Code/*.cpp")

# 为每个 cpp 文件创建单独的可执行文件
foreach(SRC_FILE ${CODE_SOURCES})
    # 获取文件名，不含路径和后缀
    get_filename_component(EXE_NAME ${SRC_FILE} NAME_WE)
    add_executable(${EXE_NAME} ${SRC_FILE})
endforeach()
