class Massive
{
private:
	int* data;
	int* data_Mid;
	int** mass;
	int** mass2;
	int** mass3;
	int m_rows;
	int m_cols;

public:
	int rows;
	int cols;

	Massive(int rows,int cols)
	{
		m_rows = rows;
		m_cols = cols;

		mass = new int* [m_rows];
		for (int i = 0; i < m_rows; i++)
		{
			mass[i] = new int[m_cols];
		}

		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				mass[i][j] = rand() % 100 - 50;
			}
		}
		//////////////////////////////////////
		mass2 = new int* [m_rows];
		for (int i = 0; i < m_rows; i++)
		{
			mass2[i] = new int[m_cols];
		}

		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				mass2[i][j] = rand() % 100 - 50;
			}
		}


		///////////////////////////////////

		mass3 = new int* [m_rows];
		for (int i = 0; i < m_rows; i++)
		{
			mass3[i] = new int[m_cols];
		}

		///////////////////////////////////

		data = new int[m_rows];

		///////////////////////////////////

		data_Mid = new int[m_rows];

	}


	void nulll()
	{
		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				if (mass[i][j] < 0)
				{
					mass[i][j] = 0;
				}
			}
		}
	}

	void MID()
	{
		
		for (int j = 0; j < m_rows; j++)
		{
			int vov = 0;
			for (int i = 0; i < m_cols; i++)
			{
				vov += mass[i][j];
			}
			vov = vov / m_rows;

			data_Mid[j] = vov;
			
		}


	}

	void odd()
	{
		int countt = 0;

		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				if (mass[i][j] % 2 != 0)
				{
					/*cout << mass[i][j] << "\t";*/
					countt ++;
				}
			}
		}

		data[0] = countt;
	}

	void MAX()
	{
		int maxx = mass[0][0];

		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				if (mass[i][j] > maxx)
				{
					maxx = mass[i][j];
				}
			}
		}
		data[1] = maxx;
	}

	void Print_Data()
	{
		for (int i = 0; i < m_rows; i++)
		{
			cout << data[i] << "\t";
		}

	}

	void Print_Data_MID()
	{
		cout << "MID : ";
		for (int i = 0; i < m_rows; i++)
		{
			cout << data_Mid[i] << "\t";
		}

	}

	void Print()
	{
		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				cout << mass[i][j] << "\t";
			}
			cout << endl;
		}

		//cout << endl;
		//cout << endl;
		//for (int i = 0; i < m_rows; i++)
		//{
		//	for (int j = 0; j < m_cols; j++)
		//	{
		//		cout << mass2[i][j] << "\t";
		//	}
		//	cout << endl;
		//}
	}

	void trans()
	{
		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				mass2[i][j] = mass[i][j];
			}
		}

		int x;
		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				mass2[j][i] = mass[i][j];
			}
		}

		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				cout << mass2[i][j] << "\t";
			}
			cout << endl;
		}

	}

	void matrix()
	{
		
		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				mass3[i][j] = mass[i][j] + mass2[i][j];
			}
		}

		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				cout << mass3[i][j] << "\t";
			}
			cout << endl;
		}

	}

	~Massive()
	{
		for (int i = 0; i < rows; i++)
		{
			delete mass[i];
		}
		delete[] mass;

		for (int i = 0; i < rows; i++)
		{
			delete mass2[i];
		}
		delete[] mass2;

		for (int i = 0; i < rows; i++)
		{
			delete mass3[i];
		}
		delete[] mass3;

		cout << "Массив удалён" << endl;

		delete[] data;
		delete[] data_Mid;
	}

};


int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));



	Massive god(5, 5);

	cout << endl;
	god.Print();
	cout << endl;
	cout << endl;
	god.matrix();

	return 0;
}