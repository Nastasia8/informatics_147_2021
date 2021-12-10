//#include<iostream>
//#include<cmath>
//using namespace std;
//
//double dlinn(int, int, int);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int x, y, z = 0;
//	double a[] = { 1,3,5 };
//	double b[3];
//
//	cout << "\n Ввинд x: ";
//		cin >> x;
//	cout << "\n Ввинд y: ";
//		cin >> y;
//	cout << "\n Ввинд z: ";
//		cin >> z;
//	cout << "dlinn = {" << x << "," << y << "," << z << "} = " << dlinn(x,y,z) << endl;
//	return 0;
//}
//
//double dlinn(int a, int b, int c)
//{
//	/*return(a + b + c);*/
//	return(sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2)));
//}


// 2 задание 
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//double dlinn(int, int, int);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int x, y, z = 0;
//	double a[] = { 1,3,5 };
//	double b[3];
//
//	cout << "\n Ввинд x: ";
//	cin >> x;
//	cout << "\n Ввинд y: ";
//	cin >> y;
//	cout << "\n Ввинд z: ";
//	cin >> z;
//	cout << "\n ед вектор a = {" << x << "," << y << "," << z << "}: b = {" << x / dlinn(x, y, z) << ";" << y / dlinn(x, y, z) << ";" << z / dlinn(x, y, z) << endl;
//	return 0;
//}
//
//double dlinn(int a, int b, int c)
//{
//	/*return(a + b + c);*/
//	return(sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2)));
//}

// 3 задание 
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//double dlinn(int, int, int);
//double SC = 0;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int x, y, z, i = 0;
//	double a[] = { 1,3,5 };
//	double b[3];
//  double SC = 0;
//
//	cout << "\n Ввинд x: ";
//	cin >> x;
//	cout << "\n Ввинд y: ";
//	cin >> y;
//	cout << "\n Ввинд z: ";
//	cin >> z;
//
//	cout << "введите вектор b через пробел =";
//	for (i = 0; i < 3; i++) cin >> b[i];
//
//	for (i = 0; i < 3; i++) SC += a[i] * b[i];
//		cout << "\n SC  = " << SC << endl;
//
//	return 0;
//}

//задание 4
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//double dlinn(int, int, int);
//
//int main(int argc, char* argv[])
//{
//	setlocale(LC_ALL, "Russian");
//	int x, y, z, i = 0;
//	double a[] = { 1,3,5 };
//	double b[3];
//	double resVek[3];
//
//	cout << "\n Ввинд x: ";
//	cin >> x;
//	cout << "\n Ввинд y: ";
//	cin >> y;
//	cout << "\n Ввинд z: ";
//	cin >> z;
//
//		cout << "введите вектор b через пробел =";
//	for (i = 0; i < 3; i++) cin >> b[i];
//
//		for (i = 0; i < 3; i++)
//	resVek[i] = a[(i + 1) % 3] * b[(i + 2) % 3] - a[(i + 2) % 3] * b[(i + 1) % 3];// вычисление сколярного произведения
//	cout << "\n Вектор производной: a.b =";
//	for (i = 0; i < 3; i++)
//			cout << " " << resVek[i];
//	cout << endl;
//	return 0;
//}