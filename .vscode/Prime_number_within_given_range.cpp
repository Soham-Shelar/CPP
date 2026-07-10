#include<iostream>
using namespace std;
int main()
{
    int numlower,numupper,i,num;
    cout<<"Enter The Lower Number=";
    cin>>numlower;
    cout<<"Enter The Upper Number=";
    cin>>numupper;
    for(num=numlower;num<=numupper;num++)
    {
        int temp=1;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                temp=0;
                break;
            }
        }
        
        if(temp==1)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
}