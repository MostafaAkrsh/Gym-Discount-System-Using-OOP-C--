#include "Visit.h"

Visit::Visit(Customer customer ,int no , float services , float products)
:customer(customer),no(no),services(services),products(products){
    cout<<endl<<"Visit No. : #"<<no<<" has been saved";
    printData();
}
void Visit::setNo(int no){
    no = no;
}
int Visit::getNo(){
    return no;
}

void Visit::setServices(float services){
    services = services;
}
float Visit::getServices(){
    return services;
}

void Visit::setProducts(float products){
    products = products;

}
float Visit::getProducts(){
    return products;
}

float Visit::Payment(){
    int type = customer.getMemType();
    Discount discount(no);
   float totalBefore = services + products;
   float totalAfter = discount.Total(services,products,type);
   cout<<"Total payment before Discount: "<<totalBefore<<"EG"<<endl;
   cout<<"Total payment After Discount: "<<totalAfter<<"EG"<<endl<<endl;

}

void Visit::printData(){
    cout<<endl<<"Services: "<<services<<"EG | Products: "<<products<<"EG"<<endl;
    customer.printData();
    cout<<endl;
}
