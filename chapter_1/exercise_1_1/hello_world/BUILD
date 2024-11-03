cc_library(
    name = "lib_exercise_1_1_hello_world",
    srcs = ["lib.c"],
    hdrs = ["lib.h"],
)

cc_test(
    name = "test_exercise_1_1_hello_world",
    size = "small",
    srcs = ["test/test.cc"],
    deps = [
        ":lib_exercise_1_1_hello_world",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)
