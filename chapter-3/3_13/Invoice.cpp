#include <iostream>
#include "Invoice.h"

Invoice::Invoice(int quantity, int price)
{
	this->quantity = quantity;
	this->price = price;
}

Invoice::Invoice(std::string number, std::string description, int quantity, int price)
{
	setNumber(number);
	setDescription(description);
	setQuantity(quantity);
	setPrice(price);
}

std::string Invoice::getNumber()
{
	return number;
}

void Invoice::setNumber(std::string number)
{
	this->number = number;
}

std::string Invoice::getDescription()
{
	return description;
}

void Invoice::setDescription(std::string description)
{
	this->description = description;
}

int Invoice::getQuantity()
{
	return quantity;
}

void Invoice::setQuantity(int quantity)
{
	if (quantity < 0)
	{
		this->quantity = 0;
	}
	else
	{
		this->quantity = quantity;
	}
}

int Invoice::getPrice()
{
	return price;
}

void Invoice::setPrice(int price)
{
	if (price < 0)
	{
		this->price = 0;
	}
	else
	{
		this->price = price;
	}
}

int Invoice::getInvoiceAmount()
{
	return getQuantity() * getPrice();
}
