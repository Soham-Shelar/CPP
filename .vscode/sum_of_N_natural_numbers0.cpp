#include<iostream>
using namespace std;
int main()
{
    int i,temp=0,a;
    cout<<"Enter The Number="<<endl;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        temp=temp+i;
    }
    cout<<"Sum ="<<temp<<endl;
    return 0;
}
