#include<iostream>
using namespace std;
int multiply (int a,int b);
int main()
{
    int num1,num2, add;
    cout << "Function with argument return value" << endl;
    cout<<"Enter the number for num1: ";
    cin>>num1;
    cout<<"Enter the number for num2: ";
    cin>>num2;
    add=multiply(num1,num2);
    cout<<"Multiply is: "<<add<<endl;
    return 0;
}
int multiply(int a, int b)
{
    return(a*b);
}
