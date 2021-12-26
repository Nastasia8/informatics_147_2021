#include <iostream>
#include <fstream> // один из основных классов файлового ввода/вывода
using namespace std;

class Employee
{
private: // частный
     string lastName, name, otchestvo, dolshnost, address, phoneNumber; // объявление переменных представляющих последовательность символов

public: // общественый
    int experience, hourWork; // объявление переменных

    long costHour, money;
        void paycheck(int hourWork, long costHour) // метод определяющий зарплату сотрудника
        { 
            money = hourWork*costHour; //  money = кол-во отработаных часов * на стоимость часа
            cout << "\nЗарплата сотрудника составляет "<< money << endl; // вывод на консоль 
        }
        
        void premiya(int experience) // рассчитывание премии в зависимости от стажа работы
        { 
            if (experience < 3) // если опыт < 3
                cout << "\nПремия на 3% составит "<< money * 0.03 <<" руб.\nЗарплата с премией сотрудника составляет "<< money * 1.03 <<" руб.\n"; // \n - перевод на новую строку. Вывод на консоль и рассчет
            else if (experience >= 3 && experience < 6) // в противном случае если  опыт >= 3 И < 6
                cout << "\nПремия на 5% составит "<< money * 0.05<<" руб.\nЗарплата с премией сотрудника составляет "<< money * 1.05 <<" руб.\n";
            else if (experience >= 6 && experience < 9)  // в противном случае если  опыт >= 6 И < 9
            cout << "\nПремия на 7% составит "<< money * 0.07 <<" руб.\nЗарплата с премией сотрудника составляет "<< money * 1.07 <<" руб.\n";
            else 
            cout << "\nПремия на 13% составит "<< money * 0.13 <<" руб.\nЗарплата с премией сотрудника составляет "<< money * 1.13 <<" руб.\n";
        }
        
        void getInfo() // отображение информации о сотруднике
        {
            cout << "\nФИО сотрудника: "<<lastName<<' '<<name<<' '<< otchestvo << endl;
            cout << "Стаж: "<< experience << endl;
            cout << "Должность: "<< dolshnost << endl;
            cout << "Домашний адрес: "<< address << endl;
            cout << "Номер телефона: "<< phoneNumber << endl;
            cout << "Количество отработанных часов: "<< hourWork << endl;
            cout << "Стоимость одного часа работы: "<< costHour<<endl;
            paycheck(hourWork, costHour); // платеж кол-во отработаных часов, стоимость часа
            premiya(experience); // премимя ( опыт работы)
        }
        
        void saveInfo()
        {
            ifstream fin("data.txt");
            fin.clear();//  очистка флага ошибки 
            fin.close();
            ofstream fout ("data.txt"); // объект класса ofstream имя объекта fout. связываем объект с файлом
            fout << "-------------------------"; // запись строки в файл
            cout << "ФИО сотрудника: "<<lastName<< ' ' << name << ' ' << otchestvo << endl;
            cout << "Стаж: "<< experience << endl;
            cout << "Должность: "<< dolshnost << endl;
            cout << "Домашний адрес: "<< address << endl;
            cout << "Номер телефона: "<< phoneNumber;
            cout << "Кол-во отработанных часов: "<< hourWork << endl;
            cout<< "Стоимость одного часа работы: "<< costHour<<endl;
            cout << "Зарплата сотрудника составляет "<< money << " руб.\n";
            if (experience < 3)
                fout << "\nПремия на 3% составит "<< money * 0.03 <<" руб.\nЗарплата с премией сотрудника составляет "<< money * 1.03 <<" руб.\n";
            else if (experience >= 3 && experience < 6) 
                fout << "\nПремия на 5% составит "<< money * 0.05<<" руб.\nЗарплата с премией сотрудника составляет "<< money * 1.05 <<" руб.\n";
            else if (experience >= 6 && experience < 9) 
                fout << "\nПремия на 7% составит "<< money * 0.07 <<" руб.\nЗарплата с премией сотрудника составляет "<< money * 1.07 <<" руб.\n";
            else 
                fout << "\nПремия на 13% составит "<< money * 0.13 <<" руб.\nЗарплата с премией сотрудника составляет "<< money * 1.13 <<" руб.\n";
            fout.close();
        }
        
        void cinInfo() // Вывод введенной информации о сотруднике и его зарплате
        {
            cout << "Введите ФИО сотрудника ";
            cin >> lastName >> name >> otchestvo;
            cout << "Введите стаж ";
            cin >> experience;
            cout << "Введите должность ";
            cin >> dolshnost;
            cout << "Введите домашний адрес: ";
            cin >> address;
            cout << "Введите номер телефона: ";
            cin >> phoneNumber;
            cout << "Введите кол-во отработанных часов: ";
            cin >> hourWork;
            cout << "Введите стоимость одного часа работы: "; 
            cin >> costHour;
        }
};

int main ()
{
    Employee employee1;
    employee1.cinInfo(); 
    employee1.getInfo();
    employee1.saveInfo();
    return 0;
}