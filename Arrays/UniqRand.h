#pragma once
#include "constants.h"
#include "stdafx.h"

template <typename T>
void UniqueRand(T arr[], const int n, int minRand = 0, int maxRand = 100);
template <typename T>
void UniqueRand(T arr[ROWS][COLS], const int ROWS, const int COLS);