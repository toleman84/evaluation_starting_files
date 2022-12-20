#include <stdio.h>
#include <limits.h>

int min(int *array, int size);
int max(int *array, int size);

/*
       +----------------------------------------------------------------+
       |	               						|
       |	               						|
       |      Your task is to make two functions (max and min, 		|
       |      or maximum and minimum, etc., depending on the 		|
       |      language ) that receive a list of integers as input,	|
       |      and return the largest and lowest number in that list,	|
       |      respectively.						|
       |								|
       |	               						|
       +--------------------------- Outputs ----------------------------+
       |								|
       |								|
       |   * [4,6,2,1,9,63,-134,566]         -> max = 566, min = -134	|
       |   * [-52, 56, 30, 29, -54, 0, -110] -> min = -110, max = 56	|
       |   * [42, 54, 65, 87, 0]             -> min = 0, max = 87	|
       |   * [5]                             -> min = 5, max = 5	|
       |								|
       |								|
       +----------------------------------------------------------------+
*/

void print_array(int *arr, int size)
{
	int i = 0;

	for (; i < size; i++)
	{
		if (!i)
			printf("\n[");
		else
			printf(", ");
		printf("%d", arr[i]);
	}
	printf("]\n\n");
}

int main(void)
{
	int array1[7] = {-52, 56, 30, 29, -54, 0, -110};
	int array2[5] = {42, 54, 65, 87, 0};
	int array3[8] = {4, 6, 2, 1, 9, 63, -134, 566};
	int array4[1] = {5};

	print_array(array1, 7);

	printf("min -> %d should be equal to %d\n", min(array1, 7), -110);
	printf("max -> %d should be equal to %d\n", max(array1, 7), 56);

	print_array(array2, 5);

	printf("min -> %d should be equal to %d\n", min(array2, 5), 0);
	printf("max -> %d should be equal to %d\n", max(array2, 5), 87);

	print_array(array3, 8);

	printf("min -> %d should be equal to %d\n", min(array3, 8), -134);
	printf("max -> %d should be equal to %d\n", max(array3, 8), 566);


	print_array(array4, 1);

	printf("min -> %d should be equal to %d\n", min(array4, 1), 5);
	printf("max -> %d should be equal to %d\n\n", max(array4, 1), 5);


	return (0);
}
int min(int *array, int size)
{
	/* your code goes here */

	return 0;
}

int max(int *array, int size)
{
	/* your code goes here */

	return 0;
}
