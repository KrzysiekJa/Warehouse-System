#ifndef DRIVER_H
#define DRIVER_H

class Driver : Employee {
public:
	
	Driver(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nbirth_date, int Npesel);
	
private:
	Quest quest;

	void deselectOrder();

	Order* showOrders();
};

#endif
