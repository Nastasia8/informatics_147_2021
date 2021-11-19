#include <iostream>

using namespace std;

int main (){
    float a = 1.4738f;
    int b = 30;
    char c = 'b';

    float *pa = &a;
    int *pb = &b;
    char *pc = &c;

    cout << "a = "<<*pa<<endl
         << "b = "<<*pb<<endl
         << "c = "<<*pc<<endl;
    return 0;
}