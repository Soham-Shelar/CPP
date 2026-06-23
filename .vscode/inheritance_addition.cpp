#include<iostream>
using namespace std;
class addition
{
    int a,b;
    public:
    void get_ab(int x,int y)
    {
        a=x;
        b=y;
    }   
    void add()
    {
        cout<<"Addition: "<<a+b<<endl;
    }
};
class subtraction:public addition
{
    int m,n;
    public:
    void get_mn(int x,int y)
    {
        m=x;
        n=y;
    }   
    void sub()
    {
        cout<<"Subtraction: "<<m-n<<endl;
    }
};
int main()
{
    subtraction s1;
    s1.get_ab(10,5);
    s1.add();
    s1.get_mn(10,5);
    s1.sub();
    return 0;
}