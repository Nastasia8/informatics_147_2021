#include <iostream>
#include <cmath>
using namespace std;
int sum_of_even(int x, int y){
   int s=0;
    for ( int i = x; i <= y; i++)
    {
        if (!(i%2)) 
        {
            s=s+i;
        }
    }
    
    return s;
}
int main(){
    int x,y;
    cout<<"Enter [x;y]:"<<endl;
    cin>>x;
    cin>>y;
    cout<<"the sum of even nubmers on ["<<x<<";"<<y<<"] = "<<sum_of_even(x,y)<<endl;
    return 0;

}