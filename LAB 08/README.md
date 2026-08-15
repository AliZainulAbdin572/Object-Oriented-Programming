---

# 💻 CSC-521 Object Oriented Programming – Lab 08
## Dynamic Polymorphism & Virtual Functions

This task focuses on understanding and implementing **Dynamic Polymorphism** and **Virtual Functions** in C++. Through practical code execution, students will learn how to use base class pointers to call overridden functions in derived classes (`Rectangle` and `Circle`) at runtime.

---

# ⭐ Task 1: Area Calculation using Virtual Functions
## 🔍 Overview

This program demonstrates dynamic polymorphism using a base class `Shape` and derived classes `Rectangle` and `Circle`. The base class defines a virtual function `Area()`, which is overridden in the derived classes. A base class pointer (`Shape*`) is used to dynamically call the corresponding `Area()` function for different objects at runtime.

## 🎯 Objective

To understand how virtual functions enable runtime polymorphism and allow base class pointers to execute derived class method implementations.

## ✔️ Output

Displays the calculated areas of both the Rectangle and Circle objects using the base class pointer.

```text
Area of Rectangle : 6
Area of Circle : 78.5
