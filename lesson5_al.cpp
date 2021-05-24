#include <iostream>
using namespace std;

void showArr2(int** arr, size_t sizeX, size_t sizeY) {
	for (size_t i = 0; i < sizeX; i++)	{
		for (size_t j = 0; j < sizeY; j++)	{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void bobleSort(int* arr, int len)
{
	for (int i = 0; i < len - 1; ++i){
		for (size_t i = 0; i < len; i++)
		{

		}
		if (arr[i] > arr[i + 1])
		{
			swap(arr[i], arr[i + 1]);
		}
	}
	if (len > 0) bobleSort(arr, len - 1);
}

int main()
{
    int arr[3][3] = { 1, 9, 2, 
						5, 7, 6, 
							4, 3, 8 };
	for (size_t i = 0; i < 3; i++) {
		for (size_t j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
};

