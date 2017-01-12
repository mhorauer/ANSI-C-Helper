/* Link with "-lm" */

#include <stdio.h>
#include <complex.h>
#include <math.h>

int main (void)
{
	double complex z = cproj (INFINITY + 2.0 * I);
	printf ("%.1f%+.1fi\n", creal (z), cimag (z));

	return 0;
}
