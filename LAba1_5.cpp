#include <iostream>
#include <ctime>
using namespace std;


//////////////////////////////////////	 1	////////////////////////////////
//void uou(int a,int b, int c)
//{
//	int *pa = &a;
//	cout << pa << endl;
//	int* pa1 = &b;
//	cout << pa1 << endl;
//	int* pa2 = &c;
//	cout << pa2 << endl;
//}
//
//
//void main()
//{
//	setlocale(LC_ALL, "ru");
//
//	int a = 5;
//	int *pa = &a;
//
//	uou(3,5,8);
//}
//////////////////////////////////////	 2	////////////////////////////////

//void uou(float a, float b)
//{
//	double x;
//
//	cout << a << "\t" << b << endl;
//
//	x = a;
//	a = b;
//	b = x;
//
//	cout << a << "\t" << b << endl;
//}
//
//void main()
//{
//	uou(25.8, 87.5);
//}
//////////////////////////////////////	 3	////////////////////////////////

//void main()
//{
//	setlocale(LC_ALL, "ru");
//	srand(time(NULL));
//
//
//	int SIZE;
//	cout << "Введите размер" << endl;
//	cin >> SIZE;
//
//	int* arr = new int[SIZE];
//
//	/////////////////////////////////////////////////
//
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		arr[i] = rand() % 100;
//
//	}
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//		int MINsim = arr[0];
//	
//		for (int i = 0; i < SIZE; i++)
//		{
//			if (arr[i] < MINsim)
//			{
//				MINsim = arr[i];
//			}
//		}
//	
//	cout << "Минимальное значение в массиве : " << MINsim << endl;
//
//
//
//	/////////////////////////////////////////////////
//	
//	delete[] arr;
//}
/////////////////////////////////////////////////// 4 ///////////////////////////////////////////////////


//void FILLarr(int* parr, int SIZE)
//{
//		for (int i = 0; i < SIZE; i++)
//		{
//			parr[i] = rand() % 100;
//		}
//}
//
//void show(int* parr, int SIZE)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << parr[i] << endl;
//	}
//}
//
//void FINDmin(int* parr, int SIZE)
//{
//	int MINsim = parr[0];
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (parr[i] < MINsim)
//		{
//			MINsim = parr[i];
//		}
//	}
//
//	cout << "Минимальное значение в массиве : " << MINsim << endl;
//}
//
//void main()
//{
//	setlocale(LC_ALL, "ru");
//	srand(time(NULL));
//
//
//	int SIZE;
//	cout << "Введите размер" << endl;
//	cin >> SIZE;
//
//	int* arr = new int[SIZE];
//
//	/////////////////////////////////////////////////
//
//	FILLarr(arr, SIZE);
//	show(arr, SIZE);
//	FINDmin(arr, SIZE);
//
//
//	/////////////////////////////////////////////////
//
//	delete[] arr;
//
//}

/////////////////////////////////////////////////// 5 ///////////////////////////////////////////////////

//void FIndmin(int **arr, int rows, int cols, int *ARRminsim)
//{
//	int minsim = arr[0][0];
//
//	for (int i = 0; i < rows; i++)
//	{
//		int minsim = arr[i][0];
//
//		for (int j = 0; j < cols; j++)
//		{
//			if (arr[i][j] < minsim)
//			{
//				minsim = arr[i][j];
//			}
//		}
//
//		ARRminsim[i] = minsim;
//	}
//
//	cout << "Минимальный символы : " << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		cout << ARRminsim[i] << endl;
//	}
//
//}
//
//void main()
//{
//
//	setlocale(LC_ALL, "ru");
//	srand(time(NULL));
//
//	int ROWS;
//	cout << "Введите ROWS : ";
//	cin >> ROWS;
//
//	int COLS;
//	cout << "Введите COLS : ";
//	cin >> COLS;
//
//	int **arr = new int* [ROWS];
//
//	for (int i = 0; i < ROWS; i++)
//	{
//		arr[i] = new int[COLS];
//	}
//
//	int* arrMIN = new int[COLS];
//
//	////////////////////////////////////////
//
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			arr[i][j] = rand() % 100;
//		}
//	}
//
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			cout << arr[i][j] << "\t";;
//		}
//
//		cout << endl;
//	}
//
//	FIndmin(arr, ROWS, COLS, arrMIN);
//	
//
//	/////////////////////////////////////////
//
//	for (int i = 0; i < ROWS; i++)
//	{
//		delete[] arr[i];
//	}
//
//	delete arr;
//	delete arrMIN;
//}