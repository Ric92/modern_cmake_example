cmake_minimum_required( VERSION 3.14 )

project( MyApp 
         VERSION 0.1 
         DESCRIPTION "App example"
         LANGUAGES C CXX)

add_executable( MyApp )

target_sources ( MyApp PUBLIC src/main.cpp )

target_link_libraries( MyApp PUBLIC MyLibrary ) 