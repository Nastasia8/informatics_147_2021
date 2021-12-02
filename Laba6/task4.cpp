/*Задание 4
    Найти сумму ряда
*/
#include <iostream>

using namespace std;

int fact(int n) // факториал
{
    if (n < 0) return 0;
    if (n == 0) return 1;
    else return n*fact(n-1);
}
float SumR(float n){ // функция суммы ряда
    float answ, k_1=1;
    for (float k = 1; k <= n; k++){
        answ += (-1) * k * (5-k)/fact(k);
    }
    return answ;
}

int main (){
float n;
cout << "Введите число n: ";
cin >> n;
cout <<"Ответ: " <<SumR(n)<<'\n';
    return 0;
}