#include <bits/stdc++.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int n,i=1;
    cout<<"Введите натуральное число: ";
cin>>n;
if (n<=0) cout<<"Вы ввели ненатуральное число";
else{
cout<<'\n';
while(n>1){
if (n%2==0) n=n/2;
    else n=(n*3 +1)/2;
cout<<i<<" шаг - "<<n<<endl;
i++;
}
}
    return 0;
}
