#include<iostream>
using namespace std;
int main (){

    char element;
    char space=' ';
    int length;
    cout<<"Enter char and length"<<endl;
    cin>>element;
    cin>>length;
    int x=0;
    while (x<=length)
    {
        cout<<string(x,element)<<endl;
        x++;
    }
    cout<<endl;
    for (int i = length; i > 0; i--)
    {
        cout<<string(i,element)<<endl;
    }
    x=1;
    for (int i = length-1; i >=0; i--)
    {
        cout<<string(i,space)<<string(x,element)<<endl;
        x++;
    }
    cout<<endl;
    x=length;
    for (int i = 0; i <=length; i++)
    {
        cout<<string(i,space)<<string(x,element)<<endl;
        x--;
    }
    return 0;
}
/*

//void tre(char u, int H,char sp)
//{
//	int b = 0;
//
//	while (b <= H)
//	{
//		cout << string(b,u);
//		cout << endl;
//		b++;
//	}
//	cout << endl;
//
//	int c = H;
//
//	while (c <= H && c != 0)
//	{
//		cout << string(c, u);
//		cout << endl;
//		c--;
//	}
//	cout << endl;
//
//	//for (int i = H; i <= H && i != 0; i--)
//	//{
//	//	for (int j = 0; j < i; j++)
//	//	{
//	//		cout << u;
//	//	}
//	//	cout << endl;
//	//}
//	//cout << endl;
//
//	for (int i = 0; i <= H; i++)
//	{
//		cout << string(H - i,sp);
//		cout << string(i,u);
//		cout << endl;
//	}
//	cout << endl;
//
//	for (int i = H; i <= H && i != 0; i--)
//	{
//		cout << string(H - i,sp);
//		cout << string(i, u) << endl;
//	}
//	cout << endl;
//}
//
//void main()
//{
//	setlocale(LC_ALL, "ru");
//	char sp = ' ';
//	int H;
//	char sim;
//	
//
	cout << "Введите Высоту : " << endl;
	cin >> H;

	cout << "Введите симол : " << endl;
	cin >> sim;
	tre(sim, H, sp);
    */