#include<iostream>

using namespace std;

namespace Q {
    namespace V {
        void f1();
    }

    void V::f1() {cout<<"F1 called"<<endl;}
//    void V::g1() {cout<<"G1 called"<<endl;}

    namespace V {
        void g1();
    }
}

void Q::V::g1() {
    cout<<"G1 called"<<endl;
}

using namespace Q::V;
int main() {
    g1();
    f1();
    return 0;
}