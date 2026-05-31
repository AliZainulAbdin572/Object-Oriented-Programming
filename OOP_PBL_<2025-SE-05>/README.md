# SkyLink Airways — Airline Reservation & Flight Management System

**Course:** Object-Oriented Programming (C++)  
**Assignment:** Problem-Based Learning (PBL) — Individual  
**Student ID:** 2025-SE-05  

---

## Project Overview

SkyLink Airways is a console-based Airline Reservation and Flight Management System built in C++. It allows an airline to manage flights, register passengers, book and cancel tickets, generate reports, and automatically save and restore all data between runs.

---

## Project Structure

```
OOP_PBL_2025-SE-05/
│
├── main.cpp                  # Entry point, console menu
├── Flight.h / Flight.cpp     # Abstract base class for all flights
├── DerivedFlights.h / .cpp   # DomesticFlight, InternationalFlight, CharterFlight
├── Passenger.h / Passenger.cpp  # Abstract base + Economy, Business, FirstClass
├── Ticket.h / Ticket.cpp     # Ticket class linking passenger to flight
├── Airline.h / Airline.cpp   # Main aggregator — all operations
├── Exceptions.h              # Custom exception classes
├── SearchUtils.h             # Generic search template utility
│
├── data/
│   └── airline_data.txt      # Persistent storage file (auto-created on first save)
│
├── UML Diagram/
│   └── UML_Diagram.html      # Class diagram — open in any browser
│
└── Zain's Airline System.dev # Dev-C++ project file
```

---

## How to Build and Run

### Option 1 — Dev-C++ (Recommended for Windows)

1. Open **Dev-C++ 5.11**
2. Go to `File` → `Open Project`
3. Select `Zain's Airline System.dev`
4. Press **F11** to compile and run

### Option 2 — Command Line (MinGW / g++)

Open a terminal in the project folder and run:

```bash
g++ -std=c++14 -o airline main.cpp Flight.cpp DerivedFlights.cpp Passenger.cpp Ticket.cpp Airline.cpp
airline.exe
```

### Option 3 — Run Directly

A pre-compiled `Zain's Airline System.exe` is included. Just double-click it to run.

> **Note:** Make sure the `data/` folder exists in the same directory as the executable, otherwise the program will create it automatically on first save.

---

## Sample Data

The file `data/airline_data.txt` contains pre-loaded sample data:

- **10 Flights** — 5 Domestic, 3 International, 2 Charter
- **8 Passengers** — 3 Economy, 3 Business, 2 First Class

This data loads automatically every time the program starts.

---

## Menu Options

```
1.  Add Flight
2.  Remove Flight
3.  Search Flight          (by number / route / date)
4.  List All Flights
5.  Register Passenger
6.  Remove Passenger
7.  Passenger Booking History
8.  List All Passengers
9.  Book Ticket
10. Cancel Ticket
11. Reports                (Today's departures / Occupancy / Top 5 Revenue)
0.  Save & Exit
```

---

## Flight Types

| Type | Extra Info Required | Fare Formula |
|------|-------------------|--------------|
| Domestic | Region, Tax Rate (%) | `(50 + seats×0.5) × (1 + tax/100)` |
| International | Country, Visa Required, Surcharge ($) | `200 + (seats×1.5) + surcharge` |
| Charter | Contract Holder, Charter Fee ($) | `(charterFee / seats) + 100` |

---

## Passenger Classes & Refund Policy

| Class | Baggage | Loyalty Points | Refund Rules |
|-------|---------|---------------|--------------|
| Economy | 20 kg | 1x | >7 days = 50% / 3-7 days = 25% / <3 days = 0% |
| Business | 40 kg | 2x | >5 days = 75% / 2-5 days = 50% / <2 days = 20% |
| First Class | 60 kg | 3x | >3 days = 90% / 1-3 days = 70% / <1 day = 40% |

---

## OOP Features Used

| Feature | Where Used |
|---------|-----------|
| Abstract Class | `Flight` and `Passenger` — pure virtual functions |
| Inheritance | `DomesticFlight`, `InternationalFlight`, `CharterFlight`, `EconomyPassenger`, `BusinessPassenger`, `FirstClassPassenger` |
| Polymorphism | `calculateBaseFare()`, `displayDetails()`, `getCancellationRefundPercent()` called via base pointers |
| Operator Overloading | `<<` for `Flight`, `Passenger`, `Ticket` — `==` for `Ticket` |
| Templates | `findFirst<T>` and `findAll<T>` in `SearchUtils.h` |
| Exception Handling | `FlightFullException`, `InvalidCancellationException`, `DuplicateBookingException`, `NotFoundException` |
| STL | `std::vector`, `std::map`, `std::sort`, `std::find_if` |
| Smart Pointers | `std::unique_ptr` for all flights, passengers, tickets — no raw `new/delete` |
| File Persistence | Auto-save on exit, auto-load on startup via `data/airline_data.txt` |

---

## Data File Format

The system saves data in pipe-delimited (`|`) text format:

```
COUNTER|1010
FLIGHT|Domestic|SK101|Karachi|Lahore|2026-06-15|08:00|150|150|Northern|5
FLIGHT|International|SK201|Karachi|Dubai|2026-06-15|22:00|200|200|UAE|0|150
FLIGHT|Charter|SK301|Karachi|Skardu|2026-06-20|09:00|50|50|Mountain Tours Co|25000
PASSENGER|Economy|P001|Ali Hassan|ali@email.com|0301-1234567|120
TICKET|TKT-1001|P001|SK101|S1|125.00|CONFIRMED
REVENUE|SK101|125.00
```

---

## Known Limitations

- Date input is string-based (YYYY-MM-DD) — no calendar validation
- Fare prices are formula-based for demonstration; real pricing would use a dynamic database
- Console UI only — no GUI

---

## Academic Integrity

This project was individually developed by **Ali Zain Ul Abdin (2025-SE-05)** as part of the OOP PBL assignment. AI tools were used to clarify concepts and debug — all submitted code is understood and can be defended in the viva.
