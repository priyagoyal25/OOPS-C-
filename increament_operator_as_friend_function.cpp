// overload (++) as FRIEND FUNCTION
#include<iostream>
using namespace std;
class Increament{
    int value;
    public:
    void get(int x){
        value=x;
    }
    void display(){
        cout<<value<<endl;
    }
    friend Increament operator ++(Increament &);
    friend Increament operator ++(Increament &,int d);
};
    Increament operator ++(Increament &i){
        Increament inc;
        i.value=i.value+1;
        inc.value=i.value;
        return inc;
    }
    Increament operator ++(Increament &i,int d){
        Increament inc;
        inc.value=i.value;
        i.value=i.value+1;
        return inc;
    }
int main(){
    int x;
    cout<<"enter the value:";
    cin>>x;
    Increament obj2,obj1;
    obj1.get(x);
    obj1.display();
    obj2=obj1++;
    obj1.display();
    obj2.display();
    obj2=++obj1;
    obj1.display();
    obj2.display();
}