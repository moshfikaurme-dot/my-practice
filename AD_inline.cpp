#include<iostream>
using namespace std;

class box {
    public:
    int l,w,h;

    int volume(int l,int w,int h);
};

inline int box:: volume(int l,int w,int h){
    int volume;

    volume = l*w*h;
    return volume;
}

int main(){
    box obj;

    cin>> obj.h>>obj.l>>obj.w;

    int v = obj.volume(obj.l,obj.w,obj.h);
    cout<<v <<endl;
}