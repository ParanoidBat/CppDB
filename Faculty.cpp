#include "Faculty.h"
#include <iostream>

Faculty::Faculty(std::string FID, std::string first_name, std::string last_name, std::string department, std::string office_number,
            std::string email, std::string phone_number){

               this->FID=FID;
               this->first_name=first_name;
               this->last_name=last_name;
               this->department=department;
               this->office_number=office_number;
               this->phone_number=phone_number;
               this->email=email;

               count_course=0;
        }

bool Faculty::insertCourse(Course &course){
    if(count_course==4){
        std::cout<<"Course limit reached\n";
        return false;
    }

    courses.push_back(course);
    count_course++;
    return true;
}

void Faculty::showNameCourse(){
    std::cout<<"Name: "<<first_name<<" "<<last_name<<std::endl;

    std::cout<<"Courses taught:\n";
    for (int i=0;i<count_course;i++){
        std::cout<<courses[i].CID<<std::endl;
    }
}

void Faculty::showData(){
    std::cout<<"FID: "<<FID<<std::endl;
    std::cout<<"First Name: "<<first_name<<std::endl;
    std::cout<<"Last Name: "<<last_name<<std::endl;
    std::cout<<"Department: "<<department<<std::endl;
    std::cout<<"Office Number: "<<office_number<<std::endl;
    std::cout<<"Email: "<<email<<std::endl;
    std::cout<<"Phone Number: "<<phone_number<<std::endl;
}
