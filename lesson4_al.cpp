#include <iostream>
#include <string>

using namespace std;

int routes(int x, int y) {
    if (x == 0 && y == 0) return 0;
    else if (x == 0 || y == 0) return 1;
    else return routes(x, y - 1) + routes(x - 1, y);
};

int main()
{
    const int x = 5;
    const int y = 5;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cout << routes(i, j);
            cout << "  ";
        }
        cout << endl;
    };

    return 0;
}
