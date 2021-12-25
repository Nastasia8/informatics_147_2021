// Гурьянов Илья, гр. 1/147.
// Задание №7, номер 2.

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Employee
{
    string name; // имя (ФИО)
    int workExperience; // стаж
    string post; // должность
    string homeAddress; // домашний адрес
    string phoneNumber; // номер телефона
    int hours; // отработанные часы
    float hourRate; // часовая ставка
    float wage; // зарплата (без премии)
    float workBonus; // премия
    float totalWage; // зарплата (с премией)

public:

    Employee(string n, int wkEx, string p, string hmAdr, string phNum, int h, float hRt) // конструктор
    {
        name = n;
        workExperience = wkEx;
        post = p;
        homeAddress = hmAdr;
        phoneNumber = phNum;
        hours = h;
        hourRate = hRt;
    }

    void WagePlusBonus() // вычисление премии и зарплаты
    {
        wage = hours * hourRate; // зарплата без премии
        if (workExperience >= 1 && workExperience < 3) // вычисление премии
	{
	    workBonus = wage * 0.03;
	}
	else if (workExperience >= 3 && workExperience < 6)
	{
	    workBonus = wage * 0.05;
	}
	else if (workExperience >= 6 && workExperience <= 9)
	{
	    workBonus = wage * 0.07;
	}
	else if (workExperience > 9)
	{
	    workBonus = wage * 0.13;
	}
        else
        {
            workBonus = 0; // если стаж - 0 лет
        }
        totalWage = wage + workBonus; // обшая зарплата с премией
        cout << "Wage w/o bonus: " << wage << "; Bonus: " << workBonus << endl;
        cout << "Total employee's wage: " << totalWage << endl;
    }
    
    void Show() // вывод информации о работнике
    {
        cout << "Employee's name: " << name << endl;
        cout << "Work Experience: " << workExperience << endl;
        cout << "Post: " << post << endl;
        cout << "Home address: " << homeAddress << endl;
        cout << "Phone number: " << phoneNumber << endl;
        cout << "Hours worked: " << hours << endl;
        cout << "Hour rate: " << hourRate << endl;
    }
};

int main()
{
    // Локализация (отображение кириллицы в консоли).
    SetConsoleCP(1251);	
    SetConsoleOutputCP(1251);

    // ввод данных пользователем и их проверка
    string name;
    int workExperience;
    string post;
    string homeAddress;
    string phoneNumber;
    int hours;
    float hourRate;

    cout << "Enter employee's name: ";
    getline(cin, name);

    cout << "Enter employee's work experience (years): ";
    cin >> workExperience;
    while (cin.fail() || workExperience < 0 || workExperience >= 100) // "защита от дурака"
    {
        cout << "Error. Try again." << endl;
        cin.clear(); // очистка флага ошибки cin
        cin.ignore(10000, '\n'); // очистка буфера cin. игнорирование (удаление) первых 10000 символов (либо удаление символов пока не встретит новую строку \n) из буфера cin
        cout << "Enter work experience (years): ";
        cin >> workExperience;
    }

    // только не бейте, но вроде работает

    cout << "Enter employee's post: ";
    cin.clear();
    cin.ignore(10000, '\n'); // очистка буфера cin от того что осталось, а помимо этого решает проблему, что getline считывается только в первый раз, а потом не работает
    getline(cin, post);

    cout << "Enter employee's home address: ";
    cin.clear();
    cin.sync(); // о господи, оно работает     // cin.sync() - убирает все непрочитанные символы из входного потока
    //cin.ignore(); // если использовать cin.ignore, то getline почему-то будет игнорировать первый символ
    getline(cin, homeAddress);
    
    cout << "Enter employee's phone number: ";
    cin.clear();
    cin.sync();
    getline(cin, phoneNumber);

    cout << "Enter employee's worked hours: ";
    cin >> hours;
    while (cin.fail() || hours < 0) // "защита от дурака"
    {
        cout << "Error. Try again." << endl;
        cin.clear(); // очистка флага ошибки cin
        cin.ignore(10000, '\n'); // очистка буфера cin. игнорирование (удаление) первых 10000 символов (либо удаление символов пока не встретит новую строку \n) из буфера cin
        cout << "Enter employee's worked hours: ";
        cin >> hours;
    }

    cout << "Enter employee's hour rate: ";
    cin >> hourRate;
    while (cin.fail() || hourRate <= 0) // "защита от дурака"
    {
        cout << "Error. Try again." << endl;
        cin.clear(); // очистка флага ошибки cin
        cin.ignore(10000, '\n'); // очистка буфера cin. игнорирование (удаление) первых 10000 символов (либо удаление символов пока не встретит новую строку \n) из буфера cin
        cout << "Enter employee's hour rate: ";
        cin >> hourRate;
    }




    Employee employee(name, workExperience, post, homeAddress, phoneNumber, hours, hourRate);
    cout << "\n";
    employee.Show();
    cout << string(30, '-') << endl;
    employee.WagePlusBonus();

    return 0;
}
