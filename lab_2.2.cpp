#include <iostream>
#include <cmath>

using namespace std;

double S(double);// площадь квадрата
double P(double);// периметр квадрата
double S(double, double);// площадь треугольника
double P(double, double, double);// периметр треугольника
double S(double, double, double);// площадь трапеции
double P(double, double, double, double);// периметр трапеции

int main(){
    double a, h, b, c, d;
    cout << "Введите сторону квадрата: " << endl;
    cin >> a;
    cout << "Площадь квадрата равна " << S(a) << endl;
    cout << "Периметр квадрата равна " << P(a) << endl;
    cout << "Введите стороны и высоту треугольника: " << endl;
    cin >> a >> b >> c >> h;
    cout << "Площадь треугольника равна " <<S(a,h) << endl;
    cout << "Периметр треугольника равна " <<P(a, b, c) << endl;
    cout << "Введите основания, боковые сторны и высоту трапеции: " << endl;
    cin >> a >> b >> c >> d >> h;
    cout << "Площадь трапеции равна " << S(a,b,h) << endl;
    cout << "Периметр трапеции равна " << P(a,b,c,d) << endl;
    return 0;
}


double S(double side){ // площадь квадрата
    return side*side;
}
double P(double side){ // периметр квадрата
    return side * 4;
}
double S(double side,double height){ // площадь треугольника
    return side*height/2.0;
}
double P(double side, double a, double b){ // периметр треугольника
    return side + a + b;
}
double S(double sidea,double sideb,double height){ // площадь трапеции
    return (sidea+sideb)*height/2.0;
}
double P(double a, double b, double c, double d){ // периметр трапеции
    return a+b+c+d;
}
