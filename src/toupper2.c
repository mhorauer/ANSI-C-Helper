#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	char k = 'a';

	putchar (k);
	if (islower (k))
		k = _toupper (k);
	putchar (k);
	putchar ('\n');
	return EXIT_SUCCESS;
}

