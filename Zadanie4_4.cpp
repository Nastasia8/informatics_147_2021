#include <iostream>
using namespace std;

void FillArray(int* pArr, int size)
{
    for(int i; i<size; i++)
    {
    pArr[i]=rand();
    }
}

void show(int* pArr, int size)
{
    for(int i; i<size; i++)
    {
        cout<<pArr[i]<<' ';
    }
    cout<<endl;
}

void findMin(int* pArr, int size)
{
    int min=100000;
    for(int i=0; i<size; i++)
    {
        if(min>pArr[i])
        min=pArr[i];
    }
    cout<<"min= "<<min<<endl;
}

int main()
{
    int size;
    cout<<"Entered length array: ";
    cin>>size;
    int *pArr= new int[size];
    FillArray(pArr,size);
    show(pArr,size);
    findMin(pArr,size);
    return 0;
}