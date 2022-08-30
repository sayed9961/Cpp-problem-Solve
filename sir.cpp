#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle (int,int);

        int area ()
        {
            return (length * breadth);
        }
        int length1()
        {
            return length;
        }

        int breadth1()
        {
            return breadth;
        }
};


Rectangle::Rectangle(int x, int y)
{
    length = x;
    breadth = y;
    cout<<"The area of rectangle is "<<x*y<<endl;
}


int main ()
{
    Rectangle myrectangle (4,5), Rectangle2(5,8);
    return 0;
}
