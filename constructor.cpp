#include<iostream>
using namespace std;
class Test
{
    int a,b;
 public:
     int math;
    Test(int a, int b);

  /*int math()
    {

    };*/


    ~Test()
    {
        cout<<"end of object";
    }
};
Test::Test(int a, int b)
    {
        cout<<"Enter The Value: ";
        cout<<a+b<<endl;
    }
int Test::math()
{
    cin>>a>>b;

};
int main()
{
    Test ob();
    ob.math();
    return 0;
};

