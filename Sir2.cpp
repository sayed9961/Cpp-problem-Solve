#include <iostream>
using namespace std;
class Rectangle
{
	public:
		int length;
		int breadth;
		Rectangle( int l, int b )
		{
			length = l;
			breadth = b;
		}
		int Area()
		{
			return length * breadth;
		}
};
int main()
{
	Rectangle rt1(4,5), rt2(5,8);
	cout << "Area of 1st: " << rt1.Area() << endl;
	cout << "Area of 2nd: " << rt2.Area() << endl;
	return 0;
}
