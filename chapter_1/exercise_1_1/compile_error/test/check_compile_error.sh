#!/bin/bash

if bazel build //:test_exercise_1_1_compile_error; then
    echo "Expected compilation to fail, but it succeeded."
    exit 1  # Test fails if compilation unexpectedly succeeds
else
    echo "Compilation failed as expected."
    exit 0  # Test passes if compilation fails as expected
fi
