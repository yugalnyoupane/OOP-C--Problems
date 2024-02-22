#include <iostream>
#include <string>
using namespace std;

struct student{
    int age;
    string name;
    float fee;
};
int main(){
    struct student s;
    s.age=20;
    s.name="Yugal";
    s.fee=34000;
    cout<<"Age : "<<s.age<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Fee: "<<s.fee<<endl;
    return 0;
}