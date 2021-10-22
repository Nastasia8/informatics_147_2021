#include<iostream>
#include<cmath>
using namespace std;

double LongVek(int, int, int);

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int x,y,z,i;
	double a[] = { 1,3,5 };
	double b[3];
	double resScal = 0;
	double resVek[3];
//1 ------------------------------------------------------
	cout << "\n Ввиндета x: ";
		cin >> x;
	cout << "\n Ввиндета y: ";
		cin >> y;
	cout << "\n Ввиндета z: ";
		cin >> z;

		cout << "\n Длинна вектора = {" << x << "," << y << "," << z << "} = " << LongVek(x, y, z) << endl;
//2 ------------------------------------------------------

		cout << "\n еденичный вектор соответ вектору a = {" << x <<"," << y << "," << z << "}: b = {" << x / LongVek(x, y, z) << ";" << y / LongVek(x, y, z) << ";" << z / LongVek(x, y, z) << endl;


//3 ------------------------------------------------------


	cout << "Вектор b =";// ввод знач вектор
	for (i = 0; i < 3; i++) cin >> b[i];

	for (i = 0; i < 3; i++) resScal += a[i] * b[i];// вычисление сколярного произведения

		cout << "res" << resScal << endl;

//4 ------------------------------------------------------
		for (i = 0; i < 3; i++)
	resVek[i] = a[(i + 1) % 3] * b[(i + 2) % 3] - a[(i + 2) % 3] * b[(i + 1) % 3];// вычисление сколярного произведения
		cout << "\n Вектор производной: a.b =";
		for (i = 0; i < 3; i++)
			cout << " " << resVek[i];
		cout << endl;
		return 0;
}

double LongVek(int x, int y, int z)
{
	return sqrt(x*x + y*y + z*z);
}