cmake_minimum_required(VERSION 3.2)

message(STATUS "vscode_demo start")

project(vscode_demo)

# 增加宏定义
add_definitions(-D UU)

# 编译选项
ADD_COMPILE_OPTIONS(-std=c++11)

# 设置静态编译
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static")

# 增加 include
# include_directories(./App)

# 增加 link
IF (CMAKE_SYSTEM_NAME MATCHES "Linux")
	link_libraries(pthread)
ELSEIF (CMAKE_SYSTEM_NAME MATCHES "Windows")
	# link_directories("${PROJECT_SOURCE_DIR}/Lib/winpcap/Lib/x64")
	# link_libraries(wpcap Packet)
	link_libraries(ws2_32)
ELSE ()
	MESSAGE(STATUS "other cp: ${CMAKE_SYSTEM_NAME}")
ENDIF (CMAKE_SYSTEM_NAME MATCHES "Linux")

aux_source_directory(./src DIR_SRC)
message(STATUS "Compile files " ${DIR_SRC})

# 生成程序
add_executable(vscode_demo ${DIR_SRC})

message(STATUS "vscode_demo end")
