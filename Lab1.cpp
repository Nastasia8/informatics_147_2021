#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const float a=7.2;
    const float b=4.2;
    float x_n=1.81;
    float x_k=5.31;
    float x_step=0.7;
    float y;
    for (float i = x_n; i<= x_k; i+=x_step)
    {
        y=sqrt((abs(a-b*i))/pow(log(i), 3));
        cout <<"f(" << i << ")=" << y << endl;
    }
    return 0;
}

}
