#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "user.h"
#include "library.h"

class Customer : public User {
public:
	void BuyBook();						// Customer buy books
	void Refund();						// Customer ask for refund
	//void History();					
	void Interface(string username);	// Customer interface
};

#endif