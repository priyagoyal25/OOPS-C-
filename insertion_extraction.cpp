// to overload insertion(<<) and extraction(>>)operator
#include<iostream>
using namespace std;
class Student{
    int id,marks;
    char name[20];
    public:
    friend void operator <<(ostream &,Student &);
    friend void operator >>(istream &,Student &);
};
void operator <<(ostream &o ,Student &s){
    o<<s.id<<endl;
    o<<s.name<<endl;
    o<<s.marks<<endl;
}
void operator >>(istream &i ,Student &s){
    i>>s.id;
    i>>s.name;
    i>>s.marks;
}
int main(){
    Student s;
    cout<<"enter id,name and marks:";
    cin>>s;
    cout<<"entered data:"<<endl;
    cout<<s;
}