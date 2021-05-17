
#include <stdio.h>

int main()
{
	int count = 0, a = 0;
	printf ( " Input some number \n" );
	scanf("%d", &a );
	printf("a= %d", a);
	for (int i = 1; i <= a; ++i)
	{
		if (a % i == 0)
		{
			++count;
		}
	}
	if (count <= 2 && a>0)
	{
		printf(" Number is prime \n");
	}
	else
	{
		printf(" Number is not prime \n");
	}
	return 0;
}
