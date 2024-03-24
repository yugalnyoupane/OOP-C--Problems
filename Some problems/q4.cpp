//Write a program to illustrate the use of namespace in C++. Define two different
//namespace names BEI and BCT, define some common and different attributes and try to
//access it in your program. (Something like below, experiment by different approaches to
//access the properties)

#include <iostream>

namespace BEI{
    char faculty[5] ="BEI";
    char name[30];
    int roll_no;
    char subject[20]="Microprocessor";

    void studentinfo(){
        std::cout<<"Student's name: ";
        std::cin>>name;
        std::cout<<"Roll no: ";
        std::cin>>roll_no;
    }
    void facultyinfo(){
        std::cout<<"Faculty: "<<faculty<<std::endl;
    }
    void subjectinfo(){
        std::cout<<"Subject: "<<subject<<std::endl;
    }
}
namespace BCT{
    char faculty[5] ="BCT";
    char name[30];
    int roll_no;
    char subject[20]="Drawing";

    void studentinfo(){
        std::cout<<"Student's name: ";
        std::cin>>name;
        std::cout<<"Roll no: ";
        std::cin>>roll_no;
    }
    void facultyinfo(){
        std::cout<<"Faculty: "<<faculty<<std::endl;
    }
    void subjectinfo(){
        std::cout<<"Subject: "<<subject<<std::endl;
    }
}

int main(){
    BEI::studentinfo();
    BEI::facultyinfo();
    BEI::subjectinfo();

    BCT::studentinfo();
    BCT::facultyinfo();
    BCT::subjectinfo();

    return 0;
}