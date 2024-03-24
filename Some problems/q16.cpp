//add two"time" objects by taking object as argument and also returning object as argument
#include <iostream>
using namespace std;

class time{
    int hr, min, sec;
    public:
        time(){
            hr = 0;
            min = 0;
            sec = 0;
        }
        time(int x, int y, int z){
            hr = x;
            min = y;
            sec = z;
        }
    friend time sum(time, time);
    void display(){
        cout<<"Hour: "<<hr<<endl;
        cout<<"Minute: "<<min<<endl;
        cout<<"Second: "<<sec<<endl;
    }
};
time sum(time A, time B){
    time temp;
    temp.sec= A.sec+B.sec;
    temp.min=A.min+B.min+temp.sec/60;
    temp.sec=temp.sec%60;
    temp.hr=A.hr+B.hr+temp.min/60;
    temp.min=temp.min%60;
    return temp;
}

int main(){
    time T1(3,45,55);
    T1.display();
    time T2(12,23,59);
    T2.display();
    time T3 = sum(T1, T2);
    T3.display();
    return 0;

}