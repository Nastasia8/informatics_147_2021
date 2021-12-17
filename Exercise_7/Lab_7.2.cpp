#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

class Employee
{
    string FIO; // ФИО
    int Experience; // стаж
    string Position; // должность
    string HomeAddress; // домашний адрес
    string PhoneNumber; // номер телефона
    int HoursWorked; // количество отработанных часов
    int Cost_of_OneHour_of_Work; // стоимость одного часа работы
    public:
        Employee(string FIO, int Exp, string Pos, string HAd,
        string PNum, int HWork, int CostOHWork)
        {
            this -> FIO = FIO;
            this -> Experience = Exp;
            this -> Position = Pos;
            this -> HomeAddress = HAd;
            this -> PhoneNumber = PNum;
            this -> HoursWorked = HWork;
            this -> Cost_of_OneHour_of_Work = CostOHWork;
        }
        
        void Show();

        int GetSalary() 
        { 
            return HoursWorked*Cost_of_OneHour_of_Work; 
        }

        float GetPremia()
        {
            if (Experience >= 1 and Experience < 3)
            { return GetSalary()*0.03; }
            else if (Experience >= 3 and Experience < 6)
            { return GetSalary()*0.05; }
            else if (Experience >= 6 and Experience < 10)
            { return GetSalary()*0.07; }
            else {return GetSalary()*0.13; }
        }
};


void Employee::Show()
{
    cout << "FIO : " << FIO << setw(20);
    cout << "Experience : " << Experience << setw(20);
    cout << "Position : " << Position << setw(20);
    cout << "HomeAddress : " << HomeAddress << endl;
    cout << "PhoneNumber : " << PhoneNumber << setw(20);
    cout << "HoursWorked : " << HoursWorked << setw(30);
    cout << "Cost_of_OneHour_of_Work : " << Cost_of_OneHour_of_Work << setw(20);
    cout << "Salary : " << GetSalary() << endl;
    cout << "Premia : " << GetPremia() << endl;
    cout << endl;
}


int main()
{
    Employee firstEmployee("Katsumi", 2, "Manager", "2195 Clifford Street", "408-202-3399", 8, 41);
    Employee secondEmployee("Mitsuko", 4, "Programmer", "1415 Cabell Avenue", "757-778-7450", 7, 52);
    Employee thirdEmployee("Satomi", 9, "Lawyer", "3311 Redbud Drive", "347-585-6295", 8, 45);
    Employee fourthEmployee("Morak", 2000, "Archon", "Li yue", "Nope", 12, 14);

    firstEmployee.Show();
    secondEmployee.Show();
    thirdEmployee.Show();
    fourthEmployee.Show();

    ofstream files;
    files.open("E:\\VSCode_C++\\Exemple.txt");
    if (!files.is_open())
    {
        cout << "File isn't open" << endl;
    }
    else 
    { 
        cout << "File is open" << endl; 
        files.write((char*)&firstEmployee, sizeof(Employee));
        files.write((char*)&secondEmployee, sizeof(Employee));
        files.write((char*)&thirdEmployee, sizeof(Employee));
        files.write((char*)&fourthEmployee, sizeof(Employee));
        cout << "Rewritten to file" << endl;
    }

    files.close();

    return 0;
}