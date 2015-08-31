#include<stdio.h>
int fiba(int n);
int main()
{
	int n;

	printf("Enter the nth fibbanoci to printed\n");
	scanf("%d", &n);
	if (n <= 0)
	{
		printf("invalid input");
		exit(0);
	}
	int ans=fiba(n);
	printf("%d", ans);

}
int fiba(int n)
{
	int first = 0, second = 1, next, c;
	for (c = 0; ; c++)
	{
		if (c == n)
		{
			return next;
		}
		if (c <= 1)
			next = c;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		
	}
}