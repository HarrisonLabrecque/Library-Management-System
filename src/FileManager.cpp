#include "FileManager.h"
#include "Book.h"
#include "Student.h"

#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

//------------------------------------------------------
// Save all books to books.txt
//------------------------------------------------------
void FileManager::saveBooks(const vector<Book>& books)
{
    // Create an output file stream
    ofstream outFile("books.txt");

    // Check if the file opened successfully
    if (!outFile)
    {
        cout << "Error: Unable to open books.txt for writing." << endl;
        return;
    }

    // Loop through every book in the vector
    for (const Book& book : books)
    {
        // Save each book's information separated by commas
        outFile << book.getBookID() << ","
                << book.getTitle() << ","
                << book.getAuthor() << ","
                << book.getPublisher() << ","
                << book.isAvailable()
                << endl;
    }

    // Close the file
    outFile.close();

    // Notify the user
    cout << "Books saved successfully." << endl;
}

//------------------------------------------------------
// Load all books from books.txt
//------------------------------------------------------
vector<Book> FileManager::loadBooks()
{
    // Create an empty vector to store books
    vector<Book> books;

    // Open the input file
    ifstream inFile("books.txt");

    // Verify that the file exists
    if (!inFile)
    {
        cout << "books.txt not found." << endl;
        return books;
    }

    // Variable to hold one line from the file
    string line;

    // Read until the end of the file
    while (getline(inFile, line))
    {
        // Create a string stream for parsing
        stringstream ss(line);

        // Temporary variables
        string id;
        string title;
        string author;
        string publisher;
        string available;

        // Read each value separated by commas
        getline(ss, id, ',');
        getline(ss, title, ',');
        getline(ss, author, ',');
        getline(ss, publisher, ',');
        getline(ss, available);

        // Create a Book object
        Book book(
            stoi(id),
            title,
            author,
            publisher
        );

        // Restore the availability status
        book.setAvailability(stoi(available));

        // Add the book to the vector
        books.push_back(book);
    }

    // Close the input file
    inFile.close();

    // Return the completed vector
    return books;
}

//------------------------------------------------------
// Save all students to students.txt
//------------------------------------------------------
void FileManager::saveStudents(const vector<Student>& students)
{
    // Create an output file stream
    ofstream outFile("students.txt");

    // Check if the file opened successfully
    if (!outFile)
    {
        cout << "Error: Unable to open students.txt for writing." << endl;
        return;
    }

    // Loop through every student
    for (const Student& student : students)
    {
        // Save student information separated by commas
        outFile << student.getStudentID() << ","
                << student.getName() << ","
                << student.getPhone() << ","
                << student.getEmail()
                << endl;
    }

    // Close the file
    outFile.close();

    // Notify the user
    cout << "Students saved successfully." << endl;
}

//------------------------------------------------------
// Load all students from students.txt
//------------------------------------------------------
vector<Student> FileManager::loadStudents()
{
    // Create an empty vector to store students
    vector<Student> students;

    // Open the input file
    ifstream inFile("students.txt");

    // Verify the file exists
    if (!inFile)
    {
        cout << "students.txt not found." << endl;
        return students;
    }

    // Variable to hold one line at a time
    string line;

    // Read until the end of the file
    while (getline(inFile, line))
    {
        // Create a string stream
        stringstream ss(line);

        // Temporary variables
        string id;
        string name;
        string phone;
        string email;

        // Read each field separated by commas
        getline(ss, id, ',');
        getline(ss, name, ',');
        getline(ss, phone, ',');
        getline(ss, email);

        // Create a Student object
        Student student;

        // Set the student's information
        student.setStudentID(stoi(id));
        student.setName(name);
        student.setPhone(phone);
        student.setEmail(email);

        // Add the student to the vector
        students.push_back(student);
    }

    // Close the file
    inFile.close();

    // Return all loaded students
    return students;
}