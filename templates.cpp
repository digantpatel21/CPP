#include <iostream>

using namespace std;


template <typename T, int z = 0>
T maxVal(T x, T y) {
    cout<<"z val "<<z<<endl;
    return (x > y) ? x:y;
}


int main() {

    cout<<"Max of int "<< maxVal<int, 60>(10,12)<<endl;
    cout<<"Max of char "<< maxVal<char, 70>('f','g')<<endl;
    return 0;
}