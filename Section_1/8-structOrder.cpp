#include <iostream>
using namespace std;

struct Customer {
    string name;
    int age;
};

struct Order {
    int orderId;
    Customer customer;
};

int main() {
    Order o;
    o.orderId = 101;
    o.customer.name = "Varun";
    o.customer.age = 21;

    cout << "Order ID: " << o.orderId << endl;
    cout << "Customer Name: " << o.customer.name << endl;
    cout << "Customer Age: " << o.customer.age << endl;

    return 0;
}