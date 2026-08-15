---

# 💻 CSC-521 Object Oriented Programming – Lab 11-12

This lab focuses on understanding and implementing **Special Features in C++** including **Friend Functions**, **Static Data Members**, **Static Member Functions**, and **Pure Abstract Functions (Abstract Classes)**. Through practical tasks, students will learn controlled member access, shared class-level state, and enforcing interface implementation.

---

# ⭐ Task 1: Basic Friend Function
## 🔍 Overview

This program demonstrates how a non-member function can access private members of a class using the `friend` keyword. A `Box` class is created with a private `length` attribute, which is accessed and displayed by an external function.

## 🎯 Objective

To understand how friend functions provide controlled access to private data without making them public or class members.

## ✔️ Output

Displays the private length property of a `Box` object using the external `displayLength()` function.

## ✍️ Learning Outcomes

- Implement friend functions in C++  
- Access private attributes from an external function  
- Understand that friend functions do not have a `this` pointer  

---

# ⭐ Task 2: Mathematical Operation Using Friend Function
## 🔍 Overview

This program demonstrates adding two objects using a friend function. A `Distance` class with `feet` and `inches` attributes uses an external `addDistance()` friend function to perform addition logic on two distance instances.

## 🎯 Objective

To pass objects as parameters to a friend function and perform operations across object properties.

## ✔️ Output

Displays the combined distance (feet and inches) resulting from adding two `Distance` objects.

## ✍️ Learning Outcomes

- Pass objects by value or reference to friend functions  
- Perform custom arithmetic logic using private class fields  

---

# ⭐ Task 3: Bank Account System (Static Data Member)
## 🔍 Overview

This program demonstrates shared data across all instances using a static variable. A `BankAccount` class maintains individual holder names and balances while using a static counter to track the total number of accounts created.

## 🎯 Objective

To understand static data members, their scope, lifetime, and independent class-level memory allocation.

## ✔️ Output

Displays individual account details alongside the global count of total bank accounts created.

## ✍️ Learning Outcomes

- Declare and define static data members outside the class  
- Track shared states across multiple class instances  

---

# ⭐ Task 4: Employee System (Static Member Function)
## 🔍 Overview

This program demonstrates static member functions that operate without an instance. An `Employee` class stores personal IDs and names, while a static variable stores the company name, managed and displayed by a static member function.

## 🎯 Objective

To invoke static functions directly using the class scope resolution operator (`ClassName::Function()`).

## ✔️ Output

Displays company information using a static member function call without requiring an object reference.

## ✍️ Learning Outcomes

- Implement and call static member functions using `::`  
- Understand why static functions can only access static members  

---

# ⭐ Task 5: Hospital Management System (Pure Abstract Functions)
## 🔍 Overview

This program demonstrates abstraction and polymorphism by defining an abstract base class `HospitalStaff` with a pure virtual function `performDuty()`. Derived classes (`Doctor`, `Nurse`, `Receptionist`) override this function to implement specific duties.

## 🎯 Objective

To enforce dynamic polymorphism and uniform interfaces across derived classes using pure virtual functions (`= 0`).

## ✔️ Output

Calls `performDuty()` polymorphically for different hospital staff members to show their specific tasks.

## ✍️ Learning Outcomes

- Define pure virtual functions in C++ using `= 0`  
- Implement abstract classes and function overriding in derived classes  
- Prevent instantiation of base abstract classes  

---

# 📊 Comparison: C++ Special Features

| Feature | Friend Function | Static Members | Pure Abstract Function |
|---|---|---|---|
| **Purpose** | Access private/protected members | Share variable/behavior across all objects | Enforce function overriding in derived classes |
| **Member Status** | Non-member of the class | Class member (belongs to class, not object) | Virtual member function |
| **`this` Pointer** | No | No (for static functions) | Yes (when called via concrete object pointer) |
| **Instantiation** | N/A | Exists even without objects | Prevents instantiation of the class |
| **Syntax / Keyword** | `friend returnType funcName();` | `static dataType varName;` | `virtual void funcName() = 0;` |

---

## 📚 Reference

- GeeksforGeeks – Friend Functions in C++  
- GeeksforGeeks – Static Keyword in C++  
- W3Schools – C++ Abstract Classes & Pure Virtual Functions  

---
