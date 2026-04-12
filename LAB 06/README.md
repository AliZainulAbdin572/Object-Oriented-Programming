---

# 💻 CSC-521 Object-Oriented Programming – Lab 05

This lab focuses on applying **constructors and destructors** in real-world scenarios. Students will explore constructor chaining, multi-level constructor execution, destructor order, and dynamic memory management with destructors.

---

# ⭐ Task 1: Online Shopping System (Constructor)
## 🔍 Overview

This task requires creating a base class `Product` with properties name and price, and a derived class `Electronics` with an additional property warrantyYears. Constructor chaining is used to initialize all values.

## 🎯 Objective

To practice constructor chaining and initialization across base and derived classes.

## ✔️ Output

Displays product details including name, price, and warranty years.

## ✍️ Learning Outcomes

- Implement constructor chaining  
- Initialize base and derived class properties  
- Apply constructors to an online shopping system  

---

# ⭐ Task 2: Ride Booking System (Constructor – Multi-level)
## 🔍 Overview

This task involves creating a class hierarchy: `Vehicle -> Car -> ElectricCar`. Each class has a constructor that prints a message. Values are passed through constructors to observe execution order.

## 🎯 Objective

To understand multi-level constructor execution and order of calls.

## ✔️ Output

Displays messages showing constructor calls from base to derived classes.

## ✍️ Learning Outcomes

- Implement multi-level inheritance with constructors  
- Observe constructor execution order  
- Apply constructors to a ride booking system  

---

# ⭐ Task 3: File Handling System (Destructor)
## 🔍 Overview

This task requires creating a base class `File` that prints "File opened" in its constructor and "File closed" in its destructor. A derived class `TextFile` adds its own messages. Destructor order is observed when objects go out of scope.

## 🎯 Objective

To practice destructors and understand their execution order in inheritance.

## ✔️ Output

Displays messages showing constructor and destructor calls in sequence.

## ✍️ Learning Outcomes

- Implement destructors in base and derived classes  
- Observe destructor order in inheritance  
- Apply destructors to file handling systems  

---

# ⭐ Task 4: Device and Sensor System (Destructor with Dynamic Memory)
## 🔍 Overview

This task involves creating a base class `Device` with properties deviceName, deviceID, and dynamically allocated data. A derived class `Sensor` adds sensorType and dynamically allocated sensorValue. Constructors allocate memory, and destructors free memory.

## 🎯 Objective

To practice dynamic memory allocation and cleanup using destructors.

## ✔️ Output

Displays messages showing allocation and cleanup when objects are created and destroyed.

## ✍️ Learning Outcomes

- Implement dynamic memory allocation in constructors  
- Free memory using destructors  
- Apply destructors to manage resources in device and sensor systems  

---

## 📚 Reference

- W3Schools – C++ Constructors and Destructors [(w3schools.com in Bing)](https://www.bing.com/search?q=https%3A%2F%2Fwww.w3schools.com%2Fcpp%2Fcpp_constructors.asp)  
- GeeksforGeeks – C++ Destructors [(geeksforgeeks.org in Bing)](https://www.bing.com/search?q=https%3A%2F%2Fwww.geeksforgeeks.org%2Fdestructors-cpp)

---
