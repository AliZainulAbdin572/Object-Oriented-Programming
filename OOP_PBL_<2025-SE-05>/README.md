# SkyLink Airways — Airline Reservation & Flight Management System

## Overview
A console-based C++ application implementing a full Airline Reservation &
Flight Management System for SkyLink Airways, built as per the OOP PBL assignment.

## Project Structure
```
AirlineSystem/
├── include/
│   ├── Airline.h
│   ├── DerivedFlights.h
│   ├── Exceptions.h
│   ├── Flight.h
│   ├── Passenger.h
│   ├── SearchUtils.h
│   └── Ticket.h
├── src/
│   ├── Airline.cpp
│   ├── DerivedFlights.cpp
│   ├── Flight.cpp
│   ├── main.cpp
│   ├── Passenger.cpp
│   └── Ticket.cpp
├── data/
│   └── airline_data.txt   ← sample data (10 flights, 8 passengers)
├── Makefile
└── README.md
```

## Build Instructions

### Requirements
- g++ with C++17 support
- make

### Compile
```bash
make
```
This creates the `airline_system` executable and `obj/` folder automatically.

### Run
```bash
./airline_system
```

### Clean
```bash
make clean
```

### Manual Compile (without make)
```bash
g++ -std=c++17 -Wall -Wextra -Iinclude \
    src/main.cpp src/Flight.cpp src/DerivedFlights.cpp \
    src/Passenger.cpp src/Ticket.cpp src/Airline.cpp \
    -o airline_system
```

## Features
- Flight management: Add, remove, search, list (Domestic / International / Charter)
- Passenger management: Register, remove, view booking history (Economy / Business / First Class)
- Booking: Seat assignment with duplicate and full-flight checks
- Cancellation: Polymorphic refund calculation per passenger class and days before departure
- Reports: Today's departures, occupancy %, top 5 revenue flights
- Persistence: Auto-save on exit, auto-load on startup

## OOP Features Used
| Feature | Where |
|---|---|
| Abstract class + pure virtuals | `Flight`, `Passenger` |
| Inheritance | `DomesticFlight`, `InternationalFlight`, `CharterFlight`; `EconomyPassenger`, `BusinessPassenger`, `FirstClassPassenger` |
| Polymorphism | `calculateBaseFare()`, `getCancellationRefundPercent()`, `displayDetails()` |
| Operator overloading | `<<` for Flight, Ticket, Passenger; `==` for Ticket |
| Templates | `searchByPredicate<T>`, `searchAllByPredicate<T>` in `SearchUtils.h` |
| Exception handling | `FlightFullException`, `InvalidCancellationException`, `DuplicateBookingException`, `NotFoundException` |
| STL | `std::vector`, `std::map`, `std::sort`, `std::find_if`, `std::copy_if` |
| Smart pointers | `std::unique_ptr` throughout `Airline` for memory safety |
| File I/O | `saveToFile()` / `loadFromFile()` in `Airline` |

## Sample Data
The `data/airline_data.txt` file contains:
- 10 flights (4 Domestic, 3 International, 2 Charter, 1 Domestic)
- 8 passengers (3 Economy, 3 Business, 2 First Class)

## Test Cases Run
1. Add a new domestic flight → [PASS]
2. Book a ticket for a valid passenger on a valid flight → [PASS]
3. Book duplicate ticket on same flight → DuplicateBookingException thrown → [PASS]
4. Book on a full flight → FlightFullException thrown → [PASS]
5. Cancel ticket >7 days before departure (Economy) → 50% refund → [PASS]
6. Cancel ticket <3 days before departure (Economy) → 0% refund → [PASS]
7. First Class cancel >3 days → 90% refund → [PASS]
8. Search flight by non-existent number → "not found" message → [PASS]
9. Remove passenger → confirmed removed from list → [PASS]
10. Save & reload → all data restored correctly → [PASS]
