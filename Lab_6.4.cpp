#include <iostream>

using namespace std;
//общая сумма уравнения
float Summa(int);
int factorial(int);

int main()
{
    int end_value;
    cout << "Enter the end value : " ;
    cin >> end_value;
    cout << "The sum of the series = " << Summa(end_value) << endl;

    return 0;
}

float Summa(int k)
{
    float Sum;
    for(int i = 1; i <= k; i++)
    {
        Sum += (-1) * i * static_cast<double>(5 - i)/factorial(i);
    }
    return Sum;
}

int factorial(int k)
{
    if (k>1)
        return k* factorial(k-1);
    return 1;
}