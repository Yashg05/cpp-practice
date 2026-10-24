# C++ Practice

A public learning log of my C++ exercises. It includes beginner problems, repeated revision attempts, and small standalone programs. Some files are works in progress; this repository records practice rather than presenting every solution as a finished project.

## Exercise index

### Input and output

- [Read a name and greet the user](Basics/01_InputOutput/read-name-and-greet.cpp)
- [Read and echo an integer](Basics/01_InputOutput/read-and-echo-integer.cpp)
- [Read and display two integers](Basics/01_InputOutput/read-and-display-two-integers.cpp)
- [Sum two integers](Basics/01_InputOutput/sum-two-integers.cpp)
- [Find the sum and integer average of three integers](Basics/01_InputOutput/sum-and-average-of-three-integers.cpp)
- [Read a line, then a word](Basics/02_DataTypes/read-line-and-word-input.cpp)
- [Read and display a student profile](Basics/02_DataTypes/read-student-profile.cpp)
- [Read and display a name, age, and city](revision/read-and-display-name-age-and-city.cpp)
- [Display a name, age, and city](revision/display-name-age-and-city.cpp)
- [Display a city and temperature (unfinished)](revision/unfinished-city-temperature-display.cpp)
- [Calculate rectangle area and perimeter](revision/calculate-rectangle-area-and-perimeter.cpp)

### Data types and values

- [Read integer, float, and character values](Basics/02_DataTypes/read-integer-float-and-character.cpp)
- [Read long and long long values](Basics/02_DataTypes/read-long-and-long-long.cpp)
- [Read float and double values](Basics/02_DataTypes/read-float-and-double.cpp)
- [Greet a user by name](Basics/02_DataTypes/greet-user-by-name.cpp)
- [Read and display a character](Basics/02_DataTypes/read-and-display-character.cpp)
- [Display student details and selection status from GPA](revision/display-student-details-and-selection-status.cpp)
- [Display name, age, and GPA](revision/display-name-age-and-gpa.cpp)

### Conditions and comparisons

- [Classify an integer as positive, negative, or zero](Basics/03_If_else/classify-integer-sign.cpp)
- [Check whether a number is even or odd](Basics/03_If_else/check-even-or-odd.cpp)
- [Find the largest of three integers](Basics/03_If_else/find-largest-of-three-integers.cpp)
- [Assign a grade from marks](Basics/03_If_else/assign-grade-from-marks.cpp)
- [Classify an integer as positive, negative, or zero (revision)](revision/classify-integer-sign.cpp)
- [Compare two integers and report equality](revision/compare-two-integers-and-report-equality.cpp)
- [Compare two integers with relational operators](revision/compare-two-integers-with-relational-operators.cpp)
- [Evaluate logical conditions on two integers](revision/evaluate-logical-conditions.cpp)

### Functions and basic OOP

- [Print a welcome message with a function](Basics/04_Functions/print-welcome-message.cpp)
- [Greet a user with a function](Basics/04_Functions/greet-user-with-function.cpp)
- [Introduce a person with a function](Basics/04_Functions/introduce-person-with-function.cpp)
- [Square a number with a function](Basics/04_Functions/square-number-with-function.cpp)
- [Add two integers with a function](Basics/04_Functions/add-two-integers-with-function.cpp)
- [Find the larger integer with a function](Basics/04_Functions/find-larger-integer-with-function.cpp)
- [Check even or odd with a function](Basics/04_Functions/check-even-or-odd-with-function.cpp)
- [Input and display a student object](OOP/student-class-input-and-display.cpp)

### Loops and number problems

- [Print integers from 1 to N](revision/print-1-to-n.cpp)
- [Print integers from N down to 1](revision/print-n-to-1.cpp)
- [Sum integers from 1 to N](revision/sum-1-to-n.cpp)
- [Print a multiplication table through 10](revision/print-multiplication-table-to-10.cpp)
- [Calculate factorial with a for loop](revision/factorial-with-for-loop.cpp)
- [Print even numbers up to N](revision/print-even-numbers-to-n.cpp)
- [Print odd numbers up to N](revision/print-odd-numbers-to-n.cpp)
- [Print multiples of K up to N](revision/print-multiples-of-k-to-n.cpp)
- [Sum even numbers up to N](revision/sum-even-numbers-to-n.cpp)
- [Count the digits of a positive integer](revision/count-digits-of-positive-integer.cpp)
- [Sum the digits of a positive integer](revision/sum-digits-of-positive-integer.cpp)
- [Reverse the digits of a positive integer](revision/reverse-positive-integer-digits.cpp)
- [Count even digits in a positive integer](revision/count-even-digits-of-positive-integer.cpp)
- [List the positive divisors of an integer](revision/list-positive-divisors.cpp)
- [Check primality by trial division](revision/check-primality-by-trial-division.cpp)
- [Calculate factorial with a while loop](revision/factorial-with-while-loop.cpp)
- [Sum input values until zero](revision/sum-input-until-zero.cpp)
- [Read until a positive integer is entered](revision/read-until-positive-integer.cpp)
- [Unfinished loop exercise](revision/unfinished-loop-exercise.cpp)

### Patterns and arithmetic

- [Print a square star pattern](Basics/05_Patterns/square-star-pattern.cpp)
- [Right triangle star pattern (unfinished)](Basics/05_Patterns/unfinished-right-triangle-star-pattern.cpp)
- [Arithmetic operations on two integers](revision/arithmetic-operations-on-two-integers.cpp)

## Repository layout

- `Basics/` — exercises grouped by topic
- `revision/` — repeated practice and alternate attempts
- `OOP/` — an introductory class and object exercise

Some folders include a small `input.txt` example. Generated output files, executables, and machine-specific IDE settings are not included. Names describe the program's current behavior; files marked **unfinished** are incomplete attempts retained in the learning log.

## Compile and run

Compile one source file at a time with a C++17 compiler such as g++:

```powershell
g++ -std=c++17 -Wall -Wextra .\Basics\01_InputOutput\sum-two-integers.cpp -o .\program.exe
.\program.exe
```

Each source file is a separate exercise and may define its own `main()`.
