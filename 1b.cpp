#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float arr[] = {0.1, 0.35, 0.4, 0.55, 0.6};
    int size = sizeof(arr)/sizeof(arr[0]);
    float s;
    float y;
    for (int i = 0; i < size; i++)
    {
        s =  pow(asin(arr[i]), 2) + pow(acos(arr[i]), 4);
        y = pow(s, 3);
        cout << "f(" << arr[i] << ") = " << y << endl;
    }
    return 0;
} 