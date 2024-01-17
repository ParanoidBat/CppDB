#ifndef COURSE_H_INCLUDED
#define COURSE_H_INCLUDED
#include <string>
struct Course{
    std::string CID;
    std::string department;
    std::string building;
    std::string classroom;
    std::string days;
    std::string time;
    std::string professor;
    short credit_hours;
    int max_enrollment;
    int num_of_enrollees;

    Course(){}

    Course(std::string CID, std::string department, std::string building, std::string classroom, std::string days, std::string time,
           std::string professor, short credit_hours, int max_enrollment, int num_of_enrollees);

    void showData();
};

#endif // COURSE_H_INCLUDED
