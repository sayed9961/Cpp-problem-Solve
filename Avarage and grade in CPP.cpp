#include<iostream>
#include<string>
using namespace std;
class student
{
private:
    string name, couce;
    int idno;
    double marks1,marks2,marks3;
    char grade;
    double total, per;
public:
    void inputData()
    {
  cout<<"Enter the name"<<endl;
  getline(cin,name);
  cout<<"Enter Depertment"<<endl;
  getline(cin,couce);
  cout<<"Enter ID no"<<endl;
  cin>>idno;
  cout<<"Enter marks of 3 subjects"<<endl;
  cin>>marks1>>marks2>>marks3;
  cout<<"\n";
  cin.ignore();
    }
    void gradecal()
    {
  total = marks1+marks2+marks3;
  per= (total*100)/400;
  if(per<=100&&per>=80)
      grade='A';
  else if(per<80&&per>=70)
       grade='B';
  else if(per<70&&per>=50)
            grade='C';
  else
            grade='F';
    }
    void showInfo()
    {
  cout<<"Name- "<<name<<endl;
  cout<<"Department- "<<couce<<endl;
  cout<<"ID no- "<<idno<<endl;
  cout<<"Total marks obtained out of 300- "<<total<<endl;
  cout<<"Percentage- "<<per<<endl;
  cout<<"Grade- "<<grade<<endl;
    }
};
int main()
{
    student s;
        s.inputData();
        s.gradecal();
 cout<<".............STUDENT DETAILS "<<" .............."<<endl;
        s.showInfo();
};
