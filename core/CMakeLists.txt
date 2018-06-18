project(cmake-tutorial-core)

# The version number.
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)
# configure a header file to pass some of the CMake settings to the source code
configure_file (
        "${CMAKE_CURRENT_SOURCE_DIR}/src/TutorialConfig.h.in"
        "${CMAKE_CURRENT_BINARY_DIR}/src/TutorialConfig.h"
)
# add the binary tree to the search path for include files so that we will find TutorialConfig.h
include_directories("${CMAKE_CURRENT_BINARY_DIR}/src")


# add the converter library
option (USE_CONVERTER "Use cmake-tutorial-core provided converter" ON)
if (USE_CONVERTER)
    # add the binary tree to the search path for include files so that we will find TutorialConfig.h
    include_directories("${CMAKE_CURRENT_SOURCE_DIR}/lib/converter")
    add_subdirectory (lib/converter)
    set (EXTRA_LIBS ${EXTRA_LIBS} converter)
endif (USE_CONVERTER)


file(GLOB_RECURSE core_HEADERS src/*.h)
file(GLOB_RECURSE core_SOURCES src/*.cpp)

add_executable(cmake-tutorial-core ${core_HEADERS} ${core_SOURCES})
target_link_libraries (cmake-tutorial-core ${EXTRA_LIBS})

# add the install targets
install(TARGETS cmake-tutorial-core DESTINATION ${CMAKE_BINARY_DIR}/bin)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/src/TutorialConfig.h DESTINATION ${CMAKE_BINARY_DIR}/include)