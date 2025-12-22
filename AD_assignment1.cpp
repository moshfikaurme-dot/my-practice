#include<iostream>
using namespace std;
class vehicle{
    public :
    void startEngine(){
        cout <<"vehicle engine started"<< endl;

    }
    void stopEngine(){
        cout <<"vehicle engine stopped"<< endl;
    }

};
class car : public vehicle{
    public :
    void startEngine(){
        cout << "car engine started"<< endl;

    }
    void drive(){
        cout << "car is moving"<<endl;
    }

};

int main(){
    car myCar;
    myCar.stopEngine();
    myCar.startEngine();
    myCar.drive();

    return 0;
}