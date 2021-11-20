#include <iostream>
#include <cmath>

using namespace std;
float func(float);


int main()
{
    int x_nach = -2; int x_kon = 2; float step = 0.5;  float y1;  float y; float a; float b; float c; 
    float E = 1;

    printf("x\t y\n");
    
    for (float i = x_nach; i <= x_kon; i += step)
    {
        y1 = func(i);
        printf("%g \t %g \n",i,y1);
    }

    for (float i = x_nach; i <= x_kon; i += step)
    {
        y1 = func(i);
        if ( (y1 > 0 and y < 0) or (y1 < 0 and y > 0) )
        {
            a = b; 
            b = i; 
            break;
        }
        b = i; y = y1;
    }

    cout << endl << "a = " << a << "    b = " << b << endl << endl;
    
    printf("a\t b\t c\t b-a\t f(a)\t f(c)\t f(a)*f(c)\n");

    while (E > 0.0001)
    {
        c = (a + b)/2;
        E = b-a;
        printf("%g\t %g\t %g\t %g\t %g\t %g\t %g\n", a,b,c,(b-a),func(a), func(c), func(a)*func(c));
        if (func(a)*func(c) < 0)
        {
            b = c;
        }
        else 
        {
            a = c;
        }        
    }

    cout << endl << " c = " << c << endl;

    return 0;
}       

float func(float x)
{
    return pow(x , 5) - x - 0.2;
}
