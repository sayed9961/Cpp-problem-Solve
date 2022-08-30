#include<iostream>
using namespace std;
class test
{
public:
   int sum (int x, int y);
   float sum (float x, int y);
   int sum (int x, int y, int z);
};
int test::sum (int x, int y)
{
    cout<<x<<"  "<<y<<endl;
    return x, y;
}
float test::sum (float x, int y)
{
    cout<<x<<"  "<<y<<endl;
    return x,y;
}
int test::sum (int x,int y,int z)
{
    cout<<x<<"  "<<y<<"   "<<z<<endl;
    return x,y,z;
}
int main()
{
    test ob;
        ob.sum(20,30);
        ob.sum(30,35);
        ob.sum(40,50,60);
        return 0;
};
