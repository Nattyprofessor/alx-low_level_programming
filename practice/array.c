#include <stdio.h>
int main()
{
	int arr[5][3] = {{1,2,3}, {4,5,6}, {8,9,10}, {11,12,13}, {14,15,16}};
	int a,b;
	
	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 3; b++)
		{
		printf("value of [%d][%d] = %d\n", a, b, arr[a][b]);
		}
	}
	return (0);
}
