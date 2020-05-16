#include <iostream>

using namespace std;


template <>

template <class T>
T add(T x , T y) {
    return x+y;
}

int main() {

    cout<<add(1,2)<<endl;
    cout<<add(1.3,2.0)<<endl;
    return 0;
}
