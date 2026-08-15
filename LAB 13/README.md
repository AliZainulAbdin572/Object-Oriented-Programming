---

# 💻 CSC-521 Object Oriented Programming – Lab 13
## Generic Programming with Templates

This lab focuses on understanding and implementing **Generic Programming in C++** using **Function Templates** and **Class Templates**. Students will learn how to reduce code duplication by writing type-independent functions and classes for various data types (`int`, `double`, `string`, `char`).

---

# ⭐ Task 1: Function Template – `printTwice()`
## 🔍 Overview

This program demonstrates a simple function template `printTwice(T val)` that takes a single argument of any type `T` and prints its value twice on separate lines.

## 🎯 Objective

To create a basic void-returning function template that works seamlessly with `int`, `double`, and `string` data types without duplicating code.

## ✔️ Output

Prints the provided input values twice on consecutive lines for each tested data type.

## ✍️ Learning Outcomes

- Define and implement basic C++ function templates using `template <typename T>`
- Understand automatic type deduction for function template arguments

---

# ⭐ Task 2: Function Template – `findMin()`
## 🔍 Overview

This program implements a function template `findMin(T a, T b)` that compares two values of the same type `T` using the `<` operator and returns the smaller value.

## 🎯 Objective

To write a value-returning function template that processes inputs across different primitive data types like integers, doubles, and characters.

## ✔️ Output

Displays the smaller of the two input values passed during each function call.

## ✍️ Learning Outcomes

- Implement template functions with non-void return types (`T`)
- Perform comparison operations (`<`) on generic template variables

---

# ⭐ Task 3: Class Template – `Pair<T>`
## 🔍 Overview

This program demonstrates a class template `Pair<T>` that stores two private member variables (`first` and `second`) of the same data type `T`. It includes a constructor, getter methods (`getFirst()`, `getSecond()`), and a `display()` function.

## 🎯 Objective

To construct a class template and instantiate objects using explicit type specification inside angle brackets (e.g., `Pair<int>`, `Pair<double>`, `Pair<string>`).

## ✔️ Output

Displays the pair of values formatted as `First: X Second: Y` for each instantiated object.

## ✍️ Learning Outcomes

- Define private member attributes using generic template types
- Instantiate template classes using explicit type parameters (`ClassName<Type>`)

---

# ⭐ Task 4: Challenge – Class Template: `Calculator<T>`
## 🔍 Overview

This program implements a generic mathematical calculator using a class template `Calculator<T>`. It stores two values `a` and `b` and provides member functions `add()`, `subtract()`, and `multiply()` that return results of type `T`.

## 🎯 Objective

To execute multiple arithmetic operations across user-defined template class instances for both `int` and `double` numeric types.

## ✔️ Output

Prints the calculated results for addition, subtraction, and multiplication for integer and floating-point datasets.

## ✍️ Learning Outcomes

- Perform mathematical operations using generic template class methods
- Design reusable class structures capable of handling multiple data formats

---

# 📊 Quick Reference: Templates Syntax & Concepts

| Concept | Syntax Example | Key Rule / Behavior |
|---|---|---|
| **Function Template** | `template <typename T>`<br>`T findMin(T a, T b)` | Types are automatically deduced from function arguments. |
| **Class Template** | `template <typename T>`<br>`class Pair { T first, second; };` | Requires explicit type specification inside angle brackets (e.g., `Pair<int>`). |
| **Template Declaration** | `template <typename T>` | `T` acts as a placeholder replaced by the compiler at compile-time. |

---

## 📚 Reference

- GeeksforGeeks – Templates in C++  
- cplusplus.com – C++ Templates  
- W3Schools – C++ Templates  

---
