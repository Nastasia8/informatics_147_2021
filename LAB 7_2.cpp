#include <iostream>
#include <string>

using namespace std;

class Employee
{
    private: //закрытые поля
        string Name, Familia, Otchestvo, post, address, NumbPhone;
    
    public:
        int experience, HourWork; //кол-во отработанных часов, опыт(стаж)
        long CostHour, Salary; // стоимость одного часа работы(1), зарплата(2)
        
        //подсчет зарплаты сотрудника (внутренний метод)
        void Oplata(int HourWork, long CostHour)
        {
            Salary = HourWork * CostHour;
            cout << "Зарплата сотрудника: " << Salary << " рублей" << endl;
        }
        
        //расчет премии сотрудника (взято из другой работы)
        void Award(int experience)
        {
            if (experience < 3)
                cout << "\nПремия на 3% составит "<< (Salary * 1.03) - Salary <<" руб.\nЗарплата с премией сотрудника составляет "<< Salary * 1.03 <<" руб.\n";
            else if (experience >= 3 && experience < 6) 
                cout << "\nПремия на 5% составит "<< (Salary * 1.05) - Salary <<" руб.\nЗарплата с премией сотрудника составляет "<< Salary * 1.05 <<" руб.\n";
            else if (experience >= 6 && experience < 9) 
            cout << "\nПремия на 7% составит "<< (Salary * 1.07) - Salary <<" руб.\nЗарплата с премией сотрудника составляет "<< Salary * 1.07 <<" руб.\n";
            else cout << "\nПремия на 13% составит "<< (Salary * 1.13) - Salary <<" руб.\nЗарплата с премией сотрудника составляет "<< Salary * 1.13 <<" руб.\n";
        }
        
        void VvodInfo()//метод ввода данных 
        {
            cout << "Ввести ФИО сотрудника: ";
            cin >> Familia >> Name >> Otchestvo;
            
            cout << "Ввести стаж сотрудника: ";
            cin >> experience;
            
            cout << "Ввести телефонный номер сотрудника: ";
            cin >> NumbPhone;
            
            cout << "Ввести стоимость 1 часа работы сотрудника: ";
            cin >> CostHour;
            
            cout << "Ввести должность сотрудника: ";
            cin >> post;
            
            cout << "Ввести домашний адрес сотрудника: ";
            cin >> address;
            
            cout << "Введите кол-во отработанных часов: ";
            cin >> CostHour;
        }
        
        //Вывод введенной информации о сотруднике и его зарплате
        void getInfo()
        {
            cout << endl;
            cout << "ФИО сотрудника: " << Familia << ' ' << Name << ' ' << Otchestvo << endl;
            cout << "Стаж сотрудника: " << experience << " лет" << endl;
            cout << "Телефонный номер сотрудника: " << NumbPhone << endl;
            cout << "Cтоимость 1 часа работы сотрудника: " << CostHour << " руб./час" << endl;
            cout << "Должность сотрудника: " << post << endl;
            cout << "Домашний адрес сотрудника: " << address << endl;
            cout << "Кол-во отработанных часов: " << CostHour << endl;
            cout << endl;
            
            Oplata(HourWork, CostHour);
            Award(experience);
            
        }
        
};



int main()
{
    Employee firstEmployee;
    firstEmployee.VvodInfo();
    firstEmployee.getInfo();
    
    return 0;
}
