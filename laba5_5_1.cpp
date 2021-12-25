#include<iostream>

using namespace std;

int nod(int a, int b)
{
    if (b == 0){
        return a;
        }
    else{
        return nod(b, a % b);
        }
}

int main()
{
    int one,two,three,n;

    cout << "Enten 1 number: ";
    cin >> one;
    cout << "Enter 2 number : ";
    cin >> two;
    cout << "Enter 3 number : ";
    cin >> three;
    cout << "NOD numbers : " << nod(nod(one, two), three) << endl;
    return 0;
}