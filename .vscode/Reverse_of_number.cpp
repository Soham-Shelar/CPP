#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter The First Number=";
    cin>>a;
    cout<<"Enter The Second Number=";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"1st Number="<<a<<endl;
    cout<<"2nd Number="<<b<<endl;
}