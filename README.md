# GUI Base with C

A collection of **GUI-based applications developed in C using GTK3**. This repository contains beginner-to-intermediate projects created to practice C programming, graphical user interface development, event-driven programming, data structures, and application logic.

## Projects

### 1. FUUAST Student GPA Record System

A graphical student record management application for storing and displaying student academic information.

**Features:**

* Add student records
* Store student name and father's name
* Store roll number
* Store program and semester
* Store GPA
* Display multiple student records
* Supports up to 100 students

**Concepts practiced:**

* C structures
* Arrays
* Strings
* Functions
* GTK3 widgets
* Event-driven programming

---

### 2. Tic Tac Toe

A two-player graphical Tic Tac Toe game built with GTK3.

**Features:**

* 3×3 game board
* Two-player X and O gameplay
* Automatic winner detection
* Draw detection
* Turn indicator
* Disabled cells after selection
* Reset button

**Concepts practiced:**

* 2D arrays
* Functions
* Conditional logic
* Game logic
* GTK3 buttons and layouts
* Callback functions
* Event-driven programming

---

## Technologies

* **C**
* **GTK3**
* **GCC**
* **GLib**
* **pkg-config**

## Repository Structure

```text
GUI_Base_with_C/
│
├── Student_GPA_Record_System/
│   ├── student_gpa.c
│   └── README.md
│
├── Tic_Tac_Toe/
│   ├── tic_tac_toe.c
│   └── README.md
│
└── README.md
```

> The folder names may vary depending on how the individual projects are organized in the repository.

## Requirements

To compile the GTK3 applications, you need:

* GCC
* GTK3 development libraries
* pkg-config

### Ubuntu/Debian

```bash
sudo apt update
sudo apt install gcc libgtk-3-dev
```

## Compilation

Each project can be compiled separately using `gcc` and `pkg-config`.

### Student GPA Record System

```bash
gcc student_gpa.c -o student_gpa `pkg-config --cflags --libs gtk+-3.0`
```

Run:

```bash
./student_gpa
```

### Tic Tac Toe

```bash
gcc tic_tac_toe.c -o tic_tac_toe `pkg-config --cflags --libs gtk+-3.0`
```

Run:

```bash
./tic_tac_toe
```

## Learning Objectives

This repository was created to strengthen practical understanding of **C programming and GUI development**.

The projects cover:

* C syntax and programming fundamentals
* Variables and data types
* Functions
* Arrays and 2D arrays
* Structures
* String manipulation
* Pointers
* Event-driven programming
* GTK3 widgets
* GTK3 layouts
* Button callbacks
* User input handling
* Basic application and game logic

## GTK3 Concepts Used

The projects demonstrate several GTK3 components, including:

* `GtkWindow`
* `GtkButton`
* `GtkLabel`
* `GtkEntry`
* `GtkGrid`
* `GtkBox`
* `GtkTextView`
* GTK signals and callbacks

Examples of GTK3 event handling include:

```c
g_signal_connect(button, "clicked", G_CALLBACK(function), NULL);
```

## Future Projects

This repository can be extended with additional C/GTK applications such as:

* Calculator
* Contact Book
* Student Management System
* Expense Tracker
* To-Do List
* Login System
* Library Management System
* Simple File Manager
* Unit Converter
* Quiz Application

## Purpose

The purpose of this repository is to build practical experience with **C programming and graphical application development** by creating small, functional GUI applications.

## Author

**Javeria Zia**

BS Computer Science
Federal Urdu University of Arts, Science & Technology (FUUAST)
