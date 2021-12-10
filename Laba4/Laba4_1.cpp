#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, step, x, new_x1, new_x2, func_a, func_c;
    int t;
    cout << "Запишем отрезок в виде [a, b]" << endl;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    cout << "Введите желаемый шаг: ";
    cin >> step;
    cout << '\n' << " x " << "\t" << setw(3) << "y" << endl;
    //считаем значения функции и смотрим знак:
    t = 0;
    for(x = a; x <= b; x += step)
    {
        double znach_1 = pow(x, 3) - (0.1*pow(x,2)) + 0.3*x - 0.6;
        double znach_2 =  pow(x+1, 3) - (0.1*pow(x+1, 2)) + (0.3*(x+1)) - 0.6;
        if ((((znach_1 > 0) && (znach_2 < 0)) || ((znach_1 < 0) && (znach_2 > 0))) && (t == 0))
        {
            new_x1 = x;
            new_x2 = x + step;
            t += 1;
        }
        cout << x << "\t"<< znach_1 << endl;
    }
    cout << endl;
    cout << "Функция сменила знак в интервале x = [" << new_x1 << "; " << new_x2 << "]" <<endl;
    // уточнение корня:
    cout << '\n' << setw(7) << "a" << setw(10) << "b" << setw(14) << "c" << setw(15) << "b-a" << setw(15) << "f(a)" << setw(15) << "f(c)" << setw(18) << "f(a)*f(c)" << endl;
    t = 0;
    while (new_x2-new_x1 > 0.0001) 
    {   
        c = (new_x1 + new_x2) / 2;
        func_a = pow(new_x1, 3) - (0.1*(new_x1*new_x1)) + 0.3*new_x1 - 0.6;
        func_c = pow(c, 3) - (0.1*(c*c)) + 0.3*c - 0.6;
        cout << setw(8) << new_x1 << setw(10) << new_x2 << setw(15) << c << setw(15) << new_x2-new_x1 << setw(15) << func_a << setw(15) << func_c << setw(15) << func_a*func_c << endl;
        if (func_a*func_c < 0)
        {
            new_x2 = c;
        }
        else if (func_a*func_c > 0)
        {
            new_x1 = c;           
        }
        t +=1; 
    } 
    cout << '\n' << "Корень уравнения = " << c << endl;
    cout << "Количество затраченных шагов: "<< t <<endl;

    return 0;
}