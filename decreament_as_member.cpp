// overload (--) as MEMBER FUNCTION
#include<iostream>
using namespace std;
class Decreament{
    int value;
    public:
    Decreament(){
        value=0;
    }
    Decreament(int x){
        value=x;
    }
    void display(){
        cout<<value<<endl;
    }
    Decreament operator --();
    Decreament operator --(int d);
};
    Decreament Decreament::operator --(){
        Decreament dcr;
        value=value-1;
        dcr.value=value;
        return dcr;
    }
    Decreament Decreament::operator --(int d){
        Decreament dcr;
        dcr.value=value;
        value=value-1;
        return dcr;
    }
int main(){
    int x;
    cout<<"enter the value:";
    cin>>x;
    Decreament obj2,obj1(x);
    cout<<"initial value of obj1=";
    obj1.display();
    obj2=obj1--;
    cout<<"\nafter post decreament\n"<<endl;
    cout<<"value of obj1=";
    obj1.display();
    cout<<"value of obj2=";
    obj2.display();
    obj2=--obj1;
    cout<<"\nafter pre decreament\n"<<endl;
    cout<<"value of obj1=";
    obj1.display();
    cout<<"value of obj2=";
    obj2.display();
}