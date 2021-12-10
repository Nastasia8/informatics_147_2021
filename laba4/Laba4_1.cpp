#include<iostream>;
using namespace std;


void main()
{
	setlocale(LC_ALL, "ru");

	double ROWS  = 14; // 14
	double COLS  = 7;	// 8

	double delta = 0;

	double F = 0;
	double x = 0;

	double** arr = new double* [ROWS];

	double a = 2;
	double b = 2.5;
	double c = 0;

	int key = 0;
	

	for (int i = 0; i < ROWS; i++)
	{
		arr[i] = new double[COLS];
	}

	////////////////////.////////////////////////

	//for (int i = 0; i < ROWS; i++) // 1 столб
	//{
	//	/*arr[i][0] = delta;
	//	delta += 0.5;*/

	//	for (int j = 0; j < 1; j++)
	//	{

	//		x = arr[i][0];
	//		F = (((sqrt(x - 1)) - (2.2 / x)));
	//		arr[i][j] = 1;

	//		/*arr[i][j] = 2;*/

	//	}
	//}



	for (int i = 0; i < ROWS; i++) //3 столб A
	{
		double c = ((a + b) / 2);

		for (int j = 0; j < 1; j++)// 1
		{
			arr[i][j] = a;
		}

		for (int j = 1; j < 2; j++)//2
		{
			arr[i][j] = b;
		}
	
		for (int j = 2; j < 3; j++)//3
		{
			arr[i][j] = c;
		}
	
		for (int j = 3; j < 4; j++)//4
		{
			arr[i][j] = (b - a);

			if (((b - a) < 0.0001) && ((b-a) > 0))
			{
				key = 1;
			}

		}
	
		for (int j = 4; j < 5; j++)//5
		{
			double Y;
			Y = (((sqrt(a - 1)) - (2.2 / a)));
			arr[i][j] = Y;
		}
	
		for (int j = 5; j < 6; j++)//6
		{
			double Y;
			Y = (((sqrt(c - 1)) - (2.2 / c)));
			arr[i][j] = Y;
		}

		for (int j = 6; j < 7; j++)// 7  f(a) * f(b)
		{
			double Y;
			Y = arr[i][4] * arr[i][5];
			arr[i][j] = Y;

			if (Y < 0)
			{
				b = c;
			}
			else
			{
				a = c;
			}

		}

		if (key == 1)
		{
			cout << "Колл шагов : " << ROWS << "\t" << ";";
			cout << "Корень уравнения равен : " << c << endl << endl;;
			break;
		}
	}

	////////////////////////////123/////////////////

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "	 ";
		}
		cout << endl;
	}


	///////////////////////////////////////////
	
	for (int i = 0; i < ROWS; i++)
	{
		delete arr[i];
	}

	delete[] arr;

}
