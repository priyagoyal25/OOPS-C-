// divide by zero
#include<iostream>
using namespace std;
class Zero:public exception{
    public:
    const char* what()const throw(){
        cout<<" Attempted divide by 0"<<endl;
    }
};
int main(){
    int num1,num2;
    cout<<"enter 2 no"<<endl;
    cin>>num1>>num2;
    try{
        if(num2==0){
            Zero z;
            z.what();
            throw num2;
        }
        cout<<"answer is "<<num1/num2<<endl;
    }
    catch(int x){
        cout<<"exception handled: denominator is "<<x<<endl;
    }
}