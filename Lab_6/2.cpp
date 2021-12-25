#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int n, k, i;
    char line;
    line = '*';
    cout << "Введите высоту желаемой перамиды " << endl;
    cin >> n;
    cout << "Введите направление пирамиды: 1 - лево, 2 - право " << endl;
    cin >> k;
    for (int i=1; i <=n; i++)
    {
        for (int j=1; j <=i; j++)
            cout << line;
        cout << endl;
    }
    cout << endl;
    for (int i=1; i <=n; i++)
    {
        for (int j=n+1; j !=i; j--)
            cout << line << endl;
    }
    cout << line << endl;
    return 0;
}
