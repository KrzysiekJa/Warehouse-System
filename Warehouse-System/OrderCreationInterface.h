#pragma once

#include "Database.h"
#include <string>


class OrderCreationInteface : public Database {

public:
	void createOrder(std::string order);

	void addProduct(std::string product);
	void sendOrder(std::string order);
};
