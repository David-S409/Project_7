#pragma once

#include "Item.h"


class TitanBookstore {
private:
	Item * _purchases;
	int _current_index, numOfItems;

	double sum_of_purchases(int);
	void setPurchases() {};

public:
	
	
	Item * getPurchases();


	TitanBookstore();
	TitanBookstore(int numOfItems);
	~TitanBookstore();
	void add_item(Item purchase);
	void show_total();
};