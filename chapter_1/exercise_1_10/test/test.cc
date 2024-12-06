#include <gtest/gtest.h>

extern "C" {
#include "../lib.h"
}

TEST(Exercise_1_10, ReplaceTabsBackspacesBackslashes) {
  std::string line;

  FILE *fp = fopen("input.txt", "w");

  std::string input =
      "\\This document specifies the form and establishes the interpretation "
      "of programs expressed in the programming language C.\b\nIts purpose is "
      "to promote portability,\treliability,\tmaintainability,\tand efficient "
      "execution of C language programs on a variety of computing systems.\\\n";

  fprintf(fp, "%s", input.c_str());

  fclose(fp);

  freopen("input.txt", "r", stdin);

  testing::internal::CaptureStdout();

  exercise_1_10();

  std::string output = testing::internal::GetCapturedStdout();

  EXPECT_EQ(
      output,
      "\\\\This document specifies the form and establishes the interpretation "
      "of programs expressed in the programming language C.\\b\nIts purpose is "
      "to promote portability,\\treliability,\\tmaintainability,\\tand "
      "efficient execution of C language programs on a variety of computing "
      "systems.\\\\\n");
}
