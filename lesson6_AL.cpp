#include <iostream>
using namespace std;

void foo1() {
	int arr2[3][3] = { {1, 9, 2}, {5, 7, 6}, {4, 3, 8} };
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j)
			cout << arr2[i][j] << " ";
		cout << endl;
	}
	int temp;
	for (int k = 0; k < 9; ++k)
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 2; ++j)
				if (arr2[i][j] >= arr2[i][j + 1]) {
					temp = arr2[i][j];
					arr2[i][j] = arr2[i][j + 1];
					arr2[i][j + 1] = temp;
				}

			if (arr2[i][2] > arr2[i + 1][0] && i < 2) {
				temp = arr2[i][2];
				arr2[i][2] = arr2[i + 1][0];
				arr2[i + 1][0] = temp;
			}
		}
	cout << endl;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j)
			cout << arr2[i][j] << " ";
		cout << endl;
	}
};

int foo2(int x)

{
	return (sqrt(fabs(x)) + 5.0 * pow(x, 3.0));
}

void invert(int arr[], int len) {
	int temp = 0, fil = (len-1)/2;
	for (int i = 0; i <= fil; i++)
	{
		temp = arr[len - i-1];
		arr[i] = arr[len - i-1];
		arr[len-1] = temp;
	}
}

void fillArr(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "Введите элемент номер " << i << endl;
		cin >> arr[i];
	}
}

int main(int argc, char* argv[]) {
	
	setlocale(LC_ALL, "ru");
	foo1();
	const int size = 11;
	int y;
	int A[size];
	fillArr(A, size);
	invert(A, size);
	
	for (int i = 0; i < 11; i++)
	{
		cout << A[i] << "\t";
	}
	cout << endl;

	for (int i = 10; i >= 0; i--)
	{
		y = foo2(A[i]);
		if (y > 400.0)
		{
			cout << " element " << i << " TOO LARGE\t" << y << endl;
		}
		else
		{
			cout << "\t" << y << endl;
		}
	}
	
	return 0;
}