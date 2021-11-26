#include <iostream>
#include <cmath>

using namespace std;

void change(float *pa, float *pb)
{
    float c = *pa;
    *pa = *pb;      //замена переменных
    *pb = c;        //друг на друга
}

int main()
{
    float a, b;
    cout << "Введите любые 2 значения через пробел: ";
    cin >> a >> b;
    
    cout << "Значения до: a = " << a << ", b = " << b << endl;
    change (&a, &b);
    cout << "Значения после: a = " << a << ", b = " << b << endl;


    return 0;
}
