#include <gtest/gtest.h>

extern "C" {
#include "../lib.h"
}

TEST(Exercise_1_2, PrintfOutput) {
  testing::internal::CaptureStdout();

  exercise_1_2();

  std::string output = testing::internal::GetCapturedStdout();

  EXPECT_EQ(output, "hello, world\n");
}
