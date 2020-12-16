 /* Polymorphism Part- 2 (Function Overriding)*/

 //2) Runtime Polymorphism – This is also known as dynamic (or late) binding.

#include<iostream>

using namespace std; // this is namespace

class A{
    public:
        void display(){
            cout<<"This is Super/Parent Class Function"<<endl;
        }
};

class B : public A{
    public:
        void display(){
            cout<<"This is Base/Child Class Function";
        }
};

int main ()
{
    A obj;
    obj.display();

    B obj2;
    obj2.display();
    return 0;
}