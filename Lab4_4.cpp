#include <iostream>
#include <ctime>

using namespace std;

void fill_arr(int* point_array, int len) {
    for (int i = 0; i < len; i++) {
        point_array[i] = rand() % 100;
    }
}

void show_arr(int* point_array, int len) {
    cout << "Массив: ";
    for (int i = 0; i < len; i++) {
        cout << " " << point_array[i];
    }
}

void find_min(int* point_array, int len) {
    int mNum = 101;
    for (int i = 0; i < len; i++) {
        if (mNum > point_array[i]) {
            mNum = point_array[i];
        }
    }
    cout << endl << "Минимальное число: " << mNum << endl;
}

int main()
{
    setlocale(LC_ALL, "");
    srand(time(0));

    int len;
    cout << "Введите размер массива: ";
    cin >> len;
    int* point_array = new int[len];

    fill_arr(point_array, len);
    show_arr(point_array, len);
    find_min(point_array, len);

    return 0;
}