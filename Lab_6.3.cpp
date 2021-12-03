#include <iostream>
#include <list>

using namespace std;
//список, сводимость к единице
int Reducibility(int);

int main()
{
    int number, i;
    list<int> result;
    cout << "Enter the number : " ;
    cin >> number;
    i = number;
    while(i != 1)
    {
        i = Reducibility(i);
        result.push_back(i);
    }
    cout << endl;
    for (int n : result)
        cout << n << "\t";
    cout << endl;

    return 0;
}

int Reducibility(int number)
{
    if (number %2 == 0)
    {
        number = number / 2;
    }
    else
    {
        number = (number * 3 + 1) / 2;
    } 
    return number;
}