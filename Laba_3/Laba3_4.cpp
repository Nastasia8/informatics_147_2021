#include <iostream>
#include <cmath>

using namespace std;

int summa_chisel (int, int, int, int);

int main()
{
    int nach, kon, summa, i;

    cout << "Введите начало диапазана: ";
    cin >> nach;
    cout << "Введите конец диапазона: ";
    cin >> kon;
    summa_chisel(i, nach, kon, summa);
    return 0;
}

int summa_chisel (int i, int nach, int kon, int summa)
{
    summa = 0;
    for (i = nach; i <= kon; i++)
    {
        if (i % 2 == 0)
        {
           summa += i;
        }
    }
    cout << "Сумма чётных чисел диапазона = " << summa << endl;
    return 0;
}