#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

void deposit(int P, int n, int choice) {

    if (choice != 0) {

        float m = choice;
        float I = 15;
        float S = (P * (pow((1 +((I/100) / (m/12))), (m / (12 * n)))));

        cout << "Future cost = " << S << endl;
    }


int main() {

    int P,n,choice;

    cout << "Enter P (deposit amount) and n (deposit term)" << endl;
    cout << "P = ";
    cin >> P;
    cout << "n = ";
    cin >> n;

    cout <<"Choose one of three periods."<<endl;

    cout <<"1) 3"<<endl;
    cout <<"2) 6"<<endl;
    cout <<"3) 12"<<endl;

    cin >> choice;
    switch(choice)
    {
        case 1:
            choice = 3;
            deposit(P,n,choice);
            break;
        case 2:
            choice = 6;
            deposit(P,n,choice);
            break;
        case 3:
            choice = 12;
            deposit(P,n,choice);
            break;
        default:
            cout<< "Restart programm and enter valid value" <<endl;
            choice = 0;
            break;
    }
    return 0;
}


