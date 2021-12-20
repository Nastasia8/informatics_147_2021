#include <iostream>

using namespace std;
int main(){
    setlocale(LC_ALL, "ru");
    int a = 1;
    float b = 3.14;
    double c = 1.44;

    int* point_a = &a;
    float* point_b = &b;
    double* point_c = &c;

    cout << " Значение переменной a: " << *point_a << endl;
    cout << " Значение переменной b: " << *point_b << endl;
    cout << " Значение переменной c: " << *point_c << endl;

    return 0;
}