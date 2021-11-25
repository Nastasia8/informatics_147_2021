#include <iostream>

using namespace std;

void transfer_a(int *pvar)
{
    (*pvar) = 10;
}

void transfer_b(int *pvar)
{
    (*pvar) = 11;
}

void transfer_c(int *pvar)
{
    (*pvar) = 12;
}

int main()
{
    int a = 7;
    int b = 25;
    int c = 47;
    transfer_a(&a);
    cout <<"a = " << a << endl;
    transfer_b(&b);
    cout <<"b = " << b << endl;
    transfer_c(&c);
    cout <<"c = " << c << endl;
    return 0;
}
