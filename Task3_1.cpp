// Гурьянов Илья, гр. 1/147.
// Задание №3, номер 1.
// Программа вычисляет сумму, произведение, деление, вычитание, возведение в степень двух чисел. Пользователь вводит числа и номер операции.

#include <iostream>
#include <cmath>

using namespace std;

float Addition(float a, float b) // сумма
{
    return a + b;
}

void Multiplication(float a, float b) // произведение
{
    cout << "x * y = " << a * b << endl; 
}

void Division(float a, float b) // деление
{
    cout << "x : y = " << a / b << endl; 
}

void Subtraction(float a, float b) // вычитание
{
    cout << "x - y = " << a - b << endl; 
}

void Raising(float a, float b) // возведение числа x в степень y
{
    cout << "x^y = " << pow(a, b) << endl; 
}

int main()
{
    float x, y; 
    int operation;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter 1 - Addition, 2 - Multiplication, 3 - Division, 4 - Subtraction, 5 - Raising 'x' to the power of 'y'." << endl;
    cout << "Enter the operation number: ";
    cin >> operation;
    switch(operation)
    {
        case 1:
            cout << Addition(x, y) << endl;
            break;
        case 2:
            Multiplication(x, y);
            break;
        case 3:
            Division(x, y);
            break;
        case 4:
            Subtraction(x, y);
            break;
        case 5:
            Raising(x, y);
            break;
        default:
            cout << "Enter 1 - Addition, 2 - Multiplication, 3 - Division, 4 - Subtraction, 5 - Raising 'x' to the power of 'y'." << endl;   
            break;    
    }

    return 0;
}