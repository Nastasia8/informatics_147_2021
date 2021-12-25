#include<iostream>
#include<list>
#include<iterator>
using namespace std;
bool number_2(const int& number)
{
	return (number % 2 == 0) && (number != 2);
}

bool number_3(const int& number)
{
	return (number % 3 == 0) && (number != 3);
}

bool number_5(const int& number)
{
	return (number % 5 == 0) && (number != 5);
}

bool number_7(const int& number)
{
	return (number % 7 == 0) && (number != 7);
}

void foo(int number, list <int> result)
{
	result.remove_if(number_2); //удаляем все числа, которые делятся на 2,3,5,7
	result.remove_if(number_3);
	result.remove_if(number_5);
	result.remove_if(number_7);
	copy(result.begin(), result.end(), ostream_iterator<int>(cout, " ")); //выводим список
}
int main()
{
	int number;
	cout << "Enter max number:" << endl;
    cin >> number; //вводим до какого числа будем проверять
	list <int> result; //создаем список
	for (int i = 0; i <= number; i++)
	{
		result.push_back(i); //добавляем числа до заданного в список
	}
	foo(number,result); 
    return 0;
}