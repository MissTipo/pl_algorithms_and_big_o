/**
 * 1. bubblesort(array, size)
2. iterate over the array len
3. loop over the first loop (i -1)
4. if arr[j] > the next element,
5. create a temp variable to hold the value at arr[j]
6. swap the arr[j] with the next element
7. Assign the value in the temp variable to the next element
*/

#include <stdio.h>
#include <stdbool.h>

void bubblesort(int array[], int size)
{
	int i;
	int j;
	int temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = {7, -8, 90, 56, -2, 6};
	int size = 6;	

	for (int i = 0; i < size; ++i) 
	{
    		printf("%d  ", arr[i]);
	}
	printf("\nunsorted list\n");

	bubblesort(arr, 6);
	for (int i = 0; i < size; ++i)
        {
                printf("%d  ", arr[i]);

        }
        printf("\nsorted list\n");
}
