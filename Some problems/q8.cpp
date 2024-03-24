//add and substract time units by using object concept
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
        int hour(int x){
            return x;
        }
        int minute(int y){
            return y;
        }
        int second(int z){
            return z;
        }
};
int main(){
    int hr;
    time T1;
    time T2;
    hr = T1.hour(4)+T2.hour(7);
    cout<<hr;
}
