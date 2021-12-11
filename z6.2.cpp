#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    cout<<endl;
    for (int i=1;i<=a;i++){
        cout<<string(i,'@')<<endl;
    }
    cout<<endl;
    for (int i=a;i>=1;i--){
        cout<<string(i,'#')<<endl;
    }
    cout<<endl;
    int i=1;
    while(i<=a){
        cout<<string(a-i,' ')<<string(i,'$')<<endl;
        i ++;
    }
    cout<<endl;
    i=a;
    while(i>=1){
        cout<<string(a- i,' ')<<string(i,'%')<<endl;
        i --;
    }
    return 0;
}
