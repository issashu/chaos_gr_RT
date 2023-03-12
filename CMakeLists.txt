cmake_minimum_required(VERSION 3.24)
project(Homework2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

#Set directories below
set(BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(HEADERS_DIR ${BASE_DIR}/include)
set(SOURCES_DIR ${BASE_DIR}/src)
set(UTILS_PATH ${BASE_DIR}/utils)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(
        ${PROJECT_NAME}

        ${SOURCES_DIR}/main.cpp

        ${SOURCES_DIR}/pixelCanvas.cpp
        ${SOURCES_DIR}/ppmFileGenerator.cpp

        ${HEADERS_DIR}/pixelCanvas.h
        ${HEADERS_DIR}/ppmFileGenerator.h)


target_include_directories (
        ${PROJECT_NAME}

        PUBLIC
        ${BASE_DIR}
        ${UTILS_PATH}
        ${SOURCES_DIR}
        ${HEADERS_DIR}
)
