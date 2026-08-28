#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int studentID;
    string name;
    string phone;
    string email;

public:
    // Constructor
    Student();

    Student(int id, string name, string phone, string email);

    // Setters
    void setStudentID(int id);
    void setName(string name);
    void setPhone(string phone);
    void setEmail(string email);

    // Getters
    int getStudentID() const;
    string getName() const;
    string getPhone() const;
    string getEmail() const;

    // Display details
    void displayStudent();
};

#endif