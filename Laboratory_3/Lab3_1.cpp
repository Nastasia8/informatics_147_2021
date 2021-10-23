#include <iostream>
#include <cmath>
using namespace std;

/// <summary>
/// Вычисляет сумму двух чисел
/// </summary>
/// <param name="a">Первое число</param>
/// <param name="b">Второе число</param>
/// <returns>Сумма двух чисел</returns>
int calculateSum(int a, int b) {
	return a + b;
};

/// <summary>
/// Вычисляет разность двух чисел
/// </summary>
/// <param name="a">Первое число</param>
/// <param name="b">Второе число</param>
void calculateSubstraction(int a, int b) {
	cout <<"Substraction = "<< a - b << endl;
};
/// <summary>
/// Умножает два числа
/// </summary>
/// <param name="a">Первое число</param>
/// <param name="b">Второе число</param>
void calculateMultiplication(int a, int b) {
	cout << "Multiplication = " << a * b << endl;
}
/// <summary>
/// Делит два числа
/// </summary>
/// <param name="a">Первое число</param>
/// <param name="b">Второе число</param>
/// <returns>Частное двух чисел</returns>
int calculateDivision(int a, int b) {
	return a / b;
}


int main()
{
	int x, y, operation;
	cout << "Enter first namber: ";
	cin >> x;
	cout << "Enter second namber: ";
	cin >> y;
	cout << "Operation: ";
	cin >> operation;
	switch (operation)
	{
	case 1:
		cout << calculateSum(x, y) << endl;
		break;
	case 2:
		calculateSubstraction(x, y);
		break;
	case 3:
		calculateMultiplication(x, y);
		break;
	case 4:
		cout <<calculateDivision(x, y) << endl;
		break;
	default:
		cout << "Enter 1 - summa, 2 - substraction, 3 - Multiplication, 4 -Division";
		break;
	}
	return 0;
}
