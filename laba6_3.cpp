#include<iostream>
#include <list>
#include<string>
#include <iterator>
using namespace std;
int main(){
    int number;
    cout<<"Enter number"<<endl;
    cin>>number;
    list <int> result;
    while (number != 1)
	{
		if (number%2 == 0)
		{	
			number = number / 2;
			result.push_back(number);
		}
		else
		{
			number = (number * 3 + 1)/2;
			result.push_back(number);
		}
    }
    copy(result.begin(), result.end(), ostream_iterator<int>(cout, " "));
	
    return 0;
}
