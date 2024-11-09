#include <stdio.h>

int exercise_1_4()
{
	/* print Celsius-Fahrenheit table
    for celsius = 0, 10, ..., 100; floating-point version */

	float celsius, fahr;
	int lower, upper, step;

	printf("Celsius Fahrenheit\n");

	lower = 0; /* lower limit of temperature table */
	upper = 100; /* upper limit */
	step = 10; /* step size */
	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%7.0f %10.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

	return 0;
}
