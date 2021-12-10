#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int line,column,min_element;
    cout<<"Enter line and column"<<endl;
    cin>>line;
    cin>>column;
    int array[line][column];
    int max_line[line];
    cout<<"Enter array"<<endl;
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin>>array[i][j];
        }
    }
    cout<<"--------------------"<<endl;
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }
    min_element=array[0][0];
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (min_element>array[i][j]){
                min_element=array[i][j];
            }
        }
    }
    cout<<"--------------------"<<endl;
    cout<<"Min element = "<<min_element<<endl;
    for (int i = 0; i < line; i++)
    {   int max;
          max=array[i][0];
        for (int j = 0; j < column; j++)
        {  
            if (array[i][j]>max){
                max=array[i][j];
            }
        }
        max_line[i]=max;
    }
    for (int i = 0; i < line; i++)
    {   
        cout<<"Max line "<<i+1<<" = "<<max_line[i]<<endl;;
    }
        int min_column[column];
    for (int i = 0; i < column; i++)
    {   int min;
        min=array[0][i];
        for (int j = 0; j < line; j++)
        {  
            if (array[j][i]<min){
                min=array[j][i];
            }
        }
        min_column[i]=min;
    }    
    for (int i = 0; i < line; i++)
    {   
        cout<<"Min column "<<i+1<<" = "<<min_column[i]<<endl;;
    }
    return 0;
}