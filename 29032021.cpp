#include <iostream>
using namespace std;
class x
{
public:
int a = 10;
int b = 20;
};
class y
{
public:
int c = 30;
int d = 40;
};
class z: public x,public y
{
public:
void sum()
{
int result;
result= a+b+c+d;
cout<<" Sum of all the values are: "<<result<< endl;
}
};
int main()
{
z ob;
ob.sum();
return 0;
}
