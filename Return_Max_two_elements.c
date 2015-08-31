#include<stdio.h>
#define size 100000
#define min -123456
void pass(int a[], int n, int b, int size2);
void main()
{
	int a[size], b[2], n, i, x, j, max = 0, size2 = 2;
	printf("enter the no of elements\n");
	scanf("%d", &n);
	printf("entee the elements\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	pass(a, n, b, size2);
	for (i = 0; i < 2; i++)
	{
		printf("%d\n", b[i]);
	}

}
void  pass(int a[], int n, int b[], int size2)
{
	int f, s, i, index1 = 0, index2 = 0, l = 0, k = 1;
	f = s = min;
	for (i = 0; i < n; i++)
	{
		if (a[i] > f)
		{
			s = f;
			f = a[i];
			
		}
		else if (a[i] >s && f != a[i])
		{
			s = a[i];
			
		}
	}

	b[k] = s;
	b[l] = f;



}