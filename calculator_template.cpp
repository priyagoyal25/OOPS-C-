// to make a calculator of same datatype
#include<iostream>
using namespace std;
template<class T>
class Calculator{
    T value1,value2;
    public:
    Calculator(T num1,T num2){
        value1=num1;
        value2=num2;
    }
    T add(){
        return value1+value2;
    }
    T sub(){
        return value1-value2;
    }
    T mul(){
        return value1*value2;
    }
    T div(){
        return value1/value2;
    }
};
int main(){
    int num1,num2;
    float num3,num4;
    char num5,num6;
    cout<<"enter integer values:"<<endl;
    cin>>num1>>num2;
    cout<<"enter float values:"<<endl;
    cin>>num3>>num4;
    cout<<"enter char values:"<<endl;
    cin>>num5>>num6;
    Calculator<int>s1(num1,num2);
    Calculator<float>s2(num3,num4);
    Calculator<char>s3(num5,num6);
    cout<<"sum of two integer value="<<s1.add()<<endl;
    cout<<"subtarction of two integer value="<<s1.sub()<<endl;
    cout<<"multiplication of two integer value="<<s1.mul()<<endl;
    cout<<"division of two integer value="<<s1.div()<<endl;
    cout<<"sum of two float value="<<s2.add()<<endl;
    cout<<"subtraction of two char="<<s3.sub()<<endl;
}