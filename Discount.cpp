#include "Discount.h"

    Discount::Discount(int no)
:    no(no)
    {
        cout<<endl<<"The Total Payment for Visit No: #"<<no<<endl;
    }
    float Discount::Total(float services , float products ,int type)
    {
    if (type == 0) return services + products;
    if (type == 1) return services * 0.85 + products * 0.9;
    if (type == 2) return services * 0.80 + products * 0.9;
    if (type == 3) return services * 0.75 + products * 0.9;
    }
