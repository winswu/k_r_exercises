#include <gtest/gtest.h>

extern "C" {
#include "../lib.h"
}

TEST(Exercise_1_9, ReplaceTwoOrMoreBlanksWithSingleBlank) {
  std::string line;

  FILE *fp = fopen("input.txt", "w");

  fprintf(
      fp,
      "This document  specifies the form   and establishes  the interpretation "
      "of programs expressed in the  programming language C.\nIts purpose  is "
      "to promote   portability,\treliability,\tmaintainability,\tand "
      "efficient execution of C   language programs on a variety     of "
      "computing systems.\n");

  fclose(fp);

  freopen("input.txt", "r", stdin);

  testing::internal::CaptureStdout();

  exercise_1_9();

  std::string output = testing::internal::GetCapturedStdout();

  EXPECT_EQ(
      output,
      "This document specifies the form and establishes the interpretation of "
      "programs expressed in the programming language C.\nIts purpose is to "
      "promote portability,\treliability,\tmaintainability,\tand efficient "
      "execution of C language programs on a variety of computing systems.\n");
}
