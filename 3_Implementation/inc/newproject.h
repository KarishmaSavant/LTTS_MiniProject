//HEADER
#ifndef AIRLINE
#define AIRLINE //identifier
/**
 * @file newproject.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
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

/**
 * @brief 
 * 
 * @param n 
 */
void reserve(int n);
void delete();
void records_display();
void savefile();
void ticke(t_details);
int system();

#endif