/* Link with "-lm" */

#include <stdio.h>
#include <complex.h>

int main (void)
{
	double x = cabs (1.0 + 2.0 * I);
	printf ("%f\n", x);

	return 0;
}
