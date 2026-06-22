#include<iostream>
using namespace std;
class account
{
    int accno;
    string name;
    static float intrest;
public:
account(int accno, string name)
{
    this->accno=accno;
    this->name=name;
}
void display()
{
    cout<<"Account No: "<<accno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Intrest: "<<intrest<<endl;
}
};
float account::intrest=5.5;
int main()
{
    account a1(101,"John");
    a1.display();
    account a2(102,"Ajay");
    a2.display();
    return 0;
}