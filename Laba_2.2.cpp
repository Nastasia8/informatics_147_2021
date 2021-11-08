#include <iostream>
#include <cmath>
using namespace std;

float Perimeter (float, float, float, float);
float Square (float, float, float, float);
float Perimeter (float);
float Square (float);
float Perimeter (float, float);
float Square (float, float);

int main()
{
    float a; float b; float c; float d; float R;
    const float pi = 3.14;
    cout << "Trapez : "; cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cout << "Perimeter Trapez = " << Perimeter(a,b,c,d) << endl;
    cout << "Square = " << Square(a,b,c,d) << endl << endl;

    cout << "Kvadr : ";
    cin >> a;
    cout << "Perimeter Kvadr = " << Perimeter (a) << endl;
    cout << "Square = " << Square(a) << endl << endl;

    cout << "Curcle : "; cin >> R;
    cout << "Perimeter Circle = " << Perimeter (R, pi) << endl;
    cout << "Square Circle = " << Square (R, pi) << endl;

    return 0;
}

float Perimeter (float a, float b, float c, float d)
{
    return a + b + c + d;
}

float Square (float a, float b, float c, float d)
{
    return (a + b)/2 * pow( pow(c,2) - pow ( ( pow ((b-a), 2) + pow (c,2) - pow (d,2)) / (2*(b-a)), 2) , 0.5);
}

float Perimeter (float a)
{
    return 4*a;
}

float Square (float a)
{
    return pow(a,2);
}

float Perimeter (float R, float pi)
{
    return 2*R*pi;
}

float Square (float R, float pi)
{
    return pow(R,2)*pi;
}
