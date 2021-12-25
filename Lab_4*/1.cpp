#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, h, x, ot1, ot2;
    cout << "Enter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin >> b;
    cout << "Enter step = ";
    cin >> h;
    cout << endl;
    cout << "x\ty" <<endl;
    bool isTrue = true;
    for(x=a; x<=b; x+=h)
    {
        float f1= x*x - sin(5*x);
        float f2 = (x+h)*(x+h) - sin(5*(x+h));
        if((((f1 > 0) && (f2 < 0)) || ((f1 < 0) && (f2 > 0)) ) && isTrue)
        {
            ot1 = x;
            ot2 = x+h;
            isTrue = false;
        }

        cout << x << "\t"<< f1 << endl;
    }
    cout << ot1 <<"; "<< ot2 <<endl;
    return 0;
}
///Не совсем поняла что нужно делать, смогла только до сюда дойти
