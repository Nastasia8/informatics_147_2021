#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string student_FIO;
    int course, group, age;
    
public:
    void Input();
    void Show();
};


void Student::Input()
{
    cout << "Введите ФИО студента: ";
    getline(cin, student_FIO);
    cout <<  "Введите курс " << endl;
    cin >> course;
    cout << "Введите группу" << endl;
    cin >> group;
    cout << "Введите возраст " << endl;
    cin >> age;
}

void Student::Show()
{
    cout << "Студент: " << student_FIO <<endl;
    cout << "Курс: " << course << endl;
    cout << "Группа: " << group << endl;
    cout << "Возраст: " << age;
    
}


int main()
{
    setlocale(LC_ALL, "");
    Student student;
    student.Input();
    student.Show();
    return 0;
}
///Спасибо Акиму за разъяснения
