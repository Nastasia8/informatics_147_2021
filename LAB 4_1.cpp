#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a = 8;
    float b = 8.97;  //изначальные переменные
    float c = 4.65;
    
    int *pa = &a;
    float *pb = &b;  // переменные с указанием на изначальные
    float *pc = &c;
    
    cout << "Значения переменных: a = " << *pa << " , b = " << *pb << " , c = " << *pc << endl;
    

    return 0;
}
