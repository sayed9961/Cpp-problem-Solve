#include<iostream>
#include<string>
using namespace std;
    class bank{
        string name;
        int acno;
        string actype;
        int balance;

        public:
            void initialize(string n,int ano,string atype,int bal);
            void deposit(int val);
            void withdrawal(int val);
            void display();
    };
    void bank:: initialize(string a,int b,string c,int d){
        name=a;
        acno=b;
        actype=c;
        balance=d;
    }
    void bank::deposit(int val){
        balance+=val;
        cout<<"\nThe new balance is "<<balance<<endl;
    }
    void bank::withdrawal(int val){
        if(val>balance){
            cout<<"\nSorry.. There is no sufficient balance..";
        }
        else{
            balance-=val;
            cout<<"\nThe new balance is "<<balance<<endl;
        }
    }
    void bank:: display(){
        cout<<"\nThe details of the Account is..";
        cout<<"\nName : "<<name<<endl;
        cout<<"\nAccount Number : "<<acno<<endl;
        cout<<"\nAccount Type : "<<actype<<endl;
        cout<<"\nBalance : "<<balance<<endl;
    }

    int main()
    {
        int i,n;
        int ch,x,y;
        string a,b;
        cout<<"\nWelcome to Bank Information Center :D ";
        cout<<"\nChoice : \n 1) Create Your Account \n 2)  Exit :P";
        while(1){
            cout<<"\nEnter your choice..";
            cin>>ch;
            if(ch==1){
                cout<<"\nEnter your Account Number..";
                cin>>x;
            }
            else{
                break;
            }
        cout<<"\nEnter the customer details one by one ";
        cout<<"\nCustomer : "<<endl;
            cout<<"\nEnter Name...";
            cin>>a;
            cout<<"\nEnter Account type...";
            cin>>b;
            cout<<"\nYour Account Number is..";

        cout<<"\nChoice : \n1) Know your Account Inf. \n2) Exit :P";
        while(1){
            cout<<"\nEnter your choice..";
            cin>>ch;
            if(ch==1){
                cout<<"\n Here is Your Information..";
                cin>>x;
            }
             else{
                break;
            }
        }
        return 0;
    }
    };
