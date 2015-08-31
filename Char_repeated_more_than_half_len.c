#include<stdio.h>
#define size 10000
char pass(char a[]);
void main()
{
	char a[size],ans;
	
	printf("enter the first string\n");
	gets(a);
	ans=pass(a);
	if (ans > 0)
	{
		printf("%c", ans);
	}
	else
	{
		printf("no character");
	}
	
	
		

}
char  pass(char a[])
{
	int i, count = 0,j;
	for (i = 0; a[i]; i++)
	{
		count = 0;
		for (j = 0; a[j]; j++)
		{
			if (a[i] == a[j])
			{
				count++;
				
			}
	  }
		if (count >= (strlen(a) / 2))
		{
			return a[i];
		}	
}

	
			return 0;
	
}
