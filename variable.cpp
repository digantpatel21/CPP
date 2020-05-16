#include <iostream>


using namespace std;


int x;

int main() {
    int x = 10;

    cout<<"global "<<::x<<endl;
    cout<<"local "<<x<<endl;

    {
        int x = 20;
        cout<<"global1 "<<::x<<endl;
        cout<<"local2 "<<x<<endl;

    }
    return 0;
}