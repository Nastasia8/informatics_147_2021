#include <iostream>

using namespace std;

int NOD(int, int);

//Создать функцию, отображающую наибольший общий делитель (НОД) для
//положительных чисел х пу (х, у - вводит пользователь с клавиатуры), причем
//Результат вывести следующим образом: НОД (18; 48) = 6

int main()
{
    int first_number, second_number;
    cout << "Entet two number  " ;
    cin >> first_number >> second_number;
    if(first_number > second_number)
    {
        cout << endl << "NOD(" << first_number << ";" << second_number << ") = " << NOD(first_number, second_number);
    }
    else 
    {
        cout << endl << "NOD(" << second_number << ";" << first_number << ") = " << NOD(second_number, first_number);
    }


    return 0;
}

int NOD(int first, int second)
{
    int i;
    if (first%second == 0)
    {
        return second;
    }
    else
    {
        i = first; first = second; second = i%second;
        NOD(first,second);
    }
}
