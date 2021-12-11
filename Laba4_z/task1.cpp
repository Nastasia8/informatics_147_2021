#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;

float func(float i){
    return sin(i) * PI + i * i - 2;
}

bool znak (float y){
    if (y > 0) return false;
    else return true;

}

int main()
{ //1 Этап
    float x1 = 0, x2 = 0, res, step, y, x, a, b, c;
    int count = 1;
    cout << "Введите отрезок [x1, x2] через пробел: ";
    cin >> x1 >> x2;
    if (x1 < x2) // проверка на отрезок
    {
        cout <<"Ваш отрезок: ["<< x1 << ','<<x2<<"]\n";
    }
    else if (x1 > x2)
    {
        float m = x2;
        x2 = x1;
        x1 = m;
        cout <<"Ваш отрезок: ["<< x1 << ','<<x2<<"]\n";
    }
    else
    {
        cout << "Нет отрезка" << endl;
        return 0;
    } 
    cout << "Введите шаг: ";
    cin >> step;
    int num = abs((abs(x1) - abs(x2))/step);
    for (float i = x1; i <= x2; i+=step){
        cout << i << "\t-\t" << func(i)<<endl;
    }
    // 2 этап 
        y = func(x1);
        znak(y);
        if (znak(y) == true)
        {
            for (float i = x1; i <= x2; i += step)
            {
                y = func(i);
                if (y > 0)
                {
                    x = i;
                    break;
                }
                else if (y < 0)
                {
                    continue;
                }
            }
        }else{
            for (float i = x1; i <= x2; i += step)
            {
                y = func(i);
                if (y < 0)
                {
                    x = i;
                    break;
                }
                else if (y > 0)
                {
                    continue;
                }
            }
        }
    a = x-step;
    b = x;
    cout << "Промежуток ["<< a <<","<<b<<"]"<<endl;

    cout <<"a\tb\tc\tb-a\tf(a)\tf(c)\tf(a)*f(c)\n";
    for (int i = 1; (b-a) > 0.0001; i ++){
        c= (a+b)/2;
        cout << a << '\t'<<b <<'\t'<<c<<'\t'<< b-a<<'\t'<<func(a)<<'\t'<<func(c)<<'\t'<<func(a)*func(c)<<endl;
        count = i;
        if (func(a)*func(c) < 0){
            b = c;
        }else if (func(a)*func(c) > 0){
            a = c;
        }
    }
    cout <<"Корень уравнения: "<<c<<endl;
    cout << "Кол-во шагов: "<< count<<endl;
    return 0;
}