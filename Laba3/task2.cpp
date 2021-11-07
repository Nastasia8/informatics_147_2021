#include <iostream>
#include <cmath>

using namespace std;
const int I = 15;
// Стоимость S суммы вклада за 12 месяцев
float Sum12(int P, int n){
    int m = 12;
    return P * pow(1+((I/100)/(m/12)), m/12*n);
}
// Стоимость S суммы вклада за 6 месяцев
float Sum6(int P, int n){
    int m = 6;
    return P * pow(1+((I/100)/(m/12)), m/12*n);
}
// Стоимость S суммы вклада за 3 месяца
float Sum3(int P, int n){
    int m = 3;
    return P * pow(1+((I/100)/(m/12)), m/12*n);
}

int main (){
    setlocale(0,"");
int P, n;
cout << "Введите сумму вклада P и срок депозита n: ";
cin >> P >> n;
cout << "Сумма вклада за 12 месяцев равна "<<Sum12(P, n)<<endl;
cout << "Сумма вклада за 6 месяцев равна "<<Sum6(P, n)<<endl;
cout << "Сумма вклада за 3 месяца равна "<<Sum3(P, n)<<endl;
    return 0;
}

// Почему у меня не считает по формуле?