#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL)); //генерирование случайных чисел
	int n;
	int min = 1000;
	cout << "Введите размер массива" << endl;
	cin >> n;
	int *arr = new int[n]; //динамическое выделение памяти под объект типа int
    for (int i = 0; i < n; i++) {
    	arr[i] = rand() % 100;
    }

    for (int i = 0; i < n; i++){
    	cout << arr[i] << "  ";
    }
    cout << endl;
//нахождение минимального элемента:
    for (int i = 0; i < n; i++) {
    	if (arr[i] < min) {
    		min = arr[i];
    	}
    }
	cout << "Минимальный элемент: " << min << endl;
	delete arr; //высвобождение памяти
	return 0;
}