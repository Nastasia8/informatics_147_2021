#include <iostream>

using namespace std;

void posled (int f[])
{
    for(int n = 3; n < 15; n++)
    {   
        f[n] = f[n-1] + f[n-2] + f[n-3];
        cout << f[n] << endl;

    }
}
// все элементы - это т.е. с f[0] по f[15], где начиная с f[3] считает функция?
int main()
{
    int f[15];
    f[0] = 0;
    f[1] = 3;
    f[2] = 5;
    cout << f[0] << endl << f[1] << endl << f[2] << endl;
    posled(f);
    return 0;
}
