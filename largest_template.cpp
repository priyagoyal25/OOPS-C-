#include<iostream>
using namespace std;
template<class T>
void large(T num1,T num2,T num3){
    if(num1>num2&&num1>num3){
        cout<<"largest value:"<<num1<<endl;
    }
    else if(num2>num1&&num2>num3){
        cout<<"largest value:"<<num2<<endl;
    }
    else{
        cout<<"largest value:"<<num3<<endl;
    }
}
int main(){
    int num1=10,num2=30,num3=20;
    float f1=10.2,f2=34.4,f3=6.5;
    char c1='a',c2='b',c3='c';
    large(num1,num2,num3);
    large(f1,f2,f3);
    large(c1,c2,c3);
}