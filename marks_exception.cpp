// marks less than 40 then throw exception
#include<iostream>
using namespace std;
class Sample{
    public:
    Sample(){
        cout<<"you are failed"<<endl;
    }
};
int main(){
    int m;
    cout<<"enter marks:";
    cin>>m;
    try{
        if(m<40){
            Sample s;
            throw m;
        }
        cout<<"marks="<<m<<endl;
    }
    catch(int m){
        cout<<"exception handled marks less than 40 i.e."<<m<<endl;
    }
}