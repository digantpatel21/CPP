#include<iostream>

using namespace std;

class base {

    public:
         void demo() {cout<<"Hi I am Demo"<<endl;}
};

int main()
{
    cout<<"Class Size" << sizeof(base)<<endl;

    base tdemo;

    cout<<"Object Size" << sizeof(tdemo)<<endl;
    return 0;
}