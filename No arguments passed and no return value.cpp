#include<iostream>
using namespace std;
void multiply();
int main()
{
    multiply();
    return 0;
}
void multiply()
{
    cout << "Function with no argument and no return value "<<"\n" << endl;
    int num1,num2;
    cout<<"Enter the number for num1: ";
    cin>>num1;
    cout<<"Enter the number for num2: ";
    cin>>num2;
    int sum=num1 * num2;
    cout<<"Total value is: "<<sum<< endl;
}
