#include<iostream>
#include<ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	// - создание д массива
	int ROWS;
	cout << "Введите ROWS : ";
	cin >> ROWS;

	int COLS;
	cout << "Введите COLS : ";
	cin >> COLS;


	int **arr = new int* [ROWS];

	for (int i = 0; i < ROWS; i++)
	{
		arr[i] = new int[COLS];
	}
	/////////////////////////////////

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";;
		}

		cout << endl;
	}
	cout << endl;

	int maxsim = arr[0][0];
	int *maxsim_arr = new int[ROWS];
	
	int minsim = arr[0][0];
	int *minsim_arr = new int[ROWS];

	for (int i = 0; i < ROWS; i++)
	{
		maxsim = arr[i][0];
		minsim = arr[i][0];
		
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > maxsim)
			{
				maxsim = arr[i][j];
			}
		
			if (arr[i][j] < minsim)
			{
				minsim = arr[i][j];
			}
		}
		
				maxsim_arr[i] = maxsim;
				minsim_arr[i] = minsim;
				/*cout << maxsim_arr[i] << "; ";*/
	}
		
		
			cout << "Максимальные числа в массиве  : ";
			for (int i = 0; i < ROWS; i++)
			{
				cout << maxsim_arr[i] << ";  ";
			}
		
			cout << endl;
			cout << endl;
		
			cout << "Минимальные числа в массиве  : ";
			for (int i = 0; i < ROWS; i++)
			{
				cout << minsim_arr[i] << ";  ";
			}
			cout << endl;


	// - удаление д массива
	for (int i = 0; i < ROWS; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	delete[] maxsim_arr;
	delete[] minsim_arr;
}
