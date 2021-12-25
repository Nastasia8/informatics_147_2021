#include <iostream>
#include <cmath>
using namespace std;

int factorial (int k)
{
    int i;
    int fact;
    i=1;
    fact=1;
    while (i<k)
    {
        fact=fact*i;
        i+=1;
    }
    cout << fact << endl;
    return fact;
}


int main ()
{
    int k, n;
    float sum;
    k=1;
    cout << "Введите число элементов ряда " << endl;
    cin >> n;
    sum = (-4);
    while (n>k)
    {
        sum += (-1)*k*(5-k)/factorial(k);
        cout << sum << endl;
        k+=1;
    }
    cout << "Сумма элементов ряда равна " << sum << endl;
    return 0;
}
/// Программа неправильно выводит ответ. При n=2 выдаёт ответ (-8). Должно быть (-7). Ошибку найти не могу. Помогите, пожалуйста.
