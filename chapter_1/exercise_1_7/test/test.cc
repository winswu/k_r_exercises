#include <gtest/gtest.h>

extern "C" {
#include "../lib.h"
}

TEST(Exercise_1_7, PrintEof) {
  std::string line;

  testing::internal::CaptureStdout();

  exercise_1_7();

  std::string output = testing::internal::GetCapturedStdout();

  EXPECT_EQ(output, "-1\n");
}
