#include <iostream>

using namespace std;

// this new operator function called when you want every malloc starts with specific charactor
void* operator new (size_t size, char ch) {
    cout<<"new operator called with extra argument"<<endl;
    void *p = (void *)malloc(size);
    if(p != NULL) {
        *p = ch;
    }

    return p;
}


void* operator new (size_t size) {
    void *p  = (void *) malloc(size);

    cout<<"New operator called with size: "<<size<<endl;

    return p;
}

void operator delete (void *p) {
    cout<<"Delete operator called"<<endl;

    free(p);
}


int main () {

    int *arr = new int[5];

    for(int i=0; i< 5; i++)
        arr[i] = i+10;


    cout<<"Array is: ";
    for(int i=0; i< 5; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    delete arr;

    char* demo = new char[10];

    for(int i =1; i <10; i++) {
        demo[i] = 'A'+i;
    }

    cout<<"Array is: ";
    for(int i = 0; i< 10; i++) {
        cout<<demo[i]<<" ";
    }
    cout<<endl;

    delete demo;
    return 0;
}