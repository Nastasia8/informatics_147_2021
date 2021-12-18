#include <iostream>// я нифига не понял задание, но вроде так))
#include <cmath>
using namespace std;
float Stoimost(int, int, int);

int main()

{
    int P, n, m;
    cout<<"P (sum) =";
    cin>>P;
    cout<<"n (kolichestvo let) = ";
    cin>>n;
    cout<<"kolichestvo nach = ";
    cin>>m;
    cout<<(P*(pow((1+(0.15*12)/(100*m)),(m/12)*n)))<<endl;
    return 0;
}

float Stoimost(int P, int m, int n)
{
    return(P*(pow((1+(0.15*12)/(100*m)),(m/12)*n)));
}






