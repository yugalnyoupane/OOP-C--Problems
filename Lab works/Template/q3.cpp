//Wap to store , remove (delete), add the elements in a list(array) using
//class template(Use concept of default argument in a template type)

#include <iostream>
using namespace std;

template <class T, int s = 7>
class List{
    T *arr;
    int idx, size;
    public:
    List(){
        idx = -1;
        size = s;
    }
    void store(T x[]);
};
//To store:
template <class T, int s>
void List<T,s>:: store(T x[]){
    for(i=0;i<x;i++){



    }
}

//To remove: 
template <class T>
T remove(T x){

}

//To add elements
template <class T>
T add(T x){

}
int main(){

    cout<<"Enter the number of values you want to store in a array"<<endl;
    int a[10] = {8,8,9,1,2,3,4,1,2,3};
    




}