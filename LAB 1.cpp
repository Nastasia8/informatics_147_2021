/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float a = 1.2;
    const float b = 0.48;
    float arr[] = {0.25, 0.36, 0.56, 0.94, 1.28};
    float arr2[] = {0.7, 1.0, 1.3, 1.6, 1.9, 2.2};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int size = sizeof(arr)/sizeof(arr[0]);
    float s;
    float y;
    for (int i = 0; i < size; i++){
        s = pow(b, 3) + pow(sin(arr[i]*a), 2);
        y = acos(pow(arr[i], 2)*b) + exp(-arr[i]/2);
        cout << "f("  << arr[i] << ") = " << s/y << endl;
    }
    
    cout << "----------------------------" << endl;
    
    for (int i = 0; i < size2; i++){
        s = pow(b, 3) + pow(sin(arr2[i]*a), 2);
        y = acos(pow(arr2[i], 2)*b) + exp(-arr2[i]/2);
        cout << "f("  << arr2[i] << ") = " << s/y << endl;
    }
    
// итоговые значения для второго массива показывают nan
    return 0;
}

