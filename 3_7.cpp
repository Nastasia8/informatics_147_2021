#include <iostream>
#include <cmath>
using namespace std;

void fun(int a, int b, char sym) {
    for (int i = 1; i <= a; i++) {
        for(int k = 1; k <= b; k++) {
            if ((i == 1) || (k == 1) || (i == a) || (k == b)) {
            cout << sym;
            }
            else { 
            cout << ' ';      
            }
        }
       cout << endl;
    }
}

int main ()
{
int a, b; 
char sym;
cout << "Введите высоту, ширину и символ для прямоугольника" << endl;
cin >> a >> b >> sym;
fun(a, b, sym);
return 0;
}
    