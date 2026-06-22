#include<iostream>
using namespace std;
struct circle
{
    int redius;
    circle(int r)
    {
        redius=r;
    }
    void area()
    {
        cout<<"Area: "<<3.14*redius*redius<<endl;
    }
};
int main()
{
    circle c1(5);
    c1.area();
    circle c2(10);
    c2.area();
    return 0;
}

