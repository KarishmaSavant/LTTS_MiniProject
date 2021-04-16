//HEADER
#ifndef AIRLINE
#define AIRLINE //identifier

#include<stdio.h>

typedef struct k_airline
{
	char passport[7];
	char name[20];
    char location[25];
	int seat_number;
	char email_id[15];
	struct k_airline *following;
} k_airline;
k_airline *start, *file_address;
k_airline *temp;

void reserve(int n);
void cancel_ticket();
void records_display();
void ticket_details();
int system();
#endif