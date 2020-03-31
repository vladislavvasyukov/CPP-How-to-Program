#ifndef INVOICE_H_
#define INVOICE_H_

#include <string>

class Invoice {
private:
	std::string number;
	std::string description;
	int quantity;
	int price;
public:
	Invoice(int, int);
	Invoice(std::string, std::string, int, int);

	std::string getNumber();
	void setNumber(std::string);

	std::string getDescription();
	void setDescription(std::string);

	int getQuantity();
	void setQuantity(int);

	int getPrice();
	void setPrice(int);

	int getInvoiceAmount();
};

#endif
