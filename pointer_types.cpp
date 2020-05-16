#include <iostream>
#include <memory>

using namespace std;


class demo {
    public:
        demo() {
            cout<<"Demo Constructor"<<endl;
        }

        void show() {
            cout<<"demo::Show"<<endl;
        }
};

int main() {
    auto_ptr<demo> d1(new demo);

    d1->show();

    cout<<d1.get()<<endl;

    auto_ptr<demo> d2(d1);

    d2->show();

    cout<<d1.get()<<endl;
    cout<<d2.get()<<endl;

    return 0;
}
