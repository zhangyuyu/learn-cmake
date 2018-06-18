add_library(converter Converter.cpp)

install(TARGETS converter DESTINATION ${CMAKE_BINARY_DIR}/bin)
install(FILES Converter.h DESTINATION ${CMAKE_BINARY_DIR}/include)