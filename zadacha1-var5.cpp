#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a = -2.5;
    float b = 3.4;
    float x_n = 3.5;
    float x_k = 6.5;
    float x_step = 0.6;
    float y;
    for (float i = x_n; i <= 5; i = i + x_step)
    {
        y = (pow(a+b*i, 2.5))/1.8 + pow(cos(a*i), 3);
        cout << "f(" << i << ") = " << y << endl;
    }
    for (float i = x_n; i > 5; i = i + x_step)
    {
        y = (pow(log10(pow(a, 2)+i), 2))/pow(a+i, 2);
        cout << "f(" << i << ") = " << y << endl;
    }

    return 0;
}