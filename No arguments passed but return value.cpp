#include<iostream>
using namespace std;
int math();
int main()
{
    cout<<"Function with no argument but return value"<<"\n";
    int a,b;
    int result=a*b;
    cout<<math();
    return 0;
}
int math()
{
    int num1,num2;
    cout<<"Enter the number for num1 :";
    cin>>num1;
    cout<<"Enter the number for num2 :";
    cin>>num2;
    return num1*num2;
}
