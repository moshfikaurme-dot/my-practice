#include<iostream>
using namespace std;
int main(){
    const double PI = 3.1416;

    double radius;
    cout <<" please enter the redius : ";
    cin >> radius;
    double area = PI *radius *radius;
    cout <<"the area of the circle with radius :" << radius << " is "<< area << endl;

    return 0;
}