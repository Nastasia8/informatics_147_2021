#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// 1 wo

//class Student
//{
//private:
//	string name;
//	int well;
//	int group;
//	int age;
//
//
//public:
//
//	string GetName()
//	{
//		return name;
//	}
//
//	void SetName(string namX)
//	{
//		name = namX;
//	}
//
//	//----------------
//	void SetWell(int X)
//	{
//		well = X;
//	}
//
//	int GetWell()
//	{
//		return well;
//	}
//
//	//------------------
//	void SetAge(int X)
//	{
//		age = X;
//	}
//
//	int GetAge()
//	{
//		return age;
//	}
//	//------------------
//	void Setgroup(int X)
//	{
//		group = X;
//	}
//
//	int Getgroup()
//	{
//		return group;
//	}
//	//-----------------
//
//	void Print()
//	{
//		cout << "Имя : " << name << ";\tКурс : " << well << ";\tГруппа : " << group <<";\t Возраст : "<< age << endl;
//	}
//
//};
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	
//	Student Onestudent;
//	Student Twostudent;
//	Student threestudent;
//
//	string namex;
//	int wellx;
//	int groupx;
//	int agex;
//
//	cout << "Введите ФИО" << endl;
//	cin >> namex;
//	cout << "Введите свой курс" << endl;
//	cin >> wellx;
//	cout << "Введите свой группу" << endl;
//	cin >> groupx;
//	cout << "Введите свой возраст" << endl;
//	cin >> agex;
//
//	Onestudent.SetName(namex);
//	Onestudent.GetName();
//	Onestudent.SetWell(wellx);
//	Onestudent.GetWell();
//	Onestudent.Setgroup(groupx);
//	Onestudent.Getgroup();
//	Onestudent.SetAge(agex);
//	Onestudent.GetAge();
//
//
//	cout << "Введите ФИО" << endl;
//	cin >> namex;
//	cout << "Введите свой курс" << endl;
//	cin >> wellx;
//	cout << "Введите свой группу" << endl;
//	cin >> groupx;
//	cout << "Введите свой возраст" << endl;
//	cin >> agex;
//
//	Twostudent.SetName(namex);
//	Twostudent.GetName();
//	Twostudent.SetWell(wellx);
//	Twostudent.GetWell();
//	Twostudent.Setgroup(groupx);
//	Twostudent.Getgroup();
//	Twostudent.SetAge(agex);
//	Twostudent.GetAge();
//
//	cout << "Введите ФИО" << endl;
//	cin >> namex;
//	cout << "Введите свой курс" << endl;
//	cin >> wellx;
//	cout << "Введите свой группу" << endl;
//	cin >> groupx;
//	cout << "Введите свой возраст" << endl;
//	cin >> agex;
//
//	threestudent.SetName(namex);
//	threestudent.GetName();
//	threestudent.SetWell(wellx);
//	threestudent.GetWell();
//	threestudent.Setgroup(groupx);
//	threestudent.Getgroup();
//	threestudent.SetAge(agex);
//	threestudent.GetAge();
//
//
//	Onestudent.Print();
//	Twostudent.Print();
//	threestudent.Print();
//}

// 2 wo

//class Emploe
//{
//private:
//	string name;
//	int standing;
//	string post;
//	string adress;
//	string number_phone;
//	int hours; // колл отработанных часов
//	int many_hours;//стоимость одного часа
//
//	int salary;
//
//public:
//
//	Emploe(string val_name, int val_standing, string val_post, string val_adress, string val_numb, int val_hours, int val_many)
//	{
//		name = val_name;
//		standing = val_standing;
//		post = val_post;
//		adress = val_adress;
//		number_phone = val_numb;
//		hours = val_hours;
//		many_hours = val_many;
//	}
//
//	void Print()
//	{
//		cout << "\nФИО " << name << "\nСтаж " << standing << "\nДолжность " << post << "\nАдрес " << adress << "\nНомер телефона " << number_phone << "\nКоличество отработанных часов " << hours << "\nСтоимость одного часа работы " << many_hours << endl;
//	}
//
//	void salaryVAL()
//	{
//		int x;
//		x = hours * many_hours;
//
//		if (standing > 1 && standing <= 3)
//		{
//			salary = (x * 3) / 100;
//		}
//		if (standing > 3 && standing <= 6)
//		{
//			salary = (x * 5) / 100;
//		}
//		if (standing > 6 && standing <= 9)
//		{
//			salary = (x * 7) / 100;
//		}
//		if (standing > 10)
//		{
//			salary = (x * 13) / 100;
//		}
//
//		cout << "------------------------------------------" << endl;
//		cout << "Премия сотрудника " << salary << endl;
//		cout << "Доход сотрудника " << salary + x << endl;
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	Emploe Human("KIT",5,"main","st 5 egept","89612517635",48,280);
//	Human.salaryVAL();
//	Human.Print();
//
//	Emploe Human2("YE", 18, "CAD", "st 45 japan", "8961211111", 56, 300);
//
//	Human2.salaryVAL();
//	Human2.Print();
//
//
//	string path = "LB7";
//	ofstream F;
//	F.open(path, ofstream::app);
//
//
//	if (!F.is_open())
//	{
//		cout << "Ошибка" << endl;
//	}
//	else
//	{
//		cout << "Норм" << endl;
//		F.write((char*)&Human,sizeof(Emploe));
//		F.write((char*)&Human2, sizeof(Emploe));
//	}
//	F.close();
//}

// 3 wo


// РАБОТА НЕ доделана 
//class Massive
//{
//private:
//	int** mass;
//	int m_rows;
//	int m_cols;
//
//public:
//	int rows;
//	int cols;
//	Massive(int rows,int cols)
//	{
//		m_rows = rows;
//		m_cols = cols;
//
//		mass = new int* [m_rows];
//		for (int i = 0; i < m_rows; i++)
//		{
//			mass[i] = new int[m_cols];
//		}
//
//	}
//
//	~Massive()
//	{
//		for (int i = 0; i < rows; i++)
//		{
//			delete mass[i];
//		}
//		delete[] mass;
//		cout << "Массив удалён" << endl;
//	}
//
//
//};
//
//int main()
//{
//	Massive(5, 5);
//}