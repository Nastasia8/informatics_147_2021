#include <bits/stdc++.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    short a = -10;
    int b = 10;
    float c = 10.1;

    short *ptr_a = &a;
    int *ptr_b = &b;
    float *ptr_c = &c;

    cout << " Адрес: " << ptr_a << " Значение переменной: " << *ptr_a << endl;
    cout << " Адрес: " << ptr_b << " Значение переменной: " << *ptr_b << endl;
    cout << " Адрес: " << ptr_c << " Значение переменной: " << *ptr_c << endl;
    return 0;
}
