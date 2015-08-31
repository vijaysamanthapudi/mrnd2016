#include<stdio.h>
#define size 10000
int check(int n);
void main()
{
	int n,ans;
	printf("enter the number\n");
	scanf("%d", &n);
	ans=check(n);
	if (ans == -1)
	{
		printf("it is not divisble");
	}
	else
	{
		printf("it is divisibe");
	}
}

int check(int n)
{
	int i=0, j,sumeven=0,sumodd=0,d=0;
	while (n)
	{
		if (i % 2 == 0)
		{
			d = n % 10;
			sumeven += d;
			n = n / 10; i++;
			
		}
		else
		{
			d = n % 10;
			sumodd += d;
			n = n / 10; i++;
		}


	}
	
	if (abs(sumeven - sumodd))
	{
		int x = abs(sumeven - sumodd);
		return check(x);
	}
	if (sumeven==sumodd)
	{
		return 1;
	}
	else
		return -1;

	
}


