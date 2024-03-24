//class boook , title author price publisher , 
//constructor 
//dynamic memory allocation for string and use destructor in proper way

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class book{
    char *title;
    char *author;
    float *price;
    char *publisher;

    public:
    //default constructor 
        book(){
            title = new char[50];
            author = new char[50];
            price = new float;
            publisher = new char[50];

            strcpy(title,"Default");
            strcpy(author,"Default");
            price = 0;
            strcpy(publisher,"Default");
        }
    //parameterized constructor 
        book(char *x,char *y, float z, char *a){
            int length ;
            length = strlen(x);
            title = new char[length+1];
            strcpy(title,x);

            length = strlen(y);
            title = new char[length+1];
            strcpy(title,y);

            price = new float;
            *price = z;

            length = strlen(a);
            title = new char[length+1];
            strcpy(title,a);
        }
        book(book &C){
            title = C.title;
            author = C.author;
            price = C.price;
            publisher = C.publisher;
        }
        ~book(){
            delete[] title;
            delete[] author;
            delete price;
            delete[] publisher;
        }

    void display(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Publisher: "<<publisher<<endl;
    }

};

int main(){
    book B1;
    B1.display();

    char title[]= "OOP";
    char name[]= "Yugal";
    char publisher[]= "Asmita";

    book B2(title,name,50.77,publisher);
    B2.display();

    book B3(B2);
    B3.display();
    return 0;
}