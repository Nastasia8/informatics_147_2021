// Гурьянов Илья, гр. 1/147.
// Задание №4, номер 4.
// Это модифицированный вариант номера 3, задания №4.
// В программе с помощью функций создаётся, заполняется и выводится динамический массив (заполняется случайными элементами), находится минимальный элемент массива.

#include <iostream>
#include <ctime>

using namespace std;

void fillArray(int *pArray, int size) // функция заполнения массива случайными числами
{
    for (int i = 0; i < size; i++)
    {
        pArray[i] = rand()%100; // функция rand сгенерирует числа от 0 до 100 (т.е. остаток от деления 'числа в секундах')  //  a + rand()%(b-a + 1) - выражение для получения чисел от a до b
    }
}

void showArray(int *pArray, int size) // функция вывода массива
{
    cout << "Array:" << endl;
        for (int i = 0; i < size; i++)
    {
        cout << pArray[i] << "\t";
    }
}

void findMin(int *pArray, int size) // функция нахождения минимального элемента массива
{
    int min = pArray[0];
    for (int i = 0; i < size; i++)
    {
        if (pArray[i] < min)
        {
            min = pArray[i];
        }
    }
    cout << "\nMinimum value of array: " << min << endl;
}

int main()
{
    srand(time(0)); // устанавливаем значение системных часов в качестве стартового числа (точки отсчёта) для функции rand
    
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int *array = new int[size]; // создаём динамический массив из 'size' чисел
    
    fillArray(array, size);
    showArray(array, size);
    findMin(array, size);

    delete [] array;

    return 0;
}