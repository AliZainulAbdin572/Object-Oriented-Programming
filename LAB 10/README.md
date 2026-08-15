---

# 💻 CSC-521 Object Oriented Programming – Lab 10

This lab focuses on understanding and implementing **File Handling in C++** using stream classes (`ifstream`, `ofstream`, `fstream`). Students will learn how to create, read, write, append, count lines, copy content between files, and manage structured student data through practical lab tasks.

---

# ⭐ Task 1: File Creation, Writing, Reading, and Appending
## 🔍 Overview

This program demonstrates the core operations of file handling in C++. It creates a new text file using `ofstream`, writes data into it, reads and displays the contents using `ifstream`, and appends additional text to the existing file using the `ios::app` mode.

## 🎯 Objective

To master basic file operations including creating, reading, writing, and appending data without losing existing file contents.

## ✔️ Output

Displays the original text written to the file followed by the updated content including the newly appended text.

## ✍️ Learning Outcomes

- Work with `ofstream` and `ifstream` classes  
- Use file opening modes like `ios::out` and `ios::app`  
- Handle file open and close operations properly  

---

# ⭐ Task 2: Line Counter Tool
## 🔍 Overview

This program opens a text file and counts the total number of lines present inside it. It reads the file line-by-line using `getline()` until the End-Of-File (`eof()`) is reached and maintains a counter for each line read.

## 🎯 Objective

To process text files sequentially and extract structural information such as line count.

## ✔️ Output

Displays the total count of lines present in the target text file.

## ✍️ Learning Outcomes

- Use `getline()` to read files line-by-line  
- Detect End-Of-File (`eof()`) condition during reading  
- Implement counter logic with file input streams  

---

# ⭐ Task 3: File Copy Utility
## 🔍 Overview

This program copies all contents from a source file to a destination file. It reads the source file line-by-line or character-by-character and writes the exact content into a second file.

## 🎯 Objective

To transfer data between multiple files using simultaneous input and output streams.

## ✔️ Output

Successfully creates/updates the destination file with an exact copy of the source file content.

## ✍️ Learning Outcomes

- Open multiple file streams simultaneously  
- Read from one stream (`ifstream`) and write directly to another (`ofstream`)  
- Ensure accurate data transfer between files  

---

# ⭐ Task 4: Student Record System
## 🔍 Overview

This program handles structured data by taking student details (such as Name, Roll Number, and Marks), writing them into a file, and then reading and displaying the saved records on the console.

## 🎯 Objective

To store and retrieve structured object/entity details using C++ file streams.

## ✔️ Output

Displays formatted student details read directly from the stored file.

## ✍️ Learning Outcomes

- Write custom structured data to files  
- Retrieve and format stored record data for console output  

---

# 📊 Comparison: C++ File Handling Streams & Modes

| Stream / Mode | Type / Category | Purpose | Behavior |
|---|---|---|---|
| **`ofstream`** | Stream Class | Output file operations | Writes data to files (creates file if not present) |
| **`ifstream`** | Stream Class | Input file operations | Reads data from existing files |
| **`fstream`** | Stream Class | Input & Output operations | Handles both reading and writing simultaneously |
| **`ios::out`** | File Mode Flag | Write Mode | Overwrites existing content by default |
| **`ios::app`** | File Mode Flag | Append Mode | Appends new data at the end of the file |
| **`ios::in`** | File Mode Flag | Read Mode | Opens file for reading operations |

---

## 📚 Reference

- GeeksforGeeks – File Handling in C++  
- cplusplus.com – Input/Output with Files  
- W3Schools – C++ Files (`fstream`)  

---
