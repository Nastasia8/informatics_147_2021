/*Задание 2
    Написать функцию отображающую на экран треугольник заданной высоты
*/
#include <iostream>
// 1 cпособ построения треугольника с циклом for
using namespace std;
void Func(int n){
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << '@';
        }
        cout << endl;
    }
    cout << endl;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << '#';
        }
        cout << endl;
    }
    cout << endl;
    int d = 0;
    for (int i = n; i > 0; i--)
    {

        for (int j = 0; j < i - 1; j++)
        {
            cout << ' ';
        }
        d++;
        for (int c = 0; c < d; c++)
        {
            cout << '$';
        }
        cout << endl;
    }
    cout << endl;
    d = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ' ';
        }

        for (int c = 0; c < d; c++)
        {
            cout << '%';
        }
        d--;
        cout << endl;
    }
}

int main (){
    int n;
    cout << "Введите высоту треугольника: ";
    cin >> n;
    Func(n);
    return 0;
}