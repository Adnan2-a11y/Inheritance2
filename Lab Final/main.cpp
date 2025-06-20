#include <iostream>
using namespace std;

class Employee
{
    public:
        int id;
        string name;
        double salary;

        virtual void display() {
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        }
};

class Manager : public Employee
{
    public:
    double bonus;

    Manager operator+(const Manager& other) const {
        Manager temp = *this;
        temp.salary = this->salary + other.salary;
        temp.bonus = this->bonus + other.bonus;
        temp.name = this->name + " & " + other.name;
        return temp;
    }
    Manager& operator++() {
        salary *= 1.05;
        return *this;
    }

    void display() override {
        Employee::display();
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << (salary + bonus) << endl;
    }
};

class Engineer : public Employee
{
    public:
    int projectCount;
    Engineer operator+(const Engineer& other) const {
        Engineer temp = *this;
        temp.salary = this->salary + other.salary;
        temp.projectCount = this->projectCount + other.projectCount;
        temp.name = this->name + " & " + other.name;
        return temp;
    }

    Engineer& operator++() {
        salary *= 1.05;
        return *this;
    }

    void display() override {
        Employee::display();
        cout << "Project Count: " << projectCount << endl;
    }
};

int main() {
    Manager m1, m2, m3;
    m1.id = 1; m1.name = "Manager Mike"; m1.salary = 90000; m1.bonus = 10000;
    m2.id = 2; m2.name = "Manager Sara"; m2.salary = 95000; m2.bonus = 12000;

    Engineer e1, e2, e3;
    e1.id = 3; e1.name = "Engineer Emma"; e1.salary = 80000; e1.projectCount = 5;
    e2.id = 4; e2.name = "Engineer John"; e2.salary = 85000; e2.projectCount = 7;

    cout << "Manager 1 Info:" << endl;
    m1.display();
    cout << endl;

    cout << "Manager 2 Info:" << endl;
    m2.display();
    cout << endl;

    m3 = m1 + m2;
    cout << "Combined Manager Info (using + operator):" << endl;
    m3.display();
    cout << endl;

    ++m1;
    cout << "Manager 1 after 5% salary increment (using ++ operator):" << endl;
    m1.display();
    cout << endl;

    cout << "Engineer 1 Info:" << endl;
    e1.display();
    cout << endl;

    cout << "Engineer 2 Info:" << endl;
    e2.display();
    cout << endl;

    e3 = e1 + e2;
    cout << "Combined Engineer Info (using + operator):" << endl;
    e3.display();
    cout << endl;

    ++e1;
    cout << "Engineer 1 after 5% salary increment (using ++ operator):" << endl;
    e1.display();
    cout << endl;

    
    Employee* emp;
    emp = &m1;
    cout << "Polymorphic display (Manager):" << endl;
    emp->display();
    cout << endl;

    emp = &e1;
    cout << "Polymorphic display (Engineer):" << endl;
    emp->display();
    cout << endl;

    return 0;
}