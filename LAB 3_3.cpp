#include <iostream>
#include <cmath>

using namespace std;

float SumCh(float);
float ProizvCh(float);

int main()
{
    float k;
    cout << "Ввести значение k: ";
    cin >> k;
    cout << "Сумма числового ряда = " << SumCh(k) << endl;
    cout << "Произведение числового ряда = " << ProizvCh(k) << endl;

    return 0;
}

float SumCh(float k)
{
    float sum = 0;
    for (float n=1; n<=k; n++)
        {
            sum += 2 / ((2*n+1)*(2*n+3));
        }
    return sum;
}

float ProizvCh(float k)
{
    float prod = 1;
    for (float n=1; n<=k; n++)
        {
            prod *= pow(-1, (n-1)) + n;
        }
    return prod;
}