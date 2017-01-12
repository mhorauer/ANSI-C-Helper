/* Link with "-lm" */

#include <stdio.h>
#include <complex.h>

int main (void)
{
	double complex z = cpow (1.0 + 2.0 * I, 2.0 + 0.0 * I);
	printf ("%f%+fi\n", creal (z), cimag (z));

	z = cpow (1.0 + 2.0 * I, 1.0 + 2.0 * I);
	printf ("%f%+fi\n", creal (z), cimag (z));

	return 0;
}
