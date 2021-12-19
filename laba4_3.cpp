#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int size;
    cout<<"Enter size"<<endl;
    cin>>size;
    int *arr = new int [size];
   for (int i = 0; i < size; i++)
   {
       arr[i]=rand()%10;
   }
   for (int i = 0; i < size; i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   int min=arr[0];
   for (int i = 0; i < size; i++)
   {
       if(arr[i]<min){
           min=arr[i];
       }
   }
   cout<<"min element = "<<min<<endl;
   delete [] arr;
    return 0;
}