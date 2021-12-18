/*1. Создать класс Student, который содержит закрытые поля...*/
#include <iostream>

using namespace std;
class Student{
    
    public:
    static int k;
    void cinInfo(){
        cout << "Введите ФИО студента: ";
        cin >> lastName>> Name>> patronimic;
        cout << "Курс и группа ";
        cin >> course >> group;
        cout << "Возраст студента: ";
        cin >> age;
        cout << endl;
        k++;
    }
        void getInfo();            

    private:
    /*
    lastName - Фамилия
    Name - Имя
    patronimic - Отчество
    course - курс
    group - группа
    age - Возраст
    */
    string lastName, Name, patronimic;
    int course, group, age;
};
int Student::k=0;
void Student::getInfo(){ // метод класса за пределом
    cout << "ФИО студента: "<<lastName<<' '<<Name<<' '<<patronimic<<endl
                << "Курс "<<course<<" Группа "<<group<<endl
                <<"Возраст студента: "<<age<<" лет\n\n";
}

int main (){ // 3 экземпляра класса Student
    Student firstStudent;
    firstStudent.cinInfo();
    cout << "Студент "<<Student::k<<endl;
    firstStudent.getInfo();
    
    Student secondStudent;
    secondStudent.cinInfo();
    cout << "Студент "<<Student::k<<endl;
    secondStudent.getInfo();
    
    Student thirdStudent;
    thirdStudent.cinInfo();
    cout << "Студент "<<Student::k<<endl;
    thirdStudent.getInfo();
    return 0;
}