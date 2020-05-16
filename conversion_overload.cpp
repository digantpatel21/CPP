#include <iostream>

using namespace std;

class fraction {
    int num , den;

    public :

        fraction (int i=0, int j = 1) : num(i), den(j) {
            cout<<"Constructor called"<<endl;
        }

        operator float() const {
            cout<<"float conversion called"<<endl;
            return (float)num / float(den);
        }

        operator int() const {
            cout<<"float conversion called"<<endl;
            return num/den;
        }
};

int main () {

    fraction f(4,5);

    float val = f;
    int val1 = f;

    cout<<"float value of fraction is: "<<val<<endl;
    cout<<"float value of fraction is: "<<float(f)<<endl;

    cout<<"int value of fraction is: "<<val1<<endl;
    cout<<"int value of fraction is: "<<int(f)<<endl;

    return 0;
}