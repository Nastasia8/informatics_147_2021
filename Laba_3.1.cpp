#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x;
    float y;
    int number;
    cout << " Enter x, y " ;
    cin >> x >> y;
    cout << " Enter number of operation = " ;
    cin>> number;
    switch(number)
    {
        case 1:
            cout << x << " + " << y << " = " << x + y <<endl;
            break;
        case 2:
            cout << x << " * " << y << " = " << x * y <<endl;
            break;
        case 3:
            cout << x << " / " << y << " = " << x / y <<endl;
            break;
        case 4:
            cout << x << " - " << y << " = " << x - y <<endl;
            break;
        case 5:
            cout << x << " ^ " << y << " = " << pow (x , y) <<endl;
            break;
    }
    return 0;
} 
