#include <iostream>
using namespace std;
class A{
    public:
    int a;
};

class B:virtual public A{
    public:
    int b;
};
class C:virtual public A{
    public:
    int c;
};
class D:virtual public B,virtual public C{
    public:
    int d;
};
int main() {
    D obj;
    obj.a=10;
    obj.a=20;

    obj.b=30;
    obj.c=40;
    obj.d=50;

    cout<<"a:"<<obj.a<<endl;
    cout<<"b:"<<obj.b<<endl;
    cout<<"c:"<<obj.c<<endl;
    cout<<"d:"<<obj.d<<endl;
    //cout<<"e:"<<obj.<<endl;
    return 0;
}