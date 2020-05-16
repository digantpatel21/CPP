#include <iostream>
#include <forward_list>
using namespace std;


class student {
    string name;
   int rollNo;
 
    public:
        student (string name, int rollNo): name(name), rollNo(rollNo) { 
            cout<<"Constructor called"<<endl;
        }

        student (const student& obj) {
            cout<<"Copy constructor called "<<endl;
            this->name = obj.name;
            this->rollNo = obj.rollNo;
        }
};


int main () {
    forward_list <student> st;

    st.emplace_front("Digant",10);
    cout<<"insert After"<<endl;
    st.insert_after(st.begin(), student("Darshika", 11));
    return 0;
}