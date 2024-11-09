#include <gtest/gtest.h>

#include <sstream>
#include <string>

extern "C" {
#include "../lib.h"
}

TEST(Exercise_1_3, TableHeading) {
  std::string line;

  testing::internal::CaptureStdout();

  exercise_1_3();

  std::string output = testing::internal::GetCapturedStdout();

  std::istringstream stream(output);
  std::getline(stream, line);

  EXPECT_EQ(line, "Fahrenheit Celsius");
}
