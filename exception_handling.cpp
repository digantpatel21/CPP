#include <iostream>


using namespace std;

int main () {
    double x = -1;


    try {

        if(x < 0)
            throw x;

        cout<<"After Exception"<<endl;
    }
    catch(int x) {
        cout<<"Inside catch"<<endl;
    }
    catch(...) {
        cout<<"generic exception called"<<endl;
    }
    return 0;
}