#include<stdio.h>
#define size 10000
#define nochar 256
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
	int i ,count[nochar],len;
	for(len=0;a[len];len++);
	for(i=0;i<nochar;i++)
    {
        count[i]=0;
    }
    for(i=0;a[i];i++)
    {
        count[a[i]]++;


    }
    for(i=0;a[i];i++)
    {
         if(count[a[i]]>=len/2)
            {return a[i];}
    }
    return 0;

}
