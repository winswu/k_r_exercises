#include <gtest/gtest.h>

#include <sstream>
#include <string>

extern "C" {
#include "../lib.h"
}

TEST(Exercise_1_4, CelsiusToFahrenheit) {
  std::string line;

  testing::internal::CaptureStdout();

  exercise_1_4();

  std::string output = testing::internal::GetCapturedStdout();

  EXPECT_EQ(output,
            "Celsius Fahrenheit\n"
            "      0       32.0\n"
            "     10       50.0\n"
            "     20       68.0\n"
            "     30       86.0\n"
            "     40      104.0\n"
            "     50      122.0\n"
            "     60      140.0\n"
            "     70      158.0\n"
            "     80      176.0\n"
            "     90      194.0\n"
            "    100      212.0\n");
}
