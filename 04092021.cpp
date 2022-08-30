#include<iostream>
using namespace std;
class A
{
    protected:
    int x,y;
public:
    int input()
    {
        cin>>x>>y;
    }
};
class B: public A
{
public:
int sum()
{
    int add()
    {
       sum=x+y;
    }
     int result()
     cout<<"Sum is "<<sum;
}
};

int main()
{
    B ob;
    ob.input();
    ob.sum();
    ob.result();
    return 0;
}

