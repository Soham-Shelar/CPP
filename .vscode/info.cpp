#include<iostream>
using namespace std;
class student
{
    int rollno;
    string name;
    public: 
    void getdata(int r, string n)
    {
        rollno=r;
        name=n;
    }
    void showdata()
    {
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

int main()
{
    student s1;
    s1.getdata(1,"John");
    s1.showdata();
    student s2;
    s2.getdata(2,"ajay");
    s2.showdata();
    return 0;
}