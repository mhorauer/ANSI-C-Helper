#include <ctype.h>
#include <stdio.h>

int main (void)
{
	unsigned char i;
	char *p;

	for (i = 89; i < 93; i++)   {
		p = (isupper (i) ? "YES" : "NO");
		printf ("isupper (%c) %s\n", i, p);
	}
	return 0;
}

