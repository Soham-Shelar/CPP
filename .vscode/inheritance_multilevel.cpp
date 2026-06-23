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

class puppy:public dog
{
    public:
    void weep()
    {
        cout<<"Puppy is weeping"<<endl;
    }
};

int main()
{
    puppy p1;
    p1.run();
    p1.bark();
    p1.weep();
    return 0;
}