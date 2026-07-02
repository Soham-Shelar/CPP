#include<iostream>
using namespace std;
int main()
{
    int a,b,temp=0,i;
    cout<<"Enter Lower Limit No.=";
    cin>>a;
    cout<<"Enter Upper Limit No. = "<<endl;
    cin>>b;
    for(i=a;i<=b;i++)
    {
        temp=temp+i;

    }
    cout<<"Sum Of Number Between Given Range="<<temp<<endl;
    return 0;
}