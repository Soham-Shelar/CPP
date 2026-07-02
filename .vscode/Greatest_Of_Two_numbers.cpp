#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 1st Number=";
    cin>>a;
    cout<<"Enter 2nd Number="<<endl;
    cin>>b;
    if(a>b)
    {
        cout<<"1st Number is Greater."<<endl;
    }
    else if(a<b)
    {
        cout<<"2nd Number Is Greater."<<endl;
    }
    else
    {
        cout<<"Both Numbers Are Same."<<endl;
    }
}