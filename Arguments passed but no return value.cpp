#include<iostream>
using namespace std;
void mul(int a,int b);
int main()
{
    int num1, num2, multi;
    cout << "Function with argument no return value" << endl;
    cout<<"Enter the number for num1: ";
    cin>>num1;
     cout<<"Enter the number for num2: ";
     cin>>num2;
    mul(num1,num2);

    return 0;
}
void mul(int a, int b)
{
    cout<<"Multiply is: "<<a*b<<endl;
}
