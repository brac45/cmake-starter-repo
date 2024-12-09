add_library(mylibs
        STATIC
        hellolib.h
        hellolib.cpp
)

target_include_directories(mylibs
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
)