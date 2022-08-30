#include<iostream>
using namespace std;
class Test{
int a,b;
public:
    Test(){
    cin>>a>>b;
    }
    void sum(){
    cout<<a+b;
    }
};
int main()
{
    Test ob;
    ob.sum();
    return 0;
}
