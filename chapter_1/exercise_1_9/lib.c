#include <stdbool.h>
#include <stdio.h>

int exercise_1_9()
{
	int c = 0;
	bool last_char_was_space = false;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (!last_char_was_space)
				putchar(c);

			last_char_was_space = true;
		} else {
			putchar(c);
			if (last_char_was_space)
				last_char_was_space = false;
		}
	}

	return 0;
}
