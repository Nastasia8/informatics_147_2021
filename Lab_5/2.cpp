#include <iostream>
#include <cmath>
using namespace std;

void perevod(int n)
{
    int two = 0;
    int eight = 0;
    int sixteen = 0;
    int e = n;
    int s = n;
    for(int i = 0; n>0; i++)
    {
        two += (n % 2) * pow(10, i);
        n=n/2;
    }

    for(int i = 0; e>0; i++)
    {
        eight += (e % 8) * pow(10, i);
        e=e/8;
    }

    for(int i = 0; s>0; i++)
    {
        sixteen += (s % 16) * pow(10, i);
        s=s/16;
    }
    cout << "Число в двоичной системе равно " << two << endl;
    cout << "Число в восьмиричной системе равно " << eight << endl;
    cout << "Число в шестнадцатиричной системе равно " <<   sixteen << endl;
}

int main()
{   
    int n;
    cout << "Введите число в десятиричной системе счисления" << endl;
    cin >> n;
    if (n<0 or n>325)
    {
        cout << "Введите число в десятиричной системе счисления" << endl;
        cin >> n;
    } 
    
    perevod(n);

}
