#include<iostream>
using namespace std;
class Test
{
    int a,b;
 public:
    Test()
    {
        cout<<"Enter The Value: ";
        cin>>a>>b;
        cout<<a+b<<endl;
    };
  /*int math()
    {

    };*/


    ~Test()
    {
        cout<<"end of object";
    }
};
int main()
{
    Test ob;
    //ob.math();
    return 0;
};
