cmake_minimum_required(VERSION 3.17)
project(Lib)

set(CMAKE_CXX_STANDARD 17)


set(PATH_TO_SOURCE_FILES_FOR_STATIC_LIB ${CMAKE_CURRENT_SOURCE_DIR}/StaticLibary)
set(PATH_TO_SOURCE_FILES_FOR_SHARED_LIB ${CMAKE_CURRENT_SOURCE_DIR}/DynamicLibary)


add_subdirectory(StaticLibary)
add_subdirectory(DynamicLibary)


include_directories(${PATH_TO_SOURCE_FILES_FOR_STATIC_LIB})
include_directories(${PATH_TO_SOURCE_FILES_FOR_SHARED_LIB})


add_executable(Main main.cpp main.cpp)

target_link_libraries(Main PRIVATE Number_lib)
target_link_libraries(Vectored_lib PRIVATE Number_lib)
target_link_libraries(Main PRIVATE Vectored_lib)

