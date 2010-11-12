cmake_minimum_required(VERSION 2.6)

project(ListenServer)


if (CMAKE_BUILD_TYPE STREQUAL "")

  set(CMAKE_BUILD_TYPE "RelWithDebInfo" CACHE STRING "Choose the type of build, options are: None (CMAKE_CXX_FLAGS or CMAKE_C_FLAGS used) Debug Release RelWithDebInfo MinSizeRel." FORCE)
endif ()

set(CMAKE_DEBUG_POSTFIX "_d")

set(CMAKE_INSTALL_PREFIX "${CMAKE_CURRENT_BINARY_DIR}/dist")

set(HDRS
	ListenServer.h
	../breslingameserver/GameServer.h
)

set(SRCS
	ListenServer.cpp
	../breslingameserver/GameServer.cpp
	Main.cpp
)

add_executable(ListenServer WIN32 ${HDRS} ${SRCS})






