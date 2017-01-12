#include <ctype.h>
#include <stdio.h>

int main (void)
{
	unsigned char i;
	char *p;

	for (i = 46; i < 50; i++)   {
		p = (isdigit (i) ? "YES" : "NO");
		printf ("isdigit (%c) %s\n", i, p);
	}
	return 0;
}

