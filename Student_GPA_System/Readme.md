# FUUAST Student GPA Record System

A simple **Student GPA Record Management System** built using **C and GTK+**.
The application provides a graphical user interface (GUI) for entering and displaying student academic information such as name, father's name, roll number, program, semester, and GPA.

## Features

* Add student records through a graphical interface
* Store up to **100 students**
* Collect the following information:

  * Student Name
  * Father's Name
  * Roll Number
  * Program
  * Semester
  * GPA
* Display all added student records in a text view
* Automatically format GPA to two decimal places
* Simple and user-friendly GTK+ interface

## Technologies Used

* **C**
* **GTK+ 3**
* **GCC**
* **Standard C Libraries**

  * `stdio.h`
  * `string.h`
  * `stdlib.h`

## Student Information Structure

Each student record contains:

```c
typedef struct {
    char name[50];
    char father_name[50];
    char rollno[20];
    char program[50];
    char semester[20];
    float gpa;
} Student;
```

The program uses an array to store student records:

```c
Student students[MAX_STUDENTS];
```

The maximum number of students is defined as:

```c
#define MAX_STUDENTS 100
```

## How It Works

1. Launch the application.
2. Enter the student's name.
3. Enter the father's name.
4. Enter the roll number.
5. Enter the academic program.
6. Enter the semester.
7. Enter the GPA.
8. Click **Add Student**.
9. The student's information will appear in the text display area.
10. Additional students can be added and displayed together.

## GUI Layout

The application contains:

| Field       | Description                  |
| ----------- | ---------------------------- |
| Name        | Student's name               |
| Father Name | Student's father's name      |
| Roll No     | Student roll number          |
| Program     | Degree/program name          |
| Semester    | Current semester             |
| GPA         | Student GPA                  |
| Add Student | Adds the entered record      |
| Text View   | Displays all student records |

## Requirements

Before compiling the project, make sure you have:

* GCC compiler
* GTK+ 3 development libraries
* Linux operating system or another environment configured with GTK+ 3

### Ubuntu/Debian

Install GTK+ 3 development packages:

```bash
sudo apt update
sudo apt install gcc libgtk-3-dev
```

## Compilation

Save the source code as:

```text
student_gpa.c
```

Compile using:

```bash
gcc student_gpa.c -o student_gpa `pkg-config --cflags --libs gtk+-3.0`
```

## Run

After successful compilation:

```bash
./student_gpa
```

## Example Output

After adding a student, the application displays information similar to:

```text
Name: Javeria Zia, Father Name: Muhammad Zia, Roll: CS-123,
Program: BSCS, Semester: 4th, GPA: 3.98
```

Multiple student records can be displayed in the same text area.

## Project Structure

```text
FUUAST-Student-GPA-Record-System/
│
├── student_gpa.c
└── README.md
```

## Limitations

* Maximum of 100 students
* Records are stored only in memory
* Data is lost when the application is closed
* No database or file storage is currently implemented
* GPA input validation is not implemented
* Student records cannot currently be edited or deleted

## Future Improvements

Possible improvements include:

* Save student records to a file
* Add SQLite/MySQL database support
* Add Edit and Delete functionality
* Add GPA validation
* Add student search functionality
* Add semester-wise GPA records
* Calculate CGPA automatically
* Add authentication for administrators
* Improve the GUI design

## Purpose

This project was developed as a **C programming and GUI development project** to practice:

* Structures in C
* Arrays
* Functions
* String handling
* GTK+ GUI programming
* Event-driven programming
* Basic student record management

## Author

**Javeria Zia**

BS Computer Science
Federal Urdu University of Arts, Science & Technology (FUUAST)
