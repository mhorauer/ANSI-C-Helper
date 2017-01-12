#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int main (void)
{
	int i;

	i = 0;
	for (int ndx = 0; ndx <= UCHAR_MAX; ndx++) {
		if (isgraph (ndx)) {
			i++;
			printf ("%c", ndx);
			if (i == 10) {
				printf ("\n");
				i = 0;
			}
		}
	}
	printf ("\n");

	return 0;
}
