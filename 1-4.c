/* TP #3
 * Nahuel Lattessi
 * 20150425
 */

#include <stdio.h>

float getCelsius(float fahr);

int main(void)
{
	int fahr;
	
	const int LOWER = 0;
	const int UPPER = 300;
	const int STEP = 20;

	printf("Fahr | Celsius\n\n");

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, getCelsius(fahr));
}

float getCelsius(float fahr)
{
	return (5.0/9.0) * (fahr-32.0);
}