// Lab2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

double CalcSquare(double bottom, double top, double height)
{
    return 0.5 * (bottom + top) * height;
}

double CalcSquare(double side)
{
    return side * side;
}

double CalcSquare(double a, double b)
{
    return a * b * M_PI;
}

int main()
{
    double bottom, top, height, side, a, b;
        cout << "Enter the length of the bottom edge of the trapezoid: ";
        cin >> bottom;
        cout << "Enter the length of the top edge of the trapezoid: ";
        cin >> top;
        cout << "Enter the length of the height of the trapezoid: ";
        cin >> height;
        cout << "The area of the trapezoid is " << CalcSquare(bottom, top, height) << endl;
        cout << "Enter the length of the side of the square: ";
        cin >> side;
        cout << "The area of the square is " << CalcSquare(side) << endl;
        cout << "Enter the radius of the circle: ";
        cin >> a;
        b = a;
        cout << "The area of the circle is " << CalcSquare(a, b) << endl;
        return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
