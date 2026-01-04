#include<iostream>
using namespace std;
int main(){

    float a,b,math;
    cout << "(a+b)^2=a^2+2*a*b+b^2"<< endl;
    cout << "input a and b :" <<endl;

    cin >>a>>b;
    math =a*a+2*a*b+b*b;
    cout << "math "<<math;

    return 0;

}