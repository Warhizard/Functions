#include "stdafx.h"
#include "constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Sum.h"














template <typename T>
T minValueIn(T arr[], const int n);
template <typename T>
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
T maxValueIn(T arr[], const int n);
template <typename T>
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
void shiftLeft(T arr[], const int n, int number_of_shifts);
template <typename T>
void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);


template <typename T> 
void shiftRight(T arr[], const int n, int number_of_shifts);
template <typename T> 
void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

template <typename T>
void Sort(T arr[], const int n);
template <typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
void UniqueRand(T arr[], const int n, int minRand=0, int maxRand=100);
template <typename T>
void UniqueRand(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
void Search(T arr[],const int n);


void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};
	cout << "INT:\n";
	FillRand(arr, n, 0, 100);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);
	UniqueRand(arr, n,-10,10);

	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	shiftRight(arr, n, n - number_of_shifts);
	Print(arr, n);

	cout << "DOUBLE:\n";
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(brr, SIZE) << endl;
	Sort(brr, SIZE);
	Print(brr, SIZE);
	UniqueRand(brr, SIZE);

	cout << delimiter << endl;

	cout << "FLOAT:\n";
	float crr[n] = {};
	FillRand(crr, n, 0, 100);
	Print(crr, n);
	cout << "Сумма элементов массива: " << Sum(crr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(crr, n) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(crr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(crr, n) << endl;
	Sort(crr, n);
	Print(crr, n);
	UniqueRand(crr, n);

	cout << "CHAR:\n";
	char drr[n] = {};
	FillRand(drr, n, 0, 100);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(drr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(drr, n) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(drr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(drr, n) << endl;
	Sort(drr, n);
	UniqueRand(drr, n);

	cout << "INT_2:\n";
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	//Sort(i_arr_2, ROWS, COLS);
	//UniqueRand(i_arr_2, ROWS, COLS);


	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	//Print(i_arr_2, ROWS, COLS);
	//shiftRight(i_arr_2, ROWS, COLS, n - number_of_shifts);
	//Print(i_arr_2, ROWS, COLS);


	cout << "DOUBLE_2:\n";
	double i_brr_2[ROWS][COLS];
	FillRand(i_brr_2, ROWS, COLS);
	Print(i_brr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_brr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_brr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(i_brr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(i_brr_2, ROWS, COLS) << endl;
	shiftLeft(i_brr_2, ROWS, COLS, number_of_shifts);
	shiftRight(i_brr_2, ROWS, COLS, number_of_shifts);
	Sort(i_brr_2, ROWS, COLS);
	UniqueRand(i_brr_2, ROWS, COLS);

	cout << "FLOAT_2:\n";
	float i_crr_2[ROWS][COLS];
	FillRand(i_crr_2, ROWS, COLS);
	Print(i_crr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_crr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_crr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(i_crr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(i_crr_2, ROWS, COLS) << endl;
	shiftLeft(i_crr_2, ROWS, COLS, number_of_shifts);
	shiftRight(i_crr_2, ROWS, COLS, number_of_shifts);
	Sort(i_crr_2, ROWS, COLS);
	UniqueRand(i_crr_2, ROWS, COLS);

	cout << "CHAR_2:\n";
	char i_drr_2[ROWS][COLS];
	FillRand(i_drr_2, ROWS, COLS);
	Print(i_drr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_drr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_drr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(i_drr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(i_drr_2, ROWS, COLS) << endl;
	shiftLeft(i_drr_2, ROWS, COLS, number_of_shifts);
	shiftRight(i_drr_2, ROWS, COLS, number_of_shifts);
	Sort(i_drr_2, ROWS, COLS);
	UniqueRand(i_drr_2, ROWS, COLS);

		
}





template <typename T>
T minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template <typename T>
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
		return min;
	}
}

template <typename T>
T maxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template <typename T>
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает максимальное значение из массива
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
		return max;
	}
}
template <typename T>
void shiftLeft(T arr[], const int n, int number_of_shifts)
{
for (int i = 0; i < number_of_shifts; i++)
 {
	T buffer = arr[0];
	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[n - 1] = buffer;
 }
}

template <typename T>
void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0][0];
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

template <typename T>
void shiftRight(T arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}
template <typename T>
void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива вправо
	number_of_shifts = number_of_shifts % (ROWS * COLS);
	number_of_shifts = ROWS * COLS - number_of_shifts;
	shiftLeft(arr, ROWS, ROWS, COLS);
}

template <typename T>
void Sort(T arr[], const int n)
{
	for(int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
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
		for (int j = i+1; j < COLS; j++)
		{
			if (arr[i][j] < arr[i+1][j+1])
			{
				T buffer = arr[i][j];
				arr[i+1][j+1] = arr[i][j];
				arr[i][j] = buffer;
			}
		}
	}
	
}
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


template <typename T>
void Search(T arr[],const int n)
{
	cout << endl;
	T coll = 0, ogr = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				coll++;
			}


		}
		if (coll > 0 && arr[i] != ogr)
		{
			ogr = arr[i];
			cout << arr[i] << "|" << coll;
		}
		coll = 0;
		cout << "\t";
	}

}
