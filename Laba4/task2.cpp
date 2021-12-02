/*Задание 2*/
#include <iostream>

using namespace std;

void replace(float *pa, float *pb){
    float c = *pa;
    *pa = *pb;
    *pb = c;
    cout << *pa<<" , "<<*pb<<")"<<endl;
}

int main()
{
    cout<<"Введите любые 2 числа: ";
    float a, b;
    cin >> a >> b;
    cout << "До ("<<a<<" , "<<b<<")\nПосле (";
    replace(&a, &b); // Операция замены
} 
