#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter The 1st Number=";
    cin>>a;
    cout<<"Enter The 2nd number=";
    cin>>b;
    cout<<"Enter The 3rd Number=";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"A is greatest Number"<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"B is Greater Number"<<endl;
    }
    else if(c>a && c>b)
    {
        cout<<"C is Greater Number"<<endl;
    }
    else
    {
        cout<<"Numbers are same";
    }
    return 0;
}