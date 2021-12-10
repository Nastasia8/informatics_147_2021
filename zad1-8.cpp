// 1 задание ------------------------------------------
// #include <iostream>
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
// 2 --------------------------------------------------------
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	double P, N, M, K, H, L;
//	double I = 15;
//	int S = 0;
//	cout << "\n Сумма вклада :"; 
//	cin >> P;
//	cout << "\n Количество лет :";
//	cin >> N;
//	cout << "\n Процентная ставка :";
//	cin >> M;
//	//cout << "\n I";
//	//cin >> I;
//
//	for (int i = 0; i < M; i++)
//	{
//		L = (M / (12 * N));
//		H = ((I/100)/(M/12));
//		K = (pow(1 + H,L));
//		S = P * K;
//	}
//	//cout << "Ответ" << L << endl;
//	//cout << "Ответ" << H << endl;
//	//cout << "Ответ" << K << endl;
//	cout << "Через :" << N << " лет " << " Будет :" << S << endl;
//
//	return 0;
//}
// 3 ------------------------
// 
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	int k,n;
//	double prod = 1,q,sum = 0;
//	cout << "Введите число K = ";
//	cin >> k;
//
//	for (n = 1; n <= k; n++)
//	{
//		double q = ((2 * n + 1) * (2 * n + 3));
//		/*sum += (2/((2*n + 1)*(2*n+3)));*/ 
//		sum += (2 / q);
//	}
//	cout <<"1)сумма числового ряда = " << sum;
//	cout << endl;
//
//	for (n = 1; n <= k; n++)
//	{
//		prod *= (pow(-1, n - 1) + n);
//	}
//	cout << "2)сумма числового ряда = " << prod;
//	cout << endl;
//	return 0;
//
//}
// 
// //4 ----------------------
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	int start, end;
//	int even = 0;
//	int odd = 0;
//	setlocale(LC_ALL, "Russian");
//
//
//	cout << "Введите диапазон, через пробел : ";
//	cin >> start >> end;
//
//	if (start < end)
//	{
//		cout << start << ";" << end << endl;
//		for (start; start < end; start++)
//		{
//			if (start % 2 == 0)
//			{
//				even +=  1;
//			}
//			else
//			{
//				odd += 1;
//			}
//		}
//		cout << even << endl;
//		cout << odd << endl;
//
//
//		while (start < end);
//		{
//			start += 1;
//			if (start % 2 == 0)
//			{
//				even += 1;
//			}
//			else
//			{
//				odd += 1;
//			}
//			cout << " цикл while" << even << endl;
//			cout << " цикл while" << odd << endl;
//		}
//	}
//	else
//	{
//		cout << "неверный диапазон" << endl;
//	}
//}
// 5 -----------------------------------------------------------
//#include<iostream>
//#include <cmath>
//using namespace std;
//
//float  calculateDiscriminant(float x, float y, float z)
//{
//	return (pow(x, 2) - 4 * x * z);
//}
//
//void calculateRoot(float x, float y, float z)
//{
//	float D;
//	D = calculateDiscriminant(x,y,z);
//	if (D < 0)
//	{
//		cout << "Корней не существует" << endl;
//	}
//	else if (D == 0)
//	{
//		cout << "корень равен" << -y / (2 * x) << endl;
//	}
//	else
//	{
//		cout << "первый клрень равен" << (-y + sqrt(D)) / (2 * x) << endl;
//		cout << "Второй корень равен" << (-y - sqrt(D)) / (2 * x) << endl;
//	}
//}
//
//
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//
//	//float x, y, z;
//	//cout << "Введите x y z через пробел" << endl;
//	//cin >> x >> y >> z;
//	//calculateRoot(x, y, z);
//	int begin_a = 3;
//	int begin_b = 12;
//	int sum1 = 0;
//		while (begin_a < begin_b)
//		{
//			sum1 += (begin_a % 2 == 0) ? begin_a : 0;
//			begin_a += 1;
//		}
//		cout << sum1 << endl;
//	return 0;
//}
// 6 ----------------------------------------
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	int sum, end, number;
//	setlocale(LC_ALL, "Russian");
//	
//
//	cout << "ввидите 6ти значное число : ";
//	cin >> number;
//	if (number > 99999 || number >= 999999) // проверяет 6-ное ли число ( || - это поератот или ) 
//	{
//		cout << "ваше число = " << number;
//		int n1, n2, n3, n4, n5, c;
//		int reslt;
//		n1 = number % 10;       // 1 цифра справа
//		n2 = (number / 10) % 10;  // 2 цифра справа
//		n3 = (number / 100) % 10;	// 3 цифра справа
//		n4 = (number / 1000) % 10;	// 4 цифра справа
//		n5 = (number / 10000) % 10;// 5 цифра справа
//		c = number / 100000;      // 6 цифра справа
//
//		//cout << "\n ответ :" << n1 << "; " << n2 << "; " << n3 << "; " << n4 << "; " << n5 << "; " << c; // проверка вывода
//		reslt = n1 * n2 * n3 * n4 * n5 * c;
//		cout << "\n произведение цифр : " << reslt << endl;
//	}
//	else
//	{
//		cout << "указано неверное число";
//	}
//	return 0;
//}
// 7 --------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "ru");
	int height, length,i,n;
	char sim;



	cout << "Введите высоту :" << endl;
	cin >> height;
	cout << "Введите длину :" << endl;
	cin >> length;
	cout << "Введите символ :" << endl;
	cin >> sim;
	
	n = height * length;

	for (i = 0; i < height; i++)
	{

		for (int j = 0; j < length; j++)
		{
			cout << sim;
		}

		cout << endl;
	}
}