#include <iostream>
#include <cmath>
using namespace std;

float length(int x, int y, int z)
{
   return pow(( pow(x , 2) + pow(y , 2) + pow(z , 2) ), 0.5);
}

int main()
{
    const int x_1 = 1;
    const int y_1 = 5;
    const int z_1 = 3;
    //float x_2 = x_1 / length(x_1, y_1, z_1);
    //float y_2 = y_1 / length(x_1, y_1, z_1); 
    //float z_2 = z_1 / length(x_1, y_1, z_1);
    float x_2; float y_2; float z_2;
    cin >> x_2;
    cin >> y_2;
    cin >> z_2;
    float i = y_1*z_2 - y_2*z_1;
    float j = -(x_1*z_2 - x_2*z_1);
    float k = (x_1*y_2 - x_2*y_1);
    //cout << x_2<< " " << y_2 << " " << z_2 << endl << endl ;
    //cout << i<< " " << j << " " << k << endl << endl ;
    cout << "Length=" << length(x_1, y_1, z_1) << endl;
    cout << "Scalar_proizv="<< (x_1*x_2 + y_1*y_2 + z_1*z_2) << endl;
    cout << "( " << i  << " ; " << j << " ; " << k << " )" << endl;

    return 0;
}