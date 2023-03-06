#include "stdafx.h"
#include "constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Shift.h"
#include "Statistics.h"
#include "Sort.h"
#include "UniqRand.h"
#include "Search.h"

void main()
{
	setlocale(LC_ALL, "ru");
	const int n = 10;
	int arr[n] = {};
	cout << "INT:\n";
	FillRand(arr, n, 0, 100);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� �� �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� �� �������: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);
	UniqueRand(arr, n,-10,10);

	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	shiftRight(arr, n, n - number_of_shifts);
	Print(arr, n);

	cout << "DOUBLE:\n";
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "����� ��������� �������: " << Sum(brr, SIZE) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(brr, SIZE) << endl;
	cout << "����������� �������� �� �������: " << minValueIn(brr, SIZE) << endl;
	cout << "������������ �������� �� �������: " << maxValueIn(brr, SIZE) << endl;
	Sort(brr, SIZE);
	Print(brr, SIZE);
	UniqueRand(brr, SIZE);

	cout << delimiter << endl;

	cout << "FLOAT:\n";
	float crr[n] = {};
	FillRand(crr, n, 0, 100);
	Print(crr, n);
	cout << "����� ��������� �������: " << Sum(crr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(crr, n) << endl;
	cout << "����������� �������� �� �������: " << minValueIn(crr, n) << endl;
	cout << "������������ �������� �� �������: " << maxValueIn(crr, n) << endl;
	Sort(crr, n);
	Print(crr, n);
	UniqueRand(crr, n);

	cout << "CHAR:\n";
	char drr[n] = {};
	FillRand(drr, n, 0, 100);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(drr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(drr, n) << endl;
	cout << "����������� �������� �� �������: " << minValueIn(drr, n) << endl;
	cout << "������������ �������� �� �������: " << maxValueIn(drr, n) << endl;
	Sort(drr, n);
	UniqueRand(drr, n);

	cout << "INT_2:\n";
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� �� �������: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� �� �������: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	//Sort(i_arr_2, ROWS, COLS);
	//UniqueRand(i_arr_2, ROWS, COLS);


	//cout << "������� ���������� �������: "; cin >> number_of_shifts;
	//shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	//Print(i_arr_2, ROWS, COLS);
	//shiftRight(i_arr_2, ROWS, COLS, n - number_of_shifts);
	//Print(i_arr_2, ROWS, COLS);


	cout << "DOUBLE_2:\n";
	double i_brr_2[ROWS][COLS];
	FillRand(i_brr_2, ROWS, COLS);
	Print(i_brr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_brr_2, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(i_brr_2, ROWS, COLS) << endl;
	cout << "����������� �������� �� �������: " << minValueIn(i_brr_2, ROWS, COLS) << endl;
	cout << "������������ �������� �� �������: " << maxValueIn(i_brr_2, ROWS, COLS) << endl;
	shiftLeft(i_brr_2, ROWS, COLS, number_of_shifts);
	shiftRight(i_brr_2, ROWS, COLS, number_of_shifts);
	Sort(i_brr_2, ROWS, COLS);
	UniqueRand(i_brr_2, ROWS, COLS);

	cout << "FLOAT_2:\n";
	float i_crr_2[ROWS][COLS];
	FillRand(i_crr_2, ROWS, COLS);
	Print(i_crr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_crr_2, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(i_crr_2, ROWS, COLS) << endl;
	cout << "����������� �������� �� �������: " << minValueIn(i_crr_2, ROWS, COLS) << endl;
	cout << "������������ �������� �� �������: " << maxValueIn(i_crr_2, ROWS, COLS) << endl;
	shiftLeft(i_crr_2, ROWS, COLS, number_of_shifts);
	shiftRight(i_crr_2, ROWS, COLS, number_of_shifts);
	Sort(i_crr_2, ROWS, COLS);
	UniqueRand(i_crr_2, ROWS, COLS);

	cout << "CHAR_2:\n";
	char i_drr_2[ROWS][COLS];
	FillRand(i_drr_2, ROWS, COLS);
	Print(i_drr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_drr_2, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(i_drr_2, ROWS, COLS) << endl;
	cout << "����������� �������� �� �������: " << minValueIn(i_drr_2, ROWS, COLS) << endl;
	cout << "������������ �������� �� �������: " << maxValueIn(i_drr_2, ROWS, COLS) << endl;
	shiftLeft(i_drr_2, ROWS, COLS, number_of_shifts);
	shiftRight(i_drr_2, ROWS, COLS, number_of_shifts);
	Sort(i_drr_2, ROWS, COLS);
	UniqueRand(i_drr_2, ROWS, COLS);

		
}









