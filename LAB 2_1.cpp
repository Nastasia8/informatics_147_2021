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
    setlocale(LC_ALL, "rus");
    
    const int x = 1;
    const int y = 5;  // координаты вектора а(1;5;3)
    const int z = 3;
   
    float length_a = sqrt(x*x+y*y+z*z); //длина данного вектора a
    cout << "1.|a| = " << length_a << endl;
    
    float e_x = x/length_a;
    float e_y = y/length_a; // нахождение еденичного вектора, сонаправленного с данным
    float e_z = z/length_a;
    cout << "2. Еденич. вектор e = (" << e_x << "; " << e_y << "; " << e_z << ")" << endl;
    
    int i, j, k;
    cout << "Ввести координаты вектора: " << endl;
    cin >> i >> j >> k;
    cout << "Вектор b ={" << i << "; " << j << "; " << k << "}" << endl;
    float length_b = sqrt(i*i+j*j+k*k); // длина вектора b
    float cos_ab = (x*i+y*j+z*k)/(length_a*length_b); // косинус между векторами ab
    cout << "3. Скалярное произведение ab = " << length_a*length_b*cos_ab << endl; // скалярное умножение векторов
    cout << "4. Векторно произведение ab = {" << y*k-z*j << "; " << (-1)*(z*i-x*k) << "; " << x*j-y*i << "}" << endl;
                                                //вект. произвед. по формуле a × b = {aybz - azby; azbx - axbz; axby - aybx}
  return 0;
}
