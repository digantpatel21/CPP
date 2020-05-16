#include <iostream>

using namespace std;

class base {
    int i;
    virtual void fun() {}
};

class derived : private base {

};

class base1 {
    virtual void printdata() {}
};
int main() {

    //basic datatype downgrade - Gives same result
    float a = 9.23;
    int b = (int)a;
    int c = static_cast<int>(a);
    cout<<b<<endl;
    cout<<c<<endl;

    //basic data type upgrade
    int d = 9;
    double e = static_cast<float>(d);
    cout<<e<<" "<<sizeof(e)<<endl;

    double f = d;
    cout<<f<<" "<<sizeof(f)<<endl;

    
    char ch = 'a';
    char ch1 = 'b';
    char ch2 = 'c';
    char ch3 = 'd';
    int *ptr1 = (int *)&ch;

    cout<<*ptr1<<endl;

    derived d1;

    base * b1 = (base *) &d1;
    //base * b2 = static_cast<base *> (&d1);

    base1 * b11 = new base1();

    base * b3 = (base *) &b11;
    base * b4 = dynamic_cast<base *> (b11);
    return 0;
}