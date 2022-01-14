#include <iostream>
#include <string> 
using namespace std;

class Student 
{
private: // спецификатор доступа
    string FIO; // тип данных, хранящий строку
    int course, group, age; 
    
 public:
    void Input();
    void Show();
};

void Student::Input()
{
    cout << "Введите ФИО студента: ";
    getline(cin, FIO); //функция, которая используется для чтения строки из входного потока
    cout <<  "Введите курс " << endl;
    cin >> course;
    cout << "Введите группу" << endl;
    cin >> group;
    cout << "Введите возраст " << endl;
    cin >> age;
}

void Student::Show()
{
    cout << "Студент: " << FIO << endl;
    cout << "Курс: " << course << endl;
    cout << "Группа: " << group << endl;
    cout << "Возраст: " << age << endl;
    
}

int main() {
    Student stud; //объявление объекта
    stud.Input(); //вызов функции Input
    stud.Show(); //вызов функции Show
    return 0;
}