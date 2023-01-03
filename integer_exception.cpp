// to handle an exception of integer type
#include<iostream>
using namespace std;
class Sample{
    public:
    void get(int x){                 
        throw x;
    }
};
int main(){
    int x;
    cout<<"enter no:";
    cin>>x;
    try{
        Sample s;
        s.get(x);
    }
    catch(int y){
        cout<<"Exception caught:integer "<<y<<endl;
    }
}