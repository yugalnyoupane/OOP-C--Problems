#include <iostream>
using namespace std;

class point{
    float x,y,z;
    public:
        void setpoint(float, float, float);
        void printpoint();
        point operator+(point);
};
void point::setpoint(float x, float y, float z){
    this->x = x;
    this->y = y;
    this->z = z;
}
void point::printpoint(){
    cout<<"(x,y,z): "<<"("<<this->x<<","<<this->y<<","<<this->z<<")"<<endl;
}
point point::operator+(point p){
    point temp;
    temp.x= this->x+p.x;
    temp.y= this->y+p.y;
    temp.z= this->z+p.z;
    return temp;
}

int main(){
    point p1;
    point p2;
    p1.setpoint(2,3,4);
    p2.setpoint(2.4,2.5,2.3);
    p1.printpoint();
    p2.printpoint();
    point p3;
    p3=p1+p2;
    p3.printpoint();
    return 0;
}