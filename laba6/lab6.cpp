#include<iostream>
#include<string>
#include <list>
#include <iterator>
using namespace std;

// 1 task a  s

//int main()
//{
//
//	int arr[3][4] = {{4,3,5,1},{0,7,2,9},{2,6,3,8}};
//	int sim;
//	int rows = 3;
//	int cols = 4;
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl;
//	}
//
//	cout << "-------------------------------------" << endl;
//
//	for (int j = 0; j < cols/2; j++)
//	{
//		for (int i = 0; i < rows; i++)
//		{
//			sim = arr[i][j];
//			arr[i][j] = arr[i][cols - 1 - j];
//			arr[i][cols - 1 - j] = sim;
//		}
//	}
//	
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols ; j++)
//		{
//			cout << arr[i][j] << "\t" ;
//		}
//		cout << endl;
//	}
//	return 0;
//} 
// task 1 b

// 1 task b 

//void UWU(list <int> listmerge1)
//{
//	int a;
//	a = listmerge1.front();
//	listmerge1.front() = listmerge1.back();
//	listmerge1.back() = a;
//
//	cout << endl;
//
//	copy(listmerge1.begin(), listmerge1.end(), ostream_iterator<int>(cout, " "));
//	(listmerge1);
//
//	listmerge1.unique();
//
//}
//
//void main()
//{
//	list <int> listmerge1 = { 13, 97, 56 };
//	list <int> listmerge2 = { 17, 23, 85 };
//	list <int> listmerge3 = { 22, 45, 66 };
//
//	copy(listmerge1.begin(), listmerge1.end(), ostream_iterator<int>(cout, " "));
//	(listmerge1);
//	cout << endl;
//	copy(listmerge2.begin(), listmerge2.end(), ostream_iterator<int>(cout, " "));
//	(listmerge2);
//	cout << endl;
//	copy(listmerge3.begin(), listmerge3.end(), ostream_iterator<int>(cout, " "));
//	(listmerge3);
//	cout << endl;
//
//	UWU(listmerge1);
//	UWU(listmerge2);
//	UWU(listmerge3);
//	cout << endl;
//}

// 2 task

//
//void tre(char u, int H,char sp)
//{
//	int b = 0;
//
//	while (b <= H)
//	{
//		cout << string(b,u);
//		cout << endl;
//		b++;
//	}
//	cout << endl;
//
//	int c = H;
//
//	while (c <= H && c != 0)
//	{
//		cout << string(c, u);
//		cout << endl;
//		c--;
//	}
//	cout << endl;
//
//	//for (int i = H; i <= H && i != 0; i--)
//	//{
//	//	for (int j = 0; j < i; j++)
//	//	{
//	//		cout << u;
//	//	}
//	//	cout << endl;
//	//}
//	//cout << endl;
//
//	for (int i = 0; i <= H; i++)
//	{
//		cout << string(H - i,sp);
//		cout << string(i,u);
//		cout << endl;
//	}
//	cout << endl;
//
//	for (int i = H; i <= H && i != 0; i--)
//	{
//		cout << string(H - i,sp);
//		cout << string(i, u) << endl;
//	}
//	cout << endl;
//}
//
//void main()
//{
//	setlocale(LC_ALL, "ru");
//	char sp = ' ';
//	int H;
//	char sim;
//	
//
//	cout << "Введите Высоту : " << endl;
//	cin >> H;
//
//	cout << "Введите симол : " << endl;
//	cin >> sim;
//
//	tre(sim, H, sp);
//
//}

// 3 task 

//void natural(int number,list <int> mylist)
//{
//	while (number != 1)
//	{
//		if (number%2 == 0)
//		{
//			/*cout << number / 2 << endl;*/
//			number = number / 2;
//			mylist.push_back(number);
//
//		}
//		else
//		{
//			/*cout << number * 3 + 1 << endl;*/
//			number = number * 3 + 1;
//			mylist.push_back(number);
//		}
//
//		copy(mylist.begin(), mylist.end(), ostream_iterator<int>(cout, " "));
//		cout << endl;
//
//		mylist.unique();  // удалили все дубликаты
//	}
//
//}
//void main()
//{
//
//	list <int> mylist;
//
//	setlocale (LC_ALL, "ru");
//	int sim;
//	cout << "Ввидите значение : " << endl;
//	cin >> sim;
//
//	natural(sim,mylist);
//}

// 4 task


// 
//int fact(int X)
//{
//	if (X <= 1)
//	{
//		return 1;
//	}
//	return X * fact(X - 1);
//}
//
//void main()
//{
//	setlocale(LC_ALL, "ru");
//	int summ = 0;
//	int n;
//	cout << "Введите значение";
//	cin >> n;
//
//	for (int i = 1; i <= 5 ; i++)
//	{
//		summ +=  (-1 * (i) * (5 - i) / (fact(i)));
//	}
//
//	cout << summ << endl;
//}
// 

// 5 task

// 
//bool number_single1(const int& rang)
//{
//	return rang % 2 == 0 && rang != 2;
//}
//
//bool number_single2(const int& rang)
//{
//	return rang % 3 == 0 && rang != 3;
//}
//
//bool number_single3(const int& rang)
//{
//	return rang % 5 == 0 && rang != 5;
//}
//
//bool number_single4(const int& rang)
//{
//	return rang % 7 == 0 && rang != 7;
//}
//
//void foo(int rang, list <int> mylist)
//{
//	mylist.remove_if(number_single1);
//	mylist.remove_if(number_single2);
//	mylist.remove_if(number_single3);
//	mylist.remove_if(number_single4);
//
//	copy(mylist.begin(), mylist.end(), ostream_iterator<int>(cout, " "));
//	mylist.unique();
//}
//
//void main()
//{
//	setlocale(LC_ALL, "ru");
//
//	int rang;
//	cout << "Введите диапазон до : " << endl;
//	cin >> rang;
//
//	list <int> mylist;
//
//	for (int i = 0; i <= rang; i++)
//	{
//		mylist.push_back(i);
//	}
//
//	foo(rang,mylist);
//}

// 6 task

//int UWU(int zn)
//{
//	int a;
//	a = 1;
//	for (int i = 1; i <= zn; i++)
//	{
//		a *= i;
//	}
//
//	return a;
//}
//
//void main()
//{
//
//	setlocale(LC_ALL, "ru");
//	int H;
//
//	cout << "Введите высоту треугольника : " << endl;
//	cin >> H;
// 
//	cout << "1" << endl;
// 
//	for (int i = 1; i <= H; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			cout << (UWU(i) / (UWU(j) * UWU(i - j))) << " ";
//		}
//		cout << endl;
//	}
//}