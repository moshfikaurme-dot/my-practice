#include<iostream>
using namespace std;
class box {
    public:

    int l =10;
    int w = 21;
    int h = 28;



    void volume (){
        int volume;
        volume =l*w*h;
        cout << volume <<endl;
    }
};
int main(){
    box obj1;

    obj1.volume();
    return 0;

}