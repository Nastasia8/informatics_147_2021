#include <iostream>

using namespace std;

int main()
{
    int stolbec; int strok; int minimal = INT_MAX; int n = 1; int maximal = INT_MIN;
    cout << "Enter stroki and stolbtsy of array ";
    cin >> strok >> stolbec ;
    int array [strok] [stolbec];
    n = 100 + rand() % 1000;
    int max_arr [strok];
    int min_arr [stolbec];

    for (int i = 1; i <= strok; i++)
    {
        for (int j = 1; j <= stolbec; j++)
        {
            array[i][j] = 0;
            array[i][j] = 1 + rand() % n ;
            cout << array[i][j] << "\t" ;
        }
        cout << endl;
    }

    for (int i = 1; i <= strok; i++)
    {
        for (int j = 1; j <= stolbec; j++)
        {
            if (array [i][j] < minimal )
            {
                minimal = array [i][j];
            }
        }
    }

    cout << "Minimal = " << minimal << endl;
    minimal = 99999;

    for (int i = 1; i <= strok; i++)
    {
        for (int j = 1; j <= stolbec; j++)
        {
            if (array[i][j] > maximal)
            {
                maximal = array [i][j];
            }
        }
        max_arr[i] = maximal;
        maximal = 0 ;
    }

    cout << "Maximum in every strok = " ;

    for (int i = 1; i <= strok; i++)
    {
        cout << max_arr[i] << ";  ";
    }
    cout << endl;

    for (int j = 1; j <= stolbec; j++)
    {
        for (int i = 1; i <= strok; i++)
        {
            if (array[i][j] < minimal)
            {
                minimal = array [i][j];
            }
        }
        min_arr[j] = minimal;
        minimal = 999999;
    }

    cout << "Minimum in every stolbec = " ;

    for (int j = 1; j <= stolbec; j++)
    {
        cout << min_arr[j] << ";  ";
    }


    return 0;
}
