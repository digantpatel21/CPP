#include<iostream>

using namespace std;

class base {
    public:
     base() {
         cout<<"Base Constructor"<<endl;
     }

     void func(int num)
     {
         cout<<"Base func Method value of num is " <<num<<endl;
     }
};

class derived : public base {
    public :

    using base::base;
     derived () {
         cout <<"Derived Constructor "<<endl;
     }

    using base::func; 
    
    /* If i don't use this using than when i call 
    *  d1.func(10) it  will call derived method, and i don't want that,
    *  I wish i can call base method so i am using using keyword
    */
     void func(char ch)
     {
         cout<<"Derived Func MEthod value of char is "<<ch<<endl;
     }

};


int main()
{

    derived d1 ;
    d1.func(10);
    return 0;
}