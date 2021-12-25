#include <iostream>

using namespace std;

long double f(int k) 
{
    if (k < 0)//условия для к
    {
        return 0;
    }
    if (k == 0)
    {
        return 1;
    }
    else
    {
        return k * f(k - 1);
    }
}

int main()
{
    int n, sum = 0;//ниже уже считается по формуле
    cin >> n;
    for (int k = 1; k <= n; k++) 
    {
        sum += -1 * k * ((5 - k) / f(k));
    }
    cout << sum;
}