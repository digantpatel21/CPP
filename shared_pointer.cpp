#include <iostream>
#include <memory>

using namespace std;
class A;
class B {
    A * a;
    public:
        B() {
            a = new A();
            cout<<"B's constructor"<<endl;
        }

};

class A {
    B *b;
    public:
        A() {
            b = new B();
            cout<<"A's constructor"<<endl;
        }
};

int main() {
    shared_ptr<A> a_obj(new A);
    cout<<"A object count "<<a_obj.use_count()<<endl;
    shared_ptr<A> b_obj(a_obj);
    cout<<"B object count "<<b_obj.use_count()<<endl;
    return 0;
}