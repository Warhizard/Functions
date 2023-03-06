#pragma once
#include "constants.h"
#include "stdafx.h"

template <typename T>
double Avg(T arr[], const int n);
template <typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
T minValueIn(T arr[], const int n);
template <typename T>
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
T maxValueIn(T arr[], const int n);
template <typename T>
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
T Sum(T arr[], const int n);
template <typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);