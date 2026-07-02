#include<iostream>
using namespace std;
int main()
{
    int num,i,temp=1;
    cout<<"Enter The Number=";
    cin>>num;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            temp=0;
            break;
        }
    }
    if(temp==0)
    {
        cout<<"Not Prime"<<endl;
    }
    else
    {
        cout<<"Prime"<<endl;
    }
}