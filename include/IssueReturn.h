#ifndef ISSUERETURN_H
#define ISSUERETURN_H

#include <iostream>
#include <string>
using namespace std;

class IssueReturn
{
private:
    int issueID;
    int bookID;
    int studentID;
    string issueDate;
    string returnDate;
    bool returned;

public:
    // Constructor
    IssueReturn();

    IssueReturn(int iID, int bID, int sID, string iDate);

    // Setters
    void setIssueID(int id);
    void setBookID(int id);
    void setStudentID(int id);
    void setIssueDate(string date);
    void setReturnDate(string date);
    void setReturned(bool status);

    // Getters
    int getIssueID();
    int getBookID();
    int getStudentID();
    string getIssueDate();
    string getReturnDate();
    bool isReturned();

    // Issue and return operations
    void issueBook();
    void returnBook();

    // Display issue details
    void displayIssue();
};

#endif