#include <gtest/gtest.h>

extern "C" {
#include "../lib.h"
}

TEST(Exercise_1_1, PrintfOutput) {
  testing::internal::CaptureStdout();

  exercise_1_1();

  std::string output = testing::internal::GetCapturedStdout();

  EXPECT_EQ(output, "hello, world\n");
}
