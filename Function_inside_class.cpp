#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int math,english;
    Student(string name,int roll,int math,int english){
        this->name=name;
        this->roll=roll;
        this->english=english;
        this->math=math;
    }
    void hello(){
        cout<<"Hello This is "<<name<<endl;
    }
    void id(){
        cout<<"This is "<<name<<"S Roll = "<<roll<<endl;
    }
    void mark(){
        int total=math+english;
        cout<<"Total Marks is "<<name<<" ="<<total<<endl;
    }
};
int main(){
    Student tareq("md Tareq",44,77,55);
    cout<<tareq.name<<endl;
    Student mahi("MD Mahi",39,33,50);
    //cout<<tareq.hello()<<endl;
    mahi.hello();
    tareq.id();
    mahi.mark();
    tareq.mark();
    return 0;
}