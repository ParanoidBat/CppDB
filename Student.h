#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <vector>
#include "Course.h"
struct Student{
    std::vector <Course> courses;
    short count_course;

    std::string SID;
    std::string first_name;
    std::string last_name;
    std::string address;
    std::string email;
    std::string phone_number;
    short credit_hours;

    Student(){}

    Student(std::string SID, std::string first_name, std::string last_name, short credit_hours, std::string address, std::string email,
            std::string phone_number);

    bool insertCourse(Course &course);

    void showNameCourse();

    void showData();
};

#endif // STUDENT_H_INCLUDED
