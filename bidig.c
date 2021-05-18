
#include <stdio.h>


void BinDig(int n)
{
  if (n >= 2)
    BinDig(n / 2);
  printf("%d",  n % 2);
}

int main()
{
	int a = 0;

	printf ( " Input some number \n" );

	scanf("%d", &a);

	BinDig(a);

	return 0;
}
