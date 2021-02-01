#include<iostream>
using namespace std;
//main program
int main()
{
    //initializing variables
    int fact=1,num;
    cout<<“Enter the number: “;
    //user input
    cin>>num;
    //checking for negative input
    if(num<0)
        cout<<“Invalid input!!\nEnter whole numbers only”;
    // for positive numbers
    else
    {
        for(int i=num;i>0;i–)
        {
            fact*=i;
        }
        cout<<“Factorial of “<<num<<” is “<<fact;
    }
    return 0;
}