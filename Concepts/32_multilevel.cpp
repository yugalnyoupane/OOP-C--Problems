#include <iostream>
using namespace std;

class Roll{
    protected:
        int r;
    public: 
        void setroll(int x){
            r = x;
        }
        void outroll(){
            cout<<"Roll no: "<<r<<endl;
        }
};
class Test: public Roll{
    protected:
        int s1,s2;
    public:
        void set_marks(int x,int y){
            s1 = x;
            s2 = y;
        }
        void put_marks(){
            cout<<"Subject 1: "<<s1<<endl;
            cout<<"Subject 2: "<<s2<<endl;
        }
};
class Result: public Test{
    protected:
        int t;
    public:
        void display(){
        outroll();
        put_marks();
        t = s1+s2;
        cout<<"Total Marks: "<<t<<endl;
        }
};

int main(){
    Result T;
    T.setroll(48);
    T.set_marks(80,79);
    T.display();
    return 0;
}