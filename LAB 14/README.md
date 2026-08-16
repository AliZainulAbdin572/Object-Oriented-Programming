---

# 💻 CSC-521 Object Oriented Programming – Lab 14 (Open Ended)

# 🚌 Vehicle Rental System
A Vehicle Rental System is used to manage vehicles and customers efficiently.
The system allows the company to add Cars, Motorbikes, and Trucks with their rental rates.
Customers can register and rent an available vehicle for a specific number of days.
The system also manages vehicle returns, customer records, and rental summaries.

---

## Files

| File | Purpose |
|---|---|
| `Vehicle.h` / `Vehicle.cpp` | Abstract base class (interface: `calculateCost`, `getType`, `displayInfo`) |
| `Car.h` / `Car.cpp` | Car — standard pricing, `seats` attribute |
| `Motorbike.h` / `Motorbike.cpp` | Motorbike — 10% discount past 7 days, `engineCC` attribute |
| `Truck.h` / `Truck.cpp` | Truck — 20% surcharge, `payloadTonnes` attribute |
| `Customer.h` / `Customer.cpp` | Customer identity + active-rental tracking |
| `Rental.h` / `Rental.cpp` | A single rental record (open or closed) |
| `RentalSystem.h` / `RentalSystem.cpp` | Central manager: fleet, customers, rentals, business rules |
| `main.cpp` | Demo scenario: 4 vehicles, 2 customers, 2+ rentals, 1 return, summary |
| `design_note.txt` | Design justification (section 4b of the brief) |

## How to compile & run in Dev-C++

1. Open **Dev-C++** → `File → New → Project...` → **Console Application**, choose **C**, then switch language to **C++**.
   (Or simply: `File → Open Project or File`, point it at this folder, and add all `.h`/`.cpp` files to the project via `Project → Add to Project`.)
2. Add every `.h` and `.cpp` file in this folder to the project.
3. Set the C++ standard: `Tools → Compiler Options → Settings → General`, add this to
   **"Add the following commands when calling the compiler"**:
   ```
   -std=c++17
   ```
4. `Execute → Compile & Run` (F11).

## How to compile from the command line (any platform with g++)

```bash
g++ -std=c++17 -Wall -Wextra -o rental_system Vehicle.cpp Car.cpp Motorbike.cpp Truck.cpp Customer.cpp Rental.cpp RentalSystem.cpp main.cpp
./rental_system        # or rental_system.exe on Windows
```

Verified: compiles with **zero errors and zero warnings** under
`-std=c++17 -Wall -Wextra`.

## How the program works

`main.cpp` is a **text menu** — nothing runs automatically. When you run
the program you get:

```
================ VEHICLE RENTAL SYSTEM ================
  1. Add a vehicle to the fleet
  2. Register a customer
  3. Process a rental
  4. Return a vehicle
  5. List all vehicles
  6. List all customers
  7. Print summary report
  0. Exit
========================================================
Enter your choice:
```

You type the option number and the program asks for whatever it needs
(vehicle type, make/model, daily rate, customer name, ids, number of
days, etc.). Options 5 and 6 let you look up valid vehicle/customer ids
before renting or returning something; option 3 also prints the current
lists automatically before asking for ids. All business rules from the
brief (R1–R6) are enforced no matter what order you use the menu in:

- You can't rent a vehicle that's already rented (R3).
- A customer can't hold two active rentals at once (R2).
- Truck cost includes the 20% surcharge, Motorbike gets the 10% discount
  past 7 days (R4).
- Returning a vehicle closes its rental record instead of deleting it
  (R5).
- Option 7 prints all currently active rentals plus the
  available/rented vehicle count (R6).

Bad input (letters typed where a number is expected, an empty name, an
id that doesn't exist) is caught and re-prompted instead of crashing the
program.

The exact line where runtime polymorphism occurs is documented with a
comment in `RentalSystem::processRental()` in `RentalSystem.cpp`.
