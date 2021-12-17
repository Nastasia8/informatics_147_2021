#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Student
{
    string FIO;
    int course; 
    int group;
    int age;
    public:
        
        Student(string FIO,int course, int group, int age)
        {
            this -> FIO = FIO;
            this -> course = course;
            this -> group = group;
            this -> age = age;
        }
        
        //void getInfo()
        //{
        //    cout << "FIO : " << FIO << setw(10);
        //    cout << "course : " << course << setw(10);
        //    cout << "group : " << group << setw(10);
        //    cout << "age : " << age << endl;
        //}
        
        void Show();
};

void Student::Show()
{
    cout << "FIO : " << FIO << setw(10);
    cout << "course : " << course << setw(10);
    cout << "group : " << group << setw(10);
    cout << "age : " << age << endl;
}

int main()
{
    Student firstStudent("Miriada Huming", 1, 147, 17 );
    Student secondStudent("Azalia Nord", 2, 24, 19);
    Student thirdStudent("Kakashi Hatake", 4, 15, 24);

    //firstStudent.getInfo();
    //secondStudent.getInfo();
    //thirdStudent.getInfo();
    firstStudent.Show();
    secondStudent.Show();
    thirdStudent.Show();

    return 0;
}