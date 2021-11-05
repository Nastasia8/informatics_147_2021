// Lab2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

float CalcVectorLenght(float x, float y, float z)
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

float CalcScalarProduct(float x1, float y1, float z1, float x2, float y2, float z2)
{
	return x1 * x2 + y1 * y2 + z1 * z2;
}

void CalcVectorProduct(float x1, float y1, float z1, float x2, float y2, float z2, float *x, float *y, float *z)
{
	*x = y1 * z2 - z1 * y2;
	*y = z1 * x2 - x1 * z2;
	*z = x1 * y2 - y1 + x2;
}

int main()
{
  float x, y, z;
  x = 1;
  y = 5;
  z = 3;
  float length = CalcVectorLenght(x, y, z);
  cout << "Length = " << length << endl;

  x /= length;
  y /= length;
  z /= length;
  float x2, y2, z2;
  cout << "bcoord = {" << x << "; " << y << "; " << z << "}" << endl;
  cout << "Enter second vector:" << endl;
  cout << "x = ";
  cin >> x2;
  cout << "y = ";
  cin >> y2;
  cout << "z = ";
  cin >> z2;
  cout << "Scalar product = " << CalcScalarProduct(x, y, z, x2, y2, z2) << endl;
  float xv, yv, zv;
  CalcVectorProduct(x, y, z, x2, y2, z2, &xv, &yv, &zv);
  cout << "Vector product ={" << xv << "; " << yv << "; " << zv << "}" << endl;
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
