#include <iostream>

using namespace std;
 
int NOK(int, int);
 
//Создать функцию, определяющую наименьшее общее кратное (НОК) двух
//положительных чисел.
//НОК (а; b) = а*b: НОД (а; b)

int main()
{
    int first_number, second_number;
    cout << "Entet two number  " ;
    cin >> first_number >> second_number;

    cout << "NOK(" << first_number << ";" << second_number << ") = " << NOK(first_number, second_number);

    return 0;
}
 
int NOK(int first, int second) 
{
    int max;
    if (first > second)
    {
        max = first;
    }
    else{ max = second; }
                                                      
    for (int i = max; ; i++) 
        if (i%first == 0 and i%second == 0) 
        {return i; } 
}