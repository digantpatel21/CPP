#include <iostream>

using namespace std;

class complex {
    private:
        int i,j;
    public:
        complex (int i= 0 , int j = 0) : i(i), j(j) {
        }

        complex (const complex &obj) {
            i = obj.i;
            j = obj.j;
            cout<<"Copy constructor called "<<i<<"and"<<j<<endl;   
        }

        complex operator + (const complex &obj) {
            complex temp;

            temp.i = i + obj.i;
            temp.j = j + obj.j;
            cout<<"+ operator called"<<endl;
            return temp;
        }

        void printComplex() {
            cout<<i<<"+"<<j<<"i"<<endl;
        }
};

int main () {

    complex c1(3,4);
    c1.printComplex();
    complex c2(4,5);
    c2.printComplex();
    complex c4 =c2;
    complex c3 = c1+c2;
    c3.printComplex();
    return 0;
}