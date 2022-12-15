// (-)operator to overload as FRIEND FUNCTION
#include<iostream>
using namespace std;
class Sample{
    int value;
    public:
    void get(){
        cout<<"enter the value"<<endl;
        cin>>value;
    }
    void display(){
        cout<<"value="<<value<<endl;
    }
    friend Sample operator -(Sample);
};
// if return type of operator function is of class type then & is not required
Sample operator -(Sample s1){
    s1.value=-s1.value;
    return s1;
}
int main(){
    Sample s1;
    s1.get();
    s1= -s1;
    s1.display();
}
