// Гурьянов Илья, гр. 1/147.
// Задание №4, номер 1.
// В программе передаются аргументы по указателю.

#include <iostream>

using namespace std;

void calculate(int *pvar) // функция меняет значение по адресу, который передаётся указателю
{
    *pvar += 5;
}

int main()
{
    int var = 5;
    cout << "Variable 'var' = " << var << endl;
    int *pvar = &var; // присваиваем указателю pvar адрес переменной var
    cout << "Value on pointer 'pvar' = " << *pvar << endl; // разыменование указателя pvar, т.е. получаем объект по адресу, хранящимся в указателе.
    cout << "Address stored in pointer 'pvar' = " << pvar << endl; // адрес, хранящийся в указателе
    *pvar = 13; // меняем значение по адресу, который хранится в указателе 
    cout << "Variable 'var' (changed value) = " << var << endl; // значение переменной var изменилось
    calculate(&var); // передаём адрес переменной var в функцию
    cout << "Variable 'var' (changed value once more) = " << var << endl; // изменённое значение переменной var
    cout << "Value on pointer 'pvar' (the same value as 'var') = " << *pvar << endl; // разыменование указателя pvar, хранящего адрес переменной 'var'

    return 0;
}