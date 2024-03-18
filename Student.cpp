#include<iostream>
using namespace std;
class Student{
    protected:
    float roll;
    public:
    void getRoll(float r){
        roll = r;
    }
    void putRoll(){
        cout<<"Roll: "<<roll<<endl;
    }
};
class Test:public Student{
    protected:
    float sub1, sub2;
    public:
    void getMarks(float m1,float m2){
        sub1 = m1;
        sub2 = m2;
    }
    void putMarks(){
        cout<<"Marks in Subject 1: "<<sub1<<endl;
        cout<<"Marks in Subject 2: "<<sub2<<endl;
    }
};
class Result:public Test{
    float total;
    public:
    void display(){
        total=((sub1+sub2)/200)*100;
        putRoll();
        putMarks();
        cout<<"Total percentage : "<<total<<endl;
    }
};
int main(){
    Result r;
    r.getRoll(100);
    r.getMarks(90,100);
    r.display();
    return 0;
}