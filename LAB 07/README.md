---

# 💻 CSC-521 Object Oriented Programming – Lab 07

This lab focuses on understanding and implementing **Aggregation and Composition in C++**. Through practical tasks, students will explore how classes can be related using weak (aggregation) and strong (composition) relationships.

---

# ⭐ Task 1: Composition – Calculator with Display
## 🔍 Overview

This program demonstrates **composition** by designing a `Calculator` class that owns a `Display` object. The calculator performs arithmetic operations and delegates the responsibility of showing results to the display.

## 🎯 Objective

To understand how composition creates a strong "has-a" relationship where the contained object is destroyed when the container is destroyed.

## ✔️ Output

Displays results of addition and multiplication, and shows the last result stored in the display.

## ✍️ Learning Outcomes

- Implement composition in C++  
- Understand strong ownership and dependent lifetimes  
- Practice delegation of responsibilities between classes  

---

# ⭐ Task 2: Aggregation – Shared Calculator in Classroom
## 🔍 Overview

This program demonstrates **aggregation** by designing a scenario where multiple students share a single calculator. The calculator is created externally and passed to students, who use it for arithmetic operations.

## 🎯 Objective

To understand how aggregation creates a weak "has-a" relationship where the contained object exists independently of the container.

## ✔️ Output

Displays results of addition and multiplication performed by multiple students using the same calculator.

## ✍️ Learning Outcomes

- Implement aggregation in C++  
- Understand weak ownership and independent lifetimes  
- Share objects across multiple classes without tight coupling  

---

# 📊 Comparison: Aggregation vs Composition

| Feature          | Aggregation                        | Composition                     |
|------------------|------------------------------------|---------------------------------|
| **Ownership**    | No (shared object)                 | Yes (exclusive ownership)       |
| **Lifetime**     | Independent                        | Dependent                       |
| **Deletion**     | Deleting container has no effect   | Deleting container destroys parts |
| **Reusability**  | Higher (object can be reused)      | Lower (tightly coupled)         |
| **Implementation** | Pointer or reference             | Direct member (object)          |

---

## 📚 Reference

- GeeksforGeeks – Aggregation vs Composition in C++  
- W3Schools – C++ Classes and Objects  

---
