#include <string>
#include <iostream>
#include "Seller.h"
#include "Order.h"
#include "Receipt.h"

Seller::Seller(int n_id) : Employee(n_id) {}



/*void Seller::createOrder(std::string product_name, std::string product_amount) {
	//przy dzidziczeniu wiecej niz jedna klasa nie dziala dziedziczenie database?
	if (checkConnection()) {
		sql_string = "INSERT INTO ORDERS (PRODUCTNAME, PRODUCTAMOUNT) VALUES ('" + product_name + "', " + product_amount + "");

		sql = sql_string.c_str();

		rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
		else {
			fprintf(stdout, "Records created successfully\n");
		}
		sqlite3_close(db);
	}
}*/

Receipt sendReceipt(std::string text) {
	// TODO - implement Saller::sendReceipt
	throw "Not yet implemented";
}

void sellerMenu() {
	while (true) {
		std::string str;

		std::cout << "Choose : create, show all (order(s)), add (product), receipt, read, send (message), logout" << std::endl;
		std::cin >> str;


		if (str == "create") {
			// TO DO
		}
		if (str == "show all" || str == "all") {
			// TO DO
		}
		if (str == "add") {
			// TO DO
		}
		if (str == "receipt") {
			// TO DO
		}
		if (str == "read") {
			// TO DO
		}
		if (str == "send") {
			// TO DO
		}
		if (str == "logout") {
			return;
		}
	}
}