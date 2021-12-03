#ifndef VISIT_H
#define VISIT_H
#include "iostream"
#include "string"
#include "iomanip"
#include "Customer.h"
#include "Discount.h"

using namespace std;

class Visit
{
private:
    Customer customer;
    int no;
    float services;
    float products;
public:
    Visit(Customer customer , int no , float services , float products);

    void setNo(int no);
    int getNo();

    void setServices(float services);
    float getServices();

    void setProducts(float products);
    float getProducts();

    float Payment();
    void printData();
};
#endif
