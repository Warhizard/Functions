#include "Sort.h"

template <typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}

	}
}

template <typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i + 1; j < COLS; j++)
		{
			if (arr[i][j] < arr[i + 1][j + 1])
			{
				T buffer = arr[i][j];
				arr[i + 1][j + 1] = arr[i][j];
				arr[i][j] = buffer;
			}
		}
	}

}