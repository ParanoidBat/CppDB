#include "Student.h"
#include <iostream>

Student::Student(std::string SID, std::string first_name, std::string last_name, short credit_hours, std::string address, std::string email,
                 std::string phone_number){

               this->SID=SID;
               this->first_name=first_name;
               this->last_name=last_name;
               this->address=address;
               this->credit_hours=credit_hours;
               this->phone_number=phone_number;
               this->email=email;

               count_course=0;
        }

bool Student::insertCourse(Course &course){
    if(count_course==5){
        std::cout<<"Course limit reached\n";
        return false;
    }

    courses.push_back(course);
    count_course++;
    return true;
}

void Student::showNameCourse(){
    std::cout<<"Name: "<<first_name<<" "<<last_name<<std::endl;

    std::cout<<"Courses taken:\n";
    for (int i=0;i<count_course;i++){
        std::cout<<courses[i].CID<<std::endl;
    }
}

void Student::showData(){
    std::cout<<"SID: "<<SID<<std::endl;
    std::cout<<"First Name: "<<first_name<<std::endl;
    std::cout<<"Last Name: "<<last_name<<std::endl;
    std::cout<<"Address: "<<address<<std::endl;
    std::cout<<"Credit Hours: "<<credit_hours<<std::endl;
    std::cout<<"Phone Number: "<<phone_number<<std::endl;
    std::cout<<"Email: "<<email<<std::endl;
}
