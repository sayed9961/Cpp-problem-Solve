#include<iostream>
using namespace std;

class Math {
    int num;
public:

    void input() {
        cout << "Enter a number: ";
        cin>>num;
    }

    void check() {
        if (num % 2 == 0) {
            cout << " \n Number is even: " << num;
        } else {
            cout << "\n Number is odd: " << num;
        }
    }
};

int main() {

    Math test;

    test.input();
    test.check();

    return 0;
}
