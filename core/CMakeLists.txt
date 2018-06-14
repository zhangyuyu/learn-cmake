project(cmake-tutorial-core)

# The version number.
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings to the source code
configure_file (
        "${CMAKE_CURRENT_SOURCE_DIR}/src/TutorialConfig.h.in"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/TutorialConfig.h"
)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${CMAKE_CURRENT_SOURCE_DIR}")

file(GLOB_RECURSE core_HEADERS src/*.h)
file(GLOB_RECURSE core_SOURCES src/*.cpp)

add_executable(cmake-tutorial-core ${core_HEADERS} ${core_SOURCES})