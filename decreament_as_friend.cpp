// overload (--) as FRIEND FUNCTION
#include<iostream>
using namespace std;
class Decreament{
    int value;
    public:
    void get(int x){
        value=x;
    }
    void display(){
        cout<<value<<endl;
    }
    friend Decreament operator --(Decreament &);
    friend Decreament operator --(Decreament &,int d);
};
    Decreament operator --(Decreament &d1){
        Decreament dcr;
        d1.value=d1.value-1;
        dcr.value=d1.value;
        return dcr;
    }
    Decreament operator --(Decreament &d1, int d){
        Decreament dcr;
        dcr.value=d1.value;
        d1.value=d1.value-1;
        return dcr;
    }
int main(){
    int x;
    cout<<"enter the value:";
    cin>>x;
    Decreament obj2,obj1;
    obj1.get(x);
    obj1.display();
    obj2=obj1--;
    obj1.display();
    obj2.display();
    obj2=--obj1;
    obj1.display();
    obj2.display();
}