#include <iostream>
#include<vector>
using namespace std;

class base {
    public:
     base() {
         cout<<"Base Constructor"<<endl;
     }

     void fun() {
         cout<<"Base function"<<endl;
     }
};

class derived : public base {
    public : 
     derived() {
         cout<<"Derived Constructor"<<endl;
     }

     void fun() {
         cout<<"Derived Function"<<endl;
     }

};


auto fun1() {
    vector<int> myVector;

    myVector.push_back(5);

    return myVector;
}

int main() {
    base baseObj;
    derived derivedObj;
    vector<int> localList = {1,2,3};
    auto myList = localList;

    cout<<"Data"<<fun1().at(0)<<endl;
    cout<<"Data"<<myList.at(0)<<endl;
    //generatedObj.fun();
    return 0;
}