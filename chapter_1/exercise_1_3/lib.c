#include <stdio.h>

int exercise_1_3()
{
	/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */

	float fahr, celsius;
	int lower, upper, step;

	printf("Fahrenheit Celsius\n");

	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%10.0f %7.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}
