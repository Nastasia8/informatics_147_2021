//#include <iostream>
//#include <cmath>
//using namespace std;
//
//
//
//
///// <summary>
///// Вычисляет сумму 2х чисел
///// </summary>
///// <param name="a"> 1 число </param>
///// <param name="b"> 2 число </param>
///// <returns> сумма 2х чисел </returns> 
//int calculateSum(int a, int b)
//{
//	return (a + b);
//}
//
//
///// <summary>
///// вычисляет вычитание 2
///// </summary>
///// <param name="a"> 1 число</param>
///// <param name="b"> 2 число </param>
//void calculateSubtraction(int a, int b)
//{
//	cout << "вычитание  = " << a - b <<  endl;
//}
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int x = 0;
//	int y, operation;
//	int step = 0;
//
//	cout << "x =";
//	cin >> x;
//	cout << "y =";
//	cin >> y;
//	cout <<"operation = ";
//	cin >> operation;
//
//	switch (operation)
//	{
//	case 1:
//		cout << calculateSum(x, y) << endl;
//		break;
//	case 2:
//		calculateSubtraction(x, y);
//		break;
//	default:
//		cout << "Введите число 1 - Summa, 2 - вычитание ...";
//			break;
//	}
//}



// 5 -----------------------------------------------------------
// #include<iostream>
// #include <cmath>
// using namespace std;

// float  calculateDiscriminant(float x, float y, float z)
// {
// 	return (pow(x, 2) - 4 * x * z);
// }

// void calculateRoot(float x, float y, float z)
// {
// 	float D;
// 	D = calculateDiscriminant(x,y,z);
// 	if (D < 0)
// 	{
// 		cout << "Корней не существует" << endl;
// 	}
// 	else if (D == 0)
// 	{
// 		cout << "корень равен" << -y / (2 * x) << endl;
// 	}
// 	else
// 	{
// 		cout << "первый клрень равен" << (-y + sqrt(D)) / (2 * x) << endl;
// 		cout << "Второй корень равен" << (-y - sqrt(D)) / (2 * x) << endl;
// 	}
// }


// int main()
// {
// 	setlocale(LC_ALL, "Russian");


// 	//float x, y, z;
// 	//cout << "Введите x y z через пробел" << endl;
// 	//cin >> x >> y >> z;
// 	//calculateRoot(x, y, z);
// 	int begin_a = 3;
// 	int begin_b = 12;
// 	int sum1 = 0;
// 		while (begin_a < begin_b)
// 		{
// 			sum1 += (begin_a % 2 == 0) ? begin_a : 0;
// 			begin_a += 1;
// 		}
// 		cout << sum1 << endl;
// 	return 0;
// }