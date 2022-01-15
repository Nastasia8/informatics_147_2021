#include <iostream>
#include <cmath>
using namespace std;

void perevod(int n) {
    int dvoich = 0; 
    int vosm = 0;
    int shestnat = 0;
    int n1 = n;
    int n2 = n;
    for (int k = 0; n > 0; k++) 
    {
        dvoich += (n % 2) * pow(10.0, k);
        n = n/2; 
    }

    for (int k = 0; n1 > 0; k++)
    {
        vosm += (n1 % 8) * pow(10.0, k);
        n1 = n1/8;
    }
    
    for (int k = 0; n2 > 0; k++)
    {
        shestnat += (n2 % 16) * pow(10.0, k);
        n2 = n2/16;
    }
    
    cout << "В двоичной системе счисления: " << dvoich << endl; 
    cout << "В восьмиричной системе счисления: " << vosm << endl;
    cout << "В шестнадцатиричной системе счисления: " << shestnat << endl;
}

int main() {
    int n;
    cout << "Введите число от 0 до 325" << endl;
    cin >> n;
    while (n < 0 || n > 325) { 
        cout << "Нужно число от 0 до 325. Введите ещё раз" << endl;
        cin >> n;
    } 
    perevod(n);
    return 0;
}