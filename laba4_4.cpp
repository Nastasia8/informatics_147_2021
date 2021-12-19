#include<iostream>
#include<ctime>
using namespace std;

void print_array(int arr[], int size){
   for (int i = 0; i < size; i++)
   {
       cout<<arr[i]<<" ";
   }
}
int min_element_array(int arr[], int size){
  int min=arr[0];
   for (int i = 0; i < size; i++)
   {
       if(arr[i]<min){
           min=arr[i];
       }
   }
   return min;
}
void filling_array(int arr[], int size){
    for (int i = 0; i < size; i++)
   {
       arr[i]=rand()%10;
   }
}
int main(){
    srand(time(NULL));
    int size;
    cout<<"Enter size"<<endl;
    cin>>size;
    int *arr = new int [size];
   filling_array(arr,size);
    print_array(arr,size);
   cout<<endl;
   cout<<"min element = "<<min_element_array(arr,size)<<endl;
   delete [] arr;
    return 0;
}