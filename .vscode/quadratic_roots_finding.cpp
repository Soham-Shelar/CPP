#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,r1,r2;
    cout<<"Enter The Value Of A="<<endl;
    cin>>a;
    cout<<"Enter The Value Of B="<<endl;
    cin>>b;
    cout<<"Enter The Value Of c="<<endl;
    cin>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"Value Of 1st Route="<<r1;
    cout<<"Value Of 2nd Route="<<r2;
    return 0;
}