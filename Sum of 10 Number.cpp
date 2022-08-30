#include <iostream>
using namespace std;
int main()
{
    int array[9];
    int sum,i,j;
    for(i=0; i<=9; i++){
        cout<<"Enter the array: ";
        cin>>array[i];
    }
    sum=0;
    for(i=0; i<=9; i++){
        sum=sum+array[i];
    }
    cout<<"\nSum of array are : "<<sum;

    return 0;
}
