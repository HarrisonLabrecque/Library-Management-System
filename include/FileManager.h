#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "Book.h"
#include "Student.h"

#include <vector>

class FileManager
{
public:

    // Save all books to a file
    void saveBooks(const std::vector<Book>& books);

    // Load all books from a file
    std::vector<Book> loadBooks();

    // Save all students to a file
    void saveStudents(const std::vector<Student>& students);

    // Load all students from a file
    std::vector<Student> loadStudents();
};

#endif