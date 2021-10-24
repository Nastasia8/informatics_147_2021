#include <iostream>
#include <cmath>
using namespace std;
float fun(int, int, float, int);
int main(){
    int srok,m;
    float sum_vklada,p;
    int i=15;
    cout<<"Enter sum_vklada,srok,kol-vo nachislenij v god "<<endl;
    cin>>sum_vklada;
    cin>>srok;
    cin>>m;
    cout<<"S = "<<fun(srok, m, sum_vklada, i)<<endl;
    return 0;
    
}
float fun(int srok, int m, float sum_vklada, int i){
    return sum_vklada*pow((1+ (i/100.0)/(m/12.0)),m/12.0*srok);
}