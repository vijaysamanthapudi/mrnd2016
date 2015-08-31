#include<stdio.h>
#define size 10000
int check(char a[]);
void main()
{
	char a[size]; int ans,i;
	printf("enter the strinfg\n");
		gets(a);
		for (i = 0; a[i]; i++);
		if (i == 0)
		{
			printf("empty string");
			exit(0);
		}
		ans = check(a);
		if (ans == -1)
		{
			printf("not a pallindrome");
		}
		else
		{
			printf("it is a pallindrome");
		}
} 

int check(char a[])
{
	int i, j = strlen(a)-1;
	for (i = 0; i <j; i++, j--)
	{
		if (a[i] != a[j])
		{
			return -1;
		}
	}
	if (i == j)
	{
		return 1;
	}

}


