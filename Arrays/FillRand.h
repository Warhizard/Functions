#pragma once
#include "stdafx.h"
#include "constants.h"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, double minRand = 0, double maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[], const int n, float minRand = 0, float maxRand = 100);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[], const int n, char minRand = 0, char maxRand = 100);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);