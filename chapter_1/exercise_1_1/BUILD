cc_library(
    name = "lib_exercise_1_1",
    srcs = ["solution/lib.c"],
    
    hdrs = ["solution/lib.h"],

)

cc_test(
    name = "test_exercise_1_1",
    size = "small",
    srcs = ["test/test.cc"],  

    deps = [
        ":lib_exercise_1_1",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)
