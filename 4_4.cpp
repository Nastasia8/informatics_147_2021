#include <iostream>
#include <ctime>
using namespace std;

void fil_arr(int arr[], int n) { //заполнение массива
    for (int i = 0; i < n; i++)
   {
       arr[i] = rand()%100;
   }
}

void show_arr(int arr[], int n) { //отображение элементов массива
   for (int i = 0; i < n; i++)
   {
       cout << arr[i] << " ";
   }
}

int min_arr(int arr[], int n) {//нахождение минимального элемента
     int min = 1000;
     for (int i = 0; i < n; i++) {
    	if (arr[i] < min) {
    	min = arr[i];
        }
    }
return min;
}

int main() {
	srand(time(NULL)); //генерирование случайных чисел
	int n;
	cout << "Введите размер массива" << endl;
	cin >> n;
	int *arr = new int[n]; //динамическое выделение памяти под объект типа int
    fil_arr(arr, n);
    show_arr(arr, n);
    cout << endl;
    cout << "Минимальный элемент: " << min_arr(arr, n) << endl;
    delete []arr;
    return 0;
}
