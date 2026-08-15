# Vehicle Rental System — OOP with C++ (In-Class Lab)

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

## What the demo in `main.cpp` does (maps to the brief's section 4a)

1. Adds 4 vehicles: 2 Cars, 1 Motorbike, 1 Truck (≥ 3 required, with all three types present).
2. Registers 2 customers.
3. Processes 2 successful rentals (a Car and the Truck — shows the 20% truck surcharge).
4. Demonstrates both business rules being **enforced**: renting an already-rented vehicle is rejected, and a customer with an existing rental cannot rent a second vehicle.
5. Returns 1 vehicle (marks it available again; the rental record is closed, not deleted).
6. Processes one more rental (the Motorbike, 10 days) to show the 10% long-rental discount.
7. Prints the final summary: all active rentals plus the available/rented vehicle count.

The exact line where runtime polymorphism occurs is documented with a
comment in `RentalSystem::processRental()` in `RentalSystem.cpp`.
