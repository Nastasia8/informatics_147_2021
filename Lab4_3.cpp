#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(0));

    int len;
    cout << "Введите размер массива: ";
    cin >> len;
    int* point_array = new int[len];
    int mNum = 101;

    cout << "Сгенерированный массив: ";
    for (int i = 0; i < len; i++) {
        point_array[i] = rand() % 100;
        cout << point_array[i] << " ";

        if (mNum > point_array[i]) {
            mNum = point_array[i];
        }
    }

    cout << endl << "Минимальное число массива: " << mNum << endl;

    return 0;
}