#include <iostream>
#include <ctime>
using namespace std;

void fillarr(int *parr, int size)
{
    for (int i = 0; i < size; i++)
    {
        parr[i] = -10 + rand()%20; 
    }
}

void show(int *parr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << parr[i] << "  ";
    }
}

void findMin(int *parr, int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (parr[i] < min)
        {
            min = parr[i];
        }
    }
    cout << endl << "Minimal = " << min << endl;
    
}

int main()
{   
    srand(time(NULL));
    int size;
    cout << "Enter size of array  ";
    cin >> size;
    int *arr = new int[size];
        
    fillarr(arr,size);
    show(arr,size);
    findMin(arr, size);

    delete []arr;

    return 0;
}
