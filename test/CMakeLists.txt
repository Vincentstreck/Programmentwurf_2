# Enable test shuffling to run tests in random order
set(GTEST_SHUFFLE 1)

# Add an executable for running tests
add_executable(runTests
    test_developer.cpp
)

target_link_libraries(runTests
    gtest_main
    developer_lib
)

# Add a test named "runTests" that runs the test executable
add_test(NAME runTests COMMAND runTests)