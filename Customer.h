#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "iostream"
#include "string"
#include "iomanip"

using namespace std;

class Customer
{
private:
    string name;
    int age;
    int id;
    int memType;
public:
    Customer(string nm,int a,int id,int type);

    void setName(string nm);
    string getName();

    void setAge(int a);
    int getAge();

    void setId(int id);
    int getId();

    void setMemType(int type);
    int getMemType();

    void printData();
};

#endif // CUSTOMER_H
