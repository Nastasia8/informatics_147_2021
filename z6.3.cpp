#include <bits/stdc++.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int n,i=1;
    cout<<"������� ����������� �����: ";
cin>>n;
if (n<=0) cout<<"�� ����� ������������� �����";
else{
cout<<'\n';
while(n>1){
if (n%2==0) n=n/2;
    else n=(n*3 +1)/2;
cout<<i<<" ��� - "<<n<<endl;
i++;
}
}
    return 0;
}
