/*Inheritance */
#include<iostream>

using namespace std; // this is namespace

class Teacher{
    public:
    Teacher(){
        cout<<"Hey, I'm a Teacher"<<endl;
    }

    string collegeName = "YouTube College";
};

class MathTeacher: public Teacher{
    public:
    MathTeacher(){
        cout<<"I'm a math teacher"<<endl;
    }
};

int main ()
{
    MathTeacher obj;
    cout<<"College Name is: "<<obj.collegeName<<endl;
    return 0;
}