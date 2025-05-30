#include <iostream>
using namespace std;

class Base{
    public:
    int pub =2;

    protected:
    int pro=3;

    private:
    int pri=4;
};
class PublicDerived:public Base{
    public:
    void show()
    {
        cout<<"Public Inheritance"<<endl;
        cout<<"Public:"<<pub<<endl;
        cout<<"Protected:"<<pro<<endl;
        //cout<<"Private"<<pri<<endl; //Not Acceseable

    }
};
class ProtectedDerived:public Base{
    public:
    void show()
    {
        cout<<"Protected Inheritance"<<endl;
        cout<<"Public:"<<pub<<endl;
        cout<<"Protected:"<<pro<<endl;
        //cout<<"Private"<<pri<<endl; //Not Acceseable

    }
};

class PrivateDerived:public Base{
    public:
    void show()
    {
        cout<<"Private Inheritance"<<endl;
        cout<<"Public:"<<pub<<endl;
        cout<<"Protected:"<<pro<<endl;
        //cout<<"Private"<<pri<<endl; //Not Acceseable

    }
};
int main() {
    PublicDerived obj1;
    obj1.show();
    return 0;
}