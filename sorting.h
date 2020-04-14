#pragma once

#include <iostream>

using namespace std;

extern int sorted[10];

void merge(int *data, int start, int mid, int end);
void merge_sort(int *data, int start, int end);