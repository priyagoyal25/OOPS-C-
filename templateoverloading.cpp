// to overload template and template functions or ordinary functions
/* we have to define template function above the function where we are using and 
specific function is being called only when it is defined above template declaration*/

#include<iostream>
using namespace std;
void display(int num1){
    cout<<"integer num1="<<num1<<endl;
}
template<class T1>
void display(T1 num1){
    cout<<"template1 num1="<<num1<<endl;
}
template<class T1,class T2>
void display(T1 num1,T2 num2){
    cout<<"template2 num1 and num2="<<num1<<"&"<<num2<<endl;
}
int main(){
    int num1=10;
    float num2=45.5;
    char ch='p';
    display(num1);
    display(num2);
    display(ch);
    display(num1,num2);
    display(num2,ch);
}