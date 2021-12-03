#include <iostream>
#include "Customer.h"
#include "Visit.h"
using namespace std;

int main()
{
    Customer M1("Mostafa Samir",21,14234,3);
    Visit m1(M1,4465,2000,3000);
    m1.Payment();

    Customer M2("Ramy El-Mataey",32,16321,0);
    Visit m2(M2,2525,1000,250);
    m2.Payment();

    Customer M3("Adham Kamel",15,11114,1);
    Visit m3(M3,9852,2600,1250);
    m3.Payment();

    Customer M4("Mostafa Samir",55,17523,2);
    Visit m4(M4,8675,10000,20000);
    m4.Payment();
}
