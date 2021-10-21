/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int perimetr_squa(int);
int ploshad_squa(int);
float perimetr_krug(float, int);
float ploshad_krug(float, int);
int perimetr_trapez(int, int, int, int);
int ploshad_trapez(int, int, int); 

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c, d, r;
    int num1, num2, h; //переменные для высоты Трапеции
    const float pi = 3.1415;
 
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;                //ввод переменных для всех фигур
    cout << "c = ";
    cin >> c;
    cout << "d = ";
    cin >> d;
    cout << "r = ";
    cin >> r;
    cout << "pi = 3.1415" << endl;
    
    num1 = pow((a - b), 2) + c*c - d*d;
    num2 = 2 * (a - b);                       // нахождение высоты трапеции
    h = sqrt(c*c - pow((num1 / num2), 2));
    
    cout << "Периметр Квадрата (4*a) = " << perimetr_squa(a) << endl;
    cout << "Площадь Квадрата (a^2) = " << ploshad_squa(a) << endl;
    
    cout << "Периметр Круга (2*pi*r) = " << perimetr_krug(pi, r) << endl;          // вывод итогов функций
    cout << "Площадь Круга (pi*r^2) = " << ploshad_krug(pi, r) << endl;
    
    cout << "Периметр Трапеции (a+b+c+d) = " << perimetr_trapez(a, b, c, d) << endl;
    cout << "Площадь Трапеции (a+b)/2*h = " << ploshad_trapez(a, b, h) << endl; 
    
    return 0;
}

int perimetr_squa(int a)
{
    return 4 * a;    // периметр квадрата
}

int ploshad_squa(int a)
{
    return pow(a, 2);     // площадь квадрата
}

float perimetr_krug(float pi, int r)
{
    return 2 * pi * r;       // периметр круга
} 

float ploshad_krug(float pi, int r)
{
    return pi * pow(r, 2);   // площадь круга
}

int perimetr_trapez(int a, int b, int c, int d)
{
    return a + b + c + d;   // периметр трапеции
}

int ploshad_trapez(int a, int b, int h)
{
    return (a + b)/2 * h;  // площадь трапеции
}