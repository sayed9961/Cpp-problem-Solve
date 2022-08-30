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
        balance=d=500;
    }

    void bank::deposit(int val){
        balance+=val;
        cout<<"\nThe new balance is "<<balance<<endl;
    }

    void bank::withdrawal(int val){
        if(val>balance){
            cout<<"\nSorry.. There is no sufficient balance. U Have to At least 500 Taka to Maintain Account";
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
    bank cr,d,w;
int i,n;
       string a,b;
    cout<<"\nWelcome to Bank Information Center :D ";
        cout<<"\nChoice : \n 1) Open a account \n 2) Exit";
        cout<<"\nEnter your choice..";
      switch(cr)
      {
          case 1:
              cout<<cr.display();
              break
      }

            cin>>ch;
            if(ch==1){
                cout<<"\nEnter your Account Number..";
                cin>>x;
                {

        cout<<"Enter the number of customers..";
        cin>>n;
        bank customer[n];
        cout<<"\nEnter the customer details one by one ";
        for(i=0;i<n;i++){
            cout<<"\nCustomer : "<<i+1<<endl;
            cout<<"\nEnter Name...";
            cin>>a;
            cout<<"\nEnter Account type...";
            cin>>b;
            cout<<"\nYour Account Number is.."<<i+1<<endl;
            customer[i].initialize(a,i+1,b,0);
        }
                customer[x-1].display();
            }
}            else if(ch==2){
                cout<<"\nEnter the Account Number and the Amount to be deposited..";
                cin>>x>>y;
                customer[x-1].deposit(y);
            }
            else if(ch==3){
                cout<<"\nEnter the Account Number and the Amount to be withdrawn..";
                cin>>x>>y;
                customer[x-1].withdrawal(y);
            }
            else{
                break;
            }
        }
        return 0;
    }
