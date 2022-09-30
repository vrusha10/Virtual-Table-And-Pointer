#include <iostream>
using namespace std;
class A
{
    public:
    virtual void fun1()
    {
        cout<<" A fun1"<<endl;
    }
    virtual void fun2()
    {
        cout<<"A fun2"<<endl;
    }
    void fun3()
    {
        cout<<"A fun3"<<endl;
    }
};
class B:public A
{
public:
    void fun2()
    {
        cout<<"B fun2"<<endl;
    }
    void fun3()
    {
        cout<<"B fun3"<<endl;
    }
};
class C:public A
{
    public:
    void fun1()
    {
        cout<<"C fun1"<<endl;
    }
        void fun3()
    {
        cout<<"C fun3"<<endl;
    }
};

int main()
{
    A obj;
    A *p;
    p=&obj;
    p->fun1();
    p->fun2();
    p->fun3();

    B obj1;
    p=&obj1;
    p->fun1();
    p->fun2();
    p->fun3();

    C obj2;
    p=&obj2;
    p->fun1();
    p->fun2();
    p->fun3();
}
