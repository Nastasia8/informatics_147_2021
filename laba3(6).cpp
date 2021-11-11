#include <iostream>
#include <cmath>

using namespace std;

int Proizvedenie (int);

int main()
{
int number; int numb; int sum = 0; int i = 1;
cout<<"Enter a six-digit number "<<endl;
cin>>number;
numb = number;
while ( i != 0)
{
i = numb / 10;
sum += 1;
numb = numb / 10;
}
//cout<<sum <<endl;
if (sum != 6)
{
cout<<"Not a six-digit number"<<endl;
exit(0);
}

cout<<"Proizvedenie = "<<Proizvedenie(number);

return 0;
}

int Proizvedenie (int number)
{
int i = 1; int numb; int proizved = 1; int kon;
numb = number;
while ( i != 0)
{
i = numb / 10;
kon = numb % 10;
proizved *= kon;
numb = numb / 10;
}
return proizved;
}
