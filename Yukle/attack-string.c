#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[])
{
	unsigned long int n = strtoul(argv[1], NULL, 0);
	unsigned char const * p = (unsigned char const *)&n;

	printf("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa%c%c%c%c",p[0],p[1],p[2],p[3]);

	return 0;
}
