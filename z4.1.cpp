#include <bits/stdc++.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    short a = -10;
    int b = 10;
    float c = 10.1;

    short *ptr_a = &a;
    int *ptr_b = &b;
    float *ptr_c = &c;

    cout << " �����: " << ptr_a << " �������� ����������: " << *ptr_a << endl;
    cout << " �����: " << ptr_b << " �������� ����������: " << *ptr_b << endl;
    cout << " �����: " << ptr_c << " �������� ����������: " << *ptr_c << endl;
    return 0;
}
