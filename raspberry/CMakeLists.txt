cmake_minimum_required(VERSION 3.22.1) 
project(MyProject VERSION 1.0.0)  

 
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

find_library(PIGPIO_LIBRARY pigpio)

add_executable(out src/main.cpp)
target_link_libraries(out ${PIGPIO_LIBRARY})

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(
        -Wall                    # Enable most warning messages
        -Wextra                  # Enable extra warning messages
        -Wshadow                 # Warn if a variable shadows another
        -Wnon-virtual-dtor       # Warn if a class with virtual functions has a non-virtual destructor
        -Wold-style-cast         # Warn for c-style casts
        -Wcast-align             # Warn for potential performance problem casts
        -Wunused                 # Warn on anything being unused
        -Woverloaded-virtual     # Warn if you overload (not override) a virtual function
        -Wpedantic               # Warn if non-standard C++ is used
        -Wconversion             # Warn on type conversions that may lose data
        -Wsign-conversion        # Warn on sign conversions
        -Wmisleading-indentation # Warn if indentation implies blocks where they do not exist
        -Wduplicated-cond        # Warn if if / else chain has duplicated conditions
        -Wduplicated-branches    # Warn if if / else branches have duplicated code
        -Wlogical-op             # Warn about logical operations being used where bitwise were probably wanted
        -Wnull-dereference       # Warn if a null dereference is detected
        -Wuseless-cast           # Warn if you perform a cast to the same type
        -Wdouble-promotion       # Warn if float is implicitly promoted to double
        -Wformat=2               # Warn on security issues around functions that format output (like printf)
    )

    if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
        add_compile_options(
            -Wmisleading-indentation # Only available in GCC 6.0 and later
            -Wduplicated-branches    # Only available in GCC 7.0 and later
            -Wnull-dereference       # Only available in GCC 6.0 and later with -fdelete-null-pointer-checks
        )
    endif()

    if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
        add_compile_options(
            -Wimplicit-fallthrough   # Warn on implicit fallthrough in switch statements
            -Wthread-safety          # Warn on thread safety issues
            -Wenum-compare-switch    # Warn if an enum switch does not handle all cases
        )
    endif()
endif()