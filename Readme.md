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

* **Single Line Comment Removal:** Strips `//` style comments.
* **Multiple Line Comment Removal:** Eliminates `/* ... */` style comments.
* **Combined Comment Removal:** Handles both single and multiple line comments effectively.
* **Space Removal:** Removes unnecessary spaces and tabs, helping to compact the code.
* **Newline Removal:** Eliminates unnecessary blank lines, further tidying the code.

## 📝 Project Overview

The primary goal of this project is to demonstrate and implement algorithms for lexical analysis tasks typically found in compiler design. The focus is on manipulating C++ source code to produce a "cleaner" version by stripping non-functional elements.

As indicated by the commit history, the project has iteratively built up its capabilities:
* `Single and Multiple Line Remove`
* `Single Line Comment Remove`
* `Remove Space`
* `Remove Newline`
* `Multiple Line Comment Remove`

The codebase is entirely in C++, reflecting a direct and efficient approach to these text processing tasks.

## 🚀 Getting Started

While specific build and usage instructions are not detailed in the repository currently, a typical C++ project like this would involve the following steps:

### Prerequisites

* A C++ compiler (e.g., GCC, Clang, MSVC)
* Make or a similar build system (optional, but common for C++ projects)

### Compilation (Example with g++)

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/rakibul263/Compiler-Design.git](https://github.com/rakibul263/Compiler-Design.git)
    cd Compiler-Design
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