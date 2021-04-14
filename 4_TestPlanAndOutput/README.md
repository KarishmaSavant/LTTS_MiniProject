# TEST PLAN:

## Table: High-level Test Plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01 | To make new Reservation | (1). Six-Digit Passport Number (2). Full Name (3). Email Address (4). Destination| input information to Structure | PASS | Requirement based|
|  H_02 | If Airline seats are full   | Input Option from User Menu for Reservation | Error message |FAIL|Scenario/Technical |
|  H_03 | Display Reservations | Input Option from User Menu for Display Reservation | Airline Reservation Information stored in file to be displayed | Requirement based |
|  H_04 | Cancel Reservations |  Input Option from User Menu for Cancel Reservation (1).  Six-Digit Passport Number | SUCCESS | SUCCESS | Requirement based |
|  H_05 | Cancel Reservations: Error in Six-Digit Passport Number | Wrong Six-Digit Passport Number | Error in Cancellation | "Please check passport number" | Technical |
|  H_06 | EXIT Airline Booking Menu | Input Option from User Menu for Exit | SUCCESS | SUCCESS | Requirement based |
|  H_07 | After EXIT| User entered Input to structure saved in file | SUCCESS | SUCCESS | Technical |




## Table: Low-Level Test Plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | H_01 |To make new Reservation|  (1). Six-Digit Passport Number (2). Full Name (3). Email Address (4). Destination| SUCCESS | SUCCESS |Requirement based |
|  L_02       | H_01 |User Menu Input Error|  A User Menu Option not btween 1-4| ERROR | "Choose Option between 1-4" |FAIL|
|  L_03       | H_01 | Six-Digit Passport Number|  (1). Valid Six-Digit Passport Number | SUCCESS | SUCCESS |Requirement based |
|  L_04       | H_01 |To save Reservation| Dynamic Memory Allocation into the Structure Using Pointers| SUCCESS | SUCCESS |Technical|
|  L_05       | H_02 |If Airline seats are full | Reservations have exceeded specified number of Airline Bookings| FAIL| "Seat Bookings Are Full" |Technical|
|  L_06       | H_01 |To save in file| Dynamic Memory Allocation into the Structure Using Pointers into file| SUCCESS | SUCCESS |Technical|
|  L_07       | H_01 |Error in opening file| Software error| ERROR | "Error in opening file" |Technical|
|  L_08       | H_03 | Display Reservations|Display stored information in Structure Using Pointers from file| SUCCESS | Information Display |Requirement based|
|  L_09       | H_03 | Display Reservations|Display stored information in Structure Using Pointers from file| SUCCESS | Information Display |Requirement based|
|  L_10       | H_03 | Display Reservations|Display stored information in Structure Using Pointers from file| SUCCESS | Information Display |Requirement based|
|  L_11       | H_04 | Cancel Reservations|(1). Six-Digit Passport Number used to make the Reservation| SUCCESS | Delete Reservation from file |Requirement based|
|  L_12       | H_05 | Error in Cancelling Reservations| Wrong Six-Digit Passport Number used to make the Reservation| FAIL | "Passport Number is wrong" |Requirement based|
|  L_13       | H_06 | EXIT Airline Booking Menu|Input Option from User Menu for Exit| SUCCESS | EXIT |Requirement based|
|  L_14       | H_07 |  After EXIT |All User-Entered information from the session stored information in Structure Using Pointers from file| SUCCESS | EXIT SUCCESS |Requirement based|

