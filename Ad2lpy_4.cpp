#include<iostream>
using namespace std;

class ly{
    public :

    int year;

    void leapyear(){

        if(year %4==0&&( year %100!=0||(year %400==0)))
        cout << "leapyear";

        else
        cout <<"not leapyear";

    }
};

int main()
{
    ly obj1;
    cout <<"enter a year:";
    cin >> obj1.year;
    obj1.leapyear();
    return 0;
}