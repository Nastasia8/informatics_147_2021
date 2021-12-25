#include <iostream>
#include <cmath>

int main() {

    float x, y;
    int operationType;

    cout << "Enter x number: ";
    cin >> x;
    cout << "Enter y number: ";
    cin >> y;

    cout << "Select operation type : " << endl // выбор типа операции 
    << "1. Addition" << endl
    << "2. Subtraction" << endl
    << "3. Multiplication" << endl
    << "4. Division"  << endl
    << "5. X power Y" << endl;

    switch (selection)
            {
            case 1:
                cout << "x + y = " << x + y << endl;
                break;
            case 2:
                cout << "x - y = " << x - y << endl;
                break;
            case 3:
                cout << "x * y = " << x * y << endl;
                break;
            case 4:
                if (y == 0) {
                    cout << "Operation restricted" << endl;
                } else {
                    cout << "x / y = " << x / y << endl;
                }
                break;
            case 5:
                if (x == 0 && y <= 0)
                {
                    cout << "Opetaion restricted" << endl;

                } else {
                    cout << "x ^ y = " << pow(x , y) << endl;
                }
                break;
    return 0;
}
