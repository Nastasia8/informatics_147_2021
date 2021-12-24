#include <iostream>
#include <string>
using namespace std;

class Animals
{
protected:
	string name;
	string clor;
	int age;

public:

	Animals(string name, string clor,int age)
	{
		this ->name = name;
		this->clor = clor;
		this->age = age;
	}

	string GetName()
	{
		return name;
	}

	virtual string say()
	{
		return 0;
	}

	virtual void Show()
	{
		cout << "\n кличка : " << name << "\nЦвет : "<< clor << "\nВозраст : " << age;
	}

};

class dog : public Animals
{
private:
	string country;

public:

	dog(string name, string clor, int age, string country) : Animals(name, clor, age)
	{
		this -> country = country;
	}

	 void Show() override
	{
		 cout << "\nкличка : " << name << "\nЦвет : " << clor << "\nВозраст : " << age << "\nCтрана : " << country;
	}

	 string say() override
	 {
		 return "agvgavvag";
	 }

};


class cat : public Animals
{
private:
	string breed;

public:

	cat(string name, string clor, int age,string breed) : Animals(name, clor, age)
	{
		this->breed = breed;
	}

	void Show() override
	{
		cout << "\nкличка : " << name << "\nЦвет : " << clor << "\nВозраст : " << age << "\nПорода : " << breed;
	}

	string say() override
	{
		return "may may may";
	}

};

class raccoon : public Animals
{
private:
	string weight;

public:

	raccoon(string name, string clor, int age, string weight) : Animals(name, clor, age)
	{
		this-> weight = weight;
	}

	void Show() override
	{
		cout << "\nкличка : " << name << "\nЦвет : " << clor << "\nВозраст : " << age << "\nВес : " << weight;
	}

	string say() override
	{
		return "я енотик полоскун";
	}
	
};



int main()
{
	setlocale(LC_ALL, "ru");
	//
	dog dogerz("YE","blue",3,"germany");
	dogerz.Show();
	cout << endl;
	cout << dogerz.GetName() << " say " << dogerz.say() << endl << endl;

	//
	cat UWU("Борис", "Белый", 1, "Неизвестна");
	UWU.Show();
	cout << endl;
	cout << UWU.GetName() << " say " << UWU.say() << endl << endl;
	
	//

	raccoon bor("Маслори", "Серый", 3, "6 кг");
	bor.Show();
	cout << endl;
	cout << bor.GetName() << " say " << bor.say() << endl << endl;


	return 0;
}