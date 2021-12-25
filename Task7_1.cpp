// Гурьянов Илья, гр. 1/147.
// Задание №7, номер 1.

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Student
{
    string name;
    int age;
    int course;
    int group;

    string setName() // ввод имени (ФИО)
    {
        cout << "Enter student's name: ";
        cin.clear(); // очистка флага ошибки cin
        cin.ignore(); // очистка буфера cin. Без него getline считывается только в первый раз.
        getline(cin, name); // используем getline, а не просто 'cin >> name', чтобы считались все слова из ФИО вместе с пробелами
        return name;
    }

    int setAge() // ввод и проверка возраста
    {
        cout << "Enter age: ";
        cin >> age;
        while (cin.fail() || age <= 0 || age >= 100) // "защита от дурака"
        {
            cout << "Error. Try again." << endl;
            cin.clear(); // очистка флага ошибки cin
            cin.ignore(10000, '\n'); // очистка буфера cin. игнорирование (удаление) первых 10000 символов (либо удаление символов пока не встретит новую строку \n) из буфера cin
            cout << "Enter age: ";
            cin >> age;
        }
        return age;
    }

    int setCourse() // ввод и проверка курса
    {
        cout << "Enter course: ";
        cin >> course;
        while (cin.fail() || course < 1 || course > 6) // "защита от дурака"
        {
            cout << "Error. Try again." << endl;
            cin.clear(); // очистка флага ошибки cin
            cin.ignore(10000, '\n'); // очистка буфера cin. игнорирование (удаление) первых 10000 символов (либо удаление символов пока не встретит новую строку \n) из буфера cin
            cout << "Enter course: ";
            cin >> course;
        }
        return course;
    }

    int setGroup() // ввод и проверка группы
    {
        cout << "Enter group: ";
        cin >> group;
        while (cin.fail() || group < 1 || group > 999) // "защита от дурака"
        {
            cout << "Error. Try again." << endl;
            cin.clear(); // очистка флага ошибки cin
            cin.ignore(10000, '\n'); // очистка буфера cin. игнорирование (удаление) первых 10000 символов (либо удаление символов пока не встретит новую строку \n) из буфера cin
            cout << "Enter group: ";
            cin >> group;
        }
        return group;
    }

public:
    Student();
    void Show();
};

Student::Student() // конструктор 
{
    name = setName();
    age = setAge();
    course = setCourse();
    group = setGroup();
}

void Student::Show() // вывод результата
{
    cout << "Student: " << name << "; age: " << age << "; course: " << course << "; group: " << group << endl; 
}



int main()
{
    // Локализация (отображение кириллицы в консоли). Возможно, потребуется смена шрифта/кодировки в консоли/VS Code
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    Student firstStudent;
    Student secondStudent;
    Student thirdStudent;

    cout << string(40, '-') << endl;
    firstStudent.Show();
    secondStudent.Show();
    thirdStudent.Show();

    return 0;
}