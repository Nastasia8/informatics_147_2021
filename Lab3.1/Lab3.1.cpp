// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

/// <summary>
/// Вычисляет сумму 2-х чисел 
/// </summary>
/// <param name="a">Первое число</param>
/// <param name="b">Второе число</param>
/// <returns>Сумма 2-х чисел</returns>
int calculateSum(int a, int b)
{
	return a + b;
}

/// <summary>
/// Вычисляет разность 2-х чисел
/// </summary>
/// <param name="a">Первое число</param>
/// <param name="b">Второе число</param>
/// <returns>Разность 2-х чисел</returns>
int calculateSubstraction(int a, int b)
{
	return a - b;
}

/// <summary>
/// Вычисляет произведение 2-х чисел
/// </summary>
/// <param name="a">Первое число</param>
/// <param name="b">Втоорое число</param>
/// <returns>Произведение 2-х чисел</returns>
int calculateMultiplication(int a, int b)
{
	return a * b;
}

/// <summary>
/// Вычисляет частное 2-х чисел
/// </summary>
/// <param name="a">Первое число</param>
/// <param name="b">Втоорое число</param>
/// <returns>Частное 2-х чисел</returns>
int calculateDivision(int a, int b)
{
	return a / b;
}

/// <summary>
/// Возводит первое число в степень второго
/// </summary>
/// <param name="a">Первое число</param>
/// <param name="b">Втоорое число</param>
/// <returns>1 число в степени 2</returns>
int calculateDegree(int a, int b)
{
	return pow(a, b);
}

int main()
{
	int x, y, operation;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	cout << "Enter operation code (1 - sum; 2 - sub; 3 - multipl; 4 - div; 5 - degree)" << endl;
	cout << "Operation code: ";
	cin >> operation;
	switch (operation)
	{
		case 1: 
			cout << x << " + " << y << " = " << calculateSum(x, y) << endl;
			break;
		case 2:
			cout << x << " - " << y << " = " << calculateSubstraction(x, y) << endl;
			break;
		case 3:
			cout << x << " * " << y << " = " << calculateMultiplication(x, y) << endl;
			break;
		case 4:
			cout << x << " / " << y << " = " << calculateDivision(x, y) << endl;
			break;
		case 5:
			cout << x << " ^ " << y << " = " << calculateDegree(x, y) << endl;
			break;
		default: 
			cout << "Enter 1 - summa, 2 - substraction, 3 - multiplication, 4 - division, 5 - degree";
			break;
	}
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
