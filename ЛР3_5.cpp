#include <iostream>
#include <math.h>

using namespace std;

void CalcualteDiscriminantAndRoots(float x, float y, float z)
{
	float D = 0;
	float f = 0;
	float f1 = 0;
	float f2 = 0;
	D = (pow(y, 2)) - (4 * x * z);
      cout << "Discriminant = " << D << endl;
	if (D < 0)
	{
		cout << "Roots are missing" << endl;
	}
	else if (D == 0)
	{
		cout << "One root is" << endl;
		f = (-y) / (2 * x);
		cout << f << endl;
	}
	else if (D > 0)
	{
		cout << "Two roots are" << endl;
		f1 = ((-y) + sqrt(D)) / (2 * x);
		f2 = ((-y) - sqrt(D)) / (2 * x);
		cout << "First:= " << f1 << endl;
      cout << "Second:= " << f2 << endl;
	}
}

int main() {
	float x = 0;
	float y = 0;
	float z = 0;
	cout << "Enter x" << endl;
	cin >> x;
	cout << "Enter y" << endl;
	cin >> y;
	cout << "Enter z" << endl;
	cin >> z;
	CalcualteDiscriminantAndRoots(x, y, z);
}

