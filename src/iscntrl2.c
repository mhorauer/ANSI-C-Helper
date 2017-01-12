#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int main (void)
{
	for (int ndx = 0; ndx <= UCHAR_MAX; ndx++)
		if (iscntrl (ndx)) printf ("0x%02x ", ndx);
	printf ("\n");

	return 0;
}
