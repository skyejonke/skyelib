project(skyelib)
SET(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -Wshadow -Wnon-virtual-dtor -Wpedantic")
add_definitions(${GCC_COVERAGE_COMPILE_FLAGS})
add_library(skyelib STATIC skyelib.cpp)
