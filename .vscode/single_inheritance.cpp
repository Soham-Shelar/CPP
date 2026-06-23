#include<iostream>
using namespace std;
class B
{
    int a;
    public:
    int b;
    void get_ab();
    int get_a(void);
    void show_a(void);
};
class D :public B
{
    int c;
    public:
    void mul(void);
    void display(void);
};
int main()
{
    D d_obj;
    return 0;
}