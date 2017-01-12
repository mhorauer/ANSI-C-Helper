/* Link with "-lm" */

#include <stdio.h>
#include <complex.h>
#include <math.h>

int main (void)
{
	double complex z;                  /* complex number     */
	double phase;                      /* phase angle        */
	double rtod = 180.0 / acos (-1.0); /* radians to degrees */

	z = 0.0 + 0.0 * I;
	phase = carg (z);
	printf ("%9f radians,  %6.1f degrees\n", phase, phase * rtod);

	z = 1.0 + 1.0 * I;
	phase = carg (z);
	printf ("%9f radians,  %6.1f degrees\n", phase, phase * rtod);

	z = -1.0 + 1.0 * I;
	phase = carg (z);
	printf ("%9f radians,  %6.1f degrees\n", phase, phase * rtod);

	z = -1.0 - 1.0 * I;
	phase = carg (z);
	printf ("%9f radians,  %6.1f degrees\n", phase, phase * rtod);

	z = 1.0 - 1.0 * I;
	phase = carg (z);
	printf ("%9f radians,  %6.1f degrees\n", phase, phase * rtod);

	return 0;
}
