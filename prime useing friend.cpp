#include<iostream>
#include<conio.h>
using namespace std;
class first{

    int a, k, i;
public:

    first(int x)
    {
        a = x;
    }
    friend int set(first);
    void calculate() {
        k = 1;
        {
            for (i = 2; i <= a / 2; i++)
                if (a % i == 0) {
                    k = 0;
                    break;
                } else {
                    k = 1;
                }
        }
    }
    void show() {
        if (k == 1)
            cout << "\n" << a << " is Prime Number.";
        else
            cout << "\n" << a << " is Not Prime Numbers.";
    }
};

int main() {
    int a;
    cout << "Enter the Number:";
    cin>>a;
    first obj(a);
    obj.calculate();
    obj.show();
    return 0;
}
