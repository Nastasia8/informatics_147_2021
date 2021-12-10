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
    float a, b;
    cout << "Enter a, b ";
    cin >> a >> b;
    
    change(&a , &b);
    cout << endl << "a = " << a << "    b = " << b << endl;
    return 0;
}
