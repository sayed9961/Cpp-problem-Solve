#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int array[4];
    int sum,i,j;
    for(i=0; i<=4; i++){
        cout<<"Enter the array: ";
        cin>>array[i];
    }
    sum=0;
    for(i=0; i<=4; i++){
        sum=sum+array[i];
    }
    cout<<"\nSum of array are : "<<sum;
    getch();
    return 0;
}
