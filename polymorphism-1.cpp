/* Polymorphism Part- 1 (Function Overloading)*/

// Polymorphism is a feature of OOPs that allows the object to behave differently in different conditions. In C++ we have two types of polymorphism:
// 1) Compile time Polymorphism – This is also known as static (or early) binding.

#include<iostream>

using namespace std; // this is namespace

class Add{
    public:
        int sum(int num1, int num2){
            return num1+num2;
        }
        int sum(int num1, int num2, int num3){
            return num1+num2+num3;
        }
};

int main ()
{
    Add obj;

    cout<<"Output: "<<obj.sum(10,20)<<endl;
    cout<<"Output: "<<obj.sum(10,20,30)<<endl;

    return 0;
}