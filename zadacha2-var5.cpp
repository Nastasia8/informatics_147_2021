#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a = -2.5;
    float b = 3.4;
    float arr[] = {2.89, 3.54, 5.21, 6.28, 3.48};
    float y;
    float s;
    float m;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > 5)
        {s = pow(a + b * arr[i], 2.5);
        m = cos(a * arr[i]);
        cout << "f(" << arr[i] << ") = " << s / 1.8 + pow(m, 3) << endl;}
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] >= 5)
        {s = pow(log10(pow(a, 2) + arr[i]), 2);
        m = pow(a + arr[i], 2);
        cout << "f(" << arr[i] << ") = " << s / m << endl;}
    }
    return 0;
}
