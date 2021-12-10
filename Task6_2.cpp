// Гурьянов Илья, гр. 1/147.
// Задание №6, номер 2.
// Программа выводит на консоль прямоугольные треугольники из символов. Высота треугольника (кол-во символов) задаётся пользователем. 

#include <iostream>
#include <string>

using namespace std;

int main()
{  
    int height; // высота (кол-во символов по высоте)
    cout << "Enter height of right triangle: ";
    cin >> height;

    // Вывод обычного прямоугольного треугольника.
    cout << endl;
    for (int i = 1; i <= height; i ++)
    {
        cout << string(i, '@') << endl; // вывод строки, повторяющей заданный символ i раз
    }

    // Вывод отзеркаленного по оси X прямоугольного треугольника.
    cout << endl;
    for (int i = height; i >= 1; i --)
    {
        cout << string(i, '#') << endl;
    }

    // Вывод отзеркаленного по оси Y прямоугольного треугольника.
    cout << endl;
    int i = 1;
    while (i <= height)
    {
        cout << string(height - i, ' ') << string(i, '$') << endl;
        i ++;
    }

    // Вывод отзеркаленного относ. т. 0 (т.е. и по оси X, и по оси Y) прямоугольного треугольника.
    cout << endl;
    i = height;
    while (i >= 1)
    {
        cout << string(height - i, ' ') << string(i, '%') << endl;
        i --;
    }    

    return 0;
}