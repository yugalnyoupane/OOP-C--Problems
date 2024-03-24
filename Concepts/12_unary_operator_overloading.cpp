#include <iostream>
using namespace std;

class plane{
    float x,y,z;
    public:
        void setplane(float, float, float);
        void putplane();
       // void operator-(); //using member
        
        friend void operator-(plane &); //using friend function 

};
void plane::setplane(float x,float y,float z){
    this->x = x;
    this->y = y;
    this->z = z;
}
void plane::putplane(){
    cout<<"(x,y,z): "<<"("<<this->x<<","<<this->y<<","<<this->z<<")"<<endl;
}

void operator- (plane& p){
    p.x = -p.x;
    p.y = -p.y;
    p.z = -p.z;
}

/*void plane::operator- (){
    this->x = -x;
    this->y = -y;
    this->z = -z;
}*/

int main(){
    plane p;
    p.setplane(1.3,3.2,4.5);
    p.putplane();
    -p;
    p.putplane();

}