#include <ctype.h>
#include <stdio.h>

int main (void)
{
	unsigned char i;
	char *p;
	for (i = 32; i < 34; i++)   {
		p = (isspace (i) ? "YES" : "NO");
		printf ("isspace (%c) %s\n", i, p);
	}
	return 0;
}

