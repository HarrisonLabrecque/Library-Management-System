#include "IssueReturn.h"

using namespace std;

//------------------------------------------------------
// Default Constructor
//------------------------------------------------------
IssueReturn::IssueReturn()
{
    issueID = 0;
    bookID = 0;
    studentID = 0;
    issueDate = "";
    returnDate = "";
    returned = false;
}

//------------------------------------------------------
// Parameterized Constructor
//------------------------------------------------------
IssueReturn::IssueReturn(int iID, int bID, int sID, string iDate)
{
    issueID = iID;
    bookID = bID;
    studentID = sID;
    issueDate = iDate;
    returnDate = "";
    returned = false;
}

//------------------------------------------------------
// Setters
//------------------------------------------------------

void IssueReturn::setIssueID(int id)
{
    issueID = id;
}

void IssueReturn::setBookID(int id)
{
    bookID = id;
}

void IssueReturn::setStudentID(int id)
{
    studentID = id;
}

void IssueReturn::setIssueDate(string date)
{
    issueDate = date;
}

void IssueReturn::setReturnDate(string date)
{
    returnDate = date;
}

void IssueReturn::setReturned(bool status)
{
    returned = status;
}

//------------------------------------------------------
// Getters
//------------------------------------------------------

int IssueReturn::getIssueID()
{
    return issueID;
}

int IssueReturn::getBookID()
{
    return bookID;
}

int IssueReturn::getStudentID()
{
    return studentID;
}

string IssueReturn::getIssueDate()
{
    return issueDate;
}

string IssueReturn::getReturnDate()
{
    return returnDate;
}

bool IssueReturn::isReturned()
{
    return returned;
}

//------------------------------------------------------
// Mark a book as issued
//------------------------------------------------------

void IssueReturn::issueBook()
{
    returned = false;
}

//------------------------------------------------------
// Mark a book as returned
//------------------------------------------------------

void IssueReturn::returnBook()
{
    returned = true;
}

//------------------------------------------------------
// Display issue information
//------------------------------------------------------

void IssueReturn::displayIssue()
{
    cout << "Issue ID: " << issueID << endl;
    cout << "Book ID: " << bookID << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "Issue Date: " << issueDate << endl;
    cout << "Return Date: " << returnDate << endl;

    if (returned)
    {
        cout << "Status: Returned" << endl;
    }
    else
    {
        cout << "Status: Issued" << endl;
    }

    cout << "------------------------" << endl;
}