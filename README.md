<div align="center">

# Object-Oriented Programming in C++
### Practical Laboratory Portfolio

![Language](https://img.shields.io/badge/Language-C%2B%2B17-blue?style=flat-square&logo=cplusplus)
![Compiler](https://img.shields.io/badge/Compiler-GCC%20%7C%20Clang-orange?style=flat-square)
![Status](https://img.shields.io/badge/Status-In%20Progress-yellow?style=flat-square)

A structured collection of C++ practical assignments covering classes, constructors, inheritance, templates, and file handling. Each assignment has its own folder containing its source code, output screenshot (when available), and a short README.

</div>

## Student & Course

| Attribute | Details |
|---|---|
| Candidate | Omkar Dorle |
| Institution | MIT ADT University |
| Department | School of AI (SO AI), Division 5 |
| Course | Object Oriented Programming Systems (OOPS) |
| Course code | 26AIE1001 |
| Semester | Semester I — B.Tech AI/ML |

## Assignment Index

| # | Topic | Folder | Status |
|---:|---|---|---|
| 1 | Book class — digital inventory system | [Assignment_01](./Assignment_01/) | Source + output |
| 2 | Student class — college records system | [Assignment_02](./Assignment_02/) | Source + output |
| 3 | Employee class — HR information system | [Assignment_03](./Assignment_03/) | Source + output |
| 4 | Book class — default and parameterized constructors | [Assignment_04](./Assignment_04/) | Source + output |
| 5 | Student class — the this pointer for same-name parameters | [Assignment_05](./Assignment_05/) | Source + output |
| 6 | Employee class — constructor and destructor messages | [Assignment_06](./Assignment_06/) | Source + output |
| 7 | Person/Student — single inheritance without data duplication | [Assignment_07](./Assignment_07/) | Source + output |
| 8 | Person → Employee → Manager — multilevel inheritance | [Assignment_08](./Assignment_08/) | Source + output |
| 9 | Vehicle management — hierarchical inheritance | [Assignment_09](./Assignment_09/) | Source + output |
| 10 | Generic max() function template | [Assignment_10](./Assignment_10/) | Source + output |
| 11 | Generic swap() function template | [Assignment_11](./Assignment_11/) | Source + output |
| 12 | Generic storage class template | [Assignment_12](./Assignment_12/) | Source + output |
| 13 | Student records — permanent file storage and retrieval | [Assignment_13](./Assignment_13/) | Source + output |
| 14 | Employee records — persistent file across sessions | [Assignment_14](./Assignment_14/) | Planned |
| 15 | File modes — create, update, and access operations | [Assignment_15](./Assignment_15/) | Planned |

## Repository Layout

```text
Assignment_01/
Assignment_02/
...
Assignment_15/
```

Each completed assignment folder contains a numbered `.cpp` source file, an `Assignment_NN.png` output screenshot when one is available, and a folder README. Assignments 6–9 also include an `_interactive.cpp` variant. Assignments 14–15 are currently planned entries; their source and screenshot files have not been added yet.

## Build and Run

Compile from the repository root and write the executable outside the repository (for example, under `/tmp`):

```bash
g++ -std=c++17 Assignment_01/Assignment_01.cpp -o /tmp/assignment-01
/tmp/assignment-01

# Example: interactive version
g++ -std=c++17 Assignment_06/Assignment_06_interactive.cpp -o /tmp/assignment-06
/tmp/assignment-06
```

Use the source path for the assignment you want to run.

## Course Units

| Unit | Topics |
|---|---|
| I | OOP concepts, classes, objects, and access specifiers |
| II | Constructors, destructors, `this` pointer, and static members |
| III | Inheritance and polymorphism |
| IV | Templates, pointers, and dynamic memory |
| V | File handling and exception handling |

## References

- Robert Lafore, *Object Oriented Programming in C++*, SAMS Techmedia.
- Bjarne Stroustrup, *The C++ Programming Language*, 3rd ed.
- Herbert Schildt, *C++: The Complete Reference*, 8th ed.
- E. Balagurusamy, *Object-oriented Programming with C++*.
- [NPTEL — OOP with C++](https://onlinecourses.nptel.ac.in/noc22_cs26/preview)

---

*MIT School of Artificial Intelligence · MIT-ADT University, Pune*
