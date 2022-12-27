// overload (++) as MEMBER FUNCTION
#include<iostream>
using namespace std;
class Increament{
    int value;
    public:
    Increament(){
        value=0;
    }
    Increament(int x){
        value=x;
    }
    void display(){
        cout<<value<<endl;
    }
    Increament operator ++(){
        Increament inc;
        value=value+1;
        inc.value=value;
        return inc;
    }
    Increament operator ++(int d){
        Increament inc;
        inc.value=value;
        value=value+1;
        return inc;
    }
};
int main(){
    int x;
    cout<<"enter the value:";
    cin>>x;
    Increament obj2,obj1(x);
    cout<<"initial value of obj1=";
    obj1.display();
    obj2=obj1++;
    cout<<"\nafter post increament\n"<<endl;
    cout<<"value of obj1=";
    obj1.display();
    cout<<"value of obj2=";
    obj2.display();
    obj2=++obj1;
    cout<<"\nafter pre increament\n"<<endl;
    cout<<"value of obj1=";
    obj1.display();
    cout<<"value of obj2=";
    obj2.display();
}