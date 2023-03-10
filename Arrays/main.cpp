#include <iostream>
using namespace std;

#define delimiter "\n-----------------------------------------------------------\n"

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n, int minRand=0, int maxRand=100);
void FillRand(double arr[], const int n, double minRand = 0, double maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[], const int n, float minRand = 0, float maxRand = 100);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[], const int n, char minRand = 0, char maxRand = 100);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);



void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS,const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float arr[], const int n);
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[], const int n);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);


int Sum(int arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[], const int n);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float arr[], const int n);
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char arr[], const int n);
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[], const int n);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
float Avg(float arr[], const int n);
float Avg(float arr[ROWS][COLS], const int ROWS, const int COLS);
char Avg(char arr[], const int n);
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[], const int n);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
float minValueIn(float arr[], const int n);
float minValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);
char minValueIn(char arr[], const int n);
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[], const int n);
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[], const int n);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
float maxValueIn(float arr[], const int n);
float maxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(char arr[], const int n);
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(double arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(float arr[], const int n, int number_of_shifts);
void shiftLeft(float arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(char arr[], const int n, int number_of_shifts);
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(double arr[], const int n, int number_of_shifts);
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(float arr[], const int n, int number_of_shifts);
void shiftRight(float arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(char arr[], const int n, int number_of_shifts);
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void Sort(int arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[], const int n);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(float arr[], const int n);
void Sort(float arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arr[], const int n);
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS);

void UniqueRand(int arr[], const int n, int minRand, int maxRand);
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(double arr[], const int n);
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(float arr[], const int n);
void UniqueRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(char arr[], const int n);
void UniqueRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Search(int arr[],const int n);


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

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	//заполнение случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void FillRand(double arr[], const int n, double minRand, double maxRand)
{
	if (minRand > maxRand)
	{
		double buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100;
	//заполнение случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % int((maxRand - minRand) + minRand);
		arr[i] /= 100;
	}
}

void FillRand(float crr[], const int n, float minRand, float maxRand)
{
	if (minRand > maxRand)
	{
		float buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100;
	//заполнение случайными числами
	for (int i = 0; i < n; i++)
	{
		crr[i] = rand() % int((maxRand - minRand) + minRand);
		crr[i] /= 100;
	}
}

void FillRand(char arr[], const int n, char minRand, char maxRand)
{
	if (minRand > maxRand)
	{
		char buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100;
	//заполнение случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}


void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void Print(int arr[], const int n)
{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
}

void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Print(float arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Print(char arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
int Sum(int arr[], const int n)
{
    int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает сумму элементов массива
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
	cout << endl;
}


double Sum(double arr[], const int n)
{
	//возвращает сумму элементов массива
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
	cout << endl;
}

double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает сумму элементов массива
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
	cout << endl;
}

float Sum(float arr[], const int n)
{
	//возвращает сумму элементов массива
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
	cout << endl;
}

float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает сумму элементов массива
	float sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
	cout << endl;
}

char Sum(char arr[], const int n)
{
	//возвращает сумму элементов массива
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
	cout << endl;
}

char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает сумму элементов массива
	char sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
	cout << endl;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	
	return (double)Sum(arr, ROWS, COLS) / ROWS, COLS;
}
double Avg(double arr[], const int n)
{
	
	return (double)Sum(arr, n) / n;
}

double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	
	return (double)Sum(arr, ROWS, COLS) / ROWS, COLS;
}


float Avg(float arr[], const int n)
{
	
	return (float)Sum(arr, n) / n;
}

float Avg(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	
	return (float)Sum(arr, ROWS, COLS) / ROWS, COLS;
}

char Avg(char arr[], const int n)
{
	
	return (char)Sum(arr, n) / n;
}

char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	
	return (char)Sum(arr, ROWS, COLS) / ROWS, COLS;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
		return min;
	}
}


double minValueIn(double arr[], const int n)
{
	
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;

}

double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает минимальное значение из массива
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
		return min;
	}
}


float minValueIn(float arr[], const int n)
{
	//возвращает минимальное значение из массива
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

float minValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает минимальное значение из массива
	float min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
		return min;
	}
}


char minValueIn(char arr[], const int n)
{
	//возвращает минимальное значение из массива
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает минимальное значение из массива
	char min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
		return min;
	}
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает максимальное значение из массива
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
		return max;
	}
}

double maxValueIn(double arr[], const int n)
{
	//возвращает максимальное значение из массива
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает максимальное значение из массива
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
		return max;
	}
}

float maxValueIn(float arr[], const int n)
{
	//возвращает максимальное значение из массива
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

float maxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает максимальное значение из массива
	float max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
		return max;
	}
}

char maxValueIn(char arr[], const int n)
{
	//возвращает максимальное значение из массива
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает максимальное значение из массива
	char max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
		return max;
	}
}

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


void Sort(int arr[], const int n)
{
	for(int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}

	}
}

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i+1; j < COLS; j++)
		{
			if (arr[i][j] < arr[i+1][j+1])
			{
				int buffer = arr[i][j];
				arr[i+1][j+1] = arr[i][j];
				arr[i][j] = buffer;
			}
		}
	}
	
}

void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i+1; j < COLS; j++)
		{
			if (arr[i][j] < arr[i + 1][j + 1])
			{
				double buffer = arr[i][j];
				arr[i + 1][j + 1] = arr[i][j];
				arr[i][j] = buffer;
			}
		}
	}
	
}

void Sort(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	
}

void Sort(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i+1; j < COLS; j++)
		{
			if (arr[i][j] < arr[i + 1][j + 1])
			{
				float buffer = arr[i][j];
				arr[i + 1][j + 1] = arr[i][j];
				arr[i][j] = buffer;
			}
		}
	}
	
}

void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	
}

void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i+1; j < COLS; j++)
		{
			 if(arr[i][j] < arr[i + 1][j + 1])
			{
				char buffer = arr[i][j];
				arr[i + 1][j + 1] = arr[i][j];
				arr[i][j] = buffer;
			}
		}
	}
	
}

void UniqueRand(int arr[], const int n, int minRand, int maxRand)
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

void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
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


void UniqueRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] != arr[j])
			{
				return Print(arr, n);
			}
		}
	}
}

void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
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

void UniqueRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] != arr[j])
			{
				return Print(arr, n);
			}
		}
	}
	cout << endl;
}

void UniqueRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
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

void UniqueRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] != arr[j])
			{
				return Print(arr, n);
			}
		}
	}
	cout << endl;
}

void UniqueRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
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

void Search(int arr[],const int n)
{
	cout << endl;
	int coll = 0, ogr = 0;
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
