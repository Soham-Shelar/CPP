#include<iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
    rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }
    void area()
    {
        cout<<"Area: "<<length*breadth<<endl;
    }
};
int main()
{
    rectangle r1(10,5);
    r1.area();
    rectangle r2(20,10);
    r2.area();
    return 0;
}