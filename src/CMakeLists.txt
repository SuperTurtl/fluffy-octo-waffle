# src directory

file (GLOB_RECURSE SOURCE *.cpp *.c)

add_executable (FOW ${SOURCE})
target_link_libraries (FOW ${LIBS})