cmake_minimum_required(VERSION 2.8)

project(TestsSequence)

set(SRC_PATH src)

set (CMAKE_CXX_STANDARD 17)

set(${PROJECT_NAME}_SRC
   ${SRC_PATH}/main.cpp
)

#########################################################
# Executable
add_executable( ${PROJECT_NAME} ${${PROJECT_NAME}_SRC} )