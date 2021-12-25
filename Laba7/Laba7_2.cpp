#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Employee
{
protected:
    string name;
    float staz;
    string dolznost;
    string adress;
    string num_phone;
    int hours;
    float stoimost;

//проверка на заполнение строчки с именем:
    string checkName(string name)
    {
        if (name == "")
        {
            cout << "Введите ФИО работника: ";
            getline(cin, name);
            cout << endl;
        }
        return name;
    }

//проверка на заполнение строчки со стажем:
    float checkStaz(float staz)
    {
        if (staz <= 0)
        {
            cout << name << endl << "Введите стаж рабоника: ";
            cin >> staz;
            cout << endl;
        }
        return staz;
    }

//проверка на заполнение строчки с должностью:
    string checkDolznost(string dolznost)
    {
        if (dolznost == "")
        {
            cout << name << endl << "Введите должность работника: ";
            getline(cin, dolznost);
            cout << endl;
        }
        return dolznost;
    }

//проверка на заполнение строчки с адресом:
    string checkAdress(string adress)
    {
        if (adress == "")
        {
            cout << name << endl << "Введите адресс работника: ";
            getline(cin, adress);
            cout << endl;
        }
        return adress;
    }

//проверка на заполнение строчки с телефоном:
    string checkNum_phone(string num_phone)
    {
        if (num_phone == "")
        {
            cout << name << endl << "Введите телефон работника: ";
            getline(cin, num_phone);
            cout << endl;
        }
        return num_phone;
    }

//проверка на заполнение строчки с отр. часами:
    int checkHours(int hours)
    {
        if (hours <= 0)
        {
            cout << name << endl << "Введите количество отработанных часов: ";
            cin >> hours;
            cout << endl;
        }
        return hours;
    }
    
//проверка на заполнение строчки с часами:
    int checkStoimost(int stoimost)
    {
        if (stoimost <= 0)
        {
            cout << name << endl << "Введите стоимость 1 часа работы: ";
            cin >> stoimost;
            cout << endl;
        }
        return stoimost;
    }

public:
    Employee (string name, float staz, string dolznost, string adress, string num_phone, int hours, float stoimost)
    {
        this -> name = checkName(name);
        this -> staz = checkStaz (staz);
        this -> dolznost = checkDolznost (dolznost);
        this -> adress = checkAdress (adress);
        this -> num_phone = checkNum_phone (num_phone);
        this -> hours = checkHours (hours);
        this -> stoimost = checkStoimost (stoimost) ;
    }

    void zp (float zarp)
    {
        zarp = hours * stoimost;
        cout << name << ". Зарплата: " << zarp << endl;
    }

    void premiya (float zarp_p)
    {
        zarp_p = hours * stoimost;
        if (staz >= 1 && staz < 3)
        {
            cout << name << ". Премия: " << (zarp_p * 3)/100 << endl;
        }
        else if (staz >= 3 && staz < 6)
        {
            cout << name << ". Премия: " << (zarp_p * 5)/100 << endl;
        }
        else if (staz >= 6 && staz <= 9)
        {
            cout << name << ". Премия: " << (zarp_p * 7)/100 << endl;
        }
        else if (staz >= 10)
        {
            cout << endl << name << ". Премия: " << (zarp_p * 13)/100 << endl;
        }
    }

    void Show ()
    {
    cout << "ФИО работника: " << name << endl << "Стаж: " << staz << endl << "Должность: " << dolznost << endl << "Адресс: " << adress << endl << "Номер телефона: " << num_phone << endl << "Кол-во часов: " << hours << endl << "Стоимость часа работы: " << stoimost << endl;
    cout << endl;
    }

    void Zapis()
    {
        ofstream file (name + ".txt");
        file << "Имя работника: " << name << endl;
        file << "Стаж: " << staz << endl;
        file << "Должность: " << dolznost << endl;
        file << "Адресс: " << adress << endl;
        file << "Номер телефона: " << num_phone << endl;
        file << "Кол-во часов: " << hours << endl;
        file << "Стоимость часа работы: " << stoimost << endl;
        file.close();
    }
};

int main()
{
    float zarp, zarp_p;

    Employee rabot_1 ("Ivanov Ivan Ivanovich", 2, "Программист", "Иваново; ул.Ивановская, 11", "88005353535", 40, 300);
    Employee rabot_2 ("Решетникова Анна Васильевна", 3, "Дизайнер", "", "89604376583", 60, 290);

    rabot_1.Show();
    rabot_2.Show();

    rabot_1.zp(zarp);
    rabot_2.zp(zarp);
    cout << endl;
    rabot_1.premiya(zarp_p);
    rabot_2.premiya(zarp_p);

    rabot_1.Zapis();
    rabot_2.Zapis();

    return 0;
}