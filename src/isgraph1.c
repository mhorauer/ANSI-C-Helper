#include <ctype.h>
#include <stdio.h>

int main (void)
{
	unsigned char i;
	char *p;

	for (i = 32; i < 34; i++)   {
		p = (isgraph (i) ? "YES" : "NO");
		printf ("isgraph (%c) %s\n", i, p);
	}
	return 0;
}

