#include<iostream>
#include<cmath>
using namespace std;

int pir(int, int, int);
float plos(float, float, float);

// круг
float circle(float);
float circle_S(float);

// квадрат

int squar_P(int);
int squar_S(int);

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "введите значения трапеции" << endl;
            int a, b, c;
            float h;
            cout << "a =";
            cin >> a;
            cout << "b =";
            cin >> b;
            cout << "c =";
            cin >> c;
            cout << "h =";
            cin >> h;
            cout << "Пириметр =" << pir(a, b, c) << endl;
            cout << "Площадь =" << plos(a, b, h) << endl;

    // круг ------------------------------------------------

    cout << "введите радиус круга" << endl;
                    float r;
                    cout << "r =";
                    cin >> r;
                    cout << "круг =" << circle(r) << endl;
                    cout << "площадь круга  =" << circle_S(r) << endl;


    // квадрат ---------------------------------------------
    cout << "введите сторону квадрата" << endl;
                                int q;
                                cout << "a =";
                                cin >> q;
                                cout << "squar_P =" << squar_P(q) << endl;
                                cout << "squar_S =" << squar_S(q) << endl;
     return 0;
}


//трапеция 
int pir(int a, int b, int c)
{
    return a + b + 2 * c;
}

float plos(float a, float b, float h)
{
    return (a + b) / 2 * h;
}
// круг

float circle(float r)
{
    return (2 * 3.14 * r);
}
float circle_S(float r)
{
    return (3.14 * pow(r,2));
}
// квадрат 
int squar_P(int q)
{
    return (q * 4);
}
int squar_S(int q)
{
    return (pow(q,2));
}