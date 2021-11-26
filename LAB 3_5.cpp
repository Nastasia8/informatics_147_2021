#include <iostream>
#include <cmath>

using namespace std;

float Discrim(int x, int y, int z)
{
    return pow(y, 2) - 4*x*z;
}

float rootOnly(int x, int y)
{
    return -y/(2*x);
}

float rootOneTwo(float D, int x, int y)
{
    float f1 = (-y+sqrt(D))/(2*x);
    cout << "Первый корень = " << f1 << endl;
    float f2 = (-y-sqrt(D))/(2*x);
    cout << "Второй корень = " << f2 <<endl;
    return 0;
}

int main()
{
    int x, y, z;
    cout << "Ввести x, y , z через пробел: ";
    cin >> x >> y >>z;
    float D = Discrim(x, y, z);
    cout << "Дискриминант D = " << D << endl;
    
    if (D < 0)
        {
            cout << "Корни остутствуют";
        }
    else if (D == 0)
        {
            cout << "Корень равен =" << rootOnly(x, y);
        }
    else
        rootOneTwo(D, x, y);
        
    return 0;
}
