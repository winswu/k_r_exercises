#include <stdio.h>

int exercise_1_8()
{
	int n_blanks = 0;
	int n_tabs = 0;
	int n_newlines = 0;
	int c = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++n_blanks;
		} else if (c == '\t') {
			++n_tabs;
		} else if (c == '\n') {
			++n_newlines;
		}
	}

	printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", n_blanks, n_tabs,
	       n_newlines);

	return 0;
}
