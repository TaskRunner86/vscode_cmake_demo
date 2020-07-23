cmake_minimum_required(VERSION 2.8)

message(STATUS "vscode_demo start")

project(vscode_demo)

aux_source_directory(./src DIR_SRC)
message(STATUS "Compile files " ${DIR_SRC})

# 生成程序
add_executable(vscode_demo ${DIR_SRC})

# 编译选项
ADD_COMPILE_OPTIONS(-std=c++11)

# 增加宏定义
add_definitions(-D UU)

message(STATUS "vscode_demo start")
