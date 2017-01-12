#include <ctype.h>
#include <stdio.h>

int main (void)
{
	unsigned char i;
	char *p;

	for (i = 30; i < 34; i++)   {
		p = (iscntrl (i) ? "YES" : "NO");
		printf ("iscntrl (%i) %s\n", i, p);
	}
	return 0;
}

