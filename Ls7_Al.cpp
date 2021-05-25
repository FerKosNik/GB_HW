#include <iostream>
using namespace std;

void showArr(int* a, int s)
{
	for (int i = 0; i < s; ++i)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
}
void swap(int *a, int *b)
{
	int *t = a;
	a = b;
	b = t;
}

void fillRandom(int arr[], int len, int border)
{
	for (int i = 0; i < len; ++i)
	{
		arr[i] = rand() % border;
	}
}

void sortInsert(int* arr, int len)
{
	int temp, pos;
	for (int i = 1; i < len; i++)
	{
		temp = arr[i];
		pos = i - 1;
		while (pos >= 0 && arr[pos] > temp)
		{
			arr[pos + 1] = arr[pos];
			--pos;
		}
		arr[pos + 1] = temp;
	}
}

void qs(int* arr, int first, int last) {
	int i = first;
	int j = last;

	int x = arr[(last + first) / 2];
	do
	{
		while (arr[i] < x) ++i;
		while (arr[j] > x) --j;

		if (i <= j) {
			swap(arr[i], arr[j]);
			++i;
			--j;
		}
	} while (i <= j);

	if (i < last) qs(arr, i, last);
	if (first < j) qs(arr, first, j);

}

int median(int* arr, int size) {
	int f, m, l, result;
	f = arr[0];
	m = arr[size / 2];
	l = arr[size - 1];
	result = (f + m + l) / 3;
	int i = 0;
	while (result <= arr[i]) {
		++i;
	}
	return i;
}

int main()
{
	const int size = 30;
	int arr[size];
	fillRandom(arr, size, 100);
	showArr(arr, size);

	// улучшенная быстрая сортировка
	if (size >= 10) {
		int temp = arr [size/2];
		arr[size / 2] = arr[median(arr, size)];
		arr[median(arr, size)] = arr[size / 2];
		qs(arr, 0, size-1);
	}
	else {
		sortInsert(arr, size);
	}
	// конец

	showArr(arr, size);

	return 0;
}
