#include <iostream>
using namespace std;
class Base{
    public:
    int pub=3;

    protected:
    int pro=4;

    private:
    int pri=5;
};

class PublicDerived:public Base{
      public:
      void show()
      {
        cout<<"Public Inheritences\n"<<endl;
        cout<<"Public Value:"<<pub<<endl;
        cout<<"Protected Value:"<<pro<<endl;
        //cout<<"Private Value:"<<pri<<endl;
      }
};
class ProtectedDerived:public Base{
      public:
      void show()
      {
        cout<<"Protected Inheritences\n"<<endl;
        cout<<"Public Value:"<<pub<<endl;
        cout<<"Protected Value:"<<pro<<endl;
        //cout<<"Private Value:"<<pri<<endl;
      }
};
class PrivateDerived:public Base{
      public:
      void show()
      {
        cout<<"Private Inheritences\n"<<endl;
        cout<<"Public Value:"<<pub<<endl;
        cout<<"Protected Value:"<<pro<<endl;
        //cout<<"Private Value:"<<pri<<endl;
      }
};

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
    //PrivateDerived obj;
    //obj.show();

    D obj;
    obj.a=10;
    obj.b=20;

    obj.b=30;
    obj.c=40;
    obj.d=50;

    cout<<"a:"<<obj.a<<endl;
    cout<<"b:"<<obj.b<<endl;
    cout<<"c:"<<obj.c<<endl;
    cout<<"d:"<<obj.d<<endl;
    //cout<<"a:"<<obj.a;
    return 0;
}