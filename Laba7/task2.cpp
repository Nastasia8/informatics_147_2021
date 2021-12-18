/*2. Написать класс Employee, содержащий информацию о ФИО, стаже, должности,...*/
#include <iostream>
#include <fstream>

using namespace std;
/*
lastName - Фамилия
name - Имя
patronimic - Отчество
post - должность
address - Домашний адрес
experience - Стаж
numPhone - Номер телефона
hourWork - кол-во отработанных часов
costHour - стоимость одного часа работы
*/
class Employee{
    private:
     string lastName, name, patronimic, post, address, numPhone;

    public:
    int experience, hourWork;
    long costHour, salary;
        void paycheck(int hourWork, long costHour){ // метод определяющий зарплату сотрудника
            salary = hourWork*costHour;
            cout << "\nЗарплата сотрудника составляет "<< salary<< " руб.\n";
        }
        void award(int experience){ // метод рассчитывающий премию в зависимости от стажа работы
            if (experience < 3)
                cout << "\nПремия на 3% составит "<< (salary * 1.03) - salary <<" руб.\nЗарплата с премией сотрудника составляет "<< salary * 1.03 <<" руб.\n";
            else if (experience >= 3 && experience < 6) 
                cout << "\nПремия на 5% составит "<< (salary * 1.05) - salary <<" руб.\nЗарплата с премией сотрудника составляет "<< salary * 1.05 <<" руб.\n";
            else if (experience >= 6 && experience < 9) 
            cout << "\nПремия на 7% составит "<< (salary * 1.07) - salary <<" руб.\nЗарплата с премией сотрудника составляет "<< salary * 1.07 <<" руб.\n";
            else cout << "\nПремия на 13% составит "<< (salary * 1.13) - salary <<" руб.\nЗарплата с премией сотрудника составляет "<< salary * 1.13 <<" руб.\n";
        }
        

        void getInfo(){ // метод отображающий всю информацию о сотруднике фирмы
            cout << "\n---------------------------------------------"
                 << "\n: ФИО сотрудника: "<<lastName<<' '<<name<<' '<<patronimic
                 << "\n: Стаж: "<<experience
                 << "\n: Должность: "<<post
                 << "\n: Домашний адрес: "<< address
                 << "\n: Номер телефона: "<< numPhone
                 << "\n: Кол-во отработанных часов: "<< hourWork
                 << "\n: Стоимость одного часа работы: "<< costHour<<endl;
            paycheck(hourWork, costHour);
            award(experience);
        }
        void saveInfo(){
            ifstream fin("data.txt");
            fin.clear();
            fin.close();
            ofstream fout ("data.txt");
            fout << "---------------------------------------------"
                 << "\n: ФИО сотрудника: "<<lastName<<' '<<name<<' '<<patronimic
                 << "\n: Стаж: "<<experience
                 << "\n: Должность: "<<post
                 << "\n: Домашний адрес: "<< address
                 << "\n: Номер телефона: "<< numPhone
                 << "\n: Кол-во отработанных часов: "<< hourWork
                 << "\n: Стоимость одного часа работы: "<< costHour<<endl
                 << "\nЗарплата сотрудника составляет "<< salary<< " руб.\n";
            if (experience < 3)
                fout << "\nПремия на 3% составит "<< (salary * 1.03) - salary <<" руб.\nЗарплата с премией сотрудника составляет "<< salary * 1.03 <<" руб.\n";
            else if (experience >= 3 && experience < 6) 
                fout << "\nПремия на 5% составит "<< (salary * 1.05) - salary <<" руб.\nЗарплата с премией сотрудника составляет "<< salary * 1.05 <<" руб.\n";
            else if (experience >= 6 && experience < 10) 
            fout << "\nПремия на 7% составит "<< (salary * 1.07) - salary <<" руб.\nЗарплата с премией сотрудника составляет "<< salary * 1.07 <<" руб.\n";
            else fout << "\nПремия на 13% составит "<< (salary * 1.13) - salary <<" руб.\nЗарплата с премией сотрудника составляет "<< salary * 1.13 <<" руб.\n";
            fout.close();
        }
        void cinInfo(){
            cout << "Введите ФИО сотрудника: ";
            cin >> lastName>>name>>patronimic;
            cout << "Введите стаж: ";
            cin >> experience;
            cout << "Введите должность: ";
            cin >> post;
            cout << "Введите домашний адрес: ";
            cin >> address;
            cout << "Введите номер телефона: ";
            cin >> numPhone;
            cout << "Введите кол-во отработанных часов: ";
            cin >> hourWork;
            cout << "Введите стоимость одного часа работы: "; 
            cin >> costHour;
        }
};

int main (){
    Employee employee1;
    employee1.cinInfo();
    employee1.getInfo();
    employee1.saveInfo();
    return 0;
}