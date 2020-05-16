#include <iostream>


using namespace std;


class student {
    private:
        int rollNo;
        string name;

    public:
        // Default constructor
        student() {
            rollNo = 007;
            name = "Digant";
        }

        // Parameterised constructor with initializer list
        student(int rollNo, string name): rollNo(rollNo),name(name) {}

        // Copy constructor
        student(const student& st) {
            rollNo = st.rollNo;
            name = st.name;
        }
        void display();

        ~student () {
            cout<<"Destructor called for "<<name<<endl;
        }
};

//Function defination with namespace
void student::display()
{
    cout<<"Roll No "<<rollNo<<" Name: "<<name<<endl;
}



int main(){
    student s1;

    s1.display();

    student s2(10, "Ganesh");

    s2.display();

    student *s3 = new student(11, "Nisarga");

    s3->display();

    if(s3)
    {
        delete(s3);
        s3 = NULL;
    }

    // Call of copy constructor
    student s4 = s1;

    s4.display();

    return 0;
}