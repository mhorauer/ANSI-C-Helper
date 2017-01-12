/* Link with "-lm" */

#include <stdio.h>
#include <complex.h>

int main (void)
{
#ifdef __STDC_NO_COMPLEX__
	printf ("__STDC_NO_COMPLEX__ is defined.\n");
#else
	printf ("__STDC_NO_COMPLEX__ is undefined.\n");
#endif

#ifdef __STDC_IEC_559_COMPLEX__
	printf ("__STDC_IEC_559_COMPLEX__ is defined.\n");
#else
	printf ("__STDC_IEC_559_COMPLEX__ is undefined.\n");
#endif

	printf ("I = %.1f%+.1fi\n", creal (I), cimag (I));
	printf ("sizeof(I) = %zu\n", sizeof (I));
	printf ("sizeof(_Complex_I) = %zu\n", sizeof (_Complex_I));

	double complex z = 1.0 + 2.0 * I;
	printf ("z = %.1f%+.1fi\n", creal (z), cimag (z));

	return 0;
}
