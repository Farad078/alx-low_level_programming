#include <stdio.h>

int main(void)
{
	int a = 2700;
	int *p;
	p = &a;

	char *p0;
	p0 = (char *)p;

	printf("Size of an int: %ld\n", sizeof(int));
	printf("Address= %ls Value= %d\n",p,*p);

/*	printf("Size of a char: %ld\n", sizeof(char));
	printf("Address: %s, Value: %d\n", p0, *p0);
*/
	return (0);
}
