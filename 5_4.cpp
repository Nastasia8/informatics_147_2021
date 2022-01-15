#include<iostream>
using namespace std;

int NOD(int a, int b) {
    while ((a!=0) and (b!=0))
        {
            if (a>b)
            {
                a = a%b;
            }
            else{
                b = b%a;
            }
        }
        return a+b;
}

int main() {
    int a, b, NOK;
    cout << "Введите два числа" << endl;
    cin>>a;
    cin>>b;
    cout << "NOK ("<<a<<"; "<<b<<") = " <<(a*b) / NOD(a,b);
    return 0;
}
