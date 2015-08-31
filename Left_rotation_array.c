#define size 100000
#include<stdio.h>
void f(int arr[], int r, int n);
void rotate(int arr[], int n);
void main()
{
	int arr[size],n,i,r;
	printf("enter the noo of elements");
	scanf("%d", &n);
	if (n < 0)
	{
		printf("range can't be in negative");
		exit(0);
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);

	}
	printf("enter the rotation number");
	scanf("%d", &r);
	if (r< 0)
	{
		printf("rotate  can't be in negative");
		exit(0);
	}
	f(arr, r, n);
	for (i = 0; i <n; i++)
		printf("%d ", arr[i]);
	
}

void f(int arr[], int r, int n)
{
	int i,j,temp;
	for (i = 0; i < r; i++)
	{

		//rotate(arr, n);
		
			temp = arr[0];
			for (j = 0; j< n - 1; j++)
				arr[j] = arr[j + 1];
			arr[j] = temp;

	}
		
}

//void rotate(int arr[], int n)
//{
//	int i, temp;
//	temp = arr[0];
//	for (i = 0; i < n - 1; i++)
//		arr[i] = arr[i + 1];
//	arr[i] = temp;
//}




