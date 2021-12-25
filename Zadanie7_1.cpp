#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
    string FIO;
    int course;
    int group;
    int age;

    public:
    void input();
    void Print();
};

void Student::input()
{
    cout<<"Entered FIO:";
    getline (cin, FIO);
    cout<<"Entered course:";
    cin>>course;
    cout<<"Entered group:";
    cin>>group;
    cout<<"Entered age:";
    cin>>age;
}

void Student::Print()
{
    cout<<"FIO="<<FIO<<"\ncourse="<<course<<"\ngroup="<<group<<"\nage="<<age<<endl<<endl;
}

int main()
{
    Student Ivan;
    Ivan.input();
    Ivan.Print();
    Student Georgiy;
    Georgiy.input();
    Georgiy.Print();
    Student Danila;
    Danila.input();
    Danila.Print();
    return 0;
}