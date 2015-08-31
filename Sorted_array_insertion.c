#include<stdio.h>
#define max 10
void check(int a[], int n, int   num);
void main()
{
	int a[max], n, i, num;
	printf("enter the sorted array");
	scanf("%d", &n);
	if (n < 0)                               // if negatve range is given programme terminates
	{
		printf("ivalid input");
		exit(0);
	}

	printf("enter the elements ");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("enter the num to be inserted");
	scanf("%d", &num);
	check(a, n, num);

}
void check(int a[], int n, int num)
{
	int i, index, x, y;

	if (num < a[0])                    // if given number is less than fiest element
	{
		for (i = n; i >= 0; i--)
		{
			a[i] = a[i - 1];

		}
		a[0] = num;
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			                                          // if it lies between the  first and last element
			if ((a[i] == num))                        // and it equal to any one of the elememt
			{
				index = i;
				y = n;
				while (y >= i)
				{
					a[y] = a[y - 1];
					y--;

				}
				a[index] = num;
				break;
			}
			

			if (num >= a[n - 1])
			{                                   // if number is greater than the last element
				a[n] = num;
			}
			
			if (a[i] < num &&num < a[i + 1])     // if it lies between the  first and last element
				                                 //all the distict elements
				{
					index = i;
					y = n;
					while (y > i)
					{
						a[y] = a[y - 1];
						y--;

					}
					a[index+1] = num;
					break;
				
			}


		}

	}
	for (i = 0; i<n + 1; i++)
	{
		printf("%d\n", a[i]);
	}
}


