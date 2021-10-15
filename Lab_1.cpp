#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float a = 2.0;
    const float b = 3.0;
    float x_n = 0.11;
    float x_k = 0.36;
    float x_step = 0.05;
    float y;
    for (float i = x_n; i <= x_k; i += x_step)
    {
        y = asin(pow(i, a)) + acos(pow(i, b));
        cout<<"f( "<< i << " ) = "<< y << endl;
    }
    
    return 0;
}
