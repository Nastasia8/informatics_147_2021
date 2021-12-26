#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Employee
{
private:

    string FIO;
    string post; 
    string address; 
    int experience;
    int pnumber; 
    int PerHour;
    int JobHour;
    int zp;
    double prize;

    void ZPP() {
        cout << endl;
        zp = PerHour * JobHour;
        PREM();
        cout << "з/п = " << zp << endl;
        cout << "Премия = " << prize << endl;

        this->zp = zp;
    }

    void PREM() {
        if (experience >= 1 && experience < 3) {
            prize = zp * 0.03;
        }
        else if (experience >= 3 && experience < 6) {
            prize = zp * 0.05;
        }
        else if (experience >= 6 && experience <= 9) {
            prize = zp * 0.07;
        }
        else if (experience >= 10) {
            prize = zp * 0.13;
        }
        this->prize = prize;
    }

public:

    void in() {
        cout << "Введите ФИО: ";
        cin >> FIO;

        cout << "Ваш стаж: ";
        cin >> experience;

        cout << "Вашу должность: ";
        cin >> post;

        cout << "Ваш адресс:  ";
        cin >> address;

        cout << "Ваш номер телефона: ";
        cin >> pnumber;

        cout << "з/п за всё время:  ";
        cin >> JobHour;

        cout << "з/п в час:  ";
        cin >> PerHour;

        ZPP(); 
        PREM(); 
    }

    void from() {
        cout << endl;
        cout << "ФИО: " << FIO << endl;
        cout << "Стаж: " << experience << endl;
        cout << "Должность: " << post << endl;
        cout << "Адресс: " << address << endl;
        cout << "Номер телефона: " << pnumber << endl;
        cout << "з/п за все время" << JobHour << endl;
        cout << "з/п в час: " << PerHour << endl;
        cout << "з/п: " << zp << endl;
        cout << "Премия: " << prize << endl;
    }
};

int main() {
    setlocale(LC_ALL, "ru");

    Employee worker;

    worker.in();
    worker.from();

    return 0;
}