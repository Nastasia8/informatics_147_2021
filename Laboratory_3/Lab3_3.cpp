#include <iostream>
#include <cmath>

using namespace std;
/// <summary>
/// Cумма членов числовой последовательности
/// </summary>
/// <param name="k">Число k</param>
/// <returns>Сумма многочлена</returns>
double sigmaSum(int k) {
	double sum = 0;
	for (float n = 1; n <= k; n++) {
		sum = sum + 2 / ((2 * n + 1) * (2 * n + 3));
	}
	return sum;
}
/// <summary>
/// Произведение членов числовой последовательности
/// </summary>
/// <param name="k">Число k</param>
/// <returns>Произведение многчлена</returns>
double sigmaMulti(int k) {
	double multi = 1;
	for (float n = 1; n <= k; n++) {
		multi = multi * (pow(-1,n-1)+n);
	}
	return multi;
}

int main()
{
	int k;
	cout << "Enter nubmer k " << endl;
	cin >> k;
	cout << sigmaSum(k) << endl;
	cout << sigmaMulti(k) << endl;
	return 0;
}