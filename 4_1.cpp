#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 10;
    float b = 8.1;  //изначальные переменные
    float c = 12.05;
// присваивание указателю адреаса переменных:
    int *pa = &a;  // *p - указатель
    float *pb = &b; 
    float *pc = &c;
    
    cout << "Значение переменной a = " << *pa << endl;
    cout << "Значение переменной b = " << *pb << endl;
    cout << "Значение переменной c = " << *pc << endl;
    return 0;
}
