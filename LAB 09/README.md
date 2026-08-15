---

# 💻 CSC-521 Object Oriented Programming – Lab 09

This lab focuses on implementing **Operator Overloading** and **Runtime Polymorphism using Virtual Functions** in C++. Through these tasks, students will learn how to compare custom object instances using overloaded operators and calculate dynamic behavior across derived classes using base class pointers.

---

# ⭐ Task 1: Operator Overloading (`==` Operator)
## 🔍 Overview

This program demonstrates overloading the equality operator (`==`) to compare two objects of a `Distance` class. The class contains `feet` and `inches` attributes, and the overloaded operator checks if both distances are identical.

## 🎯 Objective

To understand how to overload binary operators in C++ to allow natural comparison syntax between user-defined objects.

## ✔️ Output

Compares two `Distance` objects and displays whether they are equal or not based on their properties.

Both the Distances are Equal

---


# ⭐ Task 2: Employee Salary Calculation System (Virtual Functions)
## 🔍 Overview

This program demonstrates dynamic polymorphism using an `Employee` base class and derived classes `PermanentEmployee` and `ContractEmployee`. The base class defines a virtual function `calculateSalary()`, which is overridden in derived classes to compute specific salaries (basic salary + bonus vs. hourly rate × hours worked).

## 🎯 Objective

To execute dynamic binding using virtual functions and base class pointers (`Employee*`) to calculate object-specific operations at runtime.

## ✔️ Output

Calculates and displays the salary for both permanent and contract employees using a base class pointer.

```text
Salary of Permanent Emplyee : Rs.45000
Salary of a Contract Employee : Rs.24000
