#include <iostream>
using namespace std;

void FillRand(int arr[], const int n, int minRand=0, int maxRand=100);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);
void Sort(int arr[], const int n);
void UniqueRand(int arr[], const int n, int minRand, int maxRand);
void Search(int arr[],const int n);


void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {0,1,2,3,4,5,6,7,8,9};

	FillRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: "<< Sum(arr, n)<<endl;
	cout << "�������-�������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� ��������� �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� ��������� �������: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);
	UniqueRand(arr, n, -10, 10);
	cout << "���������� ��������� ����� � ������� � �������� ���������: " << endl;
	Print(arr, n);

	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "������������� ����� � �������: " << endl;
	Search(arr, n);
	Print(arr, n);

}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	if(minRand>maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand-minRand) + minRand;
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

int Sum(int arr[], const int n)
{
    int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
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

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
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

void shiftRight(int arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
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
void UniqueRand(int arr[], const int n, int minRand, int maxRand)
{
	//maxRand++;
	FillRand(arr, n, minRand, maxRand);
	//srand(time(NULL));
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
