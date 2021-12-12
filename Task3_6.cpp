// Гурьянов Илья, гр. 1/147.
// Задание №3, номер 6.
// Программа определяет произведение цифр в шестизначной числе, введённый пользователем.

#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

void ProductOfDigits(int number) // функция считает произведение цифр в числе
{
    int number1 = number;
    int Product = 1;
    while (number > 0)
    {
        Product *= number % 10; // умножаем Product на последнюю цифру числа
        number /= 10; // откидываем последнюю цифру числа
    }
    cout << "Произведение цифр в числе " << number1 << " равно " << Product << endl;
}

int main()
{
    // Локализация (отображение кириллицы в консоли)
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int number;
    cout << "Введите шестизначное число: ";
    cin >> number;
    while (cin.fail() || number < 100000 || number > 999999) // "защита от дурака"
    {
        cout << "Ошибка. Введено неверное значение." << endl;
        cin.clear(); // очистка флага ошибки cin
        cin.ignore(10000, '\n'); // очистка буфера cin. игнорирование (удаление) первых 10000 символов (либо удаление символов пока не встретит новую строку \n) из буфера cin
        cout << "Введите шестизначное число: ";
        cin >> number;
    }
    ProductOfDigits(number);

    return 0;
}