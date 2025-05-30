#include <iostream>
using namespace std;

class Car{
    public:
    string name="Tesla";
    int model=231;

    void show()
    {
        cout<<"Car name:"<<name<<"\n"<<"Model:"<<model<<endl;
    }
    
};
class FourWheler:public Car{
    public:
    FourWheler()
    {
        cout<<"This car is FourWheler"<<endl;
    }
};
class info:public FourWheler{
   
};

int main(){
    info obj;
    obj.show();
    return 0;
}