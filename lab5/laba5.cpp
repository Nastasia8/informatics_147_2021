#include<iostream>
using namespace std;
///////////////////////.////////// 2
//void sistem2(int num)
//{
//	int a;
//	cout << "Двоичное число : ";
//	while (num)
//	{
//		num = num / 2;
//		a = num % 2;
//		cout << a;
//	}
//}
//
//
//void main()
//{
//	setlocale(LC_ALL, "ru");
//
//	int ci;
//	cout << "Введите число от 0 до 325" << endl;
//	cin >> ci;
//
//	if ((ci > 0) && (ci < 325))
//	{
//		cout << "Ваше число : " << ci << endl;
//		sistem2(ci);
//		cout << endl;
//	
//		cout << "Восьмеричное число : ";
//		cout << oct << ci << endl;
//		cout << "шестнадцатеричное число : ";
//		cout << hex << ci;
//
//	}
//	else
//	{
//		cout << "Число вне диапазона" << endl;
//	}
//}
// 
// 
//////////////////////////////////////// 3 задание
//int nod(int a, int b)
//{
//    if (b == 0)
//        return a;
//    else
//        return nod(b, a % b);
//}
//
//void main()
//{
//    setlocale(LC_ALL, "ru");
//
//    int i,o;
//    cout << "Введите 1 число : " << endl;
//    cin >> i;
//    cout << "Введите 2 число : " << endl;
//    cin >> o;
//    cout << "Наибольштй общий делитель : " << nod(i, o) << endl;
//
//}
// 
// 
//////////////////////////////////////// 4 задание
// 
//int nod(int a, int b)
//{
//    if (b == 0)
//        return a;
//    else
//        return nod(b, a % b);
//}
//
//void main()
//{
//    setlocale(LC_ALL, "ru");
//
//    int i,o;
//    cout << "Введите 1 число : " << endl;
//    cin >> i;
//    cout << "Введите 2 число : " << endl;
//    cin >> o;
//    cout << "Наименьшое общее кратное : " << (i * o)/(nod(i, o)) << endl;
//
//}
////////////////////// 5
// sp a
//int nod(int a, int b)
//{
//    if (b == 0)
//        return a;
//    else
//        return nod(b, a % b);
//}
//
//void main()
//{
//    setlocale(LC_ALL, "ru");
//
//    int i,o,c;
//    cout << "Введите 1 число : " << endl;
//    cin >> i;
//    cout << "Введите 2 число : " << endl;
//    cin >> o;
//    cout << "Введите 3 число : " << endl;
//    cin >> c;
//    cout << "Наибольштй общий делитель : " << nod(nod(i, o), c) << endl;
//
//}
// 
// способ b
//int SP2(int a, int b, int c)
//{
//
//    int nod = 1;
//
//    if (a > b)
//    {
//        int x = a;
//        a = b;
//        b = x;
//    }
//
//    while (a > 1 && b > 1 && c > 1) 
//    {
//        for (int i = 2; i <= a; i++)
//        {
//            if (a % i == 0 && b % i == 0 && c % i == 0)
//            {
//                nod *= i;
//                a /= i;
//                b /= i;
//                c /= i;
//                break;
//            }
//
//            if (a % i == 0)
//            {
//                a /= i;
//                break;
//            }
//
//            if (b % i == 0)
//            {
//                b /= i;
//                break;
//            }
//
//            if (c % i == 0)
//            {
//                c /= i;
//                break;
//            }
//        }
//    }
//
//    return nod;
//}
//
//void main()
//{
//    setlocale(LC_ALL, "ru");
//
//    int N1, N2, N3;
//    cout << "Введите значения" << endl;
//    cin >> N1;
//    cin >> N2;
//    cin >> N3;
//    cout << "NOD чисел : " << SP2(N1, N2, N3) << endl;
//}