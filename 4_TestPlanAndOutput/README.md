# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01 | To make new Reservation | (1). Six-Digit Passport Number (2). Full Name (3). Email Address (4). Destination| input information to Structure | PASS | Requirement based|
|  H_02 | If Airline seats are full   | Input Option from User Menu for Reservation | Error message |FAIL|Scenario/Technical |
|  H_03 | Display Reservations | Input Option from User Menu for Display Reservation | Airline Reservation Information stored in file to be displayed | Requirement based |
|  H_04 | Cancel Reservations |  Input Option from User Menu for Cancel Reservation (1).  Six-Digit Passport Number | SUCCESS | SUCCESS | Requirement based |
|  H_05 | Cancel Reservations: Error in Six-Digit Passport Number | Wrong Six-Digit Passport Number | Error in Cancellation | "Please check passport number" | Technical |
|  H_06 | EXIT Airline Booking Menu | Input Option from User Menu for Exit | SUCCESS | SUCCESS | Requirement based |
|  H_06 | After EXIT| User entered Input to structure saved in file | SUCCESS | SUCCESS | Technical |




## Table no: Low level test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01 | To make new Reservation | (1). Six-Digit Passport Number (2). Full Name (3). Email Address (4). Destination| input information to Structure | PASS | Requirement based|
|  L_02 | If Airline seats are full   | Input Option from User Menu for Reservation | Error message |FAIL|Scenario/Technical |
|  L_03 | Display Reservations | Input Option from User Menu for Display Reservation | Airline Reservation Information stored in file to be displayed | Requirement based |
|  L_04 | Cancel Reservations |  Input Option from User Menu for Cancel Reservation (1).  Six-Digit Passport Number | SUCCESS | SUCCESS | Requirement based |
|  L_05 | Cancel Reservations: Error in Six-Digit Passport Number | Wrong Six-Digit Passport Number | Error in Cancellation | "Please check passport number" | Technical |
|  L_06 | EXIT Airline Booking Menu | Input Option from User Menu for Exit | SUCCESS | SUCCESS | Requirement based |
|  L_06 | After EXIT| User entered Input to structure saved in file | SUCCESS | SUCCESS | Technical ||
