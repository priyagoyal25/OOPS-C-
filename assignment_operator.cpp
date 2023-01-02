// overload (=)operator as MEMBER FUNCTION
#include<iostream>
using namespace std;
class Assignment{
    int value;
    public:
    void get(int x){
        value=x;
    }
    void display(){
        cout<<"copied value="<<value<<endl;
    }
    void operator =(Assignment a2){
        value=a2.value;
    }
};
int main(){
    int x;
    cout<<"enter the value:";
    cin>>x;
    Assignment a1,a2;
    a2.get(x);
    a1=a2;
    a1.display();
} 