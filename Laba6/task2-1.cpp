/*Задание 2
    Написать функцию отображающую на экран треугольник заданной высоты
*/
#include <iostream>
// 1 cпособ построения треугольника с циклом for
using namespace std;

int main (){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << '@';
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 4; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << '#';
        }
        cout << endl;
    }
    cout << endl;
int d=0;
    for (int i = 4; i > 0; i--)
    {
            
        for (int j = 0; j < i-1; j++)
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
    d=4;
    for (int i = 0; i < 4; i++)
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
    cout << endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << '@';
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for (int i =0; i < 4; i++){
    //     for (int j = 0; j<=i; j++){
    //         cout <<' ';
    //     }
    //     cout << '0'<<endl;
    // }
    return 0;
}