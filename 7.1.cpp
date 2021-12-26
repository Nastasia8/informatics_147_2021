#include <iostream>
#include <string> // тип string применяется для хранения строк
using namespace std;

class Student // Базовый класс студент 
{
protected: // определяет доступ к членам класса
    string name; // объявление переменной имя
    int kurs; // объявление переменной курс
    int group; // объявление переменной группа
    int age; // объявление переменной возраст

    string checkName(string name) //проверка на заполнение строчки с именем.  функция принимает значение и после расчета возвращает новое 
    {
        if (name == "") // если имя = 
        {
            cout << "Введите ФИО студента: "; // вывод на консоль Введите ФИО студента:
            getline(cin, name); // Извлечение данных из сin с помощью getline. программа не будет ожидать вашего ввода, а сразу выведет результат
            cout << endl;
        }
        return name;
    }

    int checkKurs(int kurs) //проверка на заполнение строчки с курсом:
    {
        if (kurs <= 0) // если kurs <= 0
        {
            cout << name << endl << "Введите курс студента: "; // вывод на консоль
            cin >> kurs; // считывание
            cout << endl;
        }
        return kurs;
    }

    int checkGroup(int group) //проверка на заполнение строчки с группой:
    {
        if (group == 0)
        {
            cout << name << endl << "Введите группу студента: ";// вывод
            cin >> group;// считывание
            cout << endl;
        }
        return group;
    }

    int checkAge(int age) //проверка на заполнение строчки с возрастом:
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
    void info (string name, int kurs, int group, int age)// объявление переменных
    {
        this -> name = checkName(name); // запишем новое значение свойства имя

        this -> kurs = checkKurs(kurs); // запишем новое значение свойства курс
        this -> group = checkGroup(group); // запишем новое значение свойства группа
        this -> age = checkAge(age);// запишем новое значение свойства возраст
    }
    void show ();
};

void Student::show() // //вывод информации об объекте класса
{
    cout << "ФИО студента: " << name << endl << "Курс: " << kurs << endl << "Группа: " << group << endl << "Возраст: " << age << endl;
    cout << endl;
}

int main()
{
    Student student1; //создание  объектов класса
    Student student2;
    student1.info("Петров Александр Иванович", 0, 12, 20);
    student2.info("Новикова Валерия Павловна", 4, 0, 22);
    student1.show(); //вывод объектов класса
    student2.show();
    return 0;
}