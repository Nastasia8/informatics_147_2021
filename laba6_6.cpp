#include<iostream>

using namespace std;

int element(int a);

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"1"<<endl;

    for (int i = 1; i < size; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << (element(i) / (element(j) * element(i - j))) << " ";
		}
		cout << endl;
	}
    
    return 0;
}

int element(int a)
{
	int ch=1;
	for (int i = 1; i <= a; i++)
	{
		ch *= i;
	}

	return ch;
}