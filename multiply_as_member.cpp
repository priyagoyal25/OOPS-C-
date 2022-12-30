// overload *operator to multiply two complex no as MEMBER FUNCTION
#include<iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    void get(){
        cout<<"enter real and imag part"<<endl;
        cin>>real>>imag;
    }
    void display(){
        cout<<real<<"+"<<imag<<"j"<<endl;
    }
    Complex operator *(Complex);
};
Complex Complex::operator *(Complex c2){
    Complex c3;
    c3.real=(real*c2.real)-(imag*c2.imag);
    c3.imag=(imag*c2.real)+(real*c2.imag);
    return c3;
}
int main(){
    Complex c1,c2,c3;
    c1.get();
    c2.get();
    c3=c1*c2;;
    c3.display(); 
}