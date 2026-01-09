#include<iostream>
using namespace std;
class box {
    public:

    int l;
    int w;
    int h;




    void volume (){
        int volume;
        volume =l*w*h;
        cout <<"the volume is:"<<volume<<endl;
    }
};
int main(){
    box obj1;
    cout << "enter your h,w,l:";
    cin>> obj1.l>> obj1.w>> obj1.h;

    obj1.volume();
    return 0;
}