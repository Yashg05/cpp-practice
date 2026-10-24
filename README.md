# C++ Practice

A public learning log of my C++ exercises. It includes beginner problems, repeated revision attempts, and small standalone programs. Some files are works in progress; this repository records practice rather than presenting every solution as a finished project.

## Topics

- Input and output, data types, and operators
- `if` / `else`, loops, and functions
- Basic pattern printing
- Introductory object-oriented programming
- Revision exercises for the topics above

## Repository layout

- `Basics/` — exercises grouped by topic
- `revision/` — repeated practice and alternate attempts
- `OOP/` — introductory class and object exercise

Some folders include a small `input.txt` example. Generated output files, executables, and machine-specific IDE settings are not included.

## Compile and run

Compile one source file at a time with a C++17 compiler such as g++:

```powershell
g++ -std=c++17 -Wall -Wextra .\Basics\01_InputOutput\Q01.cpp -o .\Q01.exe
.\Q01.exe
```

Each source file is a separate exercise and may define its own `main()`.
