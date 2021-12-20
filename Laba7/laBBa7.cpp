#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;


class Student
{

private:
	string name;
	int well;
	int group;
	int age;


public:

	string GetName()
	{
		return name;
	}

	void SetName(string namX)
	{
		name = namX;
	}

	//----------------
	void SetWell(int X)
	{
		well = X;
	}

	int GetWell()
	{
		return well;
	}

	//------------------
	void SetAge(int X)
	{
		age = X;
	}

	int GetAge()
	{
		return age;
	}
	//------------------
	void Setgroup(int X)
	{
		group = X;
	}

	int Getgroup()
	{
		return group;
	}
	//-----------------

	void Print()
	{
		cout << "Имя : " << name << ";\tКурс : " << well << ";\tГруппа : " << group <<";\t Возраст : "<< age << endl;
	}

};

int main()
{
	setlocale(LC_ALL, "ru");
	
	Student Onestudent;
	Student Twostudent;
	Student threestudent;

	string namex;
	int wellx;
	int groupx;
	int agex;

	cout << "Введите ФИО" << endl;
	cin >> namex;

	cout << "Введите свой курс" << endl;
	cin >> wellx;

	if ((wellx < 1 || wellx >= 5))
	{
		cout << "Введены некоректные значения" << endl;
		return 0;
	}

	cout << "Введите свой группу" << endl;
	cin >> groupx;
	if ((groupx < 0 || groupx >= 999))
	{
		cout << "Введены некоректные значения" << endl;
		return 0;
	}

	cout << "Введите свой возраст" << endl;
	cin >> agex;
	if ((agex < 16 || agex >= 40))
	{
		cout << "Введены некоректные значения" << endl;
		return 0;
	}

	Onestudent.SetName(namex);
	Onestudent.GetName();
	Onestudent.SetWell(wellx);
	Onestudent.GetWell();
	Onestudent.Setgroup(groupx);
	Onestudent.Getgroup();
	Onestudent.SetAge(agex);
	Onestudent.GetAge();


	// проверка

	cout << "Введите ФИО" << endl;
	cin >> namex;

	cout << "Введите свой курс" << endl;
	cin >> wellx;

	if ((wellx < 1 || wellx >= 5))
	{
		cout << "Введены некоректные значения" << endl;
		return 0;
	}

	cout << "Введите свой группу" << endl;
	cin >> groupx;
	if ((groupx < 0 || groupx >= 999))
	{
		cout << "Введены некоректные значения" << endl;
		return 0;
	}

	cout << "Введите свой возраст" << endl;
	cin >> agex;
	if ((agex < 16 || agex >= 40))
	{
		cout << "Введены некоректные значения" << endl;
		return 0;
	}

	Twostudent.SetName(namex);
	Twostudent.GetName();
	Twostudent.SetWell(wellx);
	Twostudent.GetWell();
	Twostudent.Setgroup(groupx);
	Twostudent.Getgroup();
	Twostudent.SetAge(agex);
	Twostudent.GetAge();

	cout << "Введите ФИО" << endl;
	cin >> namex;

	cout << "Введите свой курс" << endl;
	cin >> wellx;

	if ((wellx < 1 || wellx >= 5))
	{
		cout << "Введены некоректные значения" << endl;
		return 0;
	}

	cout << "Введите свой группу" << endl;
	cin >> groupx;
	if ((groupx < 0 || groupx >= 999))
	{
		cout << "Введены некоректные значения" << endl;
		return 0;
	}

	cout << "Введите свой возраст" << endl;
	cin >> agex;
	if ((agex < 16 || agex >= 40))
	{
		cout << "Введены некоректные значения" << endl;
		return 0;
	}

	threestudent.SetName(namex);
	threestudent.GetName();
	threestudent.SetWell(wellx);
	threestudent.GetWell();
	threestudent.Setgroup(groupx);
	threestudent.Getgroup();
	threestudent.SetAge(agex);
	threestudent.GetAge();


	Onestudent.Print();
	Twostudent.Print();
	threestudent.Print();

	return 0;
}