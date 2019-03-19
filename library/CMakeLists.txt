cmake_minimum_required( VERSION 3.14 )

project( MyLibrary 
         VERSION 0.1 
         DESCRIPTION "Library example"
         LANGUAGES C CXX)

add_library( MyLibrary STATIC )

target_sources( MyLibrary PUBLIC src/Foo.cpp)
target_include_directories( MyLibrary PUBLIC include)
