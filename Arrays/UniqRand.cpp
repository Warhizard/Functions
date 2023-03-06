#include "UniqRand.h"

template <typename T>
void UniqueRand(T arr[], const int n, int minRand, int maxRand)
{
	FillRand(arr, n, minRand, maxRand);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[j] == arr[i] && i != j)
			{
				arr[i] = minRand + rand() % (maxRand - minRand);
				j = 0;
			}
		}
	}
}

template <typename T>
void UniqueRand(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] != arr[i + 1][j + 1])
			{
				return Print(arr, ROWS, COLS);
			}
		}
	}
	cout << endl;
}