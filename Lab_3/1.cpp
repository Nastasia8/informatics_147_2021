#include <iostream>
#include <cmath>

using namespace std;

int calculateSum (int a, int b)
{
    return a+b;
}

void calculateSubstraction (int a, int b)
{
    cout << "Разность равна " << a-b << endl;
}

void calculateProduct (int a, int b)
{
    cout << "Произведение чисел равно " << a*b << endl;
}

void calculateQuotient (int a, int b)
{
    cout << "Частное равно " << a/b << endl;
}
void calculateExponentiation (int a, int b)
{
    cout << "Число x в с степени y равно " << pow(a, b) << endl;
}


int main()
{
    int x,y,n;
    cout << "Введите числа x и y через пробел " << endl;
    cin >> x >> y;
    cout << "Введите номер операции " << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << calculateSum(x,y) << endl;
        break;  
    case 2:
        calculateSubstraction(x,y);
        break; 
    case 3:
        calculateProduct(x,y);
        break;
    case 4:
        calculateQuotient(x,y);
        break;
    case 5:
        calculateExponentiation(x,y);
        break;
    default:
        cout << "Enter 1 - Summa, 2 - Substraction, 3 - Product, 4 - Quotient, 5 - Exponentiation" << endl;
        break;
    }
}
