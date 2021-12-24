#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string name;
    int kurs;
    int group;
    int age;

//проверка на заполнение строчки с именем:
    string checkName(string name)
    {
        if (name == "")
        {
            cout << "Введите ФИО студента: ";
            getline(cin, name);
            cout << endl;
        }
        return name;
    }

//проверка на заполнение строчки с курсом:
    int checkKurs(int kurs)
    {
        if (kurs <= 0)
        {
            cout << name << endl << "Введите курс студента: ";
            cin >> kurs;
            cout << endl;
        }
        return kurs;
    }

//проверка на заполнение строчки с группой:
    int checkGroup(int group)
    {
        if (group == 0)
        {
            cout << name << endl << "Введите группу студента: ";
            cin >> group;
            cout << endl;
        }
        return group;
    }

//проверка на заполнение строчки с возрастом:
    int checkAge(int age)
    {
        if (age <= 0)
        {
            cout << name << endl << "Введите возраст студента: ";
            cin >> age;
            cout << endl;
        }
        return age;
    }

public:
    void info (string name, int kurs, int group, int age)
    {
        this -> name = checkName(name);
        this -> kurs = checkKurs(kurs);
        this -> group = checkGroup(group);
        this -> age = checkAge(age);
    }
    void show ();
};

void Student::show()
{
    cout << "ФИО студента: " << name << endl << "Курс: " << kurs << endl << "Группа: " << group << endl << "Возраст: " << age << endl;
    cout << endl;
}

int main()
{
    Student student1;
    Student student2;
    student1.info("Иванов Иван Иванович", 0, 175, 19);
    student2.info("Куйбышев Дмитрий Петрович", 3, 0, 20);
    student1.show();
    student2.show();
    return 0;
}