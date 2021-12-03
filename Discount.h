#ifndef DICOUNT_H
#define DISCOUNT_H
#include "iostream"
#include "string"
#include "iomanip"

using namespace std;

class Discount{
private:
    int no;
public:
    Discount(int no);
    float Total(float services,float products,int type);

};


#endif
