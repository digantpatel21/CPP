#include <iostream>

using namespace std;

class demo1 {
    private:
        int i , j ;

    public:
        demo1(int i = 0, int j = 0): i(i), j(j) {
            cout<<"Constructor called for demo1"<<endl;
        }

        demo1 (const demo1 &old) {
            i = old.i;
            j = old.j;

            cout<<"Copy constructor called for demo1"<<endl;
        }

        demo1 operator= (const demo1& obj) {
            i = obj.i;
            j = obj.j;

            cout<<"assignment operator called for demo1"<<endl;
            return *this;
        }

        void printVals() {
            cout<<"Value of i is: "<<i<<" And value of j is: "<<j<<endl;
        }

};

class demo2 {
    private:
        int k;
        demo1 d1;
    public:
/*        demo2(demo1& d1, int k): d1(d1), k(k) {
            cout<<"constructor for demo2 called"<<endl;
        }
*/
        demo2(demo1& d1, int k): k(k) {
            cout<<"constructor for demo2 called"<<endl;
            this->d1 = d1;
        }
        void printVals() {
            d1.printVals();
            cout<<"value for k is: "<<k<<endl;
        }
};


int main() {

    demo1 d1(10,20);

    demo2 d2(d1, 26);

    d2.printVals();
    return 0;
}