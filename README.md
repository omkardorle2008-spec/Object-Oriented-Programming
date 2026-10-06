# Object Oriented Programming — Assignments

Repo for MIT College Practicals (Semester 1, Object Oriented Programming, 26AIE1001, C++).

All solutions live in **[`Omkar Assignment (OPPs)/`](./Omkar%20Assi# Object Oriented Programming — Assignments

Repo for MIT College Practicals (Semester 1, Object Oriented Programming, 26AIE1001, C++).

All solutions live in **[`Omkar Assignment (OPPs)/`](./Omkar%20Assignment%20(OPPs))**.

> **Note on file naming:** every assignment has a bare `Assignment N.cpp` file. Where the
> program takes input *while running* (`cin >>`), there's also an `Assignment Nm.cpp`
> ("m" = modified/interactive) — run that one if you want to type input yourself instead
> of reading hardcoded values. This is noted per-row below.

## Assignments

| # | Topic | Source | Interactive version |
|---|-------|--------|----------------------|
| 1 | Book class — stores & displays book details | [Assignment 1](./Omkar%20Assignment%20(OPPs)/Assignment%201.cpp) | — |
| 2 | Student class — stores & displays student details | [Assignment 2](./Omkar%20Assignment%20(OPPs)/Assignment%202.cpp) | — |
| 3 | Employee class — stores & displays employee details | [Assignment 3](./Omkar%20Assignment%20(OPPs)/Assignment%203.cpp) | — |
| 4 | Book class with default + parameterized constructors | [Assignment 4](./Omkar%20Assignment%20(OPPs)/Assignment%204.cpp) | — |
| 5 | Student class, `this` pointer for same-name parameters | [Assignment 5](./Omkar%20Assignment%20(OPPs)/Assignment%205.cpp) | — |
| 6 | Employee class — constructor/destructor messages | [Assignment 6](./Omkar%20Assignment%20(OPPs)/Assignment%206.cpp) | [Assignment 6m](./Omkar%20Assignment%20(OPPs)/Assignment%206m.cpp) |
| 7 | Person/Student — avoiding duplicated common data | [Assignment 7](./Omkar%20Assignment%20(OPPs)/Assignment%207.cpp) | [Assignment 7m](./Omkar%20Assignment%20(OPPs)/Assignment%207m.cpp) |
| 8 | Person → Employee → Manager multilevel inheritance | [Assignment 8](./Omkar%20Assignment%20(OPPs)/Assignment%208.cpp) | [Assignment 8m](./Omkar%20Assignment%20(OPPs)/Assignment%208m.cpp) |
| 9 | Vehicle management via inheritance | [Assignment 9](./Omkar%20Assignment%20(OPPs)/Assignment%209.cpp) | [Assignment 9m](./Omkar%20Assignment%20(OPPs)/Assignment%209m.cpp) |
| 10 | Generic function — larger of two values, any type | [Assignment 10](./Omkar%20Assignment%20(OPPs)/Assignment%2010.cpp) | — |
| 11 | Generic swap function for different data types | [Assignment 11](./Omkar%20Assignment%20(OPPs)/Assignment%2011.cpp) | — |
| 12 | Generic class storing int/float/text without separate classes | [Assignment 12](./Omkar%20Assignment%20(OPPs)/Assignment%2012.cpp) | — |
| 13 | Student records — permanent file storage | [Assignment 13](./Omkar%20Assignment%20(OPPs)/Assignment%2013.cpp) | — |
| 14 | Employee details — file storage across sessions | [Assignment 14](./Omkar%20Assignment%20(OPPs)/Assignment%2014.cpp) | — |
| 15 | File create/update/access using correct file modes | [Assignment 15](./Omkar%20Assignment%20(OPPs)/Assignment%2015.cpp) | — |

Update the "Interactive version" column as more `Nm.cpp` files get added.

## Building & Running

\`\`\`bash
g++ -std=c++17 "Omkar Assignment (OPPs)/Assignment 1.cpp" -o /tmp/a1
/tmp/a1
\`\`\`

Compile to a path **outside** the repo (like `/tmp/`, shown above) or into a local
`build/` folder — never compile straight into the assignment folder, since the resulting
binary has no extension and GitHub will show it as an unreadable "View raw" / download
link instead of rendering any code.

## Course Reference

- **Textbooks:** Robert Lafore, *Object Oriented Programming in C++*; Bjarne Stroustrup, *The C++ Programming Language* (3rd ed.)
- **Units covered:** OOP fundamentals · Constructors/Destructors/Static members · Inheritance & Polymorphism · Templates & Pointers · File & Exception Handlinggnment%20(OPPs))**.

> **Note on file naming:** every assignment has a bare `Assignment N.cpp` file. Where the
> program takes input *while running* (`cin >>`), there's also an `Assignment Nm.cpp`
> ("m" = modified/interactive) — run that one if you want to type input yourself instead
> of reading hardcoded values. This is noted per-row below.

## Assignments

| # | Topic | Source | Interactive version |
|---|-------|--------|----------------------|
| 1 | Book class — stores & displays book details | [Assignment 1](./Omkar%20Assignment%20(OPPs)/Assignment%201.cpp) | — |
| 2 | Student class — stores & displays student details | [Assignment 2](./Omkar%20Assignment%20(OPPs)/Assignment%202.cpp) | — |
| 3 | Employee class — stores & displays employee details | [Assignment 3](./Omkar%20Assignment%20(OPPs)/Assignment%203.cpp) | — |
| 4 | Book class with default + parameterized constructors | [Assignment 4](./Omkar%20Assignment%20(OPPs)/Assignment%204.cpp) | — |
| 5 | Student class, `this` pointer for same-name parameters | [Assignment 5](./Omkar%20Assignment%20(OPPs)/Assignment%205.cpp) | — |
| 6 | Employee class — constructor/destructor messages | [Assignment 6](./Omkar%20Assignment%20(OPPs)/Assignment%206.cpp) | [Assignment 6m](./Omkar%20Assignment%20(OPPs)/Assignment%206m.cpp) |
| 7 | Person/Student — avoiding duplicated common data | [Assignment 7](./Omkar%20Assignment%20(OPPs)/Assignment%207.cpp) | — |
| 8 | Person → Employee → Manager multilevel inheritance | [Assignment 8](./Omkar%20Assignment%20(OPPs)/Assignment%208.cpp) | — |
| 9 | Vehicle management via inheritance | [Assignment 9](./Omkar%20Assignment%20(OPPs)/Assignment%209.cpp) | — |
| 10 | Generic function — larger of two values, any type | [Assignment 10](./Omkar%20Assignment%20(OPPs)/Assignment%2010.cpp) | — |
| 11 | Generic swap function for different data types | [Assignment 11](./Omkar%20Assignment%20(OPPs)/Assignment%2011.cpp) | — |
| 12 | Generic class storing int/float/text without separate classes | [Assignment 12](./Omkar%20Assignment%20(OPPs)/Assignment%2012.cpp) | — |
| 13 | Student records — permanent file storage | [Assignment 13](./Omkar%20Assignment%20(OPPs)/Assignment%2013.cpp) | — |
| 14 | Employee details — file storage across sessions | [Assignment 14](./Omkar%20Assignment%20(OPPs)/Assignment%2014.cpp) | — |
| 15 | File create/update/access using correct file modes | [Assignment 15](./Omkar%20Assignment%20(OPPs)/Assignment%2015.cpp) | — |

Update the "Interactive version" column as more `Nm.cpp` files get added.

## Building & Running

\`\`\`bash
g++ -std=c++17 "Omkar Assignment (OPPs)/Assignment 1.cpp" -o /tmp/a1
/tmp/a1
\`\`\`

Compile to a path **outside** the repo (like `/tmp/`, shown above) or into a local
`build/` folder — never compile straight into the assignment folder, since the resulting
binary has no extension and GitHub will show it as an unreadable "View raw" / download
link instead of rendering any code.

## Course Reference

- **Textbooks:** Robert Lafore, *Object Oriented Programming in C++*; Bjarne Stroustrup, *The C++ Programming Language* (3rd ed.)
- **Units covered:** OOP fundamentals · Constructors/Destructors/Static members · Inheritance & Polymorphism · Templates & Pointers · File & Exception Handling
