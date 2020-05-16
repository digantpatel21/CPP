#include <iostream>

using namespace std;

class complex {
    int real;
    int img;

    public:

        complex (int i = 0, int j = 0) : real(i), img(j) {
            cout<<"Constructor called"<<endl;
        }

        complex (const complex &obj) {
            cout<<"Copy constructor called"<<endl;
            this->real = obj.real;
            this->img = obj.img;
        }
/*
        complex operator + ( complex const &obj) {
            complex result;
            result.real = real + obj.real;
            result.img = img + obj.img;
            cout<<"+ operator called"<<endl;
//            complex result(real+obj.real, img+obj.img);
            return result;
        }
*/

        void show () {
            cout<<"Real Part is: "<<real<<" and imaginary part is: "<<img<<endl;
        }

        friend complex operator+ (complex const &obj1, complex const &obj2);
};

complex operator+ (complex const &obj1, complex const &obj2) {
    complex result(obj1.real+obj2.real, obj1.img+obj2.img);
    cout<<"Global Assignment operator called"<<endl;
    return result;
}

int main () {
    complex c1(3,5), c2(8,9);

    complex c3 = c1 + c2;

    complex c4 = operator+(c1,c2);

    c3.show();
    c4.show();
    return 0;
}