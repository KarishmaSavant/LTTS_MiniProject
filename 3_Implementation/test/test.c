#include "../inc/newproject.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include <string.h>


/* Required by the unity test framework */

void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}


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




void test_ticket_details(void)
{
strcpy(stream.passport,"123456");
strcpy(stream.name,"Taehyung");
strcpy(stream.email_id,"kimtae@gmail.com");
strcpy(stream.location,"Seoul");


TEST_ASSERT_EQUAL_STRING("123456",stream.passport);
TEST_ASSERT_EQUAL_STRING("Taehyung",stream.name);
TEST_ASSERT_EQUAL_STRING("kimtae@gmail.com",stream.email_id);
TEST_ASSERT_EQUAL_STRING("Seoul",stream.location);



}

void test_records_display(void)
{
strcpy(stream.passport,"123456");
strcpy(stream.name,"Taehyung");
strcpy(stream.email_id,"kimtae@gmail.com");
strcpy(stream.location,"Seoul");

TEST_ASSERT_EQUAL_STRING("123456",stream.passport);
TEST_ASSERT_EQUAL_STRING("Taehyung",stream.name);
TEST_ASSERT_EQUAL_STRING("kimtae@gmail.com",stream.email_id);
TEST_ASSERT_EQUAL_STRING("Seoul",stream.location);



}
