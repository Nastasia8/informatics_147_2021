#include <iostream>

using namespace std;
int function(int);

// Написать функцию, определяющую последовательность чисел ряда в соответствии с
// указанной формулой: F(n)=F(n-1) + F(n-2) + F(n-3), причем первые три элемента
// последовательности равны F(0)=0, F(1)=3, F(2)=5. Отобразить 15 чисел заданной
// последовательности.

int main()
{
    int first_number;
    cout << "Entet first number " ;
    cin >> first_number;
    cout << endl;

    for(int i = first_number; i <= (first_number + 15) ; i++)
    {
        cout << "Function(" << i << ") = " << function(i) << endl;

    }
    return 0;
}

int function(int number)
{
    switch(number)
    {
        case 0:
            return 0;
        case 1:
            return 3;
        case 2:
            return 5;
        default:
            return function(number - 1) + function(number - 2) + function(number - 3);
    }

}
