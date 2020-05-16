#include <iostream>

using namespace std;

namespace demo {
    label1:
        cout<<"Label1 called";
        return 0;

};

using namespace demo;

int main() {
    goto label1;

    return 0;
}