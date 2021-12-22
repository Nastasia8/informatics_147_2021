#include <iostream>

using namespace std;

int f(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 3;
	}
	if (n == 2) {
		return 5;
	}
	if (n >= 3) {
		return f(n - 1) + f(n - 2) + f(n - 3);
	}
	return 0;
}

int main() {
	for (int n = 0; n < 15; n++)
	{
		cout << f(n) << " ";
	}
	return 0;
}
