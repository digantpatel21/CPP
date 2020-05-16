#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class increment {
    private:
        int base;
    public:
        increment(int x) : base(x) {}

        int operator() (int offset) { 
            cout<<"base"<<base<<endl;
            base = base*offset;
            return base;
        }
};

int main() {
    int arr[5] = {1,1,1,1,1};

    int to_add = 5;
    increment obj1(5);
    transform(arr, arr+5, arr , obj1);

//    transform(arr, arr+5, arr , increment(to_add));

    for(int i = 0 ; i< 5; i++)
        cout<<arr[i]<<" ";

    cout<<endl;

    return 0;
}
