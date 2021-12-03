#include "Customer.h"

Customer::Customer(string nm,int a,int id,int type)
:name(nm),age(a),id(id),memType(type)
{
    cout<<"Member #"<<id<<" has been Registered"<<endl;
    printData();
}

void Customer::setName(string nm)
{
    name = nm;
}
string Customer::getName()
{
    return name;
}

void Customer::setAge(int a)
{
    age = a;
}
int Customer::getAge()
{
    return age;
}

void Customer::setId(int id)
{
    id = id;
}
int Customer::getId()
{
    return id;
}
void Customer::setMemType(int type)
{
    memType = type;
}
int Customer::getMemType()
{
    return memType;
}

void Customer::printData()
{
    cout<<"Name: "<<name<<" | ID: #"<<id<<" | Age: "<<age<<" | Membership type: ";
    if (memType == 0) cout<<"Not Member";
    if (memType == 1) cout<<"Silver";
    if (memType == 2) cout<<"Gold";
    if (memType == 3) cout<<"Platinum";
    cout<<endl;
}
