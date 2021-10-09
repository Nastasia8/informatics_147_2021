#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float b = 2.5;
    float arr[] = {1.1, 2.4, 3.6, 1.7, 3.9};   
    int size = sizeof(arr)/sizeof(arr[0]);
    float s;
    for (int i = 0; i < size; i++)
    {
        s = pow(b, 3) + pow(arr[i], 3);
        cout << "f(" << arr[i] << ") = " << (1 + pow(sin(s), 2))/pow(s, 1/3) << endl;
    }

    return 0;
}
