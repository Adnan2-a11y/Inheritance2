#include <iostream>
using namespace std;
class adder{
    public:
    adder(int i=0)
    {
        total=i;
    }
    void addNumber(int num)
    {
        total+=num;
    }
    int getNumber()
    {
        return total;
    }
    private:
    int total;
};
int main() {
    adder a;
    a.addNumber(10);
    cout<<"Total Number:"<<a.getNumber()<<endl;
    return 0;
}