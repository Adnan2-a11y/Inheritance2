#include <iostream>
using namespace std;
/*class Base
{
  public:
  std::string name;
  //int Age;
  void getAge(int a){Age=a;};
  protected:
  int Age;

  private:
  char city[100];
  
};
class PublicDerived:public Base{
  public:
  void show()
  {
      cout<<"Public Inheritance"<<endl;
      cout<<"Name:"<<name<<endl;
      cout<<"Age:"<<Age<<endl;
      //cout<<"City:"<<city<<endl; //Not Accessible
  }
};

class ProtectedDerived:protected Base{
  public:
  void show()
  {
      cout<<"Protected Inheritance"<<endl;
      cout<<"Name:"<<name<<endl;
      cout<<"Age:"<<Age<<endl;
      //cout<<"City:"<<city<<endl; //Not Accessible
  }
};

class PrivateDerived:private Base{
  public:
  void show()
  {
      cout<<"Private Inheritance"<<endl;
      cout<<"Name:"<<name<<endl;
      cout<<"Age:"<<Age<<endl;
      //cout<<"City:"<<city<<endl; //Not Accessible
  }
};*/

class A{
   public:
   int a;
   
};
class B:virtual public A
{
  public:
  int b;
};

class C:virtual public A
{
  public:
  int c;
};

class D:virtual public B,virtual public C
{
  public:
  int d;
};

int main() {
    D obj;
    B obj1;
    obj.a = 10; // Accessing A's member through D
    obj.b = 20; // Accessing B's member through D
    obj.c = 30; // Accessing C's member through D
    obj.d = 40; // Accessing D's member
    cout << "a: " << obj.a << endl; // Output: a: 10
    cout << "b: " << obj.b << endl; // Output: b: 20
    cout << "c: " << obj.c << endl; // Output: c: 30
    cout << "d: " << obj.d << endl; // Output: d: 40
    // Note: In this case, there is no ambiguity because D inherits from B and C,
    return 0;
}