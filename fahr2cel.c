#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = 20;
	while(fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%.2f\t%.2f\n", fahr, celsius);
		fahr += step;
	}
	system("pause");

	return 0;
}
