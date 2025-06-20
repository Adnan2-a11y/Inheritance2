#include <iostream>
using namespace std;
class Student
{
    private:
    string name;
    int id;

    public:
    Student(string n,int i)
    {
        name=n;
        i=id;
    }
    class Address
    {
        private:
        string City;
        string road;
        
        public:
        Address(string c,string r)
        {
            City=c;
            road=r;
        }
        void DisplayAddress()
        {
            cout<<"City: " << City << ", Road: " << road << endl;
        }
    };

    void getStudent()
    {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};
int main() {
    Student a("John Doe", 12345);
    Student::Address addr("New York", "5th Avenue");

    a.getStudent();
    addr.DisplayAddress(); // This will cause an error since DisplayAddress is private
    return 0;
}