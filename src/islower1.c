#include <ctype.h>
#include <stdio.h>

int main (void)
{
	unsigned char i;
	char *p;

	for (i = 95; i < 99; i++)  {
		p = (islower (i) ? "YES" : "NO");
		printf ("islower (%c) %s\n", i, p);
	}
	return 0;
}

