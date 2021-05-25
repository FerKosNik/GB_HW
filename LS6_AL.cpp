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

int main(int argc, char* argv[]) {
	foo1();
	return 0;
}
