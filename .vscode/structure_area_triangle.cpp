#include<iostream>
using namespace std;
struct triangle
{
    int base;
    int height;
    triangle(int b, int h)
    {
        base=b;
        height=h;
    }
    void area()
    {
        cout<<"Area: "<<0.5*base*height<<endl;
    }
};
int main()
{
    triangle t1(10,5);
    t1.area();
    triangle t2(20,10);
    t2.area();
    return 0;
}

