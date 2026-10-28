# C++ Tutorial series

## Project 1 : Student Registration Card

**Course:** C++ Programming, Module 2 (Variables, Data Types and Input/Output)
**Level:** Beginner
**Time:** 30 to 45 minutes

Read a student's details from the keyboard, store each one in the right data type, and print a neat registration card.

This project uses only what you learned in Modules 1 and 2. You don't need loops, `if` statements or arrays.

---

### What you will practise

- Choosing a data type for each piece of information
- `string`, `int`, `double`, `char`, `unsigned short` and `long long`
- Reading input with `cin >>` and `getline`
- `const` and brace initialization `{}`
- `auto`
- Escape sequences `\n` and `\t` to line up the output

---

### The task

Write a program that:

1. Stores the school name in a constant: `Study With Anis Academy`.
2. Asks the user for these details, one at a time:

   | Detail           | Example        | Data type to use                                       |
   | ---------------- | -------------- | ------------------------------------------------------ |
   | Full name        | `Rahim Uddin`  | `string` (read with `getline`, because it has a space) |
   | Age              | `20`           | `int`                                                  |
   | Height in metres | `1.72`         | `double`                                               |
   | Class            | `12`           | `unsigned short` (small and never negative)            |
   | Section          | `B`            | `char`                                                 |
   | Student ID       | `202600123456` | `long long` (12 digits is too big for `int`)           |

3. Works out next year's age with `auto`.
4. Prints the registration card exactly like the sample output below.

---

### Sample run

What the user types is shown after each prompt.

```
Full name: Rahim Uddin
Age: 20
Height in metres: 1.72
Class: 12
Section: B
Student ID: 202600123456

+--------------------------------------+
  Study With Anis Academy
  STUDENT REGISTRATION CARD
+--------------------------------------+
  Name:		Rahim Uddin
  Age:		20 (next year 21)
  Height:	1.72 m
  Class:	12B
  Student ID:	202600123456
+--------------------------------------+
```

---

### Starter code

Copy this into `main.cpp` and fill in each `TODO`.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // TODO 1: a const string called school, set with braces {}

    // TODO 2: declare name, age, height, classNo, section and studentId
    //         using the data types from the table

    // TODO 3: read the full name with getline

    // TODO 4: read age, height, class, section and student ID with cin >>

    // TODO 5: use auto to store age + 1 in nextAge

    // TODO 6: print the card. Use \t to line up the values

    return 0;
}
```

---

### How to compile and run

```bash
g++ -std=c++20 -Wall -Wextra main.cpp -o main
./main
```

On Windows, run `main.exe` instead of `./main`.

---

### Hints

- **Read the name first.** `getline(cin, name);` reads the whole line, spaces included. If you used `cin >> name`, it would stop at the first space and you'd get only `Rahim`.
- **Lining up with tabs.** `\t` jumps to the next tab stop, which comes every 8 columns. A short label like `"  Name:"` needs two tabs (`\t\t`); a longer one like `"  Height:"` needs one.
- **Class and section together.** Print `classNo` and then `section` with nothing between them, and you get `12B`.
- **`char` uses single quotes.** `'B'` is a `char`, but `"B"` is a `string`.
- **Why `long long`?** The largest `int` on most computers is `2147483647` (10 digits). A 12-digit ID doesn't fit and would overflow.

---

### Checklist before you submit

- [ ] The school name is a `const` set with braces
- [ ] Every detail uses the data type from the table
- [ ] A full name with a space is read correctly
- [ ] `nextAge` is declared with `auto`
- [ ] The output matches the sample, with values lined up in one column
- [ ] The program compiles with `-Wall -Wextra` and shows no warnings

---

### Extra challenges

Try these when the main task works:

1. Add a blood group (`string`) and a guardian's phone number. Should the phone number be a `string` or a number? Why?
2. Print the height in centimetres as well (`height * 100`).
3. Add a `const int` for the current year and print the student's birth year (`year - age`).
4. Print the size in bytes of each variable with `sizeof`, for example `sizeof(studentId)`.
5. If your compiler supports C++23, print the card with `std::print` instead of `cout`.

---

Made for the **Study With Anis** C++ course.
YouTube: [@anisul-islam](https://www.youtube.com/@anisul-islam) · Facebook: [studywithanis](https://www.facebook.com/studywithanis)
