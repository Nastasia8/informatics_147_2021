#include <iostream>
#include <iomanip> 
#include <ctime>
using namespace std;

void findmin(int **arr, int str, int stolb, int *arr_min)
{
	int min = INT_MAX;
	for (int i = 0; i < str; i++)
	{
        int min = INT_MAX;
		for (int j = 0; j < stolb; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}

		arr_min[i] = min;
	}
	cout << "Minimal simvol " << endl;

	for (int i = 0; i < str; i++)
	{
		cout << arr_min[i] << setw(10);
	}

}

int main()
{
    srand(time(NULL));
    int Strok, Stolb;
	cout << "Enter strok, stolb " ;
	cin >> Strok >> Stolb;
	int **arr = new int *[Strok];

	for (int i = 0; i < Strok; i++)
	{
		arr[i] = new int[Stolb];
	}
	int* arr_min = new int[Stolb];

	for (int i = 0; i < Strok; i++)
	{
		for (int j = 0; j < Stolb; j++)
		{
			arr[i][j] = -100 + rand() % 100;
		}
	}

	for (int i = 0; i < Strok; i++)
	{
		for (int j = 0; j < Stolb; j++)
		{
			cout << arr[i][j] << "    ";
		}

		cout << endl;
	}

	findmin(arr, Strok, Stolb, arr_min);

	for (int i = 0; i < Strok; i++)
	{
		delete arr[i];
	}

	delete[] arr;
	delete[] arr_min;

    return 0;
}