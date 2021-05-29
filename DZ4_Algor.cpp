#include <iostream>
using namespace std;

int ie, je;

void BinDig(int n)
{
    if (n >= 2)
        BinDig(n / 2);
    cout << ( n % 2);
}

int power(int base, int p) {
    if (p == 0) return 1;
    else return base * power(base, p - 1);
}

int power2(int a, int b) {
    if (b == 0) return 1;
    else if (b % 2 == 0) return a * a * power(a, b / 2);
    else return a * power(a, b - 1);
}

int routes(int x, int y) {
    if (x == ie && y == je) return 0;
    else {
        if (x == 0 && y == 0) return 0;
        else if (x == 0 || y == 0) return 1;
        else return routes(x, y - 1) + routes(x - 1, y);
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    int a = 0;
    cout << "Введите число в десятичном формате" << endl;
    cin >> a;
    BinDig(a);
    cout << endl;

    cout << "Введите основание степени" << endl;
    int base;
    cin >> base;
    cout << "Введите показаетль степени" << endl;
    int p;
    cin >> p;
    cout << power(base, p) << endl;
    cout << power2(base, p) << endl;

    cout << " Введите номер строки занятого поля X = " << endl;
    cin >> ie;
    cout << " Введите номер столба занятого поля Y = " << endl;
    cin >> je;

    const int x = 8;
    const int y = 8;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j)
                cout << routes(i, j) << "\t";
        cout << endl;
    };

    return 0;
}