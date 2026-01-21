📚 Library Management System (C++)

A simple Object-Oriented Library Management System implemented in C++, demonstrating key OOP concepts such as inheritance, polymorphism, abstraction, and exception handling.

Outpot

<img width="516" height="890" alt="image" src="https://github.com/user-attachments/assets/7272d4ad-75d8-44b3-b151-2e1e4b661994" />


🚀 Features

Add Books and DVDs to the library

Display all library items

Check out and return items

Abstract base class (LibraryItem)

Runtime polymorphism using virtual functions

Exception handling for invalid DVD duration

Menu-driven console interface

🧱 Object-Oriented Design
Base Class

LibraryItem (Abstract Class)

Attributes:

title

author

dueDate

Pure virtual functions:

checkOut()

returnItem()

displayDetails()

Derived Classes
📖 Book

Tracks issued/available status

Overrides all virtual methods

💿 DVD

Stores duration (in minutes)

Throws exception for invalid duration

🛠️ Technologies Used

C++

Standard Template Library (STL)

vector

string

Object-Oriented Programming principles

📂 Project Structure
Library-Management-System/
│
├── main.cpp
├── output.png
└── README.md

▶️ How to Run
1. Compile the Program
g++ main.cpp -o library

2. Run the Executable
./library

🖥️ Sample Output

Below is a screenshot of the program running in the terminal:

📌 How to add this image:

Run your program

Take a screenshot of the terminal output

Save it as output.png

Place it in the project root folder

Push it to GitHub

📋 Menu Options
1. Add Book
2. Add DVD
3. Display All Items
4. Check Out Item
5. Return Item
6. Exit

⚠️ Error Handling

Prevents issuing an already issued book

Prevents returning a non-issued book

Throws an exception for invalid DVD duration

Uses try-catch blocks for runtime errors

📌 Concepts Demonstrated

Abstraction

Inheritance

Polymorphism

Dynamic Memory Allocation

Virtual Destructors

Exception Handling
