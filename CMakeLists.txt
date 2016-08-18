# Root directory

cmake_minimum_required(VERSION 3.1)

# Abort build if running from the source directory
if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
	message (FATAL_ERROR "Attepmting to run from the source directory! Make a build folder and run 'cmake ..'")
endif()

set (CMAKE_CXX_STANDARD 11)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

project (Fluffy-Octo-Waffle)

find_path (LIB_INCLUDES NAMES GL SDL HINTS lib/include)

include_directories (${PROJECT_SOURCE_DIR}/include)
include_directories (${LIB_INCLUDES})

find_library (SDL NAMES SDL2 HINTS lib/bin)
find_library (SDL_MAIN NAMES SDL2main HINTS lib/bin)
find_library (SDL_TEST NAMES SDL2test HINTS lib/bin)
find_library (GLEW NAMES glew32 glew HINTS lib/bin)

message (${SDL})

if(${SDL} STREQUAL SDL-NOTFOUND)
	message (WARNING "Could not find SDL2!")
endif()
if(${SDL_MAIN} STREQUAL SDL_MAIN-NOTFOUND)
	message (WARNING "Could not find SDL2main!")
endif()
if(${SDL_TEST} STREQUAL SDL_TEST-NOTFOUND)
	message (WARNING "Could not find SDL2test!")
endif()
if(${GLEW} STREQUAL GLEW-NOTFOUND)
	message (WARNING "Could not find GLEW!")
endif()

set (LIBS ${SDL} ${SDL_MAIN} ${SDL_TEST} ${GLEW})
add_subdirectory(src)