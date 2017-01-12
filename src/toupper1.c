#include <ctype.h>
#include <stdio.h>

int main (void)
{
	unsigned char i;

	for (i = 95; i < 99; i++)   {
		printf ("toupper(%c) = %c\n", i, toupper (i));
	}
	return 0;
}

