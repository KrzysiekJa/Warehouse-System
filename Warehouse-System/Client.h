#pragma once

#include "Person.h"
#include "OrdersControlSystem.h"
#include "Receipt.h"
#include "Client.h"
#include "Driver.h"


class Client : Person, OrdersControlSystem {

public:

	Client(int n_id);

	void showReceipts();

};