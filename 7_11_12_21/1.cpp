#include <iostream>
#include <string>//взял у бутусова саши. пытался делать сам, вообще шляпа получилась

using namespace std;

class Student
{
private:
    string FIO;//начало, как на паре делал
    int course;
    int group;
    int age;    
    string checkFIO(string FIO)
    {
        if (FIO == "")
        {
            cout << "Enter new FIO: ";//ввод фио
            getline(cin, FIO);
        }
        return FIO;
    }
    int checkCourse(int course)
    {
        if ((course <= 0) || (course > 4))
        {
            cout << "Enter new course: ";//ввод курса
            cin >> course;
        }
        return course;
    }
    int checkGroup(int group)
    {
        if (group == 0)
        {
            cout << "Enter new Group: ";//ввод группы
            cin >> group;
        }

        return group;
    }
    int checkAge(int age)
    {
        if (age > 100)
        {
            cout << "Enter new Age: ";//ввод возраста
            cin >> age;
        }

        return age;
    }
public:
    void input(string FIO, int course, int group,int age);
    void show();

};

void Student::input(string FIO, int course, int group,int age)
{
    this->FIO = checkFIO(FIO);//присваивание фио, курса, группы, возраста
    this->course = checkCourse(course);
    this->group = checkGroup(group);
    this->age = checkAge(age);

}

void Student::show()
{
    cout << "FIO: " << FIO << "\nCourse: " << course << "\nGroup: " << group << "\nAge: " << age << endl;//вывод "значений"
}

int main()
{
    Student First;
    Student Second;
    Student Third;
    First.input("Butusov Alexander Olegovich", 1, 42, 18);//оставлю его тут, а ниже заменю
    Second.input("Balashov Alexander Petrovich", 1, 147, 17);
    Third.input("", 5, 0, 101);//честно, понятия не имею что это за цифры
    First.show();
    Second.show();
    Third.show();
}