#include <fstream>
#include <stdio.h>
#include <iostream>
#include "Faculty.h"
#include "Student.h"
using namespace std;

int main (void){
    ifstream file("Course.dat");

    string CID,dep,building,classroom,days,time,prof;
    short credit_hrs;
    int max_enroll,enrolled;

    vector <Course> courses;
    while(!file.eof()){
        file>>CID;
        file>>dep;
        file>>building;
        file>>classroom;
        file>>days;
        file>>time;
        file>>prof;
        file>>credit_hrs;
        file>>max_enroll;
        file>>enrolled;

        courses.push_back(Course(CID,dep,building,classroom,days,time,prof,credit_hrs,max_enroll,enrolled));
    }
    file.close();

    file.open("Faculty.dat");
    vector <Faculty> faculty;
    while(!file.eof()){
        file>>CID;//using same names as above. This is FID
        file>>dep;// first name
        file>>building;//last name
        file>>classroom;//course
        file>>days;//office number
        file>>time;//email
        file>>prof;//phone number

        faculty.push_back(Faculty(CID,dep,building,classroom,days,time,prof));
    }
    file.close();

    file.open("Students.dat");
    vector <Student> students;
    while(!file.eof()){
        file>>CID;//using same names as above. This is SID
        file>>dep;// first name
        file>>building;//last name
        file>>credit_hrs;//credit hours
        file>>days;//address
        file>>time;//email
        file>>prof;//phone number

        students.push_back(Student(CID,dep,building,credit_hrs,days,time,prof));
    }
    file.close();

    faculty[0].insertCourse(courses[2]);//assigning course to faculty
    faculty[1].insertCourse(courses[0]);
    faculty[2].insertCourse(courses[1]);

    students[0].insertCourse(courses[0]);
    students[0].insertCourse(courses[1]);
    students[1].insertCourse(courses[1]);
    students[2].insertCourse(courses[2]);

    short x;
    while(1){
        printf("\t\t\tFile System Database\
               \n\n1. List All Students With Courses Taken\n2. Show Student x With Courses Taken\
               \n3. List All Professors With Courses Taught\n5. Show Faculty x Data\n6. Show Student x Data\
               \n7. Show Course x Data\n8. Quit\n");

        cin>>x;
        switch(x){
        case 1:
            for(int i=0;i<students.size();i++) students[i].showNameCourse();
            cout<<endl;
            break;
        case 2:
            cout<<"Input index x: ";
            cin>>x;
            students[x].showNameCourse();
            cout<<endl;
            break;
        case 3:
            for(int i=0;i<faculty.size();i++) faculty[i].showNameCourse();
            cout<<endl;
            break;
        case 5:
            cout<<"Input index x: ";
            cin>>x;
            faculty[x].showData();
            cout<<endl;
            break;
        case 6:
            cout<<"Input index x: ";
            cin>>x;
            students[x].showData();
            cout<<endl;
            break;
        case 7:
            cout<<"Input index x: ";
            cin>>x;
            courses[x].showData();
            cout<<endl;
            break;
        case 8:
            return 0;
        default:
            cerr<<"Wrong Input\n";
            return -1;
        }
    }
}
