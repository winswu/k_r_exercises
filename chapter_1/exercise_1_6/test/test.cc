#include <gtest/gtest.h>
#include <limits.h>
#include <stdio.h>

TEST(Exercise_1_6, VerifyEof) {
  int expression_result = 0;

  FILE *fp = fopen("input.txt", "w");

  for (int i = 0; i < SCHAR_MAX; i++) {
    fputc(i, fp);
  }

  fclose(fp);

  freopen("input.txt", "r", stdin);

  while ((expression_result = getchar() != EOF)) {
    EXPECT_EQ(1, expression_result);
  }

  EXPECT_EQ(0, expression_result);
}
