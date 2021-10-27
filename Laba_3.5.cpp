#include <iostream>
#include <cmath>

using namespace std;

float calculateDiscriminant(float x, float y, float z)
{
    return pow (y , 2) - 4 * x * z;
}

void calculateRoot (float x, float y, float z)
{
    float D;
    D = calculateDiscriminant(x, y, z);
    if (D < 0)
    {
        cout << "korney ne sushchestvuyet" << endl;
    }
    else if (D == 0)
    {
        cout << "koren' raven " << -y/(2*x) << endl;
    }
    else
    {
        cout << "First koren' raven " << (-y+ sqrt(D))/(2*x) << endl;
        cout << "Second koren' raven " << (-y- sqrt(D))/(2*x) << endl;
    }
}


int main()
{
    float x, y, z;
    cout << "Enter x, y, z" << endl;
    cin >> x >> y >> z ;
    calculateRoot (x, y, z);
    //int begin_a = 3;
    //int begin_b = 12;
    //int sum1 = 0;
    //while (begin_a < begin_b)
    //{
    //    sum1 +=(begin_a%2==0)?begin_a:0;
    //    begin_a += 1;
    //}
    //cout << sum1 << endl;
    return 0;
}