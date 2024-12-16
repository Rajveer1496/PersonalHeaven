/*
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct book
{
	char title[50];
	char writer[50];
	float price;
	struct author
	{
		char auth_name[50];
		int yob;
	} x, y, z;
} book;
int main()
{

	
	book b1;
	strcpy(b1.title, "Hobbit");
	strcpy(b1.writer, "J. R. R. Tolkien");
	b1.price = 450;
	strcpy(b1.x.auth_name, "J. R. R. Tolkien");
	b1.x.yob = 1920;

	book b2;
	strcpy(b2.title, "Harry Potter");
	strcpy(b2.writer, "J. K. Rowling");
	b2.price = 400;
	strcpy(b2.y.auth_name, "J. K. Rowling");
	b2.y.yob = 1948;

	book b3;
	strcpy(b3.title, "A Game of Thrones");
	strcpy(b3.writer, "George R. R. Martin");
	b3.price = 1000;
	strcpy(b3.z.auth_name, "George R. R. Martin");
	b3.z.yob = 1948;

	printf("Book name: %s 		price: %.2f 		Author: %s\n", b1.title, b1.price, b1.x.auth_name);
	printf("Book name: %s 	price: %.2f 		Author: %s\n", b2.title, b2.price, b2.y.auth_name);
	printf("Book name: %s 	price: %.2f 		Auther: %s\n", b3.title, b3.price, b3.z.auth_name);
	
	printf("Name: Rajveer Chaudhari\nRoll No. 202411024\n\n");

	return 0;

}

