# Requirements
## Introduction
 * Airline booking can help the process of ticket booking for flights easier, convenient and more time efficient.
 * This topic was chosen to implement various C programming methods incuding structures, pointers, dynamic memory allocation, header files, typedef and multiple file programming concepts.

## Research
### Airline Booking Software System 
An airline booking software system can make ticket booking for customers easier, efficient and more reliable. Customers can easily navigate through the software to make reservations, confirm their booking or cancel their tickets.


### Benefits
Airline booking can help the process of ticket booking for flights easier, convenient and more time efficient.
Customers can easily navigate through the software to make reservations, confirm their booking or cancel their tickets.


## System Defintion
### Assumptions:
* Few premade assumptions our system makes
    * Single Ticket booking at a time
    * Automatic Payment/Refund
    * Customer enters correct ticket specifications
    * Before EXIT menu all actions belong to a single user
    * One Ticket at a time to be booked
![Description](https://github.com/KarishmaSavant/LTTS_MiniProject/blob/main/1_Requirements/System.png)
### Explanation:
* Airline Booking Software includes features like:
    * Create an airline ticket reservation
    * Delete an airline ticket reservation
    * Display airline ticket records
    * Save records to file
    * Read records from file 
    
    


## SWOT ANALYSIS
![SWOT Analysis](https://github.com/KarishmaSavant/LTTS_MiniProject/blob/main/1_Requirements/SWOT%20Analysis.png)

# 4W&#39;s and 1&#39;H

## Who:
* Small and medium airline companies requiring an easier, user-friendly method of ticket booking for customers.

## What:
* Airline systems unable to compete with more established airlines leading to tremendous losses.

## When:
* With the start of growing competitveness of airlines.

## Where:
* This problem is faced by most small/medium lesser known airlines.

## How:
* This problem causes tremendous losses for smaller/mediumand lesser known airlines causing bankruptcy and eventual shut-down of airlines.

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| H_01 | Customer can make a Reservation | Technical | IMPLEMENTED | 
| H_02 | Customer can view Records of Reservations | Technical |  IMPLEMENTED  |
| H_03 | Customer can Cancel Ticket Reservations| Technical |  IMPLEMENTED  |
| H_04 | Custoner can EXIT the menu | Technical |  IMPLEMENTED  |

##  Low level Requirements:

| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| L_01 | New reservation is made after providing all the following information (1). Six-Digit Passport Number (2).Full Name (3). Email Address (4). Destination| H_01 |  IMPLEMENTED  |
| L_02 | Customer can view records by (1). Selecting the option from the menu alowing to display records | H_02 |  IMPLEMENTED |
| L_03 | While reading all the records all records made at running the program before exiting the menu will be displayed (1). All reservations made before exiting the menu will be considered as a single customer's ticket reservations| H_02 |  IMPLEMENTED |
| L_04 | For a customer to cancel a ticket reservation the correct passport id must be entered (1). If wrong passport number is entered the corresponding error message will be displayed | H_03 |  IMPLEMENTED  |
| L_05 | To EXIT the Ticket Booking software the corresponding option must be selected from the menu | H_04 |  IMPLEMENTED  |
| L_06 | In case of a full flight the corresponding message shall be displayed | H_01 |  IMPLEMENTED  |
| L_07 | If opening the file fails, then the system shloud prompt the message "Error in opening file" and should not end the program execution | H_02|  IMPLEMENTED  |
| L_08 | When user EXITs the system the data of reservations is saved to file | H_02 |  IMPLEMENTED  |
