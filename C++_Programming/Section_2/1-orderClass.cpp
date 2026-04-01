#include<iostream>
using namespace std;

class Order{
    private:
    int orderId[10];
    int orderItemQty[10];
    int count =0;

    public:
    void addLineItem(int id, int qty){
        if(count<10){
            orderId[count]=id;
            orderItemQty[count]=qty;
            count++;
        }
    }
    int totalItem(){
        int total=0;
        for(int i=0; i<count; i++){
            total += orderItemQty[i];
        }
        return total;
    }
};

 void demoOrder() {
        Order myOrder;
        myOrder.addLineItem(101, 2);
        myOrder.addLineItem(102, 5);
    
        cout << "1. Order Total Items: " << myOrder.totalItem() << "\n\n";
    }
