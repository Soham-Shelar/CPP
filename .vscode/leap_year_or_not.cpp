#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter The Year="<<endl;
    cin>>a;
    if("a%4==0")
    {
        cout<<""<<a;
        cout<<"Given Year Is Leap";
    }
    else
    {
        cout<<""<<a;
        cout<<"   Given Year is Not Leap Year";
    }
    return 0;
}