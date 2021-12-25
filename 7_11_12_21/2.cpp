#include <iostream>//делал по примеру завидиной кати
#include <string> 

using namespace std;

class Student
{
private:    
	string FIO;  //фио
	int group; //группа
	int course; //курс
	int age; //возраст

	string iFIO(string FIO)
	{
		if (FIO == " ") //вводим фио
		{
			cout << " ФИО = ";
			cin >> FIO;
		}
		return FIO;
	}
	int igroup(int group)//ввод группы
	{
		if (group == 0) 
		{
			cout << "Группа = ";
			cin >> group;
		}
		return group;
	}
	int icourse(int course)//ввод курса
	{
		if (course == 0) 
		{
			cout << "Курс = ";
			cin >> course;
		}
		return course;
	}
	int iage(int age)//ввод возраста
	{
		if (age == 0 ) 
		{
			cout << "Возраст = ";
			cin >> age;
		}
		return age;
	}

public: //видно, что и где
	Student(string FIO, int group, int course, int age)
	{
		this->FIO = iFIO(FIO);
		this->group = igroup(group);
		this->course = icourse(course);
		this->age = iage(age);
	}
	void show()
	{
		cout << "ФИО: " << FIO << endl;
		cout << "Группа: " << group << endl;
		cout << "Курс: " << course << endl;
		cout << "Возраст: " << age << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	
	Student First(" ", 0, 0, 0);   //то, что вводим мы 
	Student Second("Kornilich Ksenia Sergeevna", 1, 42, 18); // данные которые есть
	Student Third(" balashov Alexandr Petrovich", 1, 147, 17); 
	First.show();
	Second.show();
	Third.show();

	return 0;
}


