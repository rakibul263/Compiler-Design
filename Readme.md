# Compiler-Design: Code Cleaner

[![Language C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![Repo Status](https://img.shields.io/badge/Repo%20Status-Active-green.svg)](https://github.com/rakibul263/Compiler-Design/)
[![GitHub last commit](https://img.shields.io/github/last-commit/rakibul263/Compiler-Design.svg)](https://github.com/rakibul263/Compiler-Design/commits/main)
[![GitHub stars](https://img.shields.io/github/stars/rakibul263/Compiler-Design.svg?style=social)](https://github.com/rakibul263/Compiler-Design/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/rakibul263/Compiler-Design.svg?style=social)](https://github.com/rakibul263/Compiler-Design/network/members)

Welcome to **Compiler-Design: Code Cleaner**! This repository, developed by [rakibul263](https://github.com/rakibul263), offers a C++ based tool focused on a fundamental aspect of code processing: cleaning and normalization. Specifically, this project provides utilities to remove various types of comments, extraneous spaces, and newlines from source code files.

This tool can be particularly useful in the preprocessing stages of a compiler, for code minification, or for preparing code for analysis where such elements are not required.

## ✨ Features

This project implements several functionalities to clean source code:

````

**Description:**  
Removes both single-line (`//...`) and multi-line (`/*...*/`) comments from the source code. This is useful for cleaning code before analysis or compilation.

---

### 🔹 `Single Line Comment Remove`
**Description:**  
Strips out comments that begin with `//` and continue to the end of the line.  
**Example:**
```cpp
int a = 5; // This is a single-line comment
````

Becomes:

```cpp
int a = 5;
```

---

### 🔹 `Remove Space`

**Description:**
Eliminates extra spaces and tabs to compact the code. This helps reduce file size and standardize formatting.
**Example:**

```cpp
int    a    =     5 ;
```

Becomes:

```cpp
int a=5;
```

---

### 🔹 `Remove Newline`

**Description:**
Removes unnecessary blank lines or newline characters to make the code more compact. Useful for preprocessing or code minification.

---

### 🔹 `Multiple Line Comment Remove`

**Description:**
Eliminates block comments that start with `/*` and end with `*/`.
**Example:**

```cpp
/* This is a 
   multi-line comment */
int a = 5;
```

Becomes:

```cpp
int a = 5;
```

---

### 🔹 `Operator Finding`

**Description:**
Detects operators in the code such as `+`, `-`, `*`, `/`, `=`, `==`, `!=`, etc. Useful for parsing or analyzing expressions.

---

### 🔹 `Length Control`

**Description:**
Monitors or restricts the length of lines or code blocks to meet coding standards or improve readability.

---

### 🔹 `Digit Finding`

**Description:**
Finds numeric digits (`0–9`) in the code. Helpful for analyzing constants, numeric values, or validating input.

```

Let me know if you want this in a downloadable `.md` file or in Bengali too.
```


## 📝 Project Overview

The primary goal of this project is to demonstrate and implement algorithms for lexical analysis tasks typically found in compiler design. The focus is on manipulating C++ source code to produce a "cleaner" version by stripping non-functional elements.

As indicated by the commit history, the project has iteratively built up its capabilities:
* `Single and Multiple Line Remove`
* `Single Line Comment Remove`
* `Remove Space`
* `Remove Newline`
* `Multiple Line Comment Remove`
* `Operator Finding`
* `Length Control`
* `Digit Finding`

The codebase is entirely in C++, reflecting a direct and efficient approach to these text processing tasks.

## 🚀 Getting Started

While specific build and usage instructions are not detailed in the repository currently, a typical C++ project like this would involve the following steps:

### Prerequisites

* A C++ compiler (e.g., GCC, Clang, MSVC)
* Make or a similar build system (optional, but common for C++ projects)

### Compilation (Example with g++)

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/rakibul263/Compiler-Design
    ```

2.  **Compile the source code:**
    You'll need to identify the main source file(s) and compile them. For example, if you have a main file named `cleaner.cpp`:
    ```bash
    g++ -o code_cleaner cleaner.cpp [other_source_files.cpp] -std=c++11
    ```
    *(Adjust the `-std` flag based on the C++ standard used in the project.)*

### Usage

Once compiled, you would typically run the executable from the command line, likely providing an input file and specifying an output file.

```bash
./code_cleaner <input_file_path> <output_file_path> [options]