#include <iostream>

using namespace std;

class demo {
    public:
        static bool darshikaLoveu;
    public:
    void func () {
        cout<<"This is func obj call"<<endl;
    }
    static void func1 () {
        cout<<"This is func static obj call"<<endl;
    }
};

bool demo::darshikaLoveu = true;


int main() {
    demo d1;
    d1.func();

    demo::func1();

    cout<<"value is "<<demo::darshikaLoveu<<endl;
    return 0;
}