#include "Shift.h"

void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{

		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i + 1][j + 1];
			}
			arr[ROWS - 1][COLS - 1] = buffer;
		}
	}
}

void shiftLeft(float arr[], const int n, int number_of_shifts)
{
	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void shiftLeft(float arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i + 1][j + 1];
			}
			arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

void shiftRight(int arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}

void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива вправо
	number_of_shifts = number_of_shifts % (ROWS * COLS);
	number_of_shifts = ROWS * COLS - number_of_shifts;
	shiftLeft(arr, ROWS, ROWS, COLS);
}

void shiftRight(double arr[], const int n, int number_of_shifts)
{
	//выполняет циклический сдвиг массива вправо
	shiftLeft(arr, n, n - number_of_shifts);
}

void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива вправо
	number_of_shifts = number_of_shifts % (ROWS * COLS);
	number_of_shifts = ROWS * COLS - number_of_shifts;
	shiftLeft(arr, ROWS, ROWS, COLS);
}

void shiftRight(float arr[], const int n, int number_of_shifts)
{
	//выполняет циклический сдвиг массива вправо
	shiftLeft(arr, n, n - number_of_shifts);
}

void shiftRight(float arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива вправо
	number_of_shifts = number_of_shifts % (ROWS * COLS);
	number_of_shifts = ROWS * COLS - number_of_shifts;
	shiftLeft(arr, ROWS, ROWS, COLS);
}

void shiftRight(char arr[], const int n, int number_of_shifts)
{
	//выполняет циклический сдвиг массива вправо
	shiftLeft(arr, n, n - number_of_shifts);
}

void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива вправо
	number_of_shifts = number_of_shifts % (ROWS * COLS);
	number_of_shifts = ROWS * COLS - number_of_shifts;
	shiftLeft(arr, ROWS, ROWS, COLS);
}