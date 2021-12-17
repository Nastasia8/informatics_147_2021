#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,y,a,b;
    cout << "Введите два числа " << endl;
    cin >> x >> y;
    a = x;
    b = y;
    while((x!=0) and (y!=0))  
    {
        if(x > y)
        {
            x = x % y;
        } 
        else 
        {
            y = y % x;
        }
    }
    cout << a / (x+y) * b;
}
