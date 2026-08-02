# Calculator Toolkit (C++)

A simple command-line calculator built in C++ to demonstrate modular programming using header files and source files.

## Features

- Addition
- Subtraction
- Multiplication
- Division
- Modulus

## Project Structure

```
calculator-toolkit-cpp/
├── include/
│   └── calculator.h
├── src/
│   ├── calculator.cpp
│   └── main.cpp
├── README.md
├── LICENSE
└── .gitignore
```

## Concepts Practiced

- Header Files
- Source Files
- Function Declarations
- Function Definitions
- Modular Programming
- Multi-file Compilation
- #pragma once
- Function Calls
- Git & GitHub Workflow

## Compilation

```bash
g++ src/main.cpp src/calculator.cpp -Iinclude -std=c++17 -Wall -Wextra -pedantic -o app
```

## Run

```bash
./app
```

## Future Improvements

- Continuous Menu
- Input Validation
- Scientific Calculator
- File Logging
- Better Error Handling

---

Made with ❤️ while learning Modern C++.
