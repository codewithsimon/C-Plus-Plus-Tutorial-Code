/* C++ in Hindi - Destrcutured Constructor*/

/* When does the destructor get called?
A destructor is automatically called when:
1) The program finished execution.
2) When a scope (the { } parenthesis) containing local variable ends.
*/

#include<iostream>

using namespace std; // this is namespace

class HelloWorld{
    public:
    //Contructor
    HelloWorld(){
        cout<<"Contrctor is Called"<<endl;
    }

    //Desctructor
    ~HelloWorld(){
        cout<<"Desatructor is Called"<<endl;
    }

    //Member Function
    void display(){
        cout<<"Hello World from Member Function"<<endl;
    }
};

int main ()
{
    HelloWorld obj; //Object Created
    obj.display();

    return 0;
}