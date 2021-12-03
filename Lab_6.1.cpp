#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;
//зеркальные массивы
int main()
{
    srand(time(NULL));
    int column, row;
    cout <<"Enter the number of rows and columns : ";
    cin >> row >> column;
    cout << endl << setw(5);
    int array[row][column];

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            array[i][j] = -20+rand()%20;
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << array[i][j] << setw(5);
        }
        cout << endl;
    }
    cout << endl;

    int column_arr = column - 1;
    int mirror_array[row][column];

    for(int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            mirror_array[i][j] = array[i][column_arr-j];
        }
    }
    
    for(int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << mirror_array[i][j] << setw(5);
        }
        cout << endl;
    }
    
    return 0;
}