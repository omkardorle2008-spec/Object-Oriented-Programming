<div align="center">

# 🖥️ Object-Oriented Programming in C++

### Practical Laboratory Portfolio & Implementation Log

![Language](https://img.shields.io/badge/Language-C++17-blue?style=flat-square&logo=cplusplus)
![Standard](https://img.shields.io/badge/Standard-ISO%2FIEC%2014882-lightgrey?style=flat-square)
![Compiler](https://img.shields.io/badge/Compiler-GCC%20%7C%20Clang-orange?style=flat-square)
![Platform](https://img.shields.io/badge/Platform-Cross--Platform-brightgreen?style=flat-square)
![Status](https://img.shields.io/badge/Status-In%20Progress-yellow?style=flat-square)

*A structured laboratory repository covering fundamental-to-advanced paradigms of **Object-Oriented Programming** in modern C++ — from classes and memory management to templates, file I/O, and exception handling.*

---

</div>

## 📌 Student & Academic Profile

| Attribute | Details |
|-----------|---------|
| **Candidate Name** | Omkar Dorle |
| **Institution** | MIT ADT University |
| **Department / Class** | School of AI (SO AI) |
| **Division** | Division 5 |
| **Course Module** | Object Oriented Programming Systems (OOPS) |
| **Course Code** | 26AIE1001 |
| **Credits** | 03 |
| **Semester** | Semester I — B.Tech AI/ML (FY) |

---
---

## 🧾 Sample Outputs

<details>
<summary><b>Assignment 1 — Book class (Digital Inventory System)</b></summary>

```text
===== Digital Book Inventory System =====
Enter Book Title: The Alchemist
Enter Author Name: Paulo Coelho
Enter ISBN: 9780062315007
Enter Price: 399.50

----- Book Information -----
Title : The Alchemist
Author : Paulo Coelho
ISBN : 9780062315007
Price : 399.5
```

</details>

<details>
<summary><b>Assignment 2 — Student class (College Record System)</b></summary>

```text
=== College Record Digitization System ===

1. Add New Student Record
2. Display All Student Records
3. Search Student by Roll Number
4. Exit
Enter your choice: 1

--- Enter Details for Student 1 ---
Enter Roll Number: 101
Enter Name: Anjali Sharma
Enter Course: Computer Science
Enter Admission Year: 2025
---------------------
Record saved successfully!

1. Add New Student Record
2. Display All Student Records
3. Search Student by Roll Number
4. Exit
Enter your choice: 1

--- Enter Details for Student 2 ---
Enter Roll Number: 102
Enter Name: Rahul Patil
Enter Course: Information Technology
Enter Admission Year: 2025
---------------------
Record saved successfully!

1. Add New Student Record
2. Display All Student Records
3. Search Student by Roll Number
4. Exit
Enter your choice: 2

--- Total Student Records ---
Roll Number: 101
Name: Anjali Sharma
Course: Computer Science
Admission Year: 2025
---------------------
Roll Number: 102
Name: Rahul Patil
Course: Information Technology
Admission Year: 2025
---------------------

1. Add New Student Record
2. Display All Student Records
3. Search Student by Roll Number
4. Exit
Enter your choice: 3

Enter Roll Number to search: 102

--- Record Found ---
Roll Number: 102
Name: Rahul Patil
Course: Information Technology
Admission Year: 2025
---------------------

1. Add New Student Record
2. Display All Student Records
3. Search Student by Roll Number
4. Exit
Enter your choice: 4

Exiting system. Goodbye!
```

</details>

<details>
<summary><b>Assignment 3 — Employee class (HR Information System)</b></summary>

```text

--- Employee Record (HR View) ---
ID: 101
Name: Alice Smith
Department: HR
Salary: 55000
ID: 102
Name: Bob Jones
Department: Engineer
Salary: 75000
```

</details>

<details>
<summary><b>Assignment 4 — Book class (Default + Parameterized Constructors)</b></summary>

```text
First Book Details:
Book ID: 101
Title: C++ Programming
Author: Bjarne Stroustrup
Price: Rs. 500
------------------------
Second Book Details:
Book ID: 102
Title: Object Oriented Programming
Author: Robert Lafore
Price: Rs. 650
------------------------
```

</details>

<details>
<summary><b>Assignment 5 — Student class (this pointer)</b></summary>

```text
Student Details
Roll Number: 101
Name: Anjali
Course: Computer Science
```

</details>

<details>
<summary><b>Assignment 6 — Employee class (Constructor & Destructor)</b></summary>

```text
Employee record created for Anjali
Employee ID: 101
Employee Name: Anjali
Employee record removed for Anjali
```

</details>

<details>
<summary><b>Assignment 7 — Person/Student (Single Inheritance)</b></summary>

```text
Name: Anjali
Age: 20
Contact: 9876543210
Roll Number: 101
Branch: Computer Science
```

</details>

<details>
<summary><b>Assignment 8 — Person → Employee → Manager (Multilevel Inheritance)</b></summary>

```text
--- Manager Details ---
Name: Anjali
Age: 40
Contact: 9876543210
Employee ID: 101
Department: HR
Team Size: 8
```

</details>

<details>
<summary><b>Assignment 9 — Vehicle Management (Hierarchical Inheritance)</b></summary>

```text
Car Details
Registration No: MH12AB1234
Brand: Toyota
Seating Capacity: 5
------------------------
Truck Details
Registration No: MH14CD5678
Brand: Tata
Load Capacity: 12.5 tons
------------------------
```

</details>


## 📚 Course Units

| Unit | Title | Hours |
|------|-------|-------|
| I | Introduction to OOP Concepts — Classes, Objects, Access Specifiers | 12 |
| II | Constructors, Destructors, `this` Pointer, Static Members | 12 |
| III | Inheritance & Polymorphism — Overloading, Virtual Functions | 12 |
| IV | Templates & Pointers — Dynamic Memory, `new` / `delete` | 12 |
| V | File Handling & Exception Handling — Streams, try/catch/throw | 12 |

---

## 🗂️ Assignment Index

> **`Nm.cpp` = interactive version** — takes live input via `cin` instead of hardcoded values.

| # | Topic | Source | Interactive |
|---|-------|--------|-------------|
| 1 | Book class — digital inventory system | [Assignment 1.cpp](./Assignment%201.cpp) | — |
| 2 | Student class — college records system | [Assignment 2.cpp](./Assignment%202.cpp) | — |
| 3 | Employee class — HR information system | [Assignment 3.cpp](./Assignment%203.cpp) | — |
| 4 | Book class — default + parameterized constructors | [Assignment 4.cpp](./Assignment%204.cpp) | — |
| 5 | Student class — `this` pointer for same-name parameters | [Assignment 5.cpp](./Assignment%205.cpp) | — |
| 6 | Employee class — constructor & destructor messages | [Assignment 6.cpp](./Assignment%206.cpp) | [6m.cpp](./Assignment%206m.cpp) |
| 7 | Person/Student — single inheritance, no data duplication | [Assignment 7.cpp](./Assignment%207.cpp) | [7m.cpp](./Assignment%207m.cpp) |
| 8 | Person → Employee → Manager — multilevel inheritance | [Assignment 8.cpp](./Assignment%208.cpp) | [8m.cpp](./Assignment%208m.cpp) |
| 9 | Vehicle management system — hierarchical inheritance | [Assignment 9.cpp](./Assignment%209.cpp) | [9m.cpp](./Assignment%209m.cpp) |
| 10 | Generic `max()` — function template, any data type | — | — |
| 11 | Generic `swap()` — reusable for IDs, priorities, numbers | — | — |
| 12 | Generic storage class — int, float, text without separate classes | — | — |
| 13 | Student records — permanent file storage & retrieval | — | — |
| 14 | Employee records — persistent file across sessions | — | — |
| 15 | File modes — create, update, access operations | — | — |

---

## ⚙️ Build & Run

```bash
# Compile a single assignment
g++ -std=c++17 "Assignment 1.cpp" -o /tmp/a1
/tmp/a1

# Compile the interactive version
g++ -std=c++17 "Assignment 6m.cpp" -o /tmp/a6m
/tmp/a6m
```

> ⚠️ Always compile **outside** the repo folder (e.g. `/tmp/`) — compiling inside creates an extensionless binary that GitHub cannot render.

---

## 📖 References

| Type | Title |
|------|-------|
| Textbook | Robert Lafore — *Object Oriented Programming in C++*, SAMS Techmedia |
| Textbook | Bjarne Stroustrup — *The C++ Programming Language*, 3rd ed., Pearson |
| Reference | Herbert Schildt — *C++: The Complete Reference*, 8th ed., McGraw Hill |
| Reference | E. Balaguruswamy — *Object-oriented Programming with C++*, Tata McGraw Hill |
| Online | [NPTEL — OOP with C++](https://onlinecourses.nptel.ac.in/noc22_cs26/preview) |

---

<div align="center">

*MIT School of Artificial Intelligence · MIT-ADT University, Pune*

</div>

