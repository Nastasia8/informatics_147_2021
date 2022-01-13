
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   float x_n = 0.26;
   float x_k = 0.66;
   float x_step = 0.08;
   float y;
   float s;
   for (float i = x_n; i<= x_k; i+=x_step)
   {
       s =  pow(asin(i), 2) + pow(acos(i), 4);
       y = pow(s, 3);
       cout << "f(" << i << ")=" << y << endl; 
   }
   return 0;
}
