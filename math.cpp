#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x,a_e,r_e,p_e;
    cin>>x;
    a_e=0.5*pow(10,-3);
    r_e=a_e/x;
    p_e=round((r_e*100)*100)/100;
    cout<<"Absolute Error="<<a_e<<endl<<"Relative Error="<<r_e<<endl<<"Percentage Error="<<p_e<<"%";
}
