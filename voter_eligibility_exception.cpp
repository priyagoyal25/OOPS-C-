// age less than 18 
#include<iostream>
using namespace std;
class Voter{
    public:
    Voter(){
        cout<<"not eligible for vote"<<endl;
    }
};
int main(){
    int age;
    cout<<"enter age:";
    cin>>age;
    try{
        if(age<18){
            Voter v;
            throw age;
        }
        cout<<"eligible for vote age is greater than 18 i.e. "<<age<<endl;
    }
    catch(int x){
        cout<<"age less than 18 i.e. "<<x<<endl;
    }
}