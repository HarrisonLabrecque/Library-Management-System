# Library Management System

## Overview

The **Library Management System** is a console-based application developed in **C++** using object-oriented programming (OOP) principles.

The system allows users to manage books and students while providing functionality for issuing and returning books. Data can also be stored and loaded using text files.

This project was created as a college-level C++ project to demonstrate classes, encapsulation, vectors, file handling, and modular programming.

---

## Features

### Book Management

* Add new books
* Display all books
* Search for books by title or author
* Remove books by Book ID
* Check book availability
* Issue books
* Return books

### Student Management

* Add new students
* Display registered students
* Remove students by Student ID
* Store student contact information

### File Management

* Save book records to a text file
* Load book records from a text file
* Save student records to a text file
* Load student records from a text file

---

## Technologies Used

* **C++**
* **C++17 Standard**
* **Object-Oriented Programming**
* **Vectors (`std::vector`)**
* **File I/O (`fstream`)**
* **String Processing**
* **MSYS2 / MinGW g++**
* **Visual Studio Code**

---

## Project Structure

```text
Library Management System/
│
├── main.cpp
│
├── include/
│   ├── Book.h
│   ├── Student.h
│   ├── Library.h
│   ├── IssueReturn.h
│   └── FileManager.h
│
├── src/
│   ├── Book.cpp
│   ├── Student.cpp
│   ├── Library.cpp
│   ├── IssueReturn.cpp
│   └── FileManager.cpp
│
├── data/
│   ├── books.txt
│   ├── students.txt
│   └── issued_books.txt
│
├── .vscode/
│   ├── tasks.json
│   └── launch.json
│
├── LibraryManagementSystem.exe
│
└── README.md
```

---

## Classes

### Book

The `Book` class represents an individual book in the library.

It stores:

* Book ID
* Title
* Author
* Publisher
* Availability status

Main functions include:

```text
setBookID()
setTitle()
setAuthor()
setPublisher()
setAvailability()

getBookID()
getTitle()
getAuthor()
getPublisher()
isAvailable()

displayBook()
```

---

### Student

The `Student` class represents a registered library student/member.

It stores:

* Student ID
* Name
* Phone number
* Email address

Main functions include:

```text
setStudentID()
setName()
setPhone()
setEmail()

getStudentID()
getName()
getPhone()
getEmail()

displayStudent()
```

---

### Library

The `Library` class manages the books and students in the system.

The class uses `std::vector` to store collections of books and students.

Main functions include:

```text
addBook()
removeBook()
searchBook()
displayBooks()

addStudent()
removeStudent()
displayStudents()

issueBook()
returnBook()
```

---

### IssueReturn

The `IssueReturn` class is designed to manage book issue and return information.

It can store information such as:

* Issue ID
* Book ID
* Student ID
* Issue date
* Return date
* Return status

---

### FileManager

The `FileManager` class handles file input and output.

It provides functions for:

```text
saveBooks()
loadBooks()

saveStudents()
loadStudents()
```

The system uses text files to provide persistent storage for library information.

---

## Main Menu

When the program starts, the user is presented with the following menu:

```text
======================================
      Library Management System
======================================
1. Add New Book
2. Display All Books
3. Search Book
4. Remove Book
5. Add Student
6. Display Students
7. Remove Student
8. Issue Book
9. Return Book
0. Exit
======================================
Enter your choice:
```

---

## Data Structures

The primary data structure used by the project is `std::vector`.

Books are stored using:

```cpp
std::vector<Book> books;
```

Students are stored using:

```cpp
std::vector<Student> students;
```

Vectors allow the program to dynamically store and manage multiple books and students.

The project also uses loops and conditional statements to search, add, remove, issue, and return records.

---

## File Storage

The `FileManager` class uses text files for data storage.

Example book record:

```text
101,The Great Gatsby,F. Scott Fitzgerald,Scribner,1
```

Example student record:

```text
1001,John Smith,555-123-4567,john@example.com
```

The availability value is stored as:

```text
1 = Available
0 = Issued
```

---

## Requirements

To build and run the project, you need:

* Windows
* Visual Studio Code
* C++ compiler
* MSYS2/MinGW g++
* C++17 support
* VS Code C/C++ extension

The project currently uses:

```text
C:\msys64\ucrt64\bin\g++.exe
```

and:

```text
C:\msys64\ucrt64\bin\gdb.exe
```

---

## Building the Project

Open the VS Code terminal in the project root directory.

Build the project with:

```bash
g++ -std=c++17 -Iinclude main.cpp src/Book.cpp src/Student.cpp src/Library.cpp src/FileManager.cpp src/IssueReturn.cpp -o LibraryManagementSystem.exe
```

If compilation is successful, the following executable will be created:

```text
LibraryManagementSystem.exe
```

---

## Running the Program

After building the program, run:

### PowerShell

```powershell
.\LibraryManagementSystem.exe
```

### Command Prompt

```cmd
LibraryManagementSystem.exe
```

---

## Building Using VS Code

The project includes a VS Code build task.

To build the project:

```text
Ctrl + Shift + B
```

The build task compiles all project source files and creates:

```text
LibraryManagementSystem.exe
```

---

## Running Using VS Code

The project also includes a VS Code debugging configuration.

Press:

```text
F5
```

or select:

```text
Run and Debug
```

VS Code will build the project using the configured build task and then launch the application.

---

## Object-Oriented Programming Concepts

This project demonstrates several important C++ OOP concepts.

### Encapsulation

Class data members are kept private and accessed through public getter and setter functions.

Example:

```cpp
class Book
{
private:
    int bookID;
    string title;

public:
    void setBookID(int id);
    int getBookID() const;
};
```

### Classes and Objects

The project uses multiple classes to represent different parts of the library system.

Examples:

```cpp
Book book;
Student student;
Library library;
```

### Constructors

Constructors are used to initialize objects with default or provided values.

### Abstraction

The `Library` and `FileManager` classes provide functions that hide the details of managing collections and files from the main program.

### Modular Programming

The project separates declarations and implementations into header and source files.

---

## Future Improvements

Possible future improvements include:

* Admin login system
* Password authentication
* Fine calculation
* Due date tracking
* Improved search functionality
* Case-insensitive searching
* Multiple copies of the same book
* Student borrowing history
* Book categories
* Improved file storage
* SQLite or MySQL database integration
* Graphical user interface using Qt
* Improved input validation
* Automatic backup of library data

---

## Known Limitations

The current version is a console-based application and has a simple text-file storage system.

Some advanced features, such as authentication, fine calculation, due-date management, and database integration, are not currently implemented.

---

## Author

**Harrison Labrecque**

C++ Library Management System Project

---

## License

This project was created for educational purposes.
