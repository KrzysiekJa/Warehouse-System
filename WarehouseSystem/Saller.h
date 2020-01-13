#ifndef SALLER_H
#define SALLER_H
#include <string>

class Saller : Employee, OrderCreationInteface {
public:
	Saller(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nbirth_date, int Npesel);
	
private:
	Receipt receipt;
	
	Order createOrder(Order order);

	Receipt sendReceipt(string text);

};

#endif
