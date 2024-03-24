#include <iostream>
#include <string>
using namespace std;

class Person{
    string name;
    int age;
    public:
        Person(){
            name="noname";
            age = 0;}
        friend ostream &operator << (ostream &output,Person &p);
        friend istream &operator >>(istream &input, Person &p);
};

ostream &operator <<(ostream &output, Person &p){
    output << "What the heck! "<<endl;
    output<<"My name is: "<<p.name<<" and My age is: "<<p.age<<endl;
    return output;
}
istream &operator >>(istream &input, Person &p){
    input>>p.name;
    input>>p.age;

    return input;
}


int main(){
    cout<<"Enter the name and age: "<<endl;
    Person p1;
    cin >> p1;
    cout<<p1;
    return 0;
    
}