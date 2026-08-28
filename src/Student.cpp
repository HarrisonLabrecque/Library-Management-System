#include "Student.h"

using namespace std;

//------------------------------------------------------
// Default Constructor
// Initializes an empty student object
//------------------------------------------------------
Student::Student()
{
    studentID = 0;
    name = "";
    phone = "";
    email = "";
}

//------------------------------------------------------
// Parameterized Constructor
// Creates a student using provided information
//------------------------------------------------------
Student::Student(int id, string name, string phone, string email)
{
    // Assign values to class variables
    studentID = id;
    this->name = name;
    this->phone = phone;
    this->email = email;
}

//------------------------------------------------------
// Setter Functions
// Used to modify private class variables
//------------------------------------------------------

void Student::setStudentID(int id)
{
    studentID = id;
}

void Student::setName(string name)
{
    this->name = name;
}

void Student::setPhone(string phone)
{
    this->phone = phone;
}

void Student::setEmail(string email)
{
    this->email = email;
}

//------------------------------------------------------
// Getter Functions
// Used to retrieve private class variables
//------------------------------------------------------

int Student::getStudentID() const
{
    return studentID;
}

string Student::getName() const
{
    return name;
}

string Student::getPhone() const
{
    return phone;
}

string Student::getEmail() const
{
    return email;
}

//------------------------------------------------------
// Display Student Information
//------------------------------------------------------

void Student::displayStudent()
{
    cout << "Student ID: " << studentID << endl;
    cout << "Name: " << name << endl;
    cout << "Phone: " << phone << endl;
    cout << "Email: " << email << endl;

    cout << "------------------------" << endl;
}