#ifndef FACULTY_H_INCLUDED
#define FACULTY_H_INCLUDED

#include <vector>
#include "Course.h"
struct Faculty{
    std::vector <Course> courses;
    short count_course;

    std::string FID;
    std::string first_name;
    std::string last_name;
    std::string department;
    std::string office_number;
    std::string phone_number;
    std::string email;

    Faculty(){}

    Faculty(std::string FID, std::string first_name, std::string last_name, std::string department, std::string office_number,
            std::string email, std::string phone_number);

    bool insertCourse(Course &course);

    void showNameCourse();

    void showData();
};

#endif // FACULTY_H_INCLUDED
