// (+) to concatenate 2 strings as MEMBER FUNCTION
#include<iostream>
#include<string.h>
using namespace std;
class String{
    char str[30];
    public:
    void get(){
        cin>>str;
    }
    void display(){
        cout<<str;
    } 
    String operator +(String);
};
String String::operator +(String s2){
    String s3;
    strcpy(s3.str,str);
    strcat(s3.str, s2.str);
    return s3;
}
int main(){
    String s1,s2,s3;
    cout<<"enter string 1"<<endl;
    s1.get();
    cout<<"enter string 2"<<endl;
    s2.get();
    s3=s1+s2;
    s3.display();
}