#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int stolb;
int strok;
int min = 9999999;
int n = 1;
int max = 0;
cout << "Введите строки и столбцы массива ";
cin >> strok >> stolb ;
int array [strok] [stolb];
n = 100 + rand() % 1000;
int max_arr [strok];
int min_arr [stolb];

for (int i = 1; i <= strok; i++)
{
for (int j = 1; j <= stolb; j++)
{
array[i][j] = 0;
array[i][j] = 1 + rand() % n ;
cout << array[i][j] << "\t" ;
}
cout << endl;
}

for (int i = 1; i <= strok; i++)
{
for (int j = 1; j <= stolb; j++)
{
if (array [i][j] < min )
{
min = array [i][j];
}
}
}

cout << "Minimal = " << min << endl;
min = 99999;

for (int i = 1; i <= strok; i++)
{
for (int j = 1; j <= stolb; j++)
{
if (array[i][j] > max)
{
max = array [i][j];
}
}
max_arr[i] = max;
max = 0 ;
}

cout << "А. Максимум в строке = " ;

for (int i = 1; i <= strok; i++)
{
cout << max_arr[i] <<"; ";
}
cout << endl;

for (int j = 1; j <= stolb; j++)
{
for (int i = 1; i <= strok; i++)
{
if (array[i][j] < min)
{
min = array [i][j];
}
}
min_arr[j] = min;
min = 999999;
}

cout << "Б. Минимальные в столбце = " ;

for (int j = 1; j <= stolb; j++)
{
cout << min_arr[j]<<"; ";
}


return 0;
}