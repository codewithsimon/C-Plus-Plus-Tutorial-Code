/* C++ in Hindi - Parameterised Constructor*/

#include<iostream>

using namespace std; // this is namespace

class Add{
    public:
    Add(int num1, int num2){
        cout<<(num1+num2)<<endl;
    }
};

int main ()
{
    Add obj(10,20);
    return 0;
}