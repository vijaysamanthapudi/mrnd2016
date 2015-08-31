#include<stdio.h>
#define size 10000
int check(char*);
void pass(char *a,char *b,char *s);
int main()
{
	char a[size], b[size], s[size];
	int  poss;
	printf("enter the string containing braces \n");
	gets(a);
	printf("enter the string you want to insert into the first string \n");
	gets(b);
	poss = check(a);
	if (poss == 1){

		printf("invalid braces string\n");
		exit(0);}
	else
		{pass(a,b,s);
		printf("%s",s);}
}
int  check(char *a)
{
	int i, length, j;
	for (length = 0; a[length]; length++);
	if (length % 2 != 0)
	{
		return 1;
	}
	for (i = 0, j = length - 1;i<j; i++, j--)
	{
		switch (a[i])
		{
		case '(':
			if (a[j] != ')')
				return 1;
			break;
		case '[':
			if (a[j] != ']')
				return 1;
			break;
		case '{':
			if (a[j] != '}')
				return 1;
			break;
		case '<':
			if (a[j] != '>')
				return 1;
			break;
		default:
			return 1;
		}
	}

}
void pass(char *a,char *b,char *s)
{
    int i,len,j;
    for (len = 0; a[len]; len++);
    for (i = 0; i < (len / 2); i++)
		{s[i] = a[i];}
	for (i, j = 0; b[j]; j++, i++)
		{s[i] = b[j];}
	for (j = (len / 2), i; a[j]; j++, i++)
		{s[i] = a[j];}
	s[i] = '\0';


}
