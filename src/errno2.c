#include <stdio.h>
#include <math.h>
#include <errno.h>

void show_errno (void)
{
	if (errno == EDOM)   printf ("domain error");
	if (errno == EILSEQ) printf ("illegal sequence");
	if (errno == ERANGE) printf ("pole or range error");
	if (errno == 0)      printf ("no error");
	printf (" occurred\n");
}

int main (void)
{
	double val;

	printf ("MATH_ERRNO is %s\n", math_errhandling & MATH_ERRNO ? "set" : "not set");

	errno = 0;
	val = 1.0 / 0.0;
	show_errno();

	errno = 0;
	val = +1.1;
	acos (val);
	show_errno();

	errno = 0;
	val = 0.0;
	log (val);
	show_errno();

	errno = 0;
	sin (0.0);
	show_errno();

	return 0;
}
