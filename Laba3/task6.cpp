#include <iostream>

using namespace std;

// Произведение его цифр
int Prod(int n)
{
    int otvet = 1;
    while (n != 0)
    {
        otvet *= n % 10;
        n /= 10;
    }
    return otvet;
}

// Проверка шестизначного числа
int Check(int n)
{
    int count = 0;
    for (int i = n; i > 0; i /= 10) // Подсчет кол-ва чисел
    {
        count++;
    }
    if (count == 6)
    {
        cout << "Ответ: " << Prod(n) << endl;
    }
    else
    {
        cout << "Надо ввести шестизначное число\n";
    }
    return 0;
}

int main()
{
    setlocale(0, "");
    int n;
    cout << "Введите шестизначное число: ";
    cin >> n; // Ввод числа
    Check(n);
    return 0;
}