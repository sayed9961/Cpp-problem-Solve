#include<iostream>
using namespace std;
class input
{
    int a,b;
public:
    input()
    {
        cin>>a>>b;
        cout<<a+b<<endl;
    }
    void sum()
    {
        cout<<a+b<<endl;
    }
};
int main()
{
    input ob1;
    //*ob1.sum();*//
    return 0;
};
