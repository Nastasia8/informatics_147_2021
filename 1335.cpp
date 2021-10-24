// дз норм решение --------------------------------------------
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
     const float a = 7.2;
     const float b = 1.3;
    float x_n = 1.56;
    float x_k = 4.71;
    float x_step = 0.63;
    float y;
    float x;
    int s;
    float i = x_n;
    for (i = x_n; i <= x_k; i += x_step);
    {       
             s = (a + (b * i)) / (pow(log10(i),3));
             y = pow(s, 0.2);
             std::cout << "F(" << i << ") = " << y << std::endl;
    } 
    return 0;
}
// 2 номер ---------
// #include<iostream>
// #include<cmath>
// using namespace std;
//     int main()
//     {
//         const float a = 7.2;
//         const float b = 1.7;
//         float arr[] = {2.4, 2.8, 3.9, 4.7, 3.16};
//         int size = sizeof(arr)/ sizeof(arr[0]);
//         float s;
//         for (int i = 0; i < size; i++)
//         {
//             s = (a + (b * i)) / (pow(log10(arr[i]),3));
//             std::cout << "f(" << arr[i] << ") = " << pow(s, 0.2) << std::endl;
//         }
//         return 0;
//     }