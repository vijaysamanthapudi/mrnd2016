#include<stdio.h>
#define size 100000
void main()
{
	char *a[size], i;
	printf("enter the string\n");
	gets(a);

	int len = length(&a);
	printf("THe length is %d", len);
}

int length(char *a)
{
	int i = 0,len=0;

	for (i = 0; a[i]; i++);
	

	return i;


}