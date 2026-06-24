#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter The Number="<<endl;
    cin>>a;
    if(a<0)
    {
        cout<<"The Number is Negative"<<endl;
    }
    else if(a>0)
    {
        cout<<"The Number is Positive"<<endl;
    }
    else
    {
        cout<<"The Number is Zero"<<endl;
    }
}