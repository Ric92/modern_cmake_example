cmake_minimum_required( VERSION 3.14 )

project( cmake_example 
         VERSION 0.1
         DESCRIPTION "Project example with cmake")

set( CMAKE_CXX_STANDARD 14)

add_subdirectory( library )

add_subdirectory( app )