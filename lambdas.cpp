#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    int x= 0, y = 0;
    vector<int> v;

    auto print = [&] () {std::cout<<"X: "<<x<<"Y: "<<y<<endl;};

    for(int i = 0; i< 5; i++) {
        v.push_back(i);
    }

    for_each(v.begin(), v.end(), [=] (int n) mutable{
        x += n;
        y += n;
    });

    print();
    x = 0;
    y = 0;
    for_each(v.begin(), v.end(), [=, &x] (int n) mutable{
        x += n;
        y += n;
    });

    print();

    x = 0;
    y = 0;
    for_each(v.begin(), v.end(), [&] (int n) {
        x += n;
        y += n;
    });

    print();
    x = 0;
    y = 0;

    for_each(v.begin(), v.end(), [&, x] (int n) mutable{
        x += n;
        y += n;
    });

    print();
    x = 0;
    y = 0;
    return 0;
}