#include <iostream>
#include <ctime>
using namespace std;

int fn(int k) {
    if (k==0) {
        return 0;
    }
    if (k==1) {
        return 3;
    }
    if (k==2) {
        return 5;
    }
    else return fn(k-1) + fn(k-2) + fn(k-3);
}
int main () {
    for (int i = 0; i < 15; i++)
    {
        cout << fn(i) << " ";
    }
    return 0;
}
