#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    srand(time (NULL));
    int n;
    cout << "Введите размер массива " << endl;
    cin >> n;
    int *array=new int[n];
    for (int i=0; i<n; i++)
    {
        array[i]=-10 + rand()%20;
    }
    for (int i=0; i<n; i++)
    {
        cout << array[i] << endl;
    }
    int m = array[0];
    for (int i=0; i<n; i++)
    {
        if (array[i]<m)
        {
            m=array[i];
        }
    }
    cout << m << endl;
    delete []array;
    return 0;
}
