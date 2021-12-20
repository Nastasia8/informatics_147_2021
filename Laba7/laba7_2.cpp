#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;

class Emploe
{
private:
	string name;
	int standing;
	string post;
	string adress;
	string number_phone;
	int hours; // колл отработанных часов
	int many_hours;//стоимость одного часа

	int salary;

public:

	Emploe(string val_name, int val_standing, string val_post, string val_adress, string val_numb, int val_hours, int val_many)
	{
		name = val_name;
		standing = val_standing;
		post = val_post;
		adress = val_adress;
		number_phone = val_numb;
		hours = val_hours;
		many_hours = val_many;
	}

	void Print()
	{
		cout << "\nФИО " << name << "\nСтаж " << standing << "\nДолжность " << post << "\nАдрес " << adress << "\nНомер телефона " << number_phone << "\nКоличество отработанных часов " << hours << "\nСтоимость одного часа работы " << many_hours << endl;
	}

	void salaryVAL()
	{
		int x;
		x = hours * many_hours;

		if (standing > 1 && standing <= 3)
		{
			salary = (x * 3) / 100;
		}
		if (standing > 3 && standing <= 6)
		{
			salary = (x * 5) / 100;
		}
		if (standing > 6 && standing <= 9)
		{
			salary = (x * 7) / 100;
		}
		if (standing >= 10)
		{
			salary = (x * 13) / 100;
		}

		cout << "------------------------------------------" << endl;
		cout << "Премия сотрудника " << salary << endl;
		cout << "Доход сотрудника " << salary + x << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Emploe Human("KIT",5,"main","st 5 egept","89612517635",48,280);
	Human.salaryVAL();
	Human.Print();

	Emploe Human2("YE", 18, "CAD", "st 45 japan", "8961211111", 56, 300);

	Human2.salaryVAL();
	Human2.Print();


	string path = "LB7";
	ofstream F;
	F.open(path, ofstream::app);


	if (!F.is_open())
	{
		cout << "Ошибка" << endl;
	}
	else
	{
		cout << "Норм" << endl;
		F.write((char*)&Human,sizeof(Emploe));
		F.write((char*)&Human2, sizeof(Emploe));
	}
	F.close();
}