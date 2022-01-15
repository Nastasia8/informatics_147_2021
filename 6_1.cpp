#include <iostream>
using namespace std;

void matr(int rows, int columns)
{
    cout << "Матрица:" << endl;
    int arr[rows][columns];
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            arr[i][j]= rand()%50; // заполнение рандомными числами
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }
    cout<<'\t';
    cout<<"Преобразованная матрица:"<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=(columns-1); j>=0; j--)
        {
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }   
}

int main()
{
    int rows, columns;
    cout << "Введите количество строк" << endl;
    cin>>rows;
    cout << "Введите количество столбцов"<< endl;
    cin >> columns;
    matr(rows, columns);
    return 0;
}