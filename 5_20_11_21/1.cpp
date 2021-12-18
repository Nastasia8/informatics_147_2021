#include <iostream>

using namespace std;
int f(int);

// fn это ferst number
//number это number
//f - function
int main()
{
    int fn;
    cout << "введите первое n в функции F(n) " ;
    cin >> fn;
    cout << endl;

    for(int i = fn; i <= (fn + 15) ; i++)
    {
        cout << "Function(" << i << ") = " << f(i) << endl;

    }
    return 0;
}

int f(int nb)
{
    switch(nb)
    {
        case 0:
            return 0;
        case 1:
            return 3;
        case 2:
            return 5;
        default:
            return f(nb - 1) + f(nb - 2) + f(nb - 3);
    }

}