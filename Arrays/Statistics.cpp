#include "Statistics.h"

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
	//���������� ����� ��������� �������
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
	//���������� ����� ��������� �������
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
	//���������� ����� ��������� �������
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
	//���������� ����� ��������� �������
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
	//���������� ����� ��������� �������
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
	//���������� ����� ��������� �������
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
	//���������� ����� ��������� �������
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
	//���������� ����������� �������� �� �������
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
	//���������� ����������� �������� �� �������
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

float minValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//���������� ����������� �������� �� �������
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
	//���������� ����������� �������� �� �������
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//���������� ����������� �������� �� �������
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
	//���������� ������������ �������� �� �������
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
	//���������� ������������ �������� �� �������
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//���������� ������������ �������� �� �������
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
	//���������� ������������ �������� �� �������
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

float maxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//���������� ������������ �������� �� �������
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
	//���������� ������������ �������� �� �������
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//���������� ������������ �������� �� �������
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