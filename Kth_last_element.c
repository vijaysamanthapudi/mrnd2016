#include<stdio.h>
#include<stdlib.h>
#define size 100000
char find(char a[], int x);
void main()
{
	
	char a[size],ans;
	int x;
	printf("enter the string\n");
	gets(a);
	if (a[0] == NULL)
	{                                                               //if empty string is give program terminates
		printf("empty string");
		exit(0);
	}
	printf("enter the kth index to find the character\n");
	scanf("%d", &x);
	if (x < 0)                                                       // if negative index is given programme terminates
	{
		printf("invalid index"); exit(0);
	}
	ans=find(a, x);
	printf("the character is %c", ans);
}

char find(char a[], int x)
{
	int i=0, j=1;
	
	while (j <=x)
	{
		if (a[j] == '\0')
		{                                                           //entire string is passed for checking
			printf("index out of bound ");
			exit(0);
		}
		j++;
	}

	while (a[j] != '\0')
	{
		i++; j++;
	}
	return a[i+1];


}

