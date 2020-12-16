#include<iostream>

using namespace std; 

int main ()
{
    int number1, number2, sum;
    float average;

    cout<<"Enter your two numbers: ";
    cin>> number1;
    cin>> number2;

    sum = number1 + number2;
    average = sum/2;

    cout<<"Sum is: " << sum << "\n";
    cout<<"Average is: " << average << "\n";

    return 0;
}