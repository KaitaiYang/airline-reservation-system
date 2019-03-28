# Airline Reservation System
An airline company needs a reservation system for users. Assume that there are total 10 seats for reservation, seats 1-5 for First Class and seats 6-10 for Econo,y Class. Write a C++ program to complete the reservation system.

## Sample I/O
```
Please input 1 for First Class or 2 for Economy Class: 1
Please input the number of seats for First Class: 2
Seat(s) 1, 2 are reserved for you.
Please input 1 for First Class or 2 for Economy Class: 2
Please input the number of seats for First Class: 4
Seat(s) 6, 7, 8, 9 are reserved for you.
Please input 1 for First Class or 2 for Economy Class: 2
Please input the number of seats for First Class: 2
Sorry, it is not available for 2 seat(s)
```

## Bonus
Write function **int ESeat(int n)** that makes reservation for $n$ Economy Class seats and returns the next available seat number if the reservation is available, and returns -1 otherwise. In addition, Write function int FSeat(int n)that makes reservation for $n$ First Class seats and returns the next available seat number if the reservation is available, and returns -1 otherwise. Use these functions in your program.
