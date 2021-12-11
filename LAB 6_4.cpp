#include <iostream>
#include <cmath>

using namespace std;

//нахождение факториала 

int main()
{
    
    int n;
    cout << "Ввести любое число: ";
    cin >> n;
    
    //int k = 1;
    int sum = 0;
    for (int k = 1; k <= n; k++)
    {
        sum += (-1) * k * ( (5-k) / 1 ); // !k - факториал k = 1 
    }
    
    cout << "Сумма ряда = " << sum;

    return 0;
}
