// Lab4.04.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

void fillArray(int* pArr, int size)
{
	for (int i = 0; i < size; i++)
		pArr[i] = rand();
}

void showArray(int* pArr, int size)
{
	for (int i = 0; i < size; i++)
		cout << pArr[i] << endl;
}

int findMin(int* pArr, int size)
{
	int min = 0;
	for (int i = 0; i < size; i++)
		min = (i == 0) ? pArr[i] : ((pArr[i] < min) ? pArr[i] : min);
	return min;
}

int main()
{
	srand(100);
	int size;
	cout << "Enter the size of the array" << endl;
	cin >> size;
	int* arr = new int[size];
	fillArray(arr, size);
	showArray(arr, size);
	cout << "The minimum value in the array " << findMin(arr, size) << endl;
	delete[] arr;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
