#include<iostream>
using namespace std;
class animal
{
    public:
    void run()
    {
        cout<<"Animal is running"<<endl;
    }
};
class dog:public animal
{
    public:
    void bark()
    {
        cout<<"Dog is barking"<<endl;
    }
};
int main()
{
    dog d1;
    d1.run();
    d1.bark();
    return 0;
}