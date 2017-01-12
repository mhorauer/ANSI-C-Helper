/* Link with "-lm" */

#include <complex.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int
main (int argc, char *argv[])
{
	double complex z, c, f;

	if (argc != 3) {
		fprintf (stderr, "Usage: %s <real> <imag>\n", argv[0]);
		exit (EXIT_FAILURE);
	}

	z = atof (argv[1]) + atof (argv[2]) * I;

	c = catanh (z);
	printf ("catanh() = %6.3f %6.3f*i\n", creal (c), cimag (c));

	f = 0.5 * (clog (1 + z) - clog (1 - z));
	printf ("formula  = %6.3f %6.3f*i\n", creal (f), cimag (f));

	exit (EXIT_SUCCESS);
}

