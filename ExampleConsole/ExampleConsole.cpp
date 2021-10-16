#include <iostream>
#include "Triangles.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, ".1251");
    double A, B, C;
    cout << "Введите А = ";
    cin >> A;
    cout << "Введите B = ";
    cin >> B;
    cout << "Введите C = ";
    cin >> C;
    try {
        cout << "Периметр = " << TrianglesFuncs::MyTrianglesFuncs::Perimeter(A, B, C) << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Периметр:" << endl;
        cout << "Ошибка: " << e.what() << endl;
    }
    try {
        cout << "Площадь = " << TrianglesFuncs::MyTrianglesFuncs::Area(A, B, C) << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Площадь:" << endl;
        cout << "Ошибка: " << e.what() << endl;
    }
}
