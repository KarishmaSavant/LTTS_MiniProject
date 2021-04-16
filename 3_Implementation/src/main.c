/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "newproject.h"
/**
 * @brief 
 * 
 * @return int 
 */
int main()
{
	void reserve(int n), cancel_ticket(), records_display(), savefile();  //function prototypes
	int option;
	start = file_address = NULL;  //initialize the struct pointers to NULL 
	int number = 1;
	do
	{
		printf("\n\t\t                Welcome To The Airline Ticket Booking System                   ");
		printf("\n\t\t   ----------------------------------------------------------------------------");
		printf("\n\n\n\t\t Please enter your choice from (1-4):");
		printf("\n\n\t\t 1. MAKE A RESERVATION");
		printf("\n\n\t\t 2. CANCEL TICKET/S");
		printf("\n\n\t\t 3. DISPLAY TICKET RECORDS");
		printf("\n\n\t\t 4. EXIT MENU");
		printf("\n\n\t\t Enter your choice :");
		scanf("%d", &option); fflush(stdin);
		system("cls");
		switch (option)
		{
		case 1:
			reserve(number);
			number++;
			break;
		case 2:
			cancel_ticket();
			break;
		case 3:
			records_display();
			break;
		case 4:
		{
				  savefile();
				  break;
		}
		default:
			printf("\n\n\t SORRY INVALID CHOICE!");
			printf("\n\n\t PLEASE CHOOSE FROM 1-4");
			printf("\n\n\t Valid Choices are: 1-4");
		}
		getchar();
	} while (option!= 4);
	return 0;
}


