#include<iostream>
using namespace std;
class box{
    public:
    int l;
    int w;
    int h;
    inline int volume (int l,int w,int h);
};

inline int box :: volume(int l, int w,int h){

    
    return l*w*h;
    
}

int main (){
    box obj1;
    obj1.l=2;
    obj1.w=5;
    obj1.h=7;

    int c= obj1.volume(obj1.l, obj1.w,obj1.h);
    cout<<c;
    return 0;
}