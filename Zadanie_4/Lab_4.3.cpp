#include <iostream>
#include <ctime>
using namespace std;

int main()
{   
    srand(time (NULL));
    int size;
    int min = INT_MAX;
    cout << "Enter size of array  ";
    cin >> size;
    int *arr = new int[size];
    
    for (int i = 0; i < size; i++)
    {
        arr[i] = -10 + rand()%20; 
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << endl << "Minimal = " << min << endl;
    delete []arr;
    return 0;
}
