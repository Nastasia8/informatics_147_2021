#include <iostream>
#include <cmath>

using namespace std;

float Stoim12(int, int);
float Stoim6(int, int);
float Stoim3(int, int);

const float I = 15;

int main()
{
    int P, n;
    cout << "Пожалуйста введите сумму вклада: ";
    cin >> P;
    cout << "Пожалуйста выберите и введите срок депозита (3, 6, 12 месяцев): ";
    cin >> n;
    
    switch (n)
    {
        case 12:
            cout << "Сумма вклада за 12 месяцев равна " << Stoim12(P, n) << endl;
            break;
        
        case 6:
            cout << "Сумма вклада за 6 месяцев равна " << Stoim6(P, n) << endl;
            break;
            
        case 3:
            cout << "Сумма вклада за 3 месяца равна " << Stoim3(P, n) <<endl;
            break;
    }
    
    return 0;
}

float Stoim12(int P, int n)
{
    float m = 12;
    return P * pow(1 + ((I/100)/(m/12)), m/12*n);  //стоимость вклада за 12 месяцев
}

float Stoim6(int P, int n)
{
    float m = 6;
    return P * pow(1 + ((I/100)/(m/12)), m/12*n);  //стоимость вклада за 6 месяцев
}

float Stoim3(int P, int n)
{
    float m = 3;
    return P * pow(1 + ((I/100)/(m/12)), m/12*n);   //стоимость вклада за 3 месяца
}