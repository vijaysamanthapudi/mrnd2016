#include<stdio.h>
#define size 100000
#define size1 256
void pass(int a[],int n,int sum);
void main()
{
	int a[size], n, i,sum;
	printf("enter the no of elements");
	scanf("%d", &n);
	printf("enter the elements");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter the sum");
	scanf("%d", &sum);
	pass(a, n, sum);

	}
void  pass(int a[],int n,int sum)
{
	int i, j,count[size1];
	for(i=0;i<size1;i++)
    {
        count[i]=0;
    }
     for(i=0;i<n;i++)
     {

            count[a[i]]++;


     }
    for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] + a[j] == sum&&count[a[i]]!=0&&count[a[j]]!=0)
			{
				printf("%d %d\n", a[i], a[j]);
				count[a[i]]=0;
				count[a[j]]=0;
			}
		}
}

}
