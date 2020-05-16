#include <iostream>

using namespace std;

class student {
    string name;
    int  roll_no;

    public:
        student() { }
        student (string name, int roll_no): name(name),roll_no(roll_no) {
            cout<<"Constructor called"<<endl;
        }

        void * operator new(size_t size) {
            cout<<"new constructor called"<<endl;

            void *p = ::new student();
//            void *p =  (void *)malloc(size);

            return p;
        }

        void operator delete(void *p) {
            cout<<"Delete operator called"<<endl;
        }
};


int main() {

    student *st = new student("Digant", 34);

    delete(st);
    return 0;
}