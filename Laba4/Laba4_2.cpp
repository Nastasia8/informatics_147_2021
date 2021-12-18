#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float x[8] = {1.2, 1.4, 1.6, 1.8, 2.0, 2.2, 2.4, 2.6};
    float y[8] = {2.325, 2.515, 2.638, 2.700, 2.696, 2.626, 2.491, 2.291};
    int length = sizeof(x)/sizeof(x[0]);
    float Xi = 0;
    double Yi = 0;
    double Xi_2 = 0;
    double XiYi = 0;
    double Xi_3 = 0;
    double Xi_4 = 0;
    double Xi_2Yi = 0;
    double Q = 0;
    double Q_2 = 0;
    cout << setw(5) << "Xi" << setw(10) << "Yi" << setw(14) << "Xi^2" << setw(12) << "Xi^3" << setw(12) << "Xi^4" << setw(12) << "XiYi" << setw(12) << "Xi^2Yi" << endl;
    for (int i = 0; i < length; i++)
    {   
        Xi += x[i];
        Yi += y[i];
        Xi_2 += pow (x[i], 2);
        XiYi += x[i] * y[i];
        Xi_2Yi += pow(x[i], 2) * y[i];
        Xi_3 += pow(x[i], 3);
        Xi_4 += pow(x[i], 4);
        cout << "——————————————————————————————————————————————————————————————————————————————" << endl;
        cout << setw(5) << x[i] << "   |" << setw( 8 ) << y[i] << "   |" << setw( 8 ) << pow (x[i], 2) << "   |" << setw( 8 ) << pow(x[i], 3) << "   |" << setw( 8 ) << pow(x[i], 4) << "   |" << setw( 8 ) << x[i] * y[i] << "   |" << setw( 8 ) << pow(x[i], 2) * y[i] << endl;
    }
    cout << endl;
    cout << endl << setw(7) << "Σ Xi" << setw(11) << "Σ Yi" << setw(14) << "Σ Xi_2" << setw(13) << "Σ Xi_3" << setw(12) << "Σ Xi_4" << setw(13) << "Σ XiYi" << setw(14) << "Σ Xi_2Yi" << endl;
    cout << "——————————————————————————————————————————————————————————————————————————————" << endl;
    cout << setw(5) << Xi << "   |" << setw( 8 ) << Yi << "   |" << setw( 8 ) << Xi_2 << "   |" << setw( 8 ) << Xi_3 << "   |" << setw( 8 ) << Xi_4 << "   |" << setw( 8 ) << XiYi << "   |" << setw( 8 ) << Xi_2Yi << endl;

    // y = ax + b, выражаем

    double linb = (XiYi * Xi - Xi_2 * Yi) / (Xi * Xi - Xi_2 * length); // Александр Будусов помог
    double lina = (Yi - linb * length) / Xi;

    // Решение через метод Крамера

    double delta = (Xi_4 * Xi_2 * length + Xi_3 * Xi * Xi_2 + Xi_2 * Xi_3 * Xi - Xi_2 * Xi_2 * Xi_2 - Xi_4 * Xi * Xi - Xi_3 * Xi_3 * length);
    double del1 = (Xi_2Yi * Xi_2 * length + Xi_3 * Xi * Yi + Xi_2 * XiYi * Xi - Xi_2 * Xi_2 * Yi - Xi_2Yi * Xi * Xi - Xi_3 * XiYi * length);
    double del2 = (Xi_4 * XiYi * length + Xi_2Yi * Xi * Xi_2 + Xi_2 * Xi_3 * Yi - Xi_2 * XiYi * Xi_2 - Xi_4 * Xi * Yi - Xi_2Yi * Xi_3 * length);
    double del3 = (Xi_4 * Xi_2 * Yi + Xi_3 * XiYi * Xi_2 + Xi_2Yi * Xi_3 * Xi - Xi_2Yi * Xi_2 * Xi_2 - Xi_4 * XiYi * Xi - Xi_3 * Xi_3 * Yi);

    double a = del1 / delta;
    double b = del2 / delta;
    double c = del3 / delta;

    for (int i = 0; i < length; i++)
    {
        Q += pow((y[i] - (lina * x[i]) - linb), 2); //из методички
        Q_2 += pow((y[i] - a * x[i] * x[i] - b * x[i] - c),2);
    }
    cout << endl;
    cout << endl << "Аппроксимировали экспериментальные данные линейной зависимостью y = " << lina << "x + " << linb << " c невязкой Q = " << Q << " и квадратичной зависимостью y = " << a << "x^2 + " << b << "x " << c << " c  невязкой Q = " << Q_2 << endl;
    return 0;
}