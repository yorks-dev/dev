#include <stdio.h>
#include "hello.h"

struct car
{
	char *name;
	double price;
	int speed;
};

void set_price(struct car *car_name, double new_price)
{
	// (*car_name).price = new_price;    both works
	
	car_name->price = new_price; // only works on pointer to struct
}

void change_price(struct car *car, float new_price)
{
	(*car).price = new_price;
}

void printff()
{
	printf("Hello");
}

int main(void)
{
	struct car saturn = {.speed = 175, .name = "Saturn SL/2"};
	// Pass a pointer to this struct car, along with a new, // more realistic, price:
	set_price(&saturn, 799.99);
	printf("Price: %f\n", saturn.price);
	helper();
}
