#include <iostream>//не помню у кого брал
#include <cmath>
using namespace std;

void change(float *pa, float *pb)//всегда вначале обознач переменные
{
float c = *pa;//присваиваем им значения
*pa=*pb;
*pb=c;
}

int main()
{
float a, b;//не стал далеко ходить и сразу взял предложенные значения
a=34.5;
b=67.9;
cout<< a << "|" << b << endl;//ну а сама эта 
change (&a,&b);
cout << a ;
cout << "|"<<b<<endl;
return 0;
}