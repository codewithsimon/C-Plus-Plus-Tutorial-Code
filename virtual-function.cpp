/* Virtual Function */
#include<iostream>

using namespace std; // this is namespace

class base{
    public:
        virtual void print(){
            cout<<"I'm from base class"<<endl;
        }
        void show(){
            cout<<"I'm from base class"<<endl;
        }
};
class dereived : public base{
    public:
        void print(){
            cout<<"I'm from derived class"<<endl;
        }
        void show(){
            cout<<"I'm from derived class"<<endl;
        }
};

int main ()
{
    base* bptr;
    dereived d;
    bptr = &d;

    bptr->print();
    bptr->show();

    return 0;
}