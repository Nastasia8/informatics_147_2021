#include <iostream>
#include <string>

using namespace std;

class Student
{
    private: //закрытые поля
        string Name, Familia, Otchestvo;
        int course, group, age;
    
    public:
        static int k; //переменная для отсчета кол-ва эклземпляров
        void VvodInfo()//метод ввода данных 
        {
            cout << "Ввести ФИО студента: ";
            cin >> Familia >> Name >> Otchestvo;
            cout << "Ввести возраст студента: ";
            cin >> age;
            cout << "Ввести курс и группу студента через пробел: ";
            cin >> course >> group;
            cout << endl;
            k++;
        }
        void getInfo();    
        
};

//внешний метод для вывода введенных данных (взято из другой работы)
int Student::k = 0;
void Student::getInfo()
{
    cout << "ФИО студента: " << Familia << ' ' << ' ' << Name << ' ' << Otchestvo << endl;
    cout << "Курс: " << course << " | № Группа: " << group << endl;
    cout << "Возраст: " << age << endl;
    cout << endl;
}


//метод для проверки введенных данных придумать не смог

int main() //экземпляры класса Student
{
    Student firstStudent;
    firstStudent.VvodInfo();
    cout << "Студент " << Student::k << endl;
    firstStudent.getInfo();
    
    
    Student secondStudent;
    secondStudent.VvodInfo();
    cout << "Студент " << Student::k << endl;
    secondStudent.getInfo();
    
    
    Student thirdStudent;
    thirdStudent.VvodInfo();
    cout << "Студент " << Student::k << endl;
    thirdStudent.getInfo();
    
    
    return 0;
}
