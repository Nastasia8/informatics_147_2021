#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float a = 2.0;
    const float b = 3.0;
    float arr[] = {0.08, 0.26, 0.35, 0.41, 0.53};
    int size = sizeof(arr)/sizeof(arr[0]);
    float y;
    for (int i = 0; i < size; i ++)
    {
        y = asin(pow(arr[i], a)) + acos(pow(arr[i], b));
        cout<<"f( "<< arr[i] << " ) = "<< y << endl;
    }
    
    return 0;
}
