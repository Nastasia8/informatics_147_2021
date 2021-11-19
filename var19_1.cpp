#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a = 2.0, x_n = 1.2, x_k = 4.2, x_step = 0.6, y, s;
    float x_arr[]={1.16, 1.32, 1.47,1.65, 1.93};
    cout << "Zadanie 1" << endl;
    for (float i = x_n; i < x_k; i = i + x_step)
    {
        cout << "Otvet: ";
        s = log10(a+i);
        y = (pow(s, 2))/(pow(a+i, 2));
        cout << "f(" << i << ") = " << y << endl;
    }
    cout << endl;
    cout << "Zadanie 2" << endl;
    int size = sizeof(x_arr)/sizeof(x_arr[0]); // узнали вес 1 элемента
    for (int i = 0; i < size; i++) //sizeof это определять кол-во бай
    {
        cout << "Otvet: ";
        s = log10(a+i);
        y = (pow(s, 2))/(pow(a+i, 2)); 
        cout << "f(" << x_arr[i] << ") = " << y << endl;
    }
    return 0;
}