#include <iostream>

using namespace std;

void pointer(int *zn_1, int *zn_2, int *zn_3)
{
    cout << *zn_1 << " " << *zn_2 << " "<<*zn_3;
}

int main()
{
    int zn_1 = 18;
    int zn_2 = 11;
    int zn_3= 2003;
    pointer(&zn_1, &zn_2, &zn_3);
    return 0;
}