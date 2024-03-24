//converting 24 to 12
#include <iostream>
using namespace std;

class Time{
    int hr, min , sec;
    public:
        Time(){
            hr = 0;
            min = 0;
            sec = 0;
        }
        Time(int x, int y, int z){
            hr = x;
            min = y;
            sec = z;
        }
        void show(){
            cout<<"The time is: "<<hr<<"hr"<<min<<"min"<<sec<<"sec"<<endl;
        }
        void convert_12(){
            if (hr<12){
                hr = hr;
            }
            else{
                hr = hr -12;
            }
        }
};
int main(){
    Time t1(13,3,4);
    t1.show();
    t1.convert_12();
    t1.show();
}
