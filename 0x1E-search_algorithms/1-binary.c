#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 *	using the binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: Return index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t n, low;
	
	if (array == NULL)
		return (-1);
	size -= 1;
        n = size;
        low = 0;

	if (size == 0)
        {
                print_array(array, low, n);
                if (array[size] == value)
                        return (size);
		return (-1);
	}
	return (value_search(array, size, low, n, value));
}


/**
 * value_search - Searches fo specified value in an array
 * @array: List of integer numbers sorted in an ascending order
 * @size: The total amount of numbers in the array.
 * @value: The element that the algorithm is trying to find.
 * @low: The low end of the array.
 * @high: The high end of the array.
 * Return: The index of the value, else -1
 */
int value_search(int *array, size_t size, size_t low, size_t high, int value)
{
	int mid;

	mid = size / 2 + low;

	print_array(array, low, high);

	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
	{
		low = mid + 1;
		size = high - low;
	}
	else if (array[mid] > value)
	{
		high = mid - 1;
		size = mid - low;
	}
	if (size == 0 && array[mid + 1] != value)
	{
		print_array(array, low, high);
		return (-1);
	}
	return (value_search(array, size, low, high, value));
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @low: least array index
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t low, size_t size)
{
	size_t i = low;

	printf("Searching in array: ");
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("%d\n", array[i]);
}
