#include<iostream>
using namespace std;

namespace Company{
    namespace Hr{
        class Policy{
            public:
            void showPolicies(){
                cout<<"Documents should be confidential"<<endl;
                cout<<"Company policies should be followed strictly"<<endl;
            }
        };
    }
    namespace Accounts{
        class Policy{
            public:
            void showPolicies(){
                cout<<"Documents should be confidential_1"<<endl;
                cout<<"Company policies should be followed strictly_1"<<endl;
            }
        };
    }

}
// using namespace Company;
// using namespace Accounts;
// using namespace Hr;
int main(){
    Company::Hr::Policy p1;
    Company::Accounts::Policy p2;
    p1.showPolicies();
    p2.showPolicies();
}