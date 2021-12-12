// Гурьянов Илья, гр. 1/147.
// Задание №3, номер 7.
// Программа отрисовывает прямоугольник. Высоту, ширину и символ отрисовки вводит пользователь.

#include <iostream>
#include <Windows.h>

using namespace std;

void DrawRectangle(int height, int width, char symbol)
{
    for (int i = 1; i <= height; i ++) // отрисовываем построчно
    {
        if (i == 1 || i == height) // отрисовка первой и последней строчки
        {
            for (int i = 1; i <= width; i ++)
            {
                if (i == width) // после последнего символа должен быть перенос строки
                {
                    cout << symbol << endl;
                }
                else
                {
                    cout << symbol << " ";
                }
            }
        }
        else // отрисовка всех остальных строчек (кроме первой и последней). Отрисовываем посимвольно
        {
            for (int i = 1; i <= (width * 2 - 1); i ++)
            {
                if (i == 1) // первый символ строки - это заданный symbol
                {
                    cout << symbol;
                }
                else if (i == (width * 2 - 1)) // после последнего символа строки должен быть переход на новую строку
                {
                    cout << symbol << endl;
                }
                else
                {
                    cout << " "; // все остальные символы в строке, кроме первого и последнего - это пробелы
                }
            }
        }
    }
}

int main()
{
    // Локализация (отображение кириллицы в консоли)
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int height, width;
    char symbol;
    cout << "Введите высоту (кол-во символов) прямоугольника: ";
    cin >> height;
    cout << "Введите ширину (кол-во символов) прямоугольника: ";
    cin >> width;
    cout << "Введите символ отрисовки прямоугольника: ";
    cin >> symbol;
    DrawRectangle(height, width, symbol);

    return 0;
}