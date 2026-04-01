#include <iostream>
#include <string>
using namespace std;

class CryptoBox {
private:
    string secretKey = "MySuperSecretPassword";
    friend void dumpForAudit(CryptoBox box);
};

// The friend function can see private data
void dumpForAudit(CryptoBox box) {
    cout << "4. Audit log - The secret key is: " << box.secretKey << endl;
}

void normalFunction(CryptoBox box) {
    // cout << box.secretKey; 
    cout << "   Normal function access denied." << endl;
}

void demoCryptoBox() {
    CryptoBox myBox;
    dumpForAudit(myBox);
    normalFunction(myBox);
}