
#include <iostream>
#include <cmath>

using namespace std;

float Summ(float, float);
float Proizved(float, float);
float Delen(float, float);
float Minus(float, float);
float Step(float, float);
   

int main()
{
    float x, y;
    cout << "Введите значения x и y" << endl;
    cin >> x >> y;
    
    int n;
    cout << "Выберите операция введя ее номер: 1 - Сумма, 2 - Умножение, 3 - Деление, 4 - Вычитание, 5 - Возведение в степень " << endl;
    cin >> n;
    
    switch (n)
    {
        case 1:
            cout << x << "+" << y << " = " << Summ(x, y) << endl;
            break;
            
        case 2:
            cout << x << "*" << y << " = " << Proizved(x, y) << endl;
            break;
            
        case 3:
            cout << x << "/" << y << " = " << Delen(x, y) << endl;
            break;
            
        case 4:
            cout << x << "-" << y << " = " << Minus(x, y) << endl;
            break;
            
        case 5:
            cout << x << "^" << y << " = " << Step(x, y) << endl;
            break;
            
        default:
            cout << "Неизвестная операция" << endl;
            break;
        
    }
    
    return 0;
}

float Summ(float x, float y)
{
    return x + y;                   //  сложения
}

float Proizved(float x, float y)
{
    return x * y;                   // умножения
}

float Delen(float x, float y)
{
    if (y==0)
    {
        cout << "Деление на ноль запрещено" << endl;    
        return false;
    }                                    //деление, с условием на запрет при делении на0
    
    else
    {
        return x / y;
    }
}

float Minus(float x, float y)
{
    return x - y;                           // вычитание
}

float Step(float x, float y)
{
    return pow(x, y);                       
}