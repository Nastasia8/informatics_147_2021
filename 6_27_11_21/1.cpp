#include <iostream>//брал у довыденко ромы
#include <cmath>

using namespace std;

void Matric_1(int line, int colum)//функция войд
{
    int arr[line][colum];//вызов масива на определенные элементы
    cout << "Ввести значения матрицы: " << endl; // пользователь вводит матрицу
    for (int i = 0; i < line; i++)//цикл
    {
        for (int g = 0; g < colum; g++)//цикл. заменяетзначения в масииве
        {
            cin >> arr[i][g];
        }
    }
    
    cout << endl << "Начальная матрица: " << endl;; //вывод еденной матрицы
    for (int i = 0; i < line; i++)
    {
        for (int g = 0; g < colum; g++)
        {
            cout << arr[i][g] << '\t';
        }
        cout << endl;
    }
    
    cout << endl << "Модифицироанная матрица: " << endl; //замена значений строк 
    for (int i = 0; i < line; i++)                       //матрицы на значения столбцов
    {                                                    
        for (int g = colum - 1; g >= 0; g--)
        {
            cout << arr[i][g] << '\t';
        }
        cout << endl;
    }
    
}

int main()
{
    int colum, line;
    cout << "Введите размер матрицы (строки Х столбцы) через пробел: ";
    cin >> line >> colum;
    
    Matric_1(line, colum);
    
    
    return 0;
}