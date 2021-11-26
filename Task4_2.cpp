// Гурьянов Илья, гр. 1/147.
// Задание №4, номер 2.
// В программе меняются местами значения двух переменных с использованием указателей (с помощью функции, в которую передаются адреса этих переменных указателям).

#include <iostream>

using namespace std;

void change(float *pa, float *pb)
{
    float c = *pa;
    *pa = *pb;
    *pb = c;
}

int main()
{
    float a = 34.5;
    float b = 67.9;
    cout << "a = " << a << "; " << "b = " << b << endl;
    change(&a, &b);
    cout << "a = " << a << "; " << "b = " << b << endl;

    return 0;
}