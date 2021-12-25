#include <iostream>

using namespace std;

class Student {

public:
    static int k;
    void cinInfo() {
        cout << "Введите ФИО студента(лучше на английском): ";
        cin >> lastName >> Name >> surename;
        cout << "Курс и группа ";
        cin >> course >> group;
        cout << "Возраст студента: ";
        cin >> age;
        cout << endl;
        k++;
    }
    void getInfo();

private:
    string lastName, Name, surename;
    int course, group, age;
};
int Student::k = 0;
void Student::getInfo() { 
    cout << "ФИО студента: " << lastName << ' ' << Name << ' ' << surename << endl
        << "Курс " << course << " Группа " << group << endl
        << "Возраст студента: " << age << " лет" << endl;
}

int main() { 
    setlocale(LC_ALL, "ru");

    Student firstStudent;
    firstStudent.cinInfo();
    cout << "Студент " << Student::k << endl;
    firstStudent.getInfo();

    Student secondStudent;
    secondStudent.cinInfo();
    cout << "Студент " << Student::k << endl;
    secondStudent.getInfo();

    Student thirdStudent;
    thirdStudent.cinInfo();
    cout << "Студент " << Student::k << endl;
    thirdStudent.getInfo();

    cout << endl;
    return 0;
}