/**
 * @file newproject.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdlib.h>
#include <string.h>
#include "newproject.h"

void ticket_details()
{
	printf("\n\t Enter your six digit passport number:");
	gets(file_address->passport); fflush(stdin);   //reads a line from stdin and stores it into the string pointed
	printf("\n\t Enter your Full Name:");
	gets(file_address->name); fflush(stdin);
	printf("\n\t Enter your email address:");
	gets(file_address->email_id); fflush(stdin);
    printf("\n\t Enter the Destination: ");
    gets(file_address->location); fflush(stdin);
}
void ticket_details();
/**
 * @brief 
 * 
 * @param n 
 */
void reserve(int n)
{
	file_address = start;
	if (start == NULL)
	{
		// first user
		start = file_address = (k_airline*)malloc(sizeof(k_airline));
		ticket_details();
		file_address->following = NULL;
		printf("\n\t Your Seat Booking was Successful!");
		printf("\n\t Your Seat Number is: Seat A-%d", n);
		file_address->seat_number = n;
		return;
	}
    
	else if (n > 30) // FULL SEATS
	{
		printf("\n\t\t Sorry! All Seats For This Airline Are Booked.");
		printf("\n\t\t Check back in a week.");
		return;
	}
	else
	{
		// next user
		while (file_address->following)
			file_address = file_address->following;
		file_address->following = ( k_airline *)malloc(sizeof(k_airline));
		file_address = file_address->following;
		ticket_details();
		file_address->following = NULL;
		printf("\n\t Your Seat booking was succesful!");
		printf("\n\t Your Seat Number is: Seat A-%d", n);
		file_address->seat_number = n;
		return;
	}
} 

void savefile()
{
	FILE *fpointer = fopen("k_airline records", "w");
	if (!fpointer)
	{
		printf("\n Please try again, Error in opening file.");
		return;
	}
	file_address = start;
	while (file_address)
	{
		fprintf(fpointer, "%-7s", file_address->passport);
		fprintf(fpointer, "%-15s", file_address->name);
		fprintf(fpointer, "%-15s", file_address->email_id);
        fprintf(fpointer, "%-15s", file_address->location);
        fprintf(fpointer, "\n");
		file_address = file_address->following;
	}
	printf("\n\n\t Details have been saved to a file (k_airline records)");
	fclose(fpointer);
}

void records_display()
{
	file_address = start;
	while (file_address)
	{
		printf("\n\n Passport Number : %-6s", file_address->passport);
		printf("\n         Name : %-15s", file_address->name);
		printf("\n      Email Address: %-15s", file_address->email_id);
		printf("\n      Seat Number: A-%d", file_address->seat_number);
        printf("\n     Destination:%-15s", file_address->location);
		printf("\n\n++*=====================================================*++");
		file_address = file_address->following;
	}

}
void delete()
{
	file_address = start;
	system("cls");
	char passport[6];
	printf("\n\n Enter your passport number to delete your reservation:");
	gets(passport); fflush(stdin);
	if (strcmp(start->passport, passport) == 0)
	{
		temp = start;
		start = start->following;
		free(temp);
		printf(" Your reservation has been deleted");
		return;
	}
	while (file_address->following)
	{
		if (strcmp(file_address->following->passport, passport) == 0)
		{
			temp = file_address->following;
			file_address->following = file_address->following->following;
			free(temp);
			printf("Your reservation has been deleted");
			getchar();
			return;
		}
		file_address = file_address->following;
	}
	printf("Your passport number is incorrect please check again");
}
