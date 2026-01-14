#include<iostream>
using namespace std;
class factorial{

public:
int n;
int f=1;
void input(){
cout << "please enter any number  ";

cin>>n;
}

int fact(int n){

if(n==0 ||n==1)

return 1;
else{

    while(n>0){


        f=f*n;
        n--;}
        return  f;
    }
}

void display(){

cout <<f;

}

};


int main(){


factorial obj;

obj.input();
obj.fact(obj.n);
obj.display();



}
