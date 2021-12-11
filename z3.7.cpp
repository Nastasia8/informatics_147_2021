#include <bits/stdc++.h>
using namespace std;
int Figura(int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (i == 0 || i == x - 1 || j == 0 || j == y - 1)
            {
                cout << char(219);
            }
            else
            {
                cout << char(255);
            }
        }
        cout << endl;
    }
    return 0;
}
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    Figura(a,b);
    return 0;
}
