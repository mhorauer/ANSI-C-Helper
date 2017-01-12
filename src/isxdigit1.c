#include <ctype.h>
#include <stdio.h>

int main (void)
{
	unsigned char i;
	char *p;

	for (i = 101; i < 105; i++)   {
		p = (isxdigit (i) ? "YES" : "NO");
		printf ("isxdigit (%c) %s\n", i, p);
	}
	return 0;
}

