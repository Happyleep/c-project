#include <iostream>

void sort (int arr[], int size)
{
	int tmp = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < i; ++j)
		{
			if (arr[j] > arr[j+1])
			{	
				 tmp = arr[j];
				 arr[j] = arr[j+1];
				 arr[j+1] = tmp;
			}
		}
	}

}

int main ()
{
    int arr[] = {12, 4, 1, 54, 22};
    int size = sizeof(arr) /sizeof(arr[0]);
    sort(arr, size);
    for (int i = 0; i < size; ++i)
    {
	std::cout << arr[i] << " " ;
    }
    std::cout << std::endl;
    return 0;
}
