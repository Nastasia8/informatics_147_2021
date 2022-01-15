#include <iostream>
using namespace std;

int main() {
    int h, n;
    char sym; // тип данных для символов
    cout << "Введите высоту треугольника" << endl;
    cin >> h;
    cout << "Введите символ" << endl;
    cin >> sym;
    cout << "Выберите тип треугольника (1 или 2)" << endl;
    cin >> n;
    if (n == 1) // для 1ого типа
    {
        for (int i = 0; i <= h; i++) 
        {
            for (int j = h - i; j > 0; j--) 
            {
              cout << " ";
            }

            for (int j = 1; j <= i; j++)
            {
                cout << sym;
            } 
            cout << endl;
        }
    }
    else if (n == 2) //для 2ого типа
    {
        for (int i = 0; i <= h; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << sym; 
            } 
            cout << endl;
        }
    }
    else if ((n != 1) && (n != 2)) 
    cout << "Неверно введён тип"; 
}
