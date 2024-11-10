#include <gtest/gtest.h>

#include <sstream>
#include <string>

extern "C" {
#include "../lib.h"
}

TEST(Exercise_1_5, ReverseOrder) {
  std::string line;

  testing::internal::CaptureStdout();

  exercise_1_5();

  std::string output = testing::internal::GetCapturedStdout();

  EXPECT_EQ(output,
            "300  148.9\n"
            "280  137.8\n"
            "260  126.7\n"
            "240  115.6\n"
            "220  104.4\n"
            "200   93.3\n"
            "180   82.2\n"
            "160   71.1\n"
            "140   60.0\n"
            "120   48.9\n"
            "100   37.8\n"
            " 80   26.7\n"
            " 60   15.6\n"
            " 40    4.4\n"
            " 20   -6.7\n"
            "  0  -17.8\n");
}
