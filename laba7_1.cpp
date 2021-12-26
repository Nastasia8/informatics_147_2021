#include<iostream>
#include <string>

using namespace std; 

class Student
{
private:
    string FIO; //переменные объектов класса
    int curs;
    int group;
    int age;

    string getFIO(){ //получаем ФИО через ввод и объединение 3 строк
        string F,I,O;
        cout<<"Enter FIO: "<<endl;
        cin>>F>>I>>O;
        FIO = F + ' '+ I + ' ' + O;
        return FIO; 
    }

    int getcurs(){ //получаем курс студента, реализована проверка вводимых данных
        cout<<"Enter curse: ";
        cin>>curs;
        while ((curs<=0)||(curs>6))
        {
            cout<<"Error, 0 < course < 6. Try again"<<endl;
            cin>>curs;
        }
        return curs;
    }

    int getgroup(){
        cout<<"Enter group: ";
        cin>>group;
        while ((group<=0)||(group>25))
        {
            cout<<"Error, 0 < group < 25. Try again"<<endl;
            cin>>group;
        }
        
        return group;
    }

    int getage(){
        cout<<"Enter age: ";
        cin>>age;
        while ((age<=17)||(age>45))
        {
            cout<<"Error, 17 < age < 45. Try again"<<endl;
            cin>>age;
        }
        return age;
    }


public:
    void Set(); //инициализируем внешние публичные функции
    void Show(); 
};

void Student::Show() //вывод информации об объекте класса
{
    cout<<"Name: "<<FIO<<endl<<"Curs: "<<curs<<endl<<"Group: "<<group<<endl<<"Age: "<<age<<endl<<endl; 
}

void Student::Set(){ //присваиваем переменным класса значения, которые возвращают функции
    string FIO=getFIO();
    int curs=getcurs();
    int group=getgroup();
    int age=getage();
    cout<<endl;
}

int main(){
    Student student_1; //создание 3 объектов класса
    Student student_2;
    Student student_3;

    student_1.Set(); // ввод данных в созданные объекты класса
    student_2.Set();
    student_3.Set();

    student_1.Show(); //вывод объектов класса
    student_2.Show();
    student_3.Show();
    return 0;
}
