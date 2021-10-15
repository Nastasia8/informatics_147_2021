#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const float a=7.2;
    const float b=4.2;
    float arr[] = {2.4, 2.8, 3.9, 4.7, 3.16};
    int size = sizeof(arr)/sizeof(arr[0]);
    float y;
    for (int i = 0; i < size; i++)
    {
        y=sqrt((abs(a-b*arr[i]))/pow(log(arr[i]), 3));
        cout <<"f(" << arr[i] << ")=" << y << endl;
    }
    return 0;
}