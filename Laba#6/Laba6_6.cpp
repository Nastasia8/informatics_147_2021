#include<iostream>

using namespace std;

double fact(int k)
{
    if(k < 0) 
        return 0; 
    if (k == 0) 
        return 1; 
    else
        return k * fact(k - 1);
}

void treug (int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (fact(i) / (fact(j) * fact(i - j))) << " ";
        }
    cout << endl;
    }
}

int main()
{
    int height = 0;
    cout << "Введите высоту треугольника: " << endl;
    cin >> height;
    cout << endl;
    treug (height);
    return 0;
}