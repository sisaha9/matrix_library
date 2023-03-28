if (BUILD_TESTING)
    add_executable(utils_test utils_test.cc)
    target_link_libraries(utils_test PRIVATE GTest::gtest_main utils matrix_library)

    add_executable(cpu_simple_test cpu_simple_test.cc)
    target_link_libraries(cpu_simple_test PRIVATE GTest::gtest_main utils cpu_simple matrix_library)

    include (GoogleTest)

    gtest_discover_tests(utils_test)
    gtest_discover_tests(cpu_simple_test)
endif()