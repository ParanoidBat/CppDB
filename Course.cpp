#include "Course.h"
#include <iostream>
Course::Course(std::string CID, std::string department, std::string building, std::string classroom, std::string days, std::string time,
           std::string professor, short credit_hours, int max_enrollment, int num_of_enrollees){

               this->CID=CID;
               this->department=department;
               this->building=building;
               this->classroom=classroom;
               this->days=days;
               this->time=time;
               this->professor=professor;
               this->credit_hours=credit_hours;
               this->max_enrollment=max_enrollment;
               this->num_of_enrollees=num_of_enrollees;
        }

void Course::showData(){
    std::cout<<"CID: "<<CID<<std::endl;
    std::cout<<"Department: "<<department<<std::endl;
    std::cout<<"Building: "<<building<<std::endl;
    std::cout<<"Classroom: "<<classroom<<std::endl;
    std::cout<<"Days: "<<days<<std::endl;
    std::cout<<"Time: "<<time<<std::endl;
    std::cout<<"Professor: "<<professor<<std::endl;
    std::cout<<"Credit Hours: "<<credit_hours<<std::endl;
    std::cout<<"Max Enrollment: "<<max_enrollment<<std::endl;
    std::cout<<"Number of Enrollees: "<<num_of_enrollees<<std::endl;
}
