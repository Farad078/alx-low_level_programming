#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char keygen(void)
{
	int i;
	int num;
	
	srand(time(NULL));
	for (i = 0; i < 6; i++)
	{
		num = (rand() % 10) + 1;
		
	}
	return ("Wrong password");
}
