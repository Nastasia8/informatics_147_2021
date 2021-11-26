#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    //объявление массива
    srand(time (NULL));
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int *array = new int[n];
    
    //заполнение массива случайными числами
    //и вывод массива
    cout << "Массив: [ ";
    for (int i = 0; i < n; i++)
    {
        array[i] = rand()%50;
        cout << array[i] << " | ";
    }
    cout << "]" << endl;
    
    //нахождение мин. и макс. значения
    int max = array[0];
    int min = array[0];
	for(int i = 1; i < n; i++)
	{
		if(max < array[i]) 
		{
		    max = array[i];
		}
		
		if(min > array[i])
		{
		    min = array[i];
		}
	}

    cout << "Мин. заначение: " << min << endl;
    
    return 0;
}
