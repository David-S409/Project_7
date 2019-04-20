#include "Item.h"
using namespace std;


	void Item::setLabel(string label) { this->label = label; }
	string Item::getLabel() const { return this->label; }


	void Item::setPrice(double price) { this->price = price; }
	double Item::getPrice() const { return this->price; }

	Item::Item() {};

	Item::Item(string label = "TBD", double price = NULL) :
		label(label), price(price)
	{}


