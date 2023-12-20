#include <iostream>  
using namespace std;  
int main()  
{
    char str1[30],str2[30];
    int count,counter=0;
    cout<<"Enter first string: ";
    cin>>str1;
    cout<<"Enter second string: ";
    cin>>str2;
    for(int i=0;str1[i]!='\0'||str2[i]!='\0';i++)
    {
        counter++;
        if(str1[i]!=str2[i])
        {++count;}
    }
    if (count==0)
    {
        cout<<"Strings are equal."<<endl;
        cout<<"New string is :";
        for(int i=counter;i>=0;i--)
        {
            cout<<str1[i];
        }
    }
    else 
    {
        cout<<"Strings are not equal.";
    }
return 0;
}
//This program takes two strings as input from the user and compares them. 
//If they are identical, it prints out a new string and inverting one of them.