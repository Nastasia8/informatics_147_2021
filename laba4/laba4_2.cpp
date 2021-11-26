#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");

    float x[8] = {3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8};

    float y[8] = {2.527, 2.635, 2.656, 2.563, 2.361, 2.048, 1.638, 1.118};

    int loong = sizeof(x) / sizeof(x[0]);
    float xi = 0;
    float yi = 0;
    float xi2 = 0;
    float xiyi = 0;
    float Q = 0;
    cout << "xi" << "\t" << "yi" << "\t" << "xi2" << "\t" << "xiyi" << endl;

    for (int i = 0; i < loong; i++)
    {
        xi += x[i];
        yi += y[i];
        xi2 += x[i] * x[i];
        xiyi += x[i] * y[i];
        cout << x[i] << "\t" << y[i] << "\t" << x[i] * x[i] << "\t" << x[i] * y[i] << endl;
    }

    cout << "Сумм xi" << "\t" << "Сумм yi" << "\t" << "Сумм xi2" << " " << "Сумм xiyi" << endl;
    cout << xi << "\t" << yi << "\t" << xi2 << "\t" << xiyi << endl;
    

    ////////////////////////.////////////////////////// Q 

    float zn1 = (xiyi * xi - xi2 * yi) / (xi * xi - xi2 * loong);
    float zn2 = (yi - zn1 * loong) / xi;

    for (int i = 0; i < loong; i++)
    {
        Q += pow((y[i] - (zn2 * x[i]) - zn1), 2);
    }

    cout << "Аппроксимируемая функция равна = " << zn2 << "x + " << zn1 << "A = " << Q << endl;
}