#include<iostream>
using namespace std;
int main()
{
    int array[6];
    cout<<"Enter 6 integers:"<<endl;
    for(int i=0;i<6;i++)
    {cin>>array[i];}
    cout<<"Unsorted array is: "<<endl;
    for (int i= 0; i < 6; i++)
    {
        cout << array[i] << " "; 
        cout << endl;
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(array[j]>array[j+1])
            {   //Swap the array elements
            array[j]=array[j]+array[j+1];
            array[j+1]=array[j]-array[j+1];
            array[j]=array[j]-array[j+1];
            }
        }
    }
    cout<<"Bubble Sorted array is: "<<endl;
    for (int i= 0; i < 6; i++)
    {
        cout << array[i] << " "; 
        cout << endl;
    }
return 0;
}
