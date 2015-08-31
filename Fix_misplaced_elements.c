#include<stdio.h>
void find(int a[], int n);
void swap(int a[], int x, int y);
#define size 100000
void main()
{
	int a[size], n, i;
	printf("enter the no of elements");
	scanf("%d", &n);
	if (n < 0)
	{
		printf("no of elements cant be in  negative"); exit(0);
	}
	printf("enter the elements\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	find(a, n);
	printf("--------------------------------\n");
		
	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}

	

}
void find(int a[], int n)
{
	int i, z = 1, index1 = 0, index2 = 0;
	for (i = 1; i < n - 1; i++)
	{

		if (a[0]>a[n - 1])
		{
			swap(a, 0, n - 1); break;
		}
		if (!(a[i - 1] < a[i] && a[i] < a[i + 1]))
		{
			if (z)
			{
				index1 = i;
				z = 0;
			}

			index2 = i;


		}
		if (a[0] > a[i])
		{
			swap(a, 0, i); break;
			
		}
		if (a[i] > a[n-1])
		{
			swap(a, i, n-1);
			break;
		}
		
	}
	swap(a, index1, index2);
}
void swap(int a[], int x, int y)
{
	int temp = a[x];
	a[x] = a[y];
	a[y] = temp;
}