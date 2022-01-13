#include <iostream>
#include <cmath>
using namespace std;
void sum(int a, int b) {
    int s = 0;
    int c = b;
    while (a <= c){
        if (c%2 == 0) 
            {
                s = s + c;
                c = c - 1;
            }
        else 
            {
               c = c - 1;
            }
    }
cout << "Сумма чётных чисел промежутка = " << s << endl;
    }

int main() {
    int a, b;
    cout << "Введите два числа (границы диапазона)" << endl;
    cin >> a >> b;
    sum(a, b);
    return 0;
}
    