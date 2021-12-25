#include <iostream>
#include <math.h>

void CalculateSum(int k) {
	float s = 0;
	for (float n = 1; n <= k; n++) {
        s += float(2) / ((2 * n + 1) * (2 * n + 3));
    }
    cout << "Sum = " << s << endl;
}

void CalculateProd(int k) { // вычисляет выражение
	float p = 1;
	for (float n = 1; n <= k; n++) {
        p *= pow((-1), n-1) + n;
    }
    cout << "Production = " << p << endl;
}

int main () {
    int k;
	cout << "Enter k "<< endl;
	cin >> k;
	CaclculaterSum(k);
	Calculate(k);
	return 0;
}
