include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/b514bdc898e2951020cbdca1304b75f5950d1f59.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
        my_tests
        hello_gtest.cpp
)
target_link_libraries(
        my_tests
        GTest::gtest_main
        mylibs
)

include(GoogleTest)
gtest_discover_tests(my_tests)

