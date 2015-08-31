#include<stdio.h>

void main()
{
	int n, sum;
	printf("enter the number\n");
	scanf("%d", &n);
	sum = sumof(n);
	printf("the sum is %d\n", sum);


}

int sumof(int n)
{
	int r, sum = 0, x = abs(n);
	while (x != 0)
	{
		r = x % 10;
		sum += r;
		x = x / 10;
	}
	if (n < 0)
	{
		sum = -sum;
		return sum;
	}
	else


		return sum;


}

